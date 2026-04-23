#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/DecalType.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_D27BF54F25500E5F;
namespace RPG::Client { class DecalPuzzle; }
namespace System { class String; }
namespace UnityEngine { class GameObject; }

#define RPG_CLIENT_FREEDECAL_DISPOSE_OFFSET UNITYSDK_OFFSET(0xA3CA840)
#define RPG_CLIENT_FREEDECAL_GET_ISFINISH_OFFSET UNITYSDK_OFFSET(0xA3CAF10)
#define RPG_CLIENT_FREEDECAL_GET_SPEED_OFFSET UNITYSDK_OFFSET(0xA3CAF30)
#define RPG_CLIENT_FREEDECAL_ISMOVED_OFFSET UNITYSDK_OFFSET(0xA3CAA10)
#define RPG_CLIENT_FREEDECAL_PLAYFADEIN_OFFSET UNITYSDK_OFFSET(0xA3CABD0)
#define RPG_CLIENT_FREEDECAL_SETCHECKLIST_OFFSET UNITYSDK_OFFSET(0xA3CA890)
#define RPG_CLIENT_FREEDECAL_SETFINISH_OFFSET UNITYSDK_OFFSET(0xA3CAD50)
#define RPG_CLIENT_FREEDECAL_SET_ISFINISH_OFFSET UNITYSDK_OFFSET(0xA3CAF00)
#define RPG_CLIENT_FREEDECAL_SET_SPEED_OFFSET UNITYSDK_OFFSET(0xA3CAF20)
#define RPG_CLIENT_FREEDECAL_UPDATE_OFFSET UNITYSDK_OFFSET(0xA3CA740)
#define RPG_CLIENT_FREEDECAL__CCTOR_OFFSET UNITYSDK_OFFSET(0xA3CAF80)
#define RPG_CLIENT_FREEDECAL__CTOR_OFFSET UNITYSDK_OFFSET(0xA3CAF40)

namespace RPG::Client
{
	inline static constexpr unsigned int FreeDecal_TypeDefinitionIndex = 63500;

	class FreeDecal : public ::UnityEngine::MonoBehaviour
	{
	public:
		static ::System::String** StaticGet_Field_5_10()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(FreeDecal_TypeDefinitionIndex)->GetStaticField(0x11880);
		}
		static ::System::String** StaticGet_Field_5_9()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(FreeDecal_TypeDefinitionIndex)->GetStaticField(0x11888);
		}
		::System::Boolean _IsFinish_k__BackingField; // 0x18
		::System::Single _Speed_k__BackingField; // 0x1C
		::RPG::GameCore::DecalType DecalType; // 0x20
		::System::UInt32 DecalID; // 0x24
		::System::Boolean IsInDecalPuzzleRegion; // 0x28
		::RPG::Client::DecalPuzzle* OwnerDecalPuzzle; // 0x30
		::Il2CppArray<::UnityEngine::GameObject*>* CheckList; // 0x38
		::Il2CppArray<::UnityEngine::Vector3>* OriginPosList; // 0x40
		::Class_1_D27BF54F25500E5F* Field_5_8; // 0x48

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FREEDECAL__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_FREEDECAL__CCTOR_OFFSET))();
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FREEDECAL_UPDATE_OFFSET))(this);
		}

		::System::Void SetCheckList(::Il2CppArray<::UnityEngine::GameObject*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::UnityEngine::GameObject*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FREEDECAL_SETCHECKLIST_OFFSET))(this, a1);
		}

		::System::Boolean IsMoved()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FREEDECAL_ISMOVED_OFFSET))(this);
		}

		::System::Void PlayFadeIn()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FREEDECAL_PLAYFADEIN_OFFSET))(this);
		}

		::System::Void SetFinish()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FREEDECAL_SETFINISH_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FREEDECAL_DISPOSE_OFFSET))(this);
		}

		::System::Void set_IsFinish(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_FREEDECAL_SET_ISFINISH_OFFSET))(this, value);
		}

		::System::Boolean get_IsFinish()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FREEDECAL_GET_ISFINISH_OFFSET))(this);
		}

		::System::Void set_Speed(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_FREEDECAL_SET_SPEED_OFFSET))(this, value);
		}

		::System::Single get_Speed()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FREEDECAL_GET_SPEED_OFFSET))(this);
		}
	};
}

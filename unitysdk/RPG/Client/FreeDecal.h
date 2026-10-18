#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/DecalType.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_5DF5F62C68EF718F;
namespace RPG::Client { class DecalPuzzle; }
namespace System { class String; }
namespace UnityEngine { class GameObject; }

#define RPG_CLIENT_FREEDECAL_DISPOSE_OFFSET UNITYSDK_OFFSET(0xD04DAF0)
#define RPG_CLIENT_FREEDECAL_GET_ISFINISH_OFFSET UNITYSDK_OFFSET(0xD04E1E0)
#define RPG_CLIENT_FREEDECAL_GET_SPEED_OFFSET UNITYSDK_OFFSET(0xD04E200)
#define RPG_CLIENT_FREEDECAL_ISMOVED_OFFSET UNITYSDK_OFFSET(0xD04DCA0)
#define RPG_CLIENT_FREEDECAL_PLAYFADEIN_OFFSET UNITYSDK_OFFSET(0xD04DE40)
#define RPG_CLIENT_FREEDECAL_SETCHECKLIST_OFFSET UNITYSDK_OFFSET(0xD04DB40)
#define RPG_CLIENT_FREEDECAL_SETFINISH_OFFSET UNITYSDK_OFFSET(0xD04DFC0)
#define RPG_CLIENT_FREEDECAL_SET_ISFINISH_OFFSET UNITYSDK_OFFSET(0xD04E1D0)
#define RPG_CLIENT_FREEDECAL_SET_SPEED_OFFSET UNITYSDK_OFFSET(0xD04E1F0)
#define RPG_CLIENT_FREEDECAL_UPDATE_OFFSET UNITYSDK_OFFSET(0xD04D990)
#define RPG_CLIENT_FREEDECAL__CCTOR_OFFSET UNITYSDK_OFFSET(0xD04E2B0)
#define RPG_CLIENT_FREEDECAL__CTOR_OFFSET UNITYSDK_OFFSET(0xD04E210)

namespace RPG::Client
{
	inline static constexpr unsigned int FreeDecal_TypeDefinitionIndex = 68863;

	class FreeDecal : public ::UnityEngine::MonoBehaviour
	{
	public:
		static ::System::String** StaticGet_EHJFHMEKFDI()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(FreeDecal_TypeDefinitionIndex)->GetStaticField(0x5DF20);
		}
		static ::System::String** StaticGet_INHDCOPAFPF()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(FreeDecal_TypeDefinitionIndex)->GetStaticField(0x5DF28);
		}
		::System::Boolean _IsFinish_k__BackingField; // 0x18
		::System::Single _Speed_k__BackingField; // 0x1C
		::RPG::GameCore::DecalType DecalType; // 0x20
		::System::UInt32 DecalID; // 0x24
		::System::Boolean IsInDecalPuzzleRegion; // 0x28
		::RPG::Client::DecalPuzzle* OwnerDecalPuzzle; // 0x30
		::Il2CppArray<::UnityEngine::GameObject*>* CheckList; // 0x38
		::Il2CppArray<::UnityEngine::Vector3>* OriginPosList; // 0x40
		::Class_1_5DF5F62C68EF718F* DHEHFOHPELI; // 0x48

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

		::System::Void set_IsFinish(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_FREEDECAL_SET_ISFINISH_OFFSET))(this, a1);
		}

		::System::Boolean get_IsFinish()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FREEDECAL_GET_ISFINISH_OFFSET))(this);
		}

		::System::Void set_Speed(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_FREEDECAL_SET_SPEED_OFFSET))(this, a1);
		}

		::System::Single get_Speed()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FREEDECAL_GET_SPEED_OFFSET))(this);
		}
	};
}

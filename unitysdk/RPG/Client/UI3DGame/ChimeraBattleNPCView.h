#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace RPG::Client::UI3DGame { class ChimeraBattleNPCView_Class_1_F16F4B18C8432A77; }
namespace System { class String; }
namespace UnityEngine { class Animator; }

#define RPG_CLIENT_UI3DGAME_CHIMERABATTLENPCVIEW_DITHER_OFFSET UNITYSDK_OFFSET(0xB3AE4E0)
#define RPG_CLIENT_UI3DGAME_CHIMERABATTLENPCVIEW_LEAVE_OFFSET UNITYSDK_OFFSET(0xB3AE0B0)
#define RPG_CLIENT_UI3DGAME_CHIMERABATTLENPCVIEW_ONENABLE_OFFSET UNITYSDK_OFFSET(0xB3AE5E0)
#define RPG_CLIENT_UI3DGAME_CHIMERABATTLENPCVIEW_UPDATE_OFFSET UNITYSDK_OFFSET(0xB3AE6E0)
#define RPG_CLIENT_UI3DGAME_CHIMERABATTLENPCVIEW__CCTOR_OFFSET UNITYSDK_OFFSET(0xB3AE870)
#define RPG_CLIENT_UI3DGAME_CHIMERABATTLENPCVIEW__CTOR_OFFSET UNITYSDK_OFFSET(0xB3AE860)

namespace RPG::Client::UI3DGame
{
	inline static constexpr unsigned int ChimeraBattleNPCView_TypeDefinitionIndex = 69715;

	class ChimeraBattleNPCView : public ::UnityEngine::MonoBehaviour
	{
	public:
		static ::System::Int32* StaticGet_Field_5_2()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ChimeraBattleNPCView_TypeDefinitionIndex)->GetStaticField(0xAA10);
		}
		::UnityEngine::Animator* Animator; // 0x18
		::RPG::Client::UI3DGame::ChimeraBattleNPCView_Class_1_F16F4B18C8432A77* Field_5_1; // 0x20
		::System::String* TurnAnimName; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UI3DGAME_CHIMERABATTLENPCVIEW__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_UI3DGAME_CHIMERABATTLENPCVIEW__CCTOR_OFFSET))();
		}

		::System::Void Leave()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UI3DGAME_CHIMERABATTLENPCVIEW_LEAVE_OFFSET))(this);
		}

		::System::Void Dither()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UI3DGAME_CHIMERABATTLENPCVIEW_DITHER_OFFSET))(this);
		}

		::System::Void OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UI3DGAME_CHIMERABATTLENPCVIEW_ONENABLE_OFFSET))(this);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UI3DGAME_CHIMERABATTLENPCVIEW_UPDATE_OFFSET))(this);
		}
	};
}

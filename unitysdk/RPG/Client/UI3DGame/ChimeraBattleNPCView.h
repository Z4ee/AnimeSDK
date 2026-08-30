#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace RPG::Client::UI3DGame { class ChimeraBattleNPCView_Class_1_F16F4B18C8432A77; }
namespace System { class String; }
namespace UnityEngine { class Animator; }

#define RPG_CLIENT_UI3DGAME_CHIMERABATTLENPCVIEW_DITHER_OFFSET UNITYSDK_OFFSET(0x1B12D530)
#define RPG_CLIENT_UI3DGAME_CHIMERABATTLENPCVIEW_LEAVE_OFFSET UNITYSDK_OFFSET(0x1B12D0E0)
#define RPG_CLIENT_UI3DGAME_CHIMERABATTLENPCVIEW_ONENABLE_OFFSET UNITYSDK_OFFSET(0x1B12D630)
#define RPG_CLIENT_UI3DGAME_CHIMERABATTLENPCVIEW_UPDATE_OFFSET UNITYSDK_OFFSET(0x1B12D730)
#define RPG_CLIENT_UI3DGAME_CHIMERABATTLENPCVIEW__CCTOR_OFFSET UNITYSDK_OFFSET(0x1B12D8C0)
#define RPG_CLIENT_UI3DGAME_CHIMERABATTLENPCVIEW__CTOR_OFFSET UNITYSDK_OFFSET(0x1B12D8B0)

namespace RPG::Client::UI3DGame
{
	inline static constexpr unsigned int ChimeraBattleNPCView_TypeDefinitionIndex = 75357;

	class ChimeraBattleNPCView : public ::UnityEngine::MonoBehaviour
	{
	public:
		static ::System::Int32* StaticGet_KEBGEGKNBHP()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ChimeraBattleNPCView_TypeDefinitionIndex)->GetStaticField(0x133E0);
		}
		::UnityEngine::Animator* Animator; // 0x18
		::RPG::Client::UI3DGame::ChimeraBattleNPCView_Class_1_F16F4B18C8432A77* MBOEDFCNCJF; // 0x20
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

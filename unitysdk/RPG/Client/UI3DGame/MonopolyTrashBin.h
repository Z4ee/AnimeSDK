#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/UI3DGame/MonoUI3DGameView.h"
#include "unitysdk/RPG/Client/UI3DGame/MonopolyTrashBin_TrashBinState.h"

namespace RPG::Client { class RPGAnimationEvent; }
namespace RPG::GameCore { class MonopolyClickContentConfigRow; }
namespace UnityEngine { class Animator; }

#define RPG_CLIENT_UI3DGAME_MONOPOLYTRASHBIN_CLICK_OFFSET UNITYSDK_OFFSET(0x16FF5A80)
#define RPG_CLIENT_UI3DGAME_MONOPOLYTRASHBIN_METHOD_7_367B9590522079D1_OFFSET UNITYSDK_OFFSET(0x16FF5CE0)
#define RPG_CLIENT_UI3DGAME_MONOPOLYTRASHBIN_METHOD_7_7C051F64D5D93174_OFFSET UNITYSDK_OFFSET(0x16FF6050)
#define RPG_CLIENT_UI3DGAME_MONOPOLYTRASHBIN_METHOD_7_B1936CE4DA97AA45_OFFSET UNITYSDK_OFFSET(0x16FF5F90)
#define RPG_CLIENT_UI3DGAME_MONOPOLYTRASHBIN_PLAYFINALANIM_OFFSET UNITYSDK_OFFSET(0x16FF60B0)
#define RPG_CLIENT_UI3DGAME_MONOPOLYTRASHBIN_START_OFFSET UNITYSDK_OFFSET(0x16FF6290)
#define RPG_CLIENT_UI3DGAME_MONOPOLYTRASHBIN__CCTOR_OFFSET UNITYSDK_OFFSET(0x16FF6330)
#define RPG_CLIENT_UI3DGAME_MONOPOLYTRASHBIN__CTOR_OFFSET UNITYSDK_OFFSET(0x16FF6320)

namespace RPG::Client::UI3DGame
{
	inline static constexpr unsigned int MonopolyTrashBin_TypeDefinitionIndex = 72092;

	class MonopolyTrashBin : public ::RPG::Client::UI3DGame::MonoUI3DGameView
	{
	public:
		static ::System::Int32* StaticGet_Field_7_0()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(MonopolyTrashBin_TypeDefinitionIndex)->GetStaticField(0xD340);
		}
		static ::System::Int32* StaticGet_Field_7_1()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(MonopolyTrashBin_TypeDefinitionIndex)->GetStaticField(0xD344);
		}
		::System::UInt32 Field_7_2; // 0x30
		::System::UInt32 Field_7_3; // 0x34
		::System::UInt32 Field_7_4; // 0x38
		::System::UInt32 Field_7_5; // 0x3C
		::RPG::Client::UI3DGame::MonopolyTrashBin_TrashBinState Field_7_6; // 0x40
		::UnityEngine::Animator* AnimController; // 0x48
		::RPG::Client::RPGAnimationEvent* RPGAnimEvent; // 0x50

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UI3DGAME_MONOPOLYTRASHBIN__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_UI3DGAME_MONOPOLYTRASHBIN__CCTOR_OFFSET))();
		}

		::System::Void Click()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UI3DGAME_MONOPOLYTRASHBIN_CLICK_OFFSET))(this);
		}

		::System::Void Method_7_367B9590522079D1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UI3DGAME_MONOPOLYTRASHBIN_METHOD_7_367B9590522079D1_OFFSET))(this);
		}

		::System::Void Method_7_B1936CE4DA97AA45()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UI3DGAME_MONOPOLYTRASHBIN_METHOD_7_B1936CE4DA97AA45_OFFSET))(this);
		}

		::System::Void PlayFinalAnim()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UI3DGAME_MONOPOLYTRASHBIN_PLAYFINALANIM_OFFSET))(this);
		}

		::System::Void Start()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UI3DGAME_MONOPOLYTRASHBIN_START_OFFSET))(this);
		}

		::RPG::GameCore::MonopolyClickContentConfigRow* Method_7_7C051F64D5D93174()
		{
			return ((::RPG::GameCore::MonopolyClickContentConfigRow*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UI3DGAME_MONOPOLYTRASHBIN_METHOD_7_7C051F64D5D93174_OFFSET))(this);
		}
	};
}

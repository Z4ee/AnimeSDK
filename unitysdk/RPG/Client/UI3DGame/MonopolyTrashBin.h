#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/UI3DGame/MonoUI3DGameView.h"
#include "unitysdk/RPG/Client/UI3DGame/MonopolyTrashBin_TrashBinState.h"

namespace RPG::Client { class RPGAnimationEvent; }
namespace RPG::GameCore { class MonopolyClickContentConfigRow; }
namespace UnityEngine { class Animator; }

#define RPG_CLIENT_UI3DGAME_MONOPOLYTRASHBIN_CLICK_OFFSET UNITYSDK_OFFSET(0xB3B6FA0)
#define RPG_CLIENT_UI3DGAME_MONOPOLYTRASHBIN_METHOD_7_367B9590522079D1_OFFSET UNITYSDK_OFFSET(0xB3B7170)
#define RPG_CLIENT_UI3DGAME_MONOPOLYTRASHBIN_METHOD_7_B1936CE4DA97AA45_OFFSET UNITYSDK_OFFSET(0xB3B7420)
#define RPG_CLIENT_UI3DGAME_MONOPOLYTRASHBIN_METHOD_7_FA031B982C62201B_OFFSET UNITYSDK_OFFSET(0xB3B74E0)
#define RPG_CLIENT_UI3DGAME_MONOPOLYTRASHBIN_PLAYFINALANIM_OFFSET UNITYSDK_OFFSET(0xB3B7540)
#define RPG_CLIENT_UI3DGAME_MONOPOLYTRASHBIN_START_OFFSET UNITYSDK_OFFSET(0xB3B7720)
#define RPG_CLIENT_UI3DGAME_MONOPOLYTRASHBIN__CCTOR_OFFSET UNITYSDK_OFFSET(0xB3B77C0)
#define RPG_CLIENT_UI3DGAME_MONOPOLYTRASHBIN__CTOR_OFFSET UNITYSDK_OFFSET(0xB3B77B0)

namespace RPG::Client::UI3DGame
{
	inline static constexpr unsigned int MonopolyTrashBin_TypeDefinitionIndex = 69757;

	class MonopolyTrashBin : public ::RPG::Client::UI3DGame::MonoUI3DGameView
	{
	public:
		static ::System::Int32* StaticGet_Field_7_8()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(MonopolyTrashBin_TypeDefinitionIndex)->GetStaticField(0xAC20);
		}
		static ::System::Int32* StaticGet_Field_7_7()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(MonopolyTrashBin_TypeDefinitionIndex)->GetStaticField(0xAC24);
		}
		::System::UInt32 Field_7_0; // 0x30
		::System::UInt32 Field_7_1; // 0x34
		::System::UInt32 Field_7_2; // 0x38
		::System::UInt32 Field_7_3; // 0x3C
		::RPG::Client::UI3DGame::MonopolyTrashBin_TrashBinState Field_7_4; // 0x40
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

		::RPG::GameCore::MonopolyClickContentConfigRow* Method_7_FA031B982C62201B()
		{
			return ((::RPG::GameCore::MonopolyClickContentConfigRow*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UI3DGAME_MONOPOLYTRASHBIN_METHOD_7_FA031B982C62201B_OFFSET))(this);
		}
	};
}

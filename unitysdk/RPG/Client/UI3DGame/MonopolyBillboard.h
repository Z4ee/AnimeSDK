#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/UI3DGame/MonoUI3DGameView.h"

namespace RPG::Client { class RPGAnimationEvent; }
namespace RPG::GameCore { class MonopolyClickContentConfigRow; }
namespace UnityEngine { class Animator; }

#define RPG_CLIENT_UI3DGAME_MONOPOLYBILLBOARD_CLICK_OFFSET UNITYSDK_OFFSET(0xE31C030)
#define RPG_CLIENT_UI3DGAME_MONOPOLYBILLBOARD_METHOD_7_64501B5CB67A94C3_OFFSET UNITYSDK_OFFSET(0xE31C350)
#define RPG_CLIENT_UI3DGAME_MONOPOLYBILLBOARD_METHOD_7_7C051F64D5D93174_OFFSET UNITYSDK_OFFSET(0xE31C2F0)
#define RPG_CLIENT_UI3DGAME_MONOPOLYBILLBOARD_PLAYFINALANIM_OFFSET UNITYSDK_OFFSET(0xE31C490)
#define RPG_CLIENT_UI3DGAME_MONOPOLYBILLBOARD_START_OFFSET UNITYSDK_OFFSET(0xE31BF80)
#define RPG_CLIENT_UI3DGAME_MONOPOLYBILLBOARD__CCTOR_OFFSET UNITYSDK_OFFSET(0xE31C540)
#define RPG_CLIENT_UI3DGAME_MONOPOLYBILLBOARD__CTOR_OFFSET UNITYSDK_OFFSET(0xE31C530)

namespace RPG::Client::UI3DGame
{
	inline static constexpr unsigned int MonopolyBillboard_TypeDefinitionIndex = 75396;

	class MonopolyBillboard : public ::RPG::Client::UI3DGame::MonoUI3DGameView
	{
	public:
		static ::System::Int32* StaticGet_FACBDJMIOCH()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(MonopolyBillboard_TypeDefinitionIndex)->GetStaticField(0x13D10);
		}
		static ::System::Int32* StaticGet_MEPFOEEGBEA()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(MonopolyBillboard_TypeDefinitionIndex)->GetStaticField(0x13D14);
		}
		::UnityEngine::Animator* AnimController; // 0x30
		::RPG::Client::RPGAnimationEvent* RPGAnimEvent; // 0x38
		::System::UInt32 AKKAAOGBDNL; // 0x40
		::System::UInt32 JBMOIEJNEFD; // 0x44
		::System::UInt32 HKAHFHHICEN; // 0x48
		::System::UInt32 IHHNMMBAAGN; // 0x4C
		::System::Boolean BPPKFLKGMIN; // 0x50

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UI3DGAME_MONOPOLYBILLBOARD__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_UI3DGAME_MONOPOLYBILLBOARD__CCTOR_OFFSET))();
		}

		::System::Void Start()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UI3DGAME_MONOPOLYBILLBOARD_START_OFFSET))(this);
		}

		::System::Void Click()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UI3DGAME_MONOPOLYBILLBOARD_CLICK_OFFSET))(this);
		}

		::System::Void Method_7_64501B5CB67A94C3()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UI3DGAME_MONOPOLYBILLBOARD_METHOD_7_64501B5CB67A94C3_OFFSET))(this);
		}

		::System::Void PlayFinalAnim()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UI3DGAME_MONOPOLYBILLBOARD_PLAYFINALANIM_OFFSET))(this);
		}

		::RPG::GameCore::MonopolyClickContentConfigRow* Method_7_7C051F64D5D93174()
		{
			return ((::RPG::GameCore::MonopolyClickContentConfigRow*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UI3DGAME_MONOPOLYBILLBOARD_METHOD_7_7C051F64D5D93174_OFFSET))(this);
		}
	};
}

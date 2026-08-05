#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/Threading/CancellationToken.h"

class Class_2_67F3C5E647F33C2D;
namespace System { class Action; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System { template <typename T> class Action_1; }

#define MOLEMOLE_UIMAINCITYTIMETIPSPOPWINDOWCONTROLLER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x18A27760)
#define MOLEMOLE_UIMAINCITYTIMETIPSPOPWINDOWCONTROLLER___C__CTOR_OFFSET UNITYSDK_OFFSET(0x18A277A0)
#define MOLEMOLE_UIMAINCITYTIMETIPSPOPWINDOWCONTROLLER___C__ONMODTIMERSP_B__16_0_OFFSET UNITYSDK_OFFSET(0x18A277B0)
#define MOLEMOLE_UIMAINCITYTIMETIPSPOPWINDOWCONTROLLER___C__ONMODTIMERSP_B__16_1_OFFSET UNITYSDK_OFFSET(0x18A278B0)
#define MOLEMOLE_UIMAINCITYTIMETIPSPOPWINDOWCONTROLLER___C__ONMODTIMERSP_B__16_2_OFFSET UNITYSDK_OFFSET(0x18A27A60)

namespace MoleMole
{
	inline static constexpr unsigned int UIMainCityTimeTipsPopWindowController___c_TypeDefinitionIndex = 65803;

	class UIMainCityTimeTipsPopWindowController___c : public ::System::Object
	{
	public:
		static ::System::Action_1<::Class_2_67F3C5E647F33C2D*>** StaticGet___9__16_0()
		{
			return (::System::Action_1<::Class_2_67F3C5E647F33C2D*>**)Il2CppClass::FromTypeDefinitionIndex(UIMainCityTimeTipsPopWindowController___c_TypeDefinitionIndex)->GetStaticField(0x3FF50);
		}
		static ::MoleMole::UIMainCityTimeTipsPopWindowController___c** StaticGet___9()
		{
			return (::MoleMole::UIMainCityTimeTipsPopWindowController___c**)Il2CppClass::FromTypeDefinitionIndex(UIMainCityTimeTipsPopWindowController___c_TypeDefinitionIndex)->GetStaticField(0x3FF58);
		}
		static ::System::Action** StaticGet___9__16_1()
		{
			return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(UIMainCityTimeTipsPopWindowController___c_TypeDefinitionIndex)->GetStaticField(0x3FF60);
		}
		static ::System::Func_2<::System::Threading::CancellationToken, ::Cysharp::Threading::Tasks::UniTask>** StaticGet___9__16_2()
		{
			return (::System::Func_2<::System::Threading::CancellationToken, ::Cysharp::Threading::Tasks::UniTask>**)Il2CppClass::FromTypeDefinitionIndex(UIMainCityTimeTipsPopWindowController___c_TypeDefinitionIndex)->GetStaticField(0x3FF68);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYTIMETIPSPOPWINDOWCONTROLLER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYTIMETIPSPOPWINDOWCONTROLLER___C__CTOR_OFFSET))(this);
		}

		::System::Void _OnModTimeRsp_b__16_0(::Class_2_67F3C5E647F33C2D* teleportByTransition)
		{
			return ((::System::Void(*)(::PVOID, ::Class_2_67F3C5E647F33C2D*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYTIMETIPSPOPWINDOWCONTROLLER___C__ONMODTIMERSP_B__16_0_OFFSET))(this, teleportByTransition);
		}

		::System::Void _OnModTimeRsp_b__16_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYTIMETIPSPOPWINDOWCONTROLLER___C__ONMODTIMERSP_B__16_1_OFFSET))(this);
		}

		::Cysharp::Threading::Tasks::UniTask _OnModTimeRsp_b__16_2(::System::Threading::CancellationToken token)
		{
			return ((::Cysharp::Threading::Tasks::UniTask(*)(::PVOID, ::System::Threading::CancellationToken))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYTIMETIPSPOPWINDOWCONTROLLER___C__ONMODTIMERSP_B__16_2_OFFSET))(this, token);
		}
	};
}

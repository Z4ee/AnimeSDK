#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/UI3DControllerBase.h"

class Class_0_16E4307DCC419505_339;
namespace System { class Object; }

#define SOFA_BASESOFAUI3DWINDOW_EXIT_OFFSET UNITYSDK_OFFSET(0xE91DE70)
#define SOFA_BASESOFAUI3DWINDOW_GET_DEPENDENCYRESOLVER_OFFSET UNITYSDK_OFFSET(0xE91DDC0)
#define SOFA_BASESOFAUI3DWINDOW_SET_DEPENDENCYRESOLVER_OFFSET UNITYSDK_OFFSET(0xE91DDD0)
#define SOFA_BASESOFAUI3DWINDOW_SHOW_OFFSET UNITYSDK_OFFSET(0xE91DDE0)
#define SOFA_BASESOFAUI3DWINDOW__CTOR_OFFSET UNITYSDK_OFFSET(0xE91DF00)

namespace Sofa
{
	inline static constexpr unsigned int BaseSofaUI3DWindow_TypeDefinitionIndex = 50116;

	class BaseSofaUI3DWindow : public ::RPG::Client::UI3DControllerBase
	{
	public:
		::Class_0_16E4307DCC419505_339* _DependencyResolver_k__BackingField; // 0x70

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SOFA_BASESOFAUI3DWINDOW__CTOR_OFFSET))(this);
		}

		::Class_0_16E4307DCC419505_339* get_DependencyResolver()
		{
			return ((::Class_0_16E4307DCC419505_339*(*)(::PVOID))((::PBYTE)hIl2Cpp + SOFA_BASESOFAUI3DWINDOW_GET_DEPENDENCYRESOLVER_OFFSET))(this);
		}

		::System::Void set_DependencyResolver(::Class_0_16E4307DCC419505_339* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_339*))((::PBYTE)hIl2Cpp + SOFA_BASESOFAUI3DWINDOW_SET_DEPENDENCYRESOLVER_OFFSET))(this, a1);
		}

		::System::Void Show()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SOFA_BASESOFAUI3DWINDOW_SHOW_OFFSET))(this);
		}

		::System::Void Exit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SOFA_BASESOFAUI3DWINDOW_EXIT_OFFSET))(this);
		}
	};
}

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sofa/BaseSofaControl.h"

namespace RPG::Client { class MonoSliderAnim; }
namespace RPG::Client { class PrefabLoadMeta; }
namespace RPG::Client::PixAir { class PixAirGameProgressNodeControl; }
namespace RPG::Client::PixAir { class PixAirGameProgressViewModel; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine::UI { class Slider; }

#define RPG_CLIENT_PIXAIR_PIXAIRGAMEPROGRESSCONTROL_GET__VIEWMODEL_OFFSET UNITYSDK_OFFSET(0xC3CDF70)
#define RPG_CLIENT_PIXAIR_PIXAIRGAMEPROGRESSCONTROL__CREATENODEITEMCONTROLS_OFFSET UNITYSDK_OFFSET(0xC3CE150)
#define RPG_CLIENT_PIXAIR_PIXAIRGAMEPROGRESSCONTROL__CTOR_OFFSET UNITYSDK_OFFSET(0xC3CE590)
#define RPG_CLIENT_PIXAIR_PIXAIRGAMEPROGRESSCONTROL__DESTROYNODEITEMCONTROLS_OFFSET UNITYSDK_OFFSET(0xC3CDFE0)
#define RPG_CLIENT_PIXAIR_PIXAIRGAMEPROGRESSCONTROL__ONBINDVIEWMODEL_OFFSET UNITYSDK_OFFSET(0xC3CDE00)
#define RPG_CLIENT_PIXAIR_PIXAIRGAMEPROGRESSCONTROL__ONINITIALIZECOMPONENT_OFFSET UNITYSDK_OFFSET(0xC3CDC80)
#define RPG_CLIENT_PIXAIR_PIXAIRGAMEPROGRESSCONTROL___IFIXBASEPROXY__ONBINDVIEWMODEL_OFFSET UNITYSDK_OFFSET(0xC3CE620)
#define RPG_CLIENT_PIXAIR_PIXAIRGAMEPROGRESSCONTROL___IFIXBASEPROXY__ONINITIALIZECOMPONENT_OFFSET UNITYSDK_OFFSET(0xC3CE5C0)

namespace RPG::Client::PixAir
{
	inline static constexpr unsigned int PixAirGameProgressControl_TypeDefinitionIndex = 73556;

	class PixAirGameProgressControl : public ::Sofa::BaseSofaControl
	{
	public:
		::UnityEngine::UI::Slider* _Slider; // 0x38
		::RPG::Client::MonoSliderAnim* _MonoSliderAnim; // 0x40
		::RPG::Client::PrefabLoadMeta* _PrefabLoadMeta; // 0x48
		::System::Collections::Generic::List_1<::RPG::Client::PixAir::PixAirGameProgressNodeControl*>* _NodeControls; // 0x50

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIRGAMEPROGRESSCONTROL__CTOR_OFFSET))(this);
		}

		::System::Void _OnInitializeComponent()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIRGAMEPROGRESSCONTROL__ONINITIALIZECOMPONENT_OFFSET))(this);
		}

		::System::Void _OnBindViewModel()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIRGAMEPROGRESSCONTROL__ONBINDVIEWMODEL_OFFSET))(this);
		}

		::System::Void _CreateNodeItemControls()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIRGAMEPROGRESSCONTROL__CREATENODEITEMCONTROLS_OFFSET))(this);
		}

		::System::Void _DestroyNodeItemControls()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIRGAMEPROGRESSCONTROL__DESTROYNODEITEMCONTROLS_OFFSET))(this);
		}

		::RPG::Client::PixAir::PixAirGameProgressViewModel* get__ViewModel()
		{
			return ((::RPG::Client::PixAir::PixAirGameProgressViewModel*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIRGAMEPROGRESSCONTROL_GET__VIEWMODEL_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy__OnInitializeComponent()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIRGAMEPROGRESSCONTROL___IFIXBASEPROXY__ONINITIALIZECOMPONENT_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy__OnBindViewModel()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIRGAMEPROGRESSCONTROL___IFIXBASEPROXY__ONBINDVIEWMODEL_OFFSET))(this);
		}
	};
}

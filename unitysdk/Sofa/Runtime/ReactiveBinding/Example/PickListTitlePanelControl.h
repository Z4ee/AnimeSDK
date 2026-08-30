#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sofa/BaseSofaControl_1.h"

class Class_1_CBA7B3188733D983;
namespace RPG::Client { class LocalizedText; }
template <typename T> class Class_1_D90286A3143EECEC;

#define SOFA_RUNTIME_REACTIVEBINDING_EXAMPLE_PICKLISTTITLEPANELCONTROL_AWAKE_OFFSET UNITYSDK_OFFSET(0x197D8F30)
#define SOFA_RUNTIME_REACTIVEBINDING_EXAMPLE_PICKLISTTITLEPANELCONTROL__BINDING_OFFSET UNITYSDK_OFFSET(0x197D8FB0)
#define SOFA_RUNTIME_REACTIVEBINDING_EXAMPLE_PICKLISTTITLEPANELCONTROL__CTOR_OFFSET UNITYSDK_OFFSET(0x197D9220)

namespace Sofa::Runtime::ReactiveBinding::Example
{
	inline static constexpr unsigned int PickListTitlePanelControl_TypeDefinitionIndex = 50395;

	class PickListTitlePanelControl : public ::Sofa::BaseSofaControl_1<::Class_1_CBA7B3188733D983*>
	{
	public:
		::RPG::Client::LocalizedText* _Title; // 0x58

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SOFA_RUNTIME_REACTIVEBINDING_EXAMPLE_PICKLISTTITLEPANELCONTROL__CTOR_OFFSET))(this);
		}

		::System::Void Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SOFA_RUNTIME_REACTIVEBINDING_EXAMPLE_PICKLISTTITLEPANELCONTROL_AWAKE_OFFSET))(this);
		}

		::System::Void _Binding(::Class_1_D90286A3143EECEC<::Class_1_CBA7B3188733D983*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_D90286A3143EECEC<::Class_1_CBA7B3188733D983*>*))((::PBYTE)hIl2Cpp + SOFA_RUNTIME_REACTIVEBINDING_EXAMPLE_PICKLISTTITLEPANELCONTROL__BINDING_OFFSET))(this, a1);
		}
	};
}

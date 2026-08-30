#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sofa/BaseSofaControl_1.h"

class Class_1_F9FBCC956DFCF137_3;
namespace Sofa::Runtime::ReactiveBinding::Example { class ChildDetailControl; }
template <typename T> class Class_1_D90286A3143EECEC;

#define SOFA_RUNTIME_REACTIVEBINDING_EXAMPLE_PARENTPANELCONTROL_AWAKE_OFFSET UNITYSDK_OFFSET(0xE928A20)
#define SOFA_RUNTIME_REACTIVEBINDING_EXAMPLE_PARENTPANELCONTROL_START_OFFSET UNITYSDK_OFFSET(0xE928AA0)
#define SOFA_RUNTIME_REACTIVEBINDING_EXAMPLE_PARENTPANELCONTROL__BINDING_OFFSET UNITYSDK_OFFSET(0xE928B60)
#define SOFA_RUNTIME_REACTIVEBINDING_EXAMPLE_PARENTPANELCONTROL__CTOR_OFFSET UNITYSDK_OFFSET(0xE928DD0)

namespace Sofa::Runtime::ReactiveBinding::Example
{
	inline static constexpr unsigned int ParentPanelControl_TypeDefinitionIndex = 50386;

	class ParentPanelControl : public ::Sofa::BaseSofaControl_1<::Class_1_F9FBCC956DFCF137_3*>
	{
	public:
		::Sofa::Runtime::ReactiveBinding::Example::ChildDetailControl* _Detail; // 0x58

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SOFA_RUNTIME_REACTIVEBINDING_EXAMPLE_PARENTPANELCONTROL__CTOR_OFFSET))(this);
		}

		::System::Void Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SOFA_RUNTIME_REACTIVEBINDING_EXAMPLE_PARENTPANELCONTROL_AWAKE_OFFSET))(this);
		}

		::System::Void Start()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SOFA_RUNTIME_REACTIVEBINDING_EXAMPLE_PARENTPANELCONTROL_START_OFFSET))(this);
		}

		::System::Void _Binding(::Class_1_D90286A3143EECEC<::Class_1_F9FBCC956DFCF137_3*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_D90286A3143EECEC<::Class_1_F9FBCC956DFCF137_3*>*))((::PBYTE)hIl2Cpp + SOFA_RUNTIME_REACTIVEBINDING_EXAMPLE_PARENTPANELCONTROL__BINDING_OFFSET))(this, a1);
		}
	};
}

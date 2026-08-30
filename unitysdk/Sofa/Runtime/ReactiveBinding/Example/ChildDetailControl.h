#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sofa/BaseSofaControl_1.h"

class Class_1_BEC5D8EEC9856D94;
namespace RPG::Client { class LocalizedText; }
template <typename T> class Class_1_D90286A3143EECEC;

#define SOFA_RUNTIME_REACTIVEBINDING_EXAMPLE_CHILDDETAILCONTROL_AWAKE_OFFSET UNITYSDK_OFFSET(0x197D6F90)
#define SOFA_RUNTIME_REACTIVEBINDING_EXAMPLE_CHILDDETAILCONTROL__BINDING_OFFSET UNITYSDK_OFFSET(0x197D7010)
#define SOFA_RUNTIME_REACTIVEBINDING_EXAMPLE_CHILDDETAILCONTROL__CTOR_OFFSET UNITYSDK_OFFSET(0x197D7280)

namespace Sofa::Runtime::ReactiveBinding::Example
{
	inline static constexpr unsigned int ChildDetailControl_TypeDefinitionIndex = 50384;

	class ChildDetailControl : public ::Sofa::BaseSofaControl_1<::Class_1_BEC5D8EEC9856D94*>
	{
	public:
		::RPG::Client::LocalizedText* _Title; // 0x58

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SOFA_RUNTIME_REACTIVEBINDING_EXAMPLE_CHILDDETAILCONTROL__CTOR_OFFSET))(this);
		}

		::System::Void Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SOFA_RUNTIME_REACTIVEBINDING_EXAMPLE_CHILDDETAILCONTROL_AWAKE_OFFSET))(this);
		}

		::System::Void _Binding(::Class_1_D90286A3143EECEC<::Class_1_BEC5D8EEC9856D94*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_D90286A3143EECEC<::Class_1_BEC5D8EEC9856D94*>*))((::PBYTE)hIl2Cpp + SOFA_RUNTIME_REACTIVEBINDING_EXAMPLE_CHILDDETAILCONTROL__BINDING_OFFSET))(this, a1);
		}
	};
}

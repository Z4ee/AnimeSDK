#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }
namespace System { template <typename T> class Action_1; }

#define CLASS_1_60444A43F7337EBF_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1EC061E0)
#define CLASS_1_60444A43F7337EBF_METHOD_1_194C0AD32C94B856_OFFSET UNITYSDK_OFFSET(0x1EC062F0)
#define CLASS_1_60444A43F7337EBF_METHOD_1_1D4018D4200358D0_OFFSET UNITYSDK_OFFSET(0x1EC06170)
#define CLASS_1_60444A43F7337EBF_METHOD_1_7651E579BC11E9E1_OFFSET UNITYSDK_OFFSET(0x1EC06230)
#define CLASS_1_60444A43F7337EBF_METHOD_1_C50A2293958CA940_OFFSET UNITYSDK_OFFSET(0x1EC063F0)
#define CLASS_1_60444A43F7337EBF_METHOD_1_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x1EC061D0)
#define CLASS_1_60444A43F7337EBF__CTOR_OFFSET UNITYSDK_OFFSET(0x1EC065E0)

inline static constexpr unsigned int Class_1_60444A43F7337EBF_TypeDefinitionIndex = 35297;

class Class_1_60444A43F7337EBF : public ::System::Object
{
public:
	::System::Action* PCHDHLPOKEO; // 0x10
	::System::Action* NMBMEBMCJGE; // 0x18
	::System::UInt32 PBHMCJHMKOP; // 0x20
	::System::UInt32 GGCMLBGELPH; // 0x24
	::System::Int32 JHINADOJELF; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_60444A43F7337EBF__CTOR_OFFSET))(this);
	}

	::System::Boolean Method_1_1D4018D4200358D0()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_60444A43F7337EBF_METHOD_1_1D4018D4200358D0_OFFSET))(this);
	}

	::System::Boolean Method_1_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_60444A43F7337EBF_METHOD_1_F0088C88851A7DFB_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_60444A43F7337EBF_DISPOSE_OFFSET))(this);
	}

	::System::Action* Method_1_7651E579BC11E9E1()
	{
		return ((::System::Action*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_60444A43F7337EBF_METHOD_1_7651E579BC11E9E1_OFFSET))(this);
	}

	::System::Action* Method_1_194C0AD32C94B856(::System::Action* a1)
	{
		return ((::System::Action*(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_60444A43F7337EBF_METHOD_1_194C0AD32C94B856_OFFSET))(this, a1);
	}

	::System::Void Method_1_C50A2293958CA940(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_60444A43F7337EBF_METHOD_1_C50A2293958CA940_OFFSET))(this, a1);
	}
};

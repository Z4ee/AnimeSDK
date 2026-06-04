#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }
namespace System { template <typename T> class Action_1; }

#define CLASS_1_82C55A77683068F5_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1ABF3310)
#define CLASS_1_82C55A77683068F5_METHOD_1_6667C1084D90FE78_OFFSET UNITYSDK_OFFSET(0x1ABF3480)
#define CLASS_1_82C55A77683068F5_METHOD_1_74AD48FDDB65C1F6_OFFSET UNITYSDK_OFFSET(0x1ABF3320)
#define CLASS_1_82C55A77683068F5_METHOD_1_C60EFA20BB8CA13F_OFFSET UNITYSDK_OFFSET(0x1ABF33B0)
#define CLASS_1_82C55A77683068F5_METHOD_1_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x1ABF3300)
#define CLASS_1_82C55A77683068F5_METHOD_1_F0E307B84478A272_OFFSET UNITYSDK_OFFSET(0x1ABF32E0)
#define CLASS_1_82C55A77683068F5__CTOR_OFFSET UNITYSDK_OFFSET(0x1ABF34D0)

inline static constexpr unsigned int Class_1_82C55A77683068F5_TypeDefinitionIndex = 33496;

class Class_1_82C55A77683068F5 : public ::System::Object
{
public:
	::System::Action* Field_1_0; // 0x10
	::System::Action* Field_1_1; // 0x18
	::System::UInt32 Field_1_2; // 0x20
	::System::Int32 Field_1_3; // 0x24
	::System::UInt32 Field_1_4; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_82C55A77683068F5__CTOR_OFFSET))(this);
	}

	::System::Boolean Method_1_F0E307B84478A272()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_82C55A77683068F5_METHOD_1_F0E307B84478A272_OFFSET))(this);
	}

	::System::Boolean Method_1_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_82C55A77683068F5_METHOD_1_F0088C88851A7DFB_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_82C55A77683068F5_DISPOSE_OFFSET))(this);
	}

	::System::Action* Method_1_74AD48FDDB65C1F6()
	{
		return ((::System::Action*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_82C55A77683068F5_METHOD_1_74AD48FDDB65C1F6_OFFSET))(this);
	}

	::System::Action* Method_1_C60EFA20BB8CA13F(::System::Action* a1)
	{
		return ((::System::Action*(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_82C55A77683068F5_METHOD_1_C60EFA20BB8CA13F_OFFSET))(this, a1);
	}

	::System::Void Method_1_6667C1084D90FE78(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_82C55A77683068F5_METHOD_1_6667C1084D90FE78_OFFSET))(this, a1);
	}
};

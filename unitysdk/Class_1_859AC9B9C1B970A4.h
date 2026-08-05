#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define CLASS_1_859AC9B9C1B970A4_METHOD_1_02A3D10A9D535169_OFFSET UNITYSDK_OFFSET(0x1860A0A0)
#define CLASS_1_859AC9B9C1B970A4_METHOD_1_128774387667156B_OFFSET UNITYSDK_OFFSET(0x1860A010)
#define CLASS_1_859AC9B9C1B970A4_METHOD_1_7786DC814C2FC3BE_OFFSET UNITYSDK_OFFSET(0x1860A060)
#define CLASS_1_859AC9B9C1B970A4_METHOD_1_C74E50CBD41F0264_1_OFFSET UNITYSDK_OFFSET(0x1860A080)
#define CLASS_1_859AC9B9C1B970A4_METHOD_1_C74E50CBD41F0264_OFFSET UNITYSDK_OFFSET(0x1860A070)
#define CLASS_1_859AC9B9C1B970A4_METHOD_1_F0088C88851A7DFB_1_OFFSET UNITYSDK_OFFSET(0x1860A090)
#define CLASS_1_859AC9B9C1B970A4_METHOD_1_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x1860A050)
#define CLASS_1_859AC9B9C1B970A4_TOSTRING_OFFSET UNITYSDK_OFFSET(0x18609F10)
#define CLASS_1_859AC9B9C1B970A4__CTOR_OFFSET UNITYSDK_OFFSET(0x18609F00)

inline static constexpr unsigned int Class_1_859AC9B9C1B970A4_TypeDefinitionIndex = 91464;

class Class_1_859AC9B9C1B970A4 : public ::System::Object
{
public:
	::System::UInt32 Field_1_2; // 0x10
	::System::Boolean Field_1_0; // 0x14
	::System::Boolean Field_1_1; // 0x15

	::System::Void _ctor(::System::UInt32 a1, ::System::Boolean a2, ::System::Boolean a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_859AC9B9C1B970A4__CTOR_OFFSET))(this, a1, a2, a3);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_859AC9B9C1B970A4_TOSTRING_OFFSET))(this);
	}

	::System::String* Method_1_128774387667156B()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_859AC9B9C1B970A4_METHOD_1_128774387667156B_OFFSET))(this);
	}

	::System::Boolean Method_1_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_859AC9B9C1B970A4_METHOD_1_F0088C88851A7DFB_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_859AC9B9C1B970A4_METHOD_1_7786DC814C2FC3BE_OFFSET))(this, a1);
	}

	::System::Void Method_1_C74E50CBD41F0264(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_859AC9B9C1B970A4_METHOD_1_C74E50CBD41F0264_OFFSET))(this, a1);
	}

	::System::Void Method_1_C74E50CBD41F0264_1(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_859AC9B9C1B970A4_METHOD_1_C74E50CBD41F0264_1_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_F0088C88851A7DFB_1()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_859AC9B9C1B970A4_METHOD_1_F0088C88851A7DFB_1_OFFSET))(this);
	}

	::System::UInt32 Method_1_02A3D10A9D535169()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_859AC9B9C1B970A4_METHOD_1_02A3D10A9D535169_OFFSET))(this);
	}
};

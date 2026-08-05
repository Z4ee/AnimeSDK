#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_3_F6C4C44754A545F8;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_CF608996044A6791_METHOD_1_126AB3935214AA22_OFFSET UNITYSDK_OFFSET(0x1F2E16A0)
#define CLASS_1_CF608996044A6791_METHOD_1_5335C253389036A9_OFFSET UNITYSDK_OFFSET(0x1F2E1690)
#define CLASS_1_CF608996044A6791_METHOD_1_7D201B4343E63821_OFFSET UNITYSDK_OFFSET(0x1F2E16B0)
#define CLASS_1_CF608996044A6791_METHOD_1_D3B66D2C18305B0A_OFFSET UNITYSDK_OFFSET(0x1F2E16C0)
#define CLASS_1_CF608996044A6791__CTOR_OFFSET UNITYSDK_OFFSET(0x1F2DDFC0)

inline static constexpr unsigned int Class_1_CF608996044A6791_TypeDefinitionIndex = 29559;

class Class_1_CF608996044A6791 : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::Class_3_F6C4C44754A545F8*>* Field_1_0; // 0x10
	::System::String* Field_1_1; // 0x18

	::System::Void _ctor(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_CF608996044A6791__CTOR_OFFSET))(this, a1);
	}

	::System::Collections::Generic::Dictionary_2<::System::Int32, ::Class_3_F6C4C44754A545F8*>* Method_1_5335C253389036A9()
	{
		return ((::System::Collections::Generic::Dictionary_2<::System::Int32, ::Class_3_F6C4C44754A545F8*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_CF608996044A6791_METHOD_1_5335C253389036A9_OFFSET))(this);
	}

	::System::String* Method_1_126AB3935214AA22()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_CF608996044A6791_METHOD_1_126AB3935214AA22_OFFSET))(this);
	}

	::System::Void Method_1_7D201B4343E63821(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_CF608996044A6791_METHOD_1_7D201B4343E63821_OFFSET))(this, a1);
	}

	::System::Void Method_1_D3B66D2C18305B0A(::System::Collections::Generic::Dictionary_2<::System::Int32, ::Class_3_F6C4C44754A545F8*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::Int32, ::Class_3_F6C4C44754A545F8*>*))((::PBYTE)hIl2Cpp + CLASS_1_CF608996044A6791_METHOD_1_D3B66D2C18305B0A_OFFSET))(this, a1);
	}
};

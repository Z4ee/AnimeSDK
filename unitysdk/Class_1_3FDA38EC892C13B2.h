#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_C4F0D10F0BEA3882.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_69;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_3FDA38EC892C13B2_METHOD_1_04F02FC65FAA2E0C_OFFSET UNITYSDK_OFFSET(0x164F42B0)
#define CLASS_1_3FDA38EC892C13B2_METHOD_1_050E70FEDB783306_OFFSET UNITYSDK_OFFSET(0x164F4650)
#define CLASS_1_3FDA38EC892C13B2_METHOD_1_454BCE520C4D42E5_OFFSET UNITYSDK_OFFSET(0x164F4860)
#define CLASS_1_3FDA38EC892C13B2_METHOD_1_611142A6ECF0D805_OFFSET UNITYSDK_OFFSET(0x164F47A0)
#define CLASS_1_3FDA38EC892C13B2_METHOD_1_95780ED94B90ED36_OFFSET UNITYSDK_OFFSET(0x164F46A0)
#define CLASS_1_3FDA38EC892C13B2_METHOD_1_E0649D9261FACA8C_OFFSET UNITYSDK_OFFSET(0x164F46F0)
#define CLASS_1_3FDA38EC892C13B2__CTOR_OFFSET UNITYSDK_OFFSET(0x164F42A0)

inline static constexpr unsigned int Class_1_3FDA38EC892C13B2_TypeDefinitionIndex = 32068;

class Class_1_3FDA38EC892C13B2 : public ::System::Object
{
public:
	::Il2CppArray<::Struct_2_C4F0D10F0BEA3882>* Field_1_0; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::String*, ::Struct_2_C4F0D10F0BEA3882>* Field_1_1; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3FDA38EC892C13B2__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_050E70FEDB783306(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_3FDA38EC892C13B2_METHOD_1_050E70FEDB783306_OFFSET))(this, a1);
	}

	::System::Int32 Method_1_95780ED94B90ED36()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3FDA38EC892C13B2_METHOD_1_95780ED94B90ED36_OFFSET))(this);
	}

	::Class_0_16E4307DCC419505_69* Method_1_E0649D9261FACA8C(::System::Int32 a1)
	{
		return ((::Class_0_16E4307DCC419505_69*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_3FDA38EC892C13B2_METHOD_1_E0649D9261FACA8C_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_611142A6ECF0D805(::System::String* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_3FDA38EC892C13B2_METHOD_1_611142A6ECF0D805_OFFSET))(this, a1);
	}

	::Class_0_16E4307DCC419505_69* Method_1_454BCE520C4D42E5(::System::String* a1)
	{
		return ((::Class_0_16E4307DCC419505_69*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_3FDA38EC892C13B2_METHOD_1_454BCE520C4D42E5_OFFSET))(this, a1);
	}

	::System::Void Method_1_04F02FC65FAA2E0C()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3FDA38EC892C13B2_METHOD_1_04F02FC65FAA2E0C_OFFSET))(this);
	}
};

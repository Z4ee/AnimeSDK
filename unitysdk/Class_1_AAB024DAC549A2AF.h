#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_28C0FDDF1076A6D9;
class Class_2_208CC9941471731A_152;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_AAB024DAC549A2AF_METHOD_1_3E7E2E89BF285E09_OFFSET UNITYSDK_OFFSET(0x1354CDE0)
#define CLASS_1_AAB024DAC549A2AF_METHOD_1_4993EDAE54425105_OFFSET UNITYSDK_OFFSET(0x1354CF20)
#define CLASS_1_AAB024DAC549A2AF_METHOD_1_56E076CBC69B0772_OFFSET UNITYSDK_OFFSET(0x1354CC30)
#define CLASS_1_AAB024DAC549A2AF_METHOD_1_84EAB34EABC7F508_OFFSET UNITYSDK_OFFSET(0x1354CF30)
#define CLASS_1_AAB024DAC549A2AF_METHOD_1_C74CF020AA42ED85_OFFSET UNITYSDK_OFFSET(0x1354CDD0)
#define CLASS_1_AAB024DAC549A2AF_METHOD_1_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x1354D0D0)
#define CLASS_1_AAB024DAC549A2AF_METHOD_1_D4297F744E0E23E3_OFFSET UNITYSDK_OFFSET(0x1354C7A0)
#define CLASS_1_AAB024DAC549A2AF__CTOR_OFFSET UNITYSDK_OFFSET(0x1354C570)

inline static constexpr unsigned int Class_1_AAB024DAC549A2AF_TypeDefinitionIndex = 50771;

class Class_1_AAB024DAC549A2AF : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::Class_1_28C0FDDF1076A6D9*>* Field_1_2; // 0x10
	::Class_2_208CC9941471731A_152* Field_1_1; // 0x18
	::System::Int32 Field_1_0; // 0x20

	::System::Void _ctor(::System::Int32 a1, ::System::Boolean a2, ::System::Collections::Generic::List_1<::System::Int32>* a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Boolean, ::System::Collections::Generic::List_1<::System::Int32>*))((::PBYTE)hIl2Cpp + CLASS_1_AAB024DAC549A2AF__CTOR_OFFSET))(this, a1, a2, a3);
	}

	::System::Boolean Method_1_56E076CBC69B0772()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_AAB024DAC549A2AF_METHOD_1_56E076CBC69B0772_OFFSET))(this);
	}

	::System::Int32 Method_1_C74CF020AA42ED85()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_AAB024DAC549A2AF_METHOD_1_C74CF020AA42ED85_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::Class_1_28C0FDDF1076A6D9*>* Method_1_3E7E2E89BF285E09()
	{
		return ((::System::Collections::Generic::List_1<::Class_1_28C0FDDF1076A6D9*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_AAB024DAC549A2AF_METHOD_1_3E7E2E89BF285E09_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::Class_1_28C0FDDF1076A6D9*>* Method_1_4993EDAE54425105()
	{
		return ((::System::Collections::Generic::List_1<::Class_1_28C0FDDF1076A6D9*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_AAB024DAC549A2AF_METHOD_1_4993EDAE54425105_OFFSET))(this);
	}

	::System::Boolean Method_1_84EAB34EABC7F508()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_AAB024DAC549A2AF_METHOD_1_84EAB34EABC7F508_OFFSET))(this);
	}

	::System::Void Method_1_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_AAB024DAC549A2AF_METHOD_1_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_1_D4297F744E0E23E3(::System::Collections::Generic::List_1<::System::Int32>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::Int32>*))((::PBYTE)hIl2Cpp + CLASS_1_AAB024DAC549A2AF_METHOD_1_D4297F744E0E23E3_OFFSET))(this, a1);
	}
};

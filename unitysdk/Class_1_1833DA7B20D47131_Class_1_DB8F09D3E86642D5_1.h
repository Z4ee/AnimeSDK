#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_2_208CC9941471731A_901;
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_1833DA7B20D47131_CLASS_1_DB8F09D3E86642D5_1_METHOD_1_5F9AA1D31A4250D4_OFFSET UNITYSDK_OFFSET(0x16A58D10)
#define CLASS_1_1833DA7B20D47131_CLASS_1_DB8F09D3E86642D5_1__CTOR_OFFSET UNITYSDK_OFFSET(0x16A58C80)

inline static constexpr unsigned int Class_1_1833DA7B20D47131_Class_1_DB8F09D3E86642D5_1_TypeDefinitionIndex = 17205;

class Class_1_1833DA7B20D47131_Class_1_DB8F09D3E86642D5_1 : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Collections::Generic::List_1<::Class_2_208CC9941471731A_901*>*>* Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1833DA7B20D47131_CLASS_1_DB8F09D3E86642D5_1__CTOR_OFFSET))(this);
	}

	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Collections::Generic::List_1<::Class_2_208CC9941471731A_901*>*>* Method_1_5F9AA1D31A4250D4()
	{
		return ((::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Collections::Generic::List_1<::Class_2_208CC9941471731A_901*>*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1833DA7B20D47131_CLASS_1_DB8F09D3E86642D5_1_METHOD_1_5F9AA1D31A4250D4_OFFSET))(this);
	}
};

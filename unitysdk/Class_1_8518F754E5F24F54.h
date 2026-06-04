#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_887;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_8518F754E5F24F54_METHOD_1_30B62F5CDB9079BD_OFFSET UNITYSDK_OFFSET(0xA5C2FF0)
#define CLASS_1_8518F754E5F24F54_METHOD_1_B43DD0430B0FE876_OFFSET UNITYSDK_OFFSET(0xA5C2E50)
#define CLASS_1_8518F754E5F24F54__CCTOR_OFFSET UNITYSDK_OFFSET(0xA5C32A0)

inline static constexpr unsigned int Class_1_8518F754E5F24F54_TypeDefinitionIndex = 63013;

class Class_1_8518F754E5F24F54 : public ::System::Object
{
public:
	static ::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_887*>** StaticGet_Field_1_0()
	{
		return (::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_887*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_8518F754E5F24F54_TypeDefinitionIndex)->GetStaticField(0x655A0);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_8518F754E5F24F54__CCTOR_OFFSET))();
	}

	static ::System::Void Method_1_B43DD0430B0FE876(::Class_0_16E4307DCC419505_887* a1)
	{
		return ((::System::Void(*)(::Class_0_16E4307DCC419505_887*))((::PBYTE)hIl2Cpp + CLASS_1_8518F754E5F24F54_METHOD_1_B43DD0430B0FE876_OFFSET))(a1);
	}

	static ::System::Void Method_1_30B62F5CDB9079BD()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_8518F754E5F24F54_METHOD_1_30B62F5CDB9079BD_OFFSET))();
	}
};

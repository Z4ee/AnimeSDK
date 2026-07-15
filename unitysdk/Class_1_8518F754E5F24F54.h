#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_925;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_8518F754E5F24F54_METHOD_1_2CBE0B79DD36047E_OFFSET UNITYSDK_OFFSET(0x152C3970)
#define CLASS_1_8518F754E5F24F54_METHOD_1_B43DD0430B0FE876_OFFSET UNITYSDK_OFFSET(0x152C37D0)
#define CLASS_1_8518F754E5F24F54__CCTOR_OFFSET UNITYSDK_OFFSET(0x152C3C90)

inline static constexpr unsigned int Class_1_8518F754E5F24F54_TypeDefinitionIndex = 64380;

class Class_1_8518F754E5F24F54 : public ::System::Object
{
public:
	static ::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_925*>** StaticGet_Field_1_0()
	{
		return (::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_925*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_8518F754E5F24F54_TypeDefinitionIndex)->GetStaticField(0x59F30);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_8518F754E5F24F54__CCTOR_OFFSET))();
	}

	static ::System::Void Method_1_B43DD0430B0FE876(::Class_0_16E4307DCC419505_925* a1)
	{
		return ((::System::Void(*)(::Class_0_16E4307DCC419505_925*))((::PBYTE)hIl2Cpp + CLASS_1_8518F754E5F24F54_METHOD_1_B43DD0430B0FE876_OFFSET))(a1);
	}

	static ::System::Void Method_1_2CBE0B79DD36047E()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_8518F754E5F24F54_METHOD_1_2CBE0B79DD36047E_OFFSET))();
	}
};

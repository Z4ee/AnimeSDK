#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/SingletonDisposable_1.h"
#include "unitysdk/Struct_2_52A902145F5BE51A_3.h"

class Class_0_16E4307DCC419505_414;
class Class_0_16E4307DCC419505_415;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_2_E4F99B6EE220D866_DISPOSE_OFFSET UNITYSDK_OFFSET(0x18DA7370)
#define CLASS_2_E4F99B6EE220D866_METHOD_2_0DB4213124B2CC45_OFFSET UNITYSDK_OFFSET(0x18DA7620)
#define CLASS_2_E4F99B6EE220D866_METHOD_2_B627E5595C0BB4AE_OFFSET UNITYSDK_OFFSET(0x18DA7B80)
#define CLASS_2_E4F99B6EE220D866_METHOD_2_BCC8E7A098716618_OFFSET UNITYSDK_OFFSET(0x18DA7880)
#define CLASS_2_E4F99B6EE220D866_METHOD_2_E11BD11B58E4E772_OFFSET UNITYSDK_OFFSET(0x18DA79E0)
#define CLASS_2_E4F99B6EE220D866_METHOD_2_E4E004326D5635B9_OFFSET UNITYSDK_OFFSET(0x18DA7450)
#define CLASS_2_E4F99B6EE220D866_ONCREATE_OFFSET UNITYSDK_OFFSET(0x18DA73B0)
#define CLASS_2_E4F99B6EE220D866__CTOR_OFFSET UNITYSDK_OFFSET(0x18DA7520)

inline static constexpr unsigned int Class_2_E4F99B6EE220D866_TypeDefinitionIndex = 48310;

class Class_2_E4F99B6EE220D866 : public ::Foundation::SingletonDisposable_1<::Class_2_E4F99B6EE220D866*>
{
public:
	::System::Collections::Generic::Dictionary_2<::System::String*, ::Class_0_16E4307DCC419505_414*>* Field_2_1; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::String*, ::Class_0_16E4307DCC419505_415*>* Field_2_0; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E4F99B6EE220D866__CTOR_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E4F99B6EE220D866_DISPOSE_OFFSET))(this);
	}

	::System::Void OnCreate()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E4F99B6EE220D866_ONCREATE_OFFSET))(this);
	}

	::Class_2_E4F99B6EE220D866* Method_2_E4E004326D5635B9(::System::String* a1, ::Class_0_16E4307DCC419505_414* a2)
	{
		return ((::Class_2_E4F99B6EE220D866*(*)(::PVOID, ::System::String*, ::Class_0_16E4307DCC419505_414*))((::PBYTE)hIl2Cpp + CLASS_2_E4F99B6EE220D866_METHOD_2_E4E004326D5635B9_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_2_0DB4213124B2CC45(::System::String* a1, ::Struct_2_52A902145F5BE51A_3& a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::String*, ::Struct_2_52A902145F5BE51A_3&))((::PBYTE)hIl2Cpp + CLASS_2_E4F99B6EE220D866_METHOD_2_0DB4213124B2CC45_OFFSET))(this, a1, a2);
	}

	::Class_0_16E4307DCC419505_415* Method_2_E11BD11B58E4E772(::System::String* a1)
	{
		return ((::Class_0_16E4307DCC419505_415*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_E4F99B6EE220D866_METHOD_2_E11BD11B58E4E772_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_B627E5595C0BB4AE(::System::String* a1, ::Struct_2_52A902145F5BE51A_3& a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::String*, ::Struct_2_52A902145F5BE51A_3&))((::PBYTE)hIl2Cpp + CLASS_2_E4F99B6EE220D866_METHOD_2_B627E5595C0BB4AE_OFFSET))(this, a1, a2);
	}

	static ::Il2CppArray<::System::String*>* Method_2_BCC8E7A098716618(::System::String* a1)
	{
		return ((::Il2CppArray<::System::String*>*(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_E4F99B6EE220D866_METHOD_2_BCC8E7A098716618_OFFSET))(a1);
	}
};

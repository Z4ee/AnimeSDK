#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/SingletonDisposable_1.h"
#include "unitysdk/Struct_2_52A902145F5BE51A_4.h"

class Class_0_16E4307DCC419505_245;
class Class_0_16E4307DCC419505_464;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_2_A3F13BBF9509D066_DISPOSE_OFFSET UNITYSDK_OFFSET(0x142F57E0)
#define CLASS_2_A3F13BBF9509D066_METHOD_2_5086A4198D4CF3B8_OFFSET UNITYSDK_OFFSET(0x142F5A90)
#define CLASS_2_A3F13BBF9509D066_METHOD_2_BCC8E7A098716618_OFFSET UNITYSDK_OFFSET(0x142F5CF0)
#define CLASS_2_A3F13BBF9509D066_METHOD_2_BDD04BE99B534611_OFFSET UNITYSDK_OFFSET(0x142F5E50)
#define CLASS_2_A3F13BBF9509D066_METHOD_2_E11BD11B58E4E772_OFFSET UNITYSDK_OFFSET(0x142F5F80)
#define CLASS_2_A3F13BBF9509D066_METHOD_2_E4E004326D5635B9_OFFSET UNITYSDK_OFFSET(0x142F58C0)
#define CLASS_2_A3F13BBF9509D066_ONCREATE_OFFSET UNITYSDK_OFFSET(0x142F5820)
#define CLASS_2_A3F13BBF9509D066__CTOR_OFFSET UNITYSDK_OFFSET(0x142F5990)

inline static constexpr unsigned int Class_2_A3F13BBF9509D066_TypeDefinitionIndex = 51170;

class Class_2_A3F13BBF9509D066 : public ::Foundation::SingletonDisposable_1<::Class_2_A3F13BBF9509D066*>
{
public:
	::System::Collections::Generic::Dictionary_2<::System::String*, ::Class_0_16E4307DCC419505_245*>* Field_2_0; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::String*, ::Class_0_16E4307DCC419505_464*>* Field_2_1; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A3F13BBF9509D066__CTOR_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A3F13BBF9509D066_DISPOSE_OFFSET))(this);
	}

	::System::Void OnCreate()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A3F13BBF9509D066_ONCREATE_OFFSET))(this);
	}

	::Class_2_A3F13BBF9509D066* Method_2_E4E004326D5635B9(::System::String* a1, ::Class_0_16E4307DCC419505_245* a2)
	{
		return ((::Class_2_A3F13BBF9509D066*(*)(::PVOID, ::System::String*, ::Class_0_16E4307DCC419505_245*))((::PBYTE)hIl2Cpp + CLASS_2_A3F13BBF9509D066_METHOD_2_E4E004326D5635B9_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_2_5086A4198D4CF3B8(::System::String* a1, ::Struct_2_52A902145F5BE51A_4& a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::String*, ::Struct_2_52A902145F5BE51A_4&))((::PBYTE)hIl2Cpp + CLASS_2_A3F13BBF9509D066_METHOD_2_5086A4198D4CF3B8_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_2_BDD04BE99B534611(::System::String* a1, ::Struct_2_52A902145F5BE51A_4& a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::String*, ::Struct_2_52A902145F5BE51A_4&))((::PBYTE)hIl2Cpp + CLASS_2_A3F13BBF9509D066_METHOD_2_BDD04BE99B534611_OFFSET))(this, a1, a2);
	}

	::Class_0_16E4307DCC419505_464* Method_2_E11BD11B58E4E772(::System::String* a1)
	{
		return ((::Class_0_16E4307DCC419505_464*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_A3F13BBF9509D066_METHOD_2_E11BD11B58E4E772_OFFSET))(this, a1);
	}

	static ::Il2CppArray<::System::String*>* Method_2_BCC8E7A098716618(::System::String* a1)
	{
		return ((::Il2CppArray<::System::String*>*(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_A3F13BBF9509D066_METHOD_2_BCC8E7A098716618_OFFSET))(a1);
	}
};

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/SingletonDisposable_1.h"
#include "unitysdk/Struct_2_52A902145F5BE51A_3.h"

class Class_0_16E4307DCC419505_459;
class Class_0_16E4307DCC419505_558;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_2_A413755ABC47F29F_DISPOSE_OFFSET UNITYSDK_OFFSET(0x139CDAB0)
#define CLASS_2_A413755ABC47F29F_METHOD_2_733D2382CDDC4661_OFFSET UNITYSDK_OFFSET(0x139CDD70)
#define CLASS_2_A413755ABC47F29F_METHOD_2_BCC8E7A098716618_OFFSET UNITYSDK_OFFSET(0x139CDFE0)
#define CLASS_2_A413755ABC47F29F_METHOD_2_BDD04BE99B534611_OFFSET UNITYSDK_OFFSET(0x139CE2E0)
#define CLASS_2_A413755ABC47F29F_METHOD_2_E11BD11B58E4E772_OFFSET UNITYSDK_OFFSET(0x139CE140)
#define CLASS_2_A413755ABC47F29F_METHOD_2_E4E004326D5635B9_OFFSET UNITYSDK_OFFSET(0x139CDB90)
#define CLASS_2_A413755ABC47F29F_ONCREATE_OFFSET UNITYSDK_OFFSET(0x139CDAF0)
#define CLASS_2_A413755ABC47F29F__CTOR_OFFSET UNITYSDK_OFFSET(0x139CDC70)

inline static constexpr unsigned int Class_2_A413755ABC47F29F_TypeDefinitionIndex = 56571;

class Class_2_A413755ABC47F29F : public ::Foundation::SingletonDisposable_1<::Class_2_A413755ABC47F29F*>
{
public:
	::System::Collections::Generic::Dictionary_2<::System::String*, ::Class_0_16E4307DCC419505_558*>* Field_2_0; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::String*, ::Class_0_16E4307DCC419505_459*>* Field_2_1; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A413755ABC47F29F__CTOR_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A413755ABC47F29F_DISPOSE_OFFSET))(this);
	}

	::System::Void OnCreate()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A413755ABC47F29F_ONCREATE_OFFSET))(this);
	}

	::Class_2_A413755ABC47F29F* Method_2_E4E004326D5635B9(::System::String* a1, ::Class_0_16E4307DCC419505_558* a2)
	{
		return ((::Class_2_A413755ABC47F29F*(*)(::PVOID, ::System::String*, ::Class_0_16E4307DCC419505_558*))((::PBYTE)hIl2Cpp + CLASS_2_A413755ABC47F29F_METHOD_2_E4E004326D5635B9_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_2_733D2382CDDC4661(::System::String* a1, ::Struct_2_52A902145F5BE51A_3& a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::String*, ::Struct_2_52A902145F5BE51A_3&))((::PBYTE)hIl2Cpp + CLASS_2_A413755ABC47F29F_METHOD_2_733D2382CDDC4661_OFFSET))(this, a1, a2);
	}

	::Class_0_16E4307DCC419505_459* Method_2_E11BD11B58E4E772(::System::String* a1)
	{
		return ((::Class_0_16E4307DCC419505_459*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_A413755ABC47F29F_METHOD_2_E11BD11B58E4E772_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_BDD04BE99B534611(::System::String* a1, ::Struct_2_52A902145F5BE51A_3& a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::String*, ::Struct_2_52A902145F5BE51A_3&))((::PBYTE)hIl2Cpp + CLASS_2_A413755ABC47F29F_METHOD_2_BDD04BE99B534611_OFFSET))(this, a1, a2);
	}

	static ::Il2CppArray<::System::String*>* Method_2_BCC8E7A098716618(::System::String* a1)
	{
		return ((::Il2CppArray<::System::String*>*(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_A413755ABC47F29F_METHOD_2_BCC8E7A098716618_OFFSET))(a1);
	}
};

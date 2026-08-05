#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_C856E655551E512E.h"
#include "unitysdk/Struct_2_663F0472ACC569E1.h"
#include "unitysdk/Struct_2_BD9A2B01A091AA1E.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_2.h"

class Class_1_E0756AA8DCAA6C36;
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_914EA4D1960C4356_METHOD_1_35335EBCC910297F_OFFSET UNITYSDK_OFFSET(0x13AEF950)
#define CLASS_1_914EA4D1960C4356_METHOD_1_476DD908DCEC0FA9_OFFSET UNITYSDK_OFFSET(0x13AEF6E0)
#define CLASS_1_914EA4D1960C4356_METHOD_1_6E0815E59AB33716_OFFSET UNITYSDK_OFFSET(0x13AEF020)
#define CLASS_1_914EA4D1960C4356_METHOD_1_9507D0A6755EB855_OFFSET UNITYSDK_OFFSET(0x13AEF4A0)
#define CLASS_1_914EA4D1960C4356_METHOD_1_9A7B33B557C7D97F_OFFSET UNITYSDK_OFFSET(0x13AEF210)
#define CLASS_1_914EA4D1960C4356__CTOR_OFFSET UNITYSDK_OFFSET(0x13AEEE40)

inline static constexpr unsigned int Class_1_914EA4D1960C4356_TypeDefinitionIndex = 78578;

class Class_1_914EA4D1960C4356 : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::Enum_3_C856E655551E512E, ::System::Collections::Generic::Dictionary_2<::Class_1_E0756AA8DCAA6C36*, ::Struct_2_BD9A2B01A091AA1E>*>* Field_1_1; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::ValueTuple_2<::Enum_3_C856E655551E512E, ::Enum_3_C856E655551E512E>, ::System::Collections::Generic::Dictionary_2<::Class_1_E0756AA8DCAA6C36*, ::System::Action*>*>* Field_1_0; // 0x18
	::System::Collections::Generic::List_1<::Class_1_E0756AA8DCAA6C36*>* Field_1_3; // 0x20
	::System::Collections::Generic::Dictionary_2<::Class_1_E0756AA8DCAA6C36*, ::Struct_2_663F0472ACC569E1>* Field_1_2; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_914EA4D1960C4356__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_6E0815E59AB33716(::Class_1_E0756AA8DCAA6C36* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_E0756AA8DCAA6C36*))((::PBYTE)hIl2Cpp + CLASS_1_914EA4D1960C4356_METHOD_1_6E0815E59AB33716_OFFSET))(this, a1);
	}

	::System::Void Method_1_9A7B33B557C7D97F(::Enum_3_C856E655551E512E a1, ::Class_1_E0756AA8DCAA6C36* a2, ::System::Action* a3, ::System::Action* a4, ::System::Action* a5, ::System::Action* a6)
	{
		return ((::System::Void(*)(::PVOID, ::Enum_3_C856E655551E512E, ::Class_1_E0756AA8DCAA6C36*, ::System::Action*, ::System::Action*, ::System::Action*, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_914EA4D1960C4356_METHOD_1_9A7B33B557C7D97F_OFFSET))(this, a1, a2, a3, a4, a5, a6);
	}

	::System::Void Method_1_9507D0A6755EB855(::Class_1_E0756AA8DCAA6C36* a1, ::System::Action* a2, ::System::Action* a3, ::System::Action* a4, ::System::Action* a5)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_E0756AA8DCAA6C36*, ::System::Action*, ::System::Action*, ::System::Action*, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_914EA4D1960C4356_METHOD_1_9507D0A6755EB855_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::System::Void Method_1_476DD908DCEC0FA9(::Enum_3_C856E655551E512E a1, ::Enum_3_C856E655551E512E a2, ::Class_1_E0756AA8DCAA6C36* a3, ::System::Action* a4)
	{
		return ((::System::Void(*)(::PVOID, ::Enum_3_C856E655551E512E, ::Enum_3_C856E655551E512E, ::Class_1_E0756AA8DCAA6C36*, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_914EA4D1960C4356_METHOD_1_476DD908DCEC0FA9_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_1_35335EBCC910297F(::Enum_3_C856E655551E512E a1, ::Enum_3_C856E655551E512E a2)
	{
		return ((::System::Void(*)(::PVOID, ::Enum_3_C856E655551E512E, ::Enum_3_C856E655551E512E))((::PBYTE)hIl2Cpp + CLASS_1_914EA4D1960C4356_METHOD_1_35335EBCC910297F_OFFSET))(this, a1, a2);
	}
};

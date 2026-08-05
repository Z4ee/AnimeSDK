#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_2.h"
#include "unitysdk/System/ValueTuple_3.h"

class Class_1_43BD383C98B4C0C5_147;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }

#define CLASS_1_B247661656C96103_METHOD_1_17C914B7EC921DBD_OFFSET UNITYSDK_OFFSET(0x1D7F29A0)
#define CLASS_1_B247661656C96103_METHOD_1_40C84FA8B9DD38CA_OFFSET UNITYSDK_OFFSET(0x1D7F2F80)
#define CLASS_1_B247661656C96103_METHOD_1_5A439AEAB3E11150_OFFSET UNITYSDK_OFFSET(0x1D7F2B30)
#define CLASS_1_B247661656C96103_METHOD_1_AFEE18E05CBF617E_OFFSET UNITYSDK_OFFSET(0x1D7F2D20)
#define CLASS_1_B247661656C96103_METHOD_1_D31158F0CD6D711E_OFFSET UNITYSDK_OFFSET(0x1D7F2A40)
#define CLASS_1_B247661656C96103_METHOD_1_EC03BF13D7F40502_OFFSET UNITYSDK_OFFSET(0x1D7F2E90)
#define CLASS_1_B247661656C96103_METHOD_1_F5599B7DA8E7E53C_OFFSET UNITYSDK_OFFSET(0x1D7F2D00)
#define CLASS_1_B247661656C96103__CCTOR_OFFSET UNITYSDK_OFFSET(0x1D7F2950)
#define CLASS_1_B247661656C96103__CTOR_OFFSET UNITYSDK_OFFSET(0x1D7F2260)

inline static constexpr unsigned int Class_1_B247661656C96103_TypeDefinitionIndex = 92401;

class Class_1_B247661656C96103 : public ::System::Object
{
public:
	static ::Class_1_B247661656C96103** StaticGet_Field_1_0()
	{
		return (::Class_1_B247661656C96103**)Il2CppClass::FromTypeDefinitionIndex(Class_1_B247661656C96103_TypeDefinitionIndex)->GetStaticField(0x51F00);
	}
	::System::Collections::Generic::Dictionary_2<::System::String*, ::System::ValueTuple_2<::Class_1_43BD383C98B4C0C5_147*, ::System::Int32>>* Field_1_7; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B247661656C96103__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_B247661656C96103__CCTOR_OFFSET))();
	}

	::System::Boolean Method_1_17C914B7EC921DBD(::System::String* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_B247661656C96103_METHOD_1_17C914B7EC921DBD_OFFSET))(this, a1);
	}

	::Class_1_43BD383C98B4C0C5_147* Method_1_D31158F0CD6D711E(::System::String* a1)
	{
		return ((::Class_1_43BD383C98B4C0C5_147*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_B247661656C96103_METHOD_1_D31158F0CD6D711E_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_5A439AEAB3E11150(::System::String* a1, ::Class_1_43BD383C98B4C0C5_147* a2, ::System::Int32 a3)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::String*, ::Class_1_43BD383C98B4C0C5_147*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_B247661656C96103_METHOD_1_5A439AEAB3E11150_OFFSET))(this, a1, a2, a3);
	}

	::System::Int32 Method_1_F5599B7DA8E7E53C()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B247661656C96103_METHOD_1_F5599B7DA8E7E53C_OFFSET))(this);
	}

	::System::Void Method_1_AFEE18E05CBF617E(::System::String* a1, ::Class_1_43BD383C98B4C0C5_147* a2, ::System::Int32 a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::Class_1_43BD383C98B4C0C5_147*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_B247661656C96103_METHOD_1_AFEE18E05CBF617E_OFFSET))(this, a1, a2, a3);
	}

	::System::Int32 Method_1_EC03BF13D7F40502(::System::String* a1)
	{
		return ((::System::Int32(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_B247661656C96103_METHOD_1_EC03BF13D7F40502_OFFSET))(this, a1);
	}

	::System::Collections::Generic::IEnumerable_1<::System::ValueTuple_3<::System::String*, ::Class_1_43BD383C98B4C0C5_147*, ::System::Int32>>* Method_1_40C84FA8B9DD38CA()
	{
		return ((::System::Collections::Generic::IEnumerable_1<::System::ValueTuple_3<::System::String*, ::Class_1_43BD383C98B4C0C5_147*, ::System::Int32>>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B247661656C96103_METHOD_1_40C84FA8B9DD38CA_OFFSET))(this);
	}
};

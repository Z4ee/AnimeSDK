#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_2.h"
#include "unitysdk/System/ValueTuple_3.h"

class Class_1_43BD383C98B4C0C5_139;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }

#define CLASS_1_B247661656C96103_METHOD_1_40C84FA8B9DD38CA_OFFSET UNITYSDK_OFFSET(0x1B70C780)
#define CLASS_1_B247661656C96103_METHOD_1_5A439AEAB3E11150_OFFSET UNITYSDK_OFFSET(0x1B70C5B0)
#define CLASS_1_B247661656C96103_METHOD_1_98229EB49019A0B4_OFFSET UNITYSDK_OFFSET(0x1B70C9A0)
#define CLASS_1_B247661656C96103_METHOD_1_AFEE18E05CBF617E_OFFSET UNITYSDK_OFFSET(0x1B70C830)
#define CLASS_1_B247661656C96103_METHOD_1_D31158F0CD6D711E_OFFSET UNITYSDK_OFFSET(0x1B70C4C0)
#define CLASS_1_B247661656C96103_METHOD_1_EC03BF13D7F40502_OFFSET UNITYSDK_OFFSET(0x1B70C3D0)
#define CLASS_1_B247661656C96103_METHOD_1_F5599B7DA8E7E53C_OFFSET UNITYSDK_OFFSET(0x1B70C810)
#define CLASS_1_B247661656C96103__CCTOR_OFFSET UNITYSDK_OFFSET(0x1B70C380)
#define CLASS_1_B247661656C96103__CTOR_OFFSET UNITYSDK_OFFSET(0x1B70BC70)

inline static constexpr unsigned int Class_1_B247661656C96103_TypeDefinitionIndex = 88327;

class Class_1_B247661656C96103 : public ::System::Object
{
public:
	static ::Class_1_B247661656C96103** StaticGet_Field_1_0()
	{
		return (::Class_1_B247661656C96103**)Il2CppClass::FromTypeDefinitionIndex(Class_1_B247661656C96103_TypeDefinitionIndex)->GetStaticField(0x4DC70);
	}
	::System::Collections::Generic::Dictionary_2<::System::String*, ::System::ValueTuple_2<::Class_1_43BD383C98B4C0C5_139*, ::System::Int32>>* Field_1_1; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B247661656C96103__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_B247661656C96103__CCTOR_OFFSET))();
	}

	::System::Int32 Method_1_EC03BF13D7F40502(::System::String* a1)
	{
		return ((::System::Int32(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_B247661656C96103_METHOD_1_EC03BF13D7F40502_OFFSET))(this, a1);
	}

	::Class_1_43BD383C98B4C0C5_139* Method_1_D31158F0CD6D711E(::System::String* a1)
	{
		return ((::Class_1_43BD383C98B4C0C5_139*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_B247661656C96103_METHOD_1_D31158F0CD6D711E_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_5A439AEAB3E11150(::System::String* a1, ::Class_1_43BD383C98B4C0C5_139* a2, ::System::Int32 a3)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::String*, ::Class_1_43BD383C98B4C0C5_139*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_B247661656C96103_METHOD_1_5A439AEAB3E11150_OFFSET))(this, a1, a2, a3);
	}

	::System::Collections::Generic::IEnumerable_1<::System::ValueTuple_3<::System::String*, ::Class_1_43BD383C98B4C0C5_139*, ::System::Int32>>* Method_1_40C84FA8B9DD38CA()
	{
		return ((::System::Collections::Generic::IEnumerable_1<::System::ValueTuple_3<::System::String*, ::Class_1_43BD383C98B4C0C5_139*, ::System::Int32>>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B247661656C96103_METHOD_1_40C84FA8B9DD38CA_OFFSET))(this);
	}

	::System::Int32 Method_1_F5599B7DA8E7E53C()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B247661656C96103_METHOD_1_F5599B7DA8E7E53C_OFFSET))(this);
	}

	::System::Void Method_1_AFEE18E05CBF617E(::System::String* a1, ::Class_1_43BD383C98B4C0C5_139* a2, ::System::Int32 a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::Class_1_43BD383C98B4C0C5_139*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_B247661656C96103_METHOD_1_AFEE18E05CBF617E_OFFSET))(this, a1, a2, a3);
	}

	::System::Boolean Method_1_98229EB49019A0B4(::System::String* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_B247661656C96103_METHOD_1_98229EB49019A0B4_OFFSET))(this, a1);
	}
};

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Collections/Generic/KeyValuePair_2.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T1, typename T2> class Converter_2; }
namespace System { template <typename T> class Predicate_1; }

#define CLASS_1_06EBE0E98D90D5E7___C_METHOD_1_1363272E7C2EDAD8_OFFSET UNITYSDK_OFFSET(0x1281E280)
#define CLASS_1_06EBE0E98D90D5E7___C_METHOD_1_53B3DFCCF5820F38_OFFSET UNITYSDK_OFFSET(0x1281E270)
#define CLASS_1_06EBE0E98D90D5E7___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1281E220)
#define CLASS_1_06EBE0E98D90D5E7___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1281E260)

inline static constexpr unsigned int Class_1_06EBE0E98D90D5E7___c_TypeDefinitionIndex = 58211;

class Class_1_06EBE0E98D90D5E7___c : public ::System::Object
{
public:
	static ::Class_1_06EBE0E98D90D5E7___c** StaticGet___9()
	{
		return (::Class_1_06EBE0E98D90D5E7___c**)Il2CppClass::FromTypeDefinitionIndex(Class_1_06EBE0E98D90D5E7___c_TypeDefinitionIndex)->GetStaticField(0x493C0);
	}
	static ::System::Converter_2<::System::Collections::Generic::KeyValuePair_2<::System::Int32, ::System::Boolean>, ::System::Int32>** StaticGet___9__107_1()
	{
		return (::System::Converter_2<::System::Collections::Generic::KeyValuePair_2<::System::Int32, ::System::Boolean>, ::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_06EBE0E98D90D5E7___c_TypeDefinitionIndex)->GetStaticField(0x493C8);
	}
	static ::System::Predicate_1<::System::Collections::Generic::KeyValuePair_2<::System::Int32, ::System::Boolean>>** StaticGet___9__107_0()
	{
		return (::System::Predicate_1<::System::Collections::Generic::KeyValuePair_2<::System::Int32, ::System::Boolean>>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_06EBE0E98D90D5E7___c_TypeDefinitionIndex)->GetStaticField(0x493D0);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_06EBE0E98D90D5E7___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_06EBE0E98D90D5E7___C__CTOR_OFFSET))(this);
	}

	::System::Boolean Method_1_53B3DFCCF5820F38(::System::Collections::Generic::KeyValuePair_2<::System::Int32, ::System::Boolean> a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Collections::Generic::KeyValuePair_2<::System::Int32, ::System::Boolean>))((::PBYTE)hIl2Cpp + CLASS_1_06EBE0E98D90D5E7___C_METHOD_1_53B3DFCCF5820F38_OFFSET))(this, a1);
	}

	::System::Int32 Method_1_1363272E7C2EDAD8(::System::Collections::Generic::KeyValuePair_2<::System::Int32, ::System::Boolean> a1)
	{
		return ((::System::Int32(*)(::PVOID, ::System::Collections::Generic::KeyValuePair_2<::System::Int32, ::System::Boolean>))((::PBYTE)hIl2Cpp + CLASS_1_06EBE0E98D90D5E7___C_METHOD_1_1363272E7C2EDAD8_OFFSET))(this, a1);
	}
};

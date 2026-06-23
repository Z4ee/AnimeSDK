#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_34F7035555410463_1.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T1, typename T2> class Func_2; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }

#define CLASS_1_558AD373848C2AFF___C_METHOD_1_3C4E7CAFD261E472_OFFSET UNITYSDK_OFFSET(0xFB1CDE0)
#define CLASS_1_558AD373848C2AFF___C_METHOD_1_7439D2F0DCA77B50_OFFSET UNITYSDK_OFFSET(0xFB1CE40)
#define CLASS_1_558AD373848C2AFF___C__CCTOR_OFFSET UNITYSDK_OFFSET(0xFB1CD90)
#define CLASS_1_558AD373848C2AFF___C__CTOR_OFFSET UNITYSDK_OFFSET(0xFB1CDD0)

inline static constexpr unsigned int Class_1_558AD373848C2AFF___c_TypeDefinitionIndex = 49427;

class Class_1_558AD373848C2AFF___c : public ::System::Object
{
public:
	static ::Class_1_558AD373848C2AFF___c** StaticGet___9()
	{
		return (::Class_1_558AD373848C2AFF___c**)Il2CppClass::FromTypeDefinitionIndex(Class_1_558AD373848C2AFF___c_TypeDefinitionIndex)->GetStaticField(0x31630);
	}
	static ::System::Func_2<::System::Int32, ::System::Collections::Generic::IEnumerable_1<::Enum_3_34F7035555410463_1>*>** StaticGet___9__46_0()
	{
		return (::System::Func_2<::System::Int32, ::System::Collections::Generic::IEnumerable_1<::Enum_3_34F7035555410463_1>*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_558AD373848C2AFF___c_TypeDefinitionIndex)->GetStaticField(0x31638);
	}
	static ::System::Func_2<::System::Int32, ::Enum_3_34F7035555410463_1>** StaticGet___9__45_0()
	{
		return (::System::Func_2<::System::Int32, ::Enum_3_34F7035555410463_1>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_558AD373848C2AFF___c_TypeDefinitionIndex)->GetStaticField(0x31640);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_558AD373848C2AFF___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_558AD373848C2AFF___C__CTOR_OFFSET))(this);
	}

	::System::Collections::Generic::IEnumerable_1<::Enum_3_34F7035555410463_1>* Method_1_3C4E7CAFD261E472(::System::Int32 a1)
	{
		return ((::System::Collections::Generic::IEnumerable_1<::Enum_3_34F7035555410463_1>*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_558AD373848C2AFF___C_METHOD_1_3C4E7CAFD261E472_OFFSET))(this, a1);
	}

	::Enum_3_34F7035555410463_1 Method_1_7439D2F0DCA77B50(::System::Int32 a1)
	{
		return ((::Enum_3_34F7035555410463_1(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_558AD373848C2AFF___C_METHOD_1_7439D2F0DCA77B50_OFFSET))(this, a1);
	}
};

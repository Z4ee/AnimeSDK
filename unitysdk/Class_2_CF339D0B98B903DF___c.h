#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_DBF2701137F18AA6.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }
namespace System { class String; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define CLASS_2_CF339D0B98B903DF___C_METHOD_1_151E25A63D14DDB0_OFFSET UNITYSDK_OFFSET(0x1480E7C0)
#define CLASS_2_CF339D0B98B903DF___C_METHOD_1_1B6939D1974805B9_OFFSET UNITYSDK_OFFSET(0x1480E8F0)
#define CLASS_2_CF339D0B98B903DF___C_METHOD_1_EDFD49C942C75D6C_OFFSET UNITYSDK_OFFSET(0x1480E950)
#define CLASS_2_CF339D0B98B903DF___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1480E770)
#define CLASS_2_CF339D0B98B903DF___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1480E7B0)

inline static constexpr unsigned int Class_2_CF339D0B98B903DF___c_TypeDefinitionIndex = 54004;

class Class_2_CF339D0B98B903DF___c : public ::System::Object
{
public:
	static ::System::Action** StaticGet___9__26_4()
	{
		return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(Class_2_CF339D0B98B903DF___c_TypeDefinitionIndex)->GetStaticField(0x2F430);
	}
	static ::System::Action** StaticGet___9__26_3()
	{
		return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(Class_2_CF339D0B98B903DF___c_TypeDefinitionIndex)->GetStaticField(0x2F438);
	}
	static ::Class_2_CF339D0B98B903DF___c** StaticGet___9()
	{
		return (::Class_2_CF339D0B98B903DF___c**)Il2CppClass::FromTypeDefinitionIndex(Class_2_CF339D0B98B903DF___c_TypeDefinitionIndex)->GetStaticField(0x2F440);
	}
	static ::System::Func_2<::System::String*, ::Enum_3_DBF2701137F18AA6>** StaticGet___9__38_0()
	{
		return (::System::Func_2<::System::String*, ::Enum_3_DBF2701137F18AA6>**)Il2CppClass::FromTypeDefinitionIndex(Class_2_CF339D0B98B903DF___c_TypeDefinitionIndex)->GetStaticField(0x2F448);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_CF339D0B98B903DF___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_CF339D0B98B903DF___C__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_151E25A63D14DDB0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_CF339D0B98B903DF___C_METHOD_1_151E25A63D14DDB0_OFFSET))(this);
	}

	::Enum_3_DBF2701137F18AA6 Method_1_1B6939D1974805B9(::System::String* a1)
	{
		return ((::Enum_3_DBF2701137F18AA6(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_CF339D0B98B903DF___C_METHOD_1_1B6939D1974805B9_OFFSET))(this, a1);
	}

	::System::Void Method_1_EDFD49C942C75D6C()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_CF339D0B98B903DF___C_METHOD_1_EDFD49C942C75D6C_OFFSET))(this);
	}
};

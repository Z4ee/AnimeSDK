#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Collections/Generic/KeyValuePair_2.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define CLASS_1_163E3369E0CCE49C___C_METHOD_1_939F72123DAA79A9_OFFSET UNITYSDK_OFFSET(0x14DC8AE0)
#define CLASS_1_163E3369E0CCE49C___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x14DC8A90)
#define CLASS_1_163E3369E0CCE49C___C__CTOR_OFFSET UNITYSDK_OFFSET(0x14DC8AD0)

inline static constexpr unsigned int Class_1_163E3369E0CCE49C___c_TypeDefinitionIndex = 67773;

class Class_1_163E3369E0CCE49C___c : public ::System::Object
{
public:
	static ::Class_1_163E3369E0CCE49C___c** StaticGet___9()
	{
		return (::Class_1_163E3369E0CCE49C___c**)Il2CppClass::FromTypeDefinitionIndex(Class_1_163E3369E0CCE49C___c_TypeDefinitionIndex)->GetStaticField(0x338E0);
	}
	static ::System::Func_2<::System::Collections::Generic::KeyValuePair_2<::System::String*, ::System::String*>, ::System::String*>** StaticGet___9__3_0()
	{
		return (::System::Func_2<::System::Collections::Generic::KeyValuePair_2<::System::String*, ::System::String*>, ::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_163E3369E0CCE49C___c_TypeDefinitionIndex)->GetStaticField(0x338E8);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_163E3369E0CCE49C___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_163E3369E0CCE49C___C__CTOR_OFFSET))(this);
	}

	::System::String* Method_1_939F72123DAA79A9(::System::Collections::Generic::KeyValuePair_2<::System::String*, ::System::String*> a1)
	{
		return ((::System::String*(*)(::PVOID, ::System::Collections::Generic::KeyValuePair_2<::System::String*, ::System::String*>))((::PBYTE)hIl2Cpp + CLASS_1_163E3369E0CCE49C___C_METHOD_1_939F72123DAA79A9_OFFSET))(this, a1);
	}
};

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Collections/Generic/KeyValuePair_2.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define CLASS_1_73C7A91168CA39E6_CLASS_1_1A0A2E4E6A008911___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x166D4790)
#define CLASS_1_73C7A91168CA39E6_CLASS_1_1A0A2E4E6A008911___C__CTOR_OFFSET UNITYSDK_OFFSET(0x166D47D0)
#define CLASS_1_73C7A91168CA39E6_CLASS_1_1A0A2E4E6A008911___C__DEBUGSTRING_B__2_0_OFFSET UNITYSDK_OFFSET(0x166D47E0)

inline static constexpr unsigned int Class_1_73C7A91168CA39E6_Class_1_1A0A2E4E6A008911___c_TypeDefinitionIndex = 28986;

class Class_1_73C7A91168CA39E6_Class_1_1A0A2E4E6A008911___c : public ::System::Object
{
public:
	static ::Class_1_73C7A91168CA39E6_Class_1_1A0A2E4E6A008911___c** StaticGet___9()
	{
		return (::Class_1_73C7A91168CA39E6_Class_1_1A0A2E4E6A008911___c**)Il2CppClass::FromTypeDefinitionIndex(Class_1_73C7A91168CA39E6_Class_1_1A0A2E4E6A008911___c_TypeDefinitionIndex)->GetStaticField(0x2C6C0);
	}
	static ::System::Func_2<::System::Collections::Generic::KeyValuePair_2<::System::UInt32, ::System::UInt32>, ::System::String*>** StaticGet___9__2_0()
	{
		return (::System::Func_2<::System::Collections::Generic::KeyValuePair_2<::System::UInt32, ::System::UInt32>, ::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_73C7A91168CA39E6_Class_1_1A0A2E4E6A008911___c_TypeDefinitionIndex)->GetStaticField(0x2C6C8);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_73C7A91168CA39E6_CLASS_1_1A0A2E4E6A008911___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_73C7A91168CA39E6_CLASS_1_1A0A2E4E6A008911___C__CTOR_OFFSET))(this);
	}

	::System::String* _DebugString_b__2_0(::System::Collections::Generic::KeyValuePair_2<::System::UInt32, ::System::UInt32> p)
	{
		return ((::System::String*(*)(::PVOID, ::System::Collections::Generic::KeyValuePair_2<::System::UInt32, ::System::UInt32>))((::PBYTE)hIl2Cpp + CLASS_1_73C7A91168CA39E6_CLASS_1_1A0A2E4E6A008911___C__DEBUGSTRING_B__2_0_OFFSET))(this, p);
	}
};

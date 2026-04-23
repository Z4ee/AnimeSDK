#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System { class Type; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define CLASS_1_5B6B4449D355DFA2___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1252FED0)
#define CLASS_1_5B6B4449D355DFA2___C__CHECKAUTOBINDCALLBACKPARAMS_B__8_0_OFFSET UNITYSDK_OFFSET(0x1252FF20)
#define CLASS_1_5B6B4449D355DFA2___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1252FF10)

inline static constexpr unsigned int Class_1_5B6B4449D355DFA2___c_TypeDefinitionIndex = 67344;

class Class_1_5B6B4449D355DFA2___c : public ::System::Object
{
public:
	static ::Class_1_5B6B4449D355DFA2___c** StaticGet___9()
	{
		return (::Class_1_5B6B4449D355DFA2___c**)Il2CppClass::FromTypeDefinitionIndex(Class_1_5B6B4449D355DFA2___c_TypeDefinitionIndex)->GetStaticField(0xC330);
	}
	static ::System::Func_2<::System::Type*, ::System::String*>** StaticGet___9__8_0()
	{
		return (::System::Func_2<::System::Type*, ::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_5B6B4449D355DFA2___c_TypeDefinitionIndex)->GetStaticField(0xC338);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_5B6B4449D355DFA2___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5B6B4449D355DFA2___C__CTOR_OFFSET))(this);
	}

	::System::String* _CheckAutoBindCallBackParams_b__8_0(::System::Type* x)
	{
		return ((::System::String*(*)(::PVOID, ::System::Type*))((::PBYTE)hIl2Cpp + CLASS_1_5B6B4449D355DFA2___C__CHECKAUTOBINDCALLBACKPARAMS_B__8_0_OFFSET))(this, x);
	}
};

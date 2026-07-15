#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T> class Action_1; }

#define CLASS_2_71206B21D0A90B92_1___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x16317C70)
#define CLASS_2_71206B21D0A90B92_1___C__CTOR_OFFSET UNITYSDK_OFFSET(0x16317CB0)
#define CLASS_2_71206B21D0A90B92_1___C__ONTASKBEGIN_B__2_0_OFFSET UNITYSDK_OFFSET(0x16317CC0)

inline static constexpr unsigned int Class_2_71206B21D0A90B92_1___c_TypeDefinitionIndex = 50221;

class Class_2_71206B21D0A90B92_1___c : public ::System::Object
{
public:
	static ::System::Action_1<::System::Boolean>** StaticGet___9__2_0()
	{
		return (::System::Action_1<::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(Class_2_71206B21D0A90B92_1___c_TypeDefinitionIndex)->GetStaticField(0x56930);
	}
	static ::Class_2_71206B21D0A90B92_1___c** StaticGet___9()
	{
		return (::Class_2_71206B21D0A90B92_1___c**)Il2CppClass::FromTypeDefinitionIndex(Class_2_71206B21D0A90B92_1___c_TypeDefinitionIndex)->GetStaticField(0x56938);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_71206B21D0A90B92_1___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_71206B21D0A90B92_1___C__CTOR_OFFSET))(this);
	}

	::System::Void _OnTaskBegin_b__2_0(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_71206B21D0A90B92_1___C__ONTASKBEGIN_B__2_0_OFFSET))(this, a1);
	}
};

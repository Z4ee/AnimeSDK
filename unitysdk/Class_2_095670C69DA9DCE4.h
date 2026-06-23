#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_ED8EA8A424D45C15.h"
#include "unitysdk/Enum_3_86D58C2A2996E647.h"

class Class_1_11A58A840528E5B2;
class Class_1_2BEAA93324417DF4;
class Class_1_2EF69FD7F867E7F6;
namespace System { class EventArgs; }
namespace System { template <typename T> class Action_1; }

#define CLASS_2_095670C69DA9DCE4_METHOD_2_B4B14845111E88EF_OFFSET UNITYSDK_OFFSET(0xFB0F580)
#define CLASS_2_095670C69DA9DCE4_METHOD_2_B6BB704B01BCC35B_1_OFFSET UNITYSDK_OFFSET(0xFB0F4E0)
#define CLASS_2_095670C69DA9DCE4_METHOD_2_B6BB704B01BCC35B_OFFSET UNITYSDK_OFFSET(0xFB0F470)
#define CLASS_2_095670C69DA9DCE4_METHOD_2_E9A575D18A0748D9_OFFSET UNITYSDK_OFFSET(0xFB0F530)
#define CLASS_2_095670C69DA9DCE4__CTOR_OFFSET UNITYSDK_OFFSET(0xFB0F3B0)

inline static constexpr unsigned int Class_2_095670C69DA9DCE4_TypeDefinitionIndex = 82396;

class Class_2_095670C69DA9DCE4 : public ::Class_1_ED8EA8A424D45C15
{
public:
	::Class_1_2BEAA93324417DF4* Field_2_0; // 0x20

	::System::Void _ctor(::Class_1_11A58A840528E5B2* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_11A58A840528E5B2*))((::PBYTE)hIl2Cpp + CLASS_2_095670C69DA9DCE4__CTOR_OFFSET))(this, a1);
	}

	::System::Void Method_2_B6BB704B01BCC35B()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_095670C69DA9DCE4_METHOD_2_B6BB704B01BCC35B_OFFSET))(this);
	}

	::System::Void Method_2_E9A575D18A0748D9(::Class_1_2EF69FD7F867E7F6* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_2EF69FD7F867E7F6*))((::PBYTE)hIl2Cpp + CLASS_2_095670C69DA9DCE4_METHOD_2_E9A575D18A0748D9_OFFSET))(this, a1);
	}

	::System::Void Method_2_B4B14845111E88EF(::Enum_3_86D58C2A2996E647 a1, ::System::Action_1<::System::EventArgs*>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Enum_3_86D58C2A2996E647, ::System::Action_1<::System::EventArgs*>*))((::PBYTE)hIl2Cpp + CLASS_2_095670C69DA9DCE4_METHOD_2_B4B14845111E88EF_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_B6BB704B01BCC35B_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_095670C69DA9DCE4_METHOD_2_B6BB704B01BCC35B_1_OFFSET))(this);
	}
};

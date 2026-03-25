#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_C994EBB81CDF74CE.h"

class Class_1_3B1EA953A4067E26;
class Class_1_A7993FD8B166AE9B;
class Class_1_C4FD36003027AC99;
class Class_2_49CAB3DE74280C58;
class Class_3_D637C1E17FCBBFB0;
namespace RPG::GameCore { class ChimeraDuelEffectConfig; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_3_F8DA4733AAAD60C6_1_METHOD_3_4E22A18EF530BFA8_OFFSET UNITYSDK_OFFSET(0x8835690)
#define CLASS_3_F8DA4733AAAD60C6_1_METHOD_3_E9A575D18A0748D9_OFFSET UNITYSDK_OFFSET(0x88356F0)
#define CLASS_3_F8DA4733AAAD60C6_1_METHOD_3_F22CC08204296D0C_OFFSET UNITYSDK_OFFSET(0x8835740)
#define CLASS_3_F8DA4733AAAD60C6_1__CTOR_OFFSET UNITYSDK_OFFSET(0x8835EA0)

inline static constexpr unsigned int Class_3_F8DA4733AAAD60C6_1_TypeDefinitionIndex = 63020;

class Class_3_F8DA4733AAAD60C6_1 : public ::Class_2_C994EBB81CDF74CE
{
public:
	::Class_1_3B1EA953A4067E26* Field_3_1; // 0x10
	::Class_1_A7993FD8B166AE9B* Field_3_0; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_F8DA4733AAAD60C6_1__CTOR_OFFSET))(this);
	}

	::System::Void Method_3_4E22A18EF530BFA8(::Class_3_D637C1E17FCBBFB0* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_D637C1E17FCBBFB0*))((::PBYTE)hIl2Cpp + CLASS_3_F8DA4733AAAD60C6_1_METHOD_3_4E22A18EF530BFA8_OFFSET))(this, a1);
	}

	::System::Void Method_3_E9A575D18A0748D9(::Class_1_3B1EA953A4067E26* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_3B1EA953A4067E26*))((::PBYTE)hIl2Cpp + CLASS_3_F8DA4733AAAD60C6_1_METHOD_3_E9A575D18A0748D9_OFFSET))(this, a1);
	}

	::System::Boolean Method_3_F22CC08204296D0C(::Class_1_C4FD36003027AC99* a1, ::System::Collections::Generic::List_1<::Class_2_49CAB3DE74280C58*>* a2, ::RPG::GameCore::ChimeraDuelEffectConfig* a3)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_C4FD36003027AC99*, ::System::Collections::Generic::List_1<::Class_2_49CAB3DE74280C58*>*, ::RPG::GameCore::ChimeraDuelEffectConfig*))((::PBYTE)hIl2Cpp + CLASS_3_F8DA4733AAAD60C6_1_METHOD_3_F22CC08204296D0C_OFFSET))(this, a1, a2, a3);
	}
};

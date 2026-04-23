#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_4F79C408792F4D54.h"

class Class_1_3B1EA953A4067E26;
class Class_1_43BD383C98B4C0C5_176;
class Class_1_C4FD36003027AC99;
class Class_2_49CAB3DE74280C58;
class Class_3_D637C1E17FCBBFB0;
namespace RPG::GameCore { class ChimeraDuelEffectConfig; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_7960AFC189023812_METHOD_2_6B6AE2B3E1C3264F_OFFSET UNITYSDK_OFFSET(0x9A1A7A0)
#define CLASS_2_7960AFC189023812_METHOD_2_83FFE886FDCFFFA5_OFFSET UNITYSDK_OFFSET(0x9A1A840)
#define CLASS_2_7960AFC189023812_METHOD_2_E9A575D18A0748D9_OFFSET UNITYSDK_OFFSET(0x9A1A7F0)
#define CLASS_2_7960AFC189023812__CTOR_OFFSET UNITYSDK_OFFSET(0x9A1BB40)

inline static constexpr unsigned int Class_2_7960AFC189023812_TypeDefinitionIndex = 71029;

class Class_2_7960AFC189023812 : public ::Class_1_4F79C408792F4D54
{
public:
	::Class_3_D637C1E17FCBBFB0* Field_2_0; // 0x10
	::Class_1_3B1EA953A4067E26* Field_2_1; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7960AFC189023812__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_6B6AE2B3E1C3264F(::Class_3_D637C1E17FCBBFB0* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_D637C1E17FCBBFB0*))((::PBYTE)hIl2Cpp + CLASS_2_7960AFC189023812_METHOD_2_6B6AE2B3E1C3264F_OFFSET))(this, a1);
	}

	::System::Void Method_2_E9A575D18A0748D9(::Class_1_3B1EA953A4067E26* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_3B1EA953A4067E26*))((::PBYTE)hIl2Cpp + CLASS_2_7960AFC189023812_METHOD_2_E9A575D18A0748D9_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_83FFE886FDCFFFA5(::Class_1_C4FD36003027AC99* a1, ::System::Collections::Generic::List_1<::Class_2_49CAB3DE74280C58*>* a2, ::RPG::GameCore::ChimeraDuelEffectConfig* a3, ::Class_1_43BD383C98B4C0C5_176*& a4)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_C4FD36003027AC99*, ::System::Collections::Generic::List_1<::Class_2_49CAB3DE74280C58*>*, ::RPG::GameCore::ChimeraDuelEffectConfig*, ::Class_1_43BD383C98B4C0C5_176*&))((::PBYTE)hIl2Cpp + CLASS_2_7960AFC189023812_METHOD_2_83FFE886FDCFFFA5_OFFSET))(this, a1, a2, a3, a4);
	}
};

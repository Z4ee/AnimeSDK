#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_75E63034C2ED40FA.h"

class Class_1_3B1EA953A4067E26;
class Class_1_A7993FD8B166AE9B;
class Class_1_A92BC063ED2379EB;
class Class_2_B66C1067C0468FBB;
class Class_3_D637C1E17FCBBFB0;
namespace RPG::GameCore { class ChimeraDuelEffectConfig; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_3_72EAA3C4F63878B7_1_METHOD_3_4E22A18EF530BFA8_OFFSET UNITYSDK_OFFSET(0x1620B590)
#define CLASS_3_72EAA3C4F63878B7_1_METHOD_3_5B25D7C76CC65E7A_OFFSET UNITYSDK_OFFSET(0x1620B640)
#define CLASS_3_72EAA3C4F63878B7_1_METHOD_3_E9A575D18A0748D9_OFFSET UNITYSDK_OFFSET(0x1620B5F0)
#define CLASS_3_72EAA3C4F63878B7_1__CTOR_OFFSET UNITYSDK_OFFSET(0x1620BD60)

inline static constexpr unsigned int Class_3_72EAA3C4F63878B7_1_TypeDefinitionIndex = 73523;

class Class_3_72EAA3C4F63878B7_1 : public ::Class_2_75E63034C2ED40FA
{
public:
	::Class_1_3B1EA953A4067E26* Field_3_0; // 0x10
	::Class_1_A7993FD8B166AE9B* Field_3_1; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_72EAA3C4F63878B7_1__CTOR_OFFSET))(this);
	}

	::System::Void Method_3_4E22A18EF530BFA8(::Class_3_D637C1E17FCBBFB0* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_D637C1E17FCBBFB0*))((::PBYTE)hIl2Cpp + CLASS_3_72EAA3C4F63878B7_1_METHOD_3_4E22A18EF530BFA8_OFFSET))(this, a1);
	}

	::System::Void Method_3_E9A575D18A0748D9(::Class_1_3B1EA953A4067E26* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_3B1EA953A4067E26*))((::PBYTE)hIl2Cpp + CLASS_3_72EAA3C4F63878B7_1_METHOD_3_E9A575D18A0748D9_OFFSET))(this, a1);
	}

	::System::Boolean Method_3_5B25D7C76CC65E7A(::Class_1_A92BC063ED2379EB* a1, ::System::Collections::Generic::List_1<::Class_2_B66C1067C0468FBB*>* a2, ::RPG::GameCore::ChimeraDuelEffectConfig* a3)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_A92BC063ED2379EB*, ::System::Collections::Generic::List_1<::Class_2_B66C1067C0468FBB*>*, ::RPG::GameCore::ChimeraDuelEffectConfig*))((::PBYTE)hIl2Cpp + CLASS_3_72EAA3C4F63878B7_1_METHOD_3_5B25D7C76CC65E7A_OFFSET))(this, a1, a2, a3);
	}
};

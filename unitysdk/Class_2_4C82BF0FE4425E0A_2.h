#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_4F79C408792F4D54.h"

class Class_1_3B1EA953A4067E26;
class Class_1_43BD383C98B4C0C5_170;
class Class_1_C4FD36003027AC99;
class Class_1_FB3E7B71A45FEB7C;
class Class_2_49CAB3DE74280C58;
class Class_3_D637C1E17FCBBFB0;
namespace RPG::GameCore { class ChimeraDuelEffectConfig; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_4C82BF0FE4425E0A_2_METHOD_2_4E22A18EF530BFA8_OFFSET UNITYSDK_OFFSET(0x115F8E00)
#define CLASS_2_4C82BF0FE4425E0A_2_METHOD_2_BA4CE27271C37FA3_OFFSET UNITYSDK_OFFSET(0x115F8EB0)
#define CLASS_2_4C82BF0FE4425E0A_2_METHOD_2_E9A575D18A0748D9_OFFSET UNITYSDK_OFFSET(0x115F8E60)
#define CLASS_2_4C82BF0FE4425E0A_2__CTOR_OFFSET UNITYSDK_OFFSET(0x115F9280)

inline static constexpr unsigned int Class_2_4C82BF0FE4425E0A_2_TypeDefinitionIndex = 63015;

class Class_2_4C82BF0FE4425E0A_2 : public ::Class_1_4F79C408792F4D54
{
public:
	::Class_1_FB3E7B71A45FEB7C* Field_2_0; // 0x10
	::Class_1_3B1EA953A4067E26* Field_2_1; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4C82BF0FE4425E0A_2__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_4E22A18EF530BFA8(::Class_3_D637C1E17FCBBFB0* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_D637C1E17FCBBFB0*))((::PBYTE)hIl2Cpp + CLASS_2_4C82BF0FE4425E0A_2_METHOD_2_4E22A18EF530BFA8_OFFSET))(this, a1);
	}

	::System::Void Method_2_E9A575D18A0748D9(::Class_1_3B1EA953A4067E26* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_3B1EA953A4067E26*))((::PBYTE)hIl2Cpp + CLASS_2_4C82BF0FE4425E0A_2_METHOD_2_E9A575D18A0748D9_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_BA4CE27271C37FA3(::Class_1_C4FD36003027AC99* a1, ::System::Collections::Generic::List_1<::Class_2_49CAB3DE74280C58*>* a2, ::RPG::GameCore::ChimeraDuelEffectConfig* a3, ::Class_1_43BD383C98B4C0C5_170*& a4)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_C4FD36003027AC99*, ::System::Collections::Generic::List_1<::Class_2_49CAB3DE74280C58*>*, ::RPG::GameCore::ChimeraDuelEffectConfig*, ::Class_1_43BD383C98B4C0C5_170*&))((::PBYTE)hIl2Cpp + CLASS_2_4C82BF0FE4425E0A_2_METHOD_2_BA4CE27271C37FA3_OFFSET))(this, a1, a2, a3, a4);
	}
};

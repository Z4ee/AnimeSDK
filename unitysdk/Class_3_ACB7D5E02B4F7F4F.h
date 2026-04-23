#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_C994EBB81CDF74CE.h"

class Class_1_3B1EA953A4067E26;
class Class_1_C4FD36003027AC99;
class Class_2_49CAB3DE74280C58;
class Class_3_D637C1E17FCBBFB0;
namespace RPG::GameCore { class ChimeraDuelEffectConfig; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_3_ACB7D5E02B4F7F4F_METHOD_3_6B6AE2B3E1C3264F_OFFSET UNITYSDK_OFFSET(0x11B36700)
#define CLASS_3_ACB7D5E02B4F7F4F_METHOD_3_CC99BBFAC9417CA7_OFFSET UNITYSDK_OFFSET(0x11B37240)
#define CLASS_3_ACB7D5E02B4F7F4F_METHOD_3_D6752B7ECE04313B_OFFSET UNITYSDK_OFFSET(0x11B36750)
#define CLASS_3_ACB7D5E02B4F7F4F_METHOD_3_E9A575D18A0748D9_OFFSET UNITYSDK_OFFSET(0x11B366B0)
#define CLASS_3_ACB7D5E02B4F7F4F__CTOR_OFFSET UNITYSDK_OFFSET(0x11B376D0)

inline static constexpr unsigned int Class_3_ACB7D5E02B4F7F4F_TypeDefinitionIndex = 71069;

class Class_3_ACB7D5E02B4F7F4F : public ::Class_2_C994EBB81CDF74CE
{
public:
	::Class_1_3B1EA953A4067E26* Field_3_0; // 0x10
	::Class_3_D637C1E17FCBBFB0* Field_3_1; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_ACB7D5E02B4F7F4F__CTOR_OFFSET))(this);
	}

	::System::Void Method_3_E9A575D18A0748D9(::Class_1_3B1EA953A4067E26* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_3B1EA953A4067E26*))((::PBYTE)hIl2Cpp + CLASS_3_ACB7D5E02B4F7F4F_METHOD_3_E9A575D18A0748D9_OFFSET))(this, a1);
	}

	::System::Void Method_3_6B6AE2B3E1C3264F(::Class_3_D637C1E17FCBBFB0* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_D637C1E17FCBBFB0*))((::PBYTE)hIl2Cpp + CLASS_3_ACB7D5E02B4F7F4F_METHOD_3_6B6AE2B3E1C3264F_OFFSET))(this, a1);
	}

	::System::Boolean Method_3_D6752B7ECE04313B(::Class_1_C4FD36003027AC99* a1, ::System::Collections::Generic::List_1<::Class_2_49CAB3DE74280C58*>* a2, ::RPG::GameCore::ChimeraDuelEffectConfig* a3)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_C4FD36003027AC99*, ::System::Collections::Generic::List_1<::Class_2_49CAB3DE74280C58*>*, ::RPG::GameCore::ChimeraDuelEffectConfig*))((::PBYTE)hIl2Cpp + CLASS_3_ACB7D5E02B4F7F4F_METHOD_3_D6752B7ECE04313B_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_3_CC99BBFAC9417CA7()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_ACB7D5E02B4F7F4F_METHOD_3_CC99BBFAC9417CA7_OFFSET))(this);
	}
};

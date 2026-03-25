#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_C994EBB81CDF74CE.h"

class Class_1_3B1EA953A4067E26;
class Class_1_C4FD36003027AC99;
class Class_2_49CAB3DE74280C58;
class Class_3_D637C1E17FCBBFB0;
namespace RPG::GameCore { class ChimeraDuelEffectConfig; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_3_100B6A88CC9E064F_METHOD_3_13D3EC53C27306BC_OFFSET UNITYSDK_OFFSET(0xF373870)
#define CLASS_3_100B6A88CC9E064F_METHOD_3_6B6AE2B3E1C3264F_OFFSET UNITYSDK_OFFSET(0xF373820)
#define CLASS_3_100B6A88CC9E064F_METHOD_3_E9A575D18A0748D9_OFFSET UNITYSDK_OFFSET(0xF3737D0)
#define CLASS_3_100B6A88CC9E064F__CTOR_OFFSET UNITYSDK_OFFSET(0xF373EB0)

inline static constexpr unsigned int Class_3_100B6A88CC9E064F_TypeDefinitionIndex = 63040;

class Class_3_100B6A88CC9E064F : public ::Class_2_C994EBB81CDF74CE
{
public:
	::Class_1_3B1EA953A4067E26* Field_3_0; // 0x10
	::Class_3_D637C1E17FCBBFB0* Field_3_1; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_100B6A88CC9E064F__CTOR_OFFSET))(this);
	}

	::System::Void Method_3_E9A575D18A0748D9(::Class_1_3B1EA953A4067E26* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_3B1EA953A4067E26*))((::PBYTE)hIl2Cpp + CLASS_3_100B6A88CC9E064F_METHOD_3_E9A575D18A0748D9_OFFSET))(this, a1);
	}

	::System::Void Method_3_6B6AE2B3E1C3264F(::Class_3_D637C1E17FCBBFB0* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_D637C1E17FCBBFB0*))((::PBYTE)hIl2Cpp + CLASS_3_100B6A88CC9E064F_METHOD_3_6B6AE2B3E1C3264F_OFFSET))(this, a1);
	}

	::System::Boolean Method_3_13D3EC53C27306BC(::Class_1_C4FD36003027AC99* a1, ::System::Collections::Generic::List_1<::Class_2_49CAB3DE74280C58*>* a2, ::RPG::GameCore::ChimeraDuelEffectConfig* a3)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_C4FD36003027AC99*, ::System::Collections::Generic::List_1<::Class_2_49CAB3DE74280C58*>*, ::RPG::GameCore::ChimeraDuelEffectConfig*))((::PBYTE)hIl2Cpp + CLASS_3_100B6A88CC9E064F_METHOD_3_13D3EC53C27306BC_OFFSET))(this, a1, a2, a3);
	}
};

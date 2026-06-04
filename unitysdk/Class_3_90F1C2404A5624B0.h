#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_6B72CB78996603D1.h"

class Class_1_3B1EA953A4067E26;
class Class_1_A92BC063ED2379EB;
class Class_2_B66C1067C0468FBB;
class Class_3_D637C1E17FCBBFB0;
namespace RPG::GameCore { class ChimeraDuelEffectConfig; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_3_90F1C2404A5624B0_METHOD_3_6B6AE2B3E1C3264F_OFFSET UNITYSDK_OFFSET(0x13A243C0)
#define CLASS_3_90F1C2404A5624B0_METHOD_3_D5B3597278377FA6_OFFSET UNITYSDK_OFFSET(0x13A24410)
#define CLASS_3_90F1C2404A5624B0_METHOD_3_E9A575D18A0748D9_OFFSET UNITYSDK_OFFSET(0x13A24370)
#define CLASS_3_90F1C2404A5624B0__CTOR_OFFSET UNITYSDK_OFFSET(0x13A24AB0)

inline static constexpr unsigned int Class_3_90F1C2404A5624B0_TypeDefinitionIndex = 72012;

class Class_3_90F1C2404A5624B0 : public ::Class_2_6B72CB78996603D1
{
public:
	::Class_1_3B1EA953A4067E26* Field_3_0; // 0x10
	::Class_3_D637C1E17FCBBFB0* Field_3_1; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_90F1C2404A5624B0__CTOR_OFFSET))(this);
	}

	::System::Void Method_3_E9A575D18A0748D9(::Class_1_3B1EA953A4067E26* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_3B1EA953A4067E26*))((::PBYTE)hIl2Cpp + CLASS_3_90F1C2404A5624B0_METHOD_3_E9A575D18A0748D9_OFFSET))(this, a1);
	}

	::System::Void Method_3_6B6AE2B3E1C3264F(::Class_3_D637C1E17FCBBFB0* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_D637C1E17FCBBFB0*))((::PBYTE)hIl2Cpp + CLASS_3_90F1C2404A5624B0_METHOD_3_6B6AE2B3E1C3264F_OFFSET))(this, a1);
	}

	::System::Boolean Method_3_D5B3597278377FA6(::Class_1_A92BC063ED2379EB* a1, ::System::Collections::Generic::List_1<::Class_2_B66C1067C0468FBB*>* a2, ::RPG::GameCore::ChimeraDuelEffectConfig* a3)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_A92BC063ED2379EB*, ::System::Collections::Generic::List_1<::Class_2_B66C1067C0468FBB*>*, ::RPG::GameCore::ChimeraDuelEffectConfig*))((::PBYTE)hIl2Cpp + CLASS_3_90F1C2404A5624B0_METHOD_3_D5B3597278377FA6_OFFSET))(this, a1, a2, a3);
	}
};

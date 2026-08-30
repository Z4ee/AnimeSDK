#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_75E63034C2ED40FA.h"

class Class_1_3B1EA953A4067E26;
class Class_1_A92BC063ED2379EB;
class Class_2_B66C1067C0468FBB;
class Class_3_E6ABB31B8050F1C6;
namespace RPG::GameCore { class ChimeraDuelEffectConfig; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_3_24C746DD60F0414D_METHOD_3_5084DDA59E629937_OFFSET UNITYSDK_OFFSET(0x12213BB0)
#define CLASS_3_24C746DD60F0414D_METHOD_3_6B6AE2B3E1C3264F_OFFSET UNITYSDK_OFFSET(0x12213B60)
#define CLASS_3_24C746DD60F0414D_METHOD_3_E9A575D18A0748D9_OFFSET UNITYSDK_OFFSET(0x12213B10)
#define CLASS_3_24C746DD60F0414D__CTOR_OFFSET UNITYSDK_OFFSET(0x12214410)

inline static constexpr unsigned int Class_3_24C746DD60F0414D_TypeDefinitionIndex = 76998;

class Class_3_24C746DD60F0414D : public ::Class_2_75E63034C2ED40FA
{
public:
	::Class_1_3B1EA953A4067E26* FKINCGODJEP; // 0x10
	::Class_3_E6ABB31B8050F1C6* PDENFEFCAGN; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_24C746DD60F0414D__CTOR_OFFSET))(this);
	}

	::System::Void Method_3_E9A575D18A0748D9(::Class_1_3B1EA953A4067E26* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_3B1EA953A4067E26*))((::PBYTE)hIl2Cpp + CLASS_3_24C746DD60F0414D_METHOD_3_E9A575D18A0748D9_OFFSET))(this, a1);
	}

	::System::Void Method_3_6B6AE2B3E1C3264F(::Class_3_E6ABB31B8050F1C6* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_E6ABB31B8050F1C6*))((::PBYTE)hIl2Cpp + CLASS_3_24C746DD60F0414D_METHOD_3_6B6AE2B3E1C3264F_OFFSET))(this, a1);
	}

	::System::Boolean Method_3_5084DDA59E629937(::Class_1_A92BC063ED2379EB* a1, ::System::Collections::Generic::List_1<::Class_2_B66C1067C0468FBB*>* a2, ::RPG::GameCore::ChimeraDuelEffectConfig* a3)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_A92BC063ED2379EB*, ::System::Collections::Generic::List_1<::Class_2_B66C1067C0468FBB*>*, ::RPG::GameCore::ChimeraDuelEffectConfig*))((::PBYTE)hIl2Cpp + CLASS_3_24C746DD60F0414D_METHOD_3_5084DDA59E629937_OFFSET))(this, a1, a2, a3);
	}
};

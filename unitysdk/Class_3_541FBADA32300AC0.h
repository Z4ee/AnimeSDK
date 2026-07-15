#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_75E63034C2ED40FA.h"

class Class_1_3B1EA953A4067E26;
class Class_1_A92BC063ED2379EB;
class Class_2_B66C1067C0468FBB;
namespace RPG::GameCore { class ChimeraDuelEffectConfig; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_3_541FBADA32300AC0_METHOD_3_7AE332CBEA4F8811_OFFSET UNITYSDK_OFFSET(0x183E8650)
#define CLASS_3_541FBADA32300AC0_METHOD_3_E9A575D18A0748D9_OFFSET UNITYSDK_OFFSET(0x183E8600)
#define CLASS_3_541FBADA32300AC0__CTOR_OFFSET UNITYSDK_OFFSET(0x183E8900)

inline static constexpr unsigned int Class_3_541FBADA32300AC0_TypeDefinitionIndex = 73516;

class Class_3_541FBADA32300AC0 : public ::Class_2_75E63034C2ED40FA
{
public:
	::Class_1_3B1EA953A4067E26* Field_3_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_541FBADA32300AC0__CTOR_OFFSET))(this);
	}

	::System::Void Method_3_E9A575D18A0748D9(::Class_1_3B1EA953A4067E26* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_3B1EA953A4067E26*))((::PBYTE)hIl2Cpp + CLASS_3_541FBADA32300AC0_METHOD_3_E9A575D18A0748D9_OFFSET))(this, a1);
	}

	::System::Boolean Method_3_7AE332CBEA4F8811(::Class_1_A92BC063ED2379EB* a1, ::System::Collections::Generic::List_1<::Class_2_B66C1067C0468FBB*>* a2, ::RPG::GameCore::ChimeraDuelEffectConfig* a3)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_A92BC063ED2379EB*, ::System::Collections::Generic::List_1<::Class_2_B66C1067C0468FBB*>*, ::RPG::GameCore::ChimeraDuelEffectConfig*))((::PBYTE)hIl2Cpp + CLASS_3_541FBADA32300AC0_METHOD_3_7AE332CBEA4F8811_OFFSET))(this, a1, a2, a3);
	}
};

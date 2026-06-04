#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_6B72CB78996603D1.h"

class Class_1_A92BC063ED2379EB;
class Class_1_FB3E7B71A45FEB7C;
class Class_2_B66C1067C0468FBB;
class Class_3_D637C1E17FCBBFB0;
namespace RPG::GameCore { class ChimeraDuelEffectConfig; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_3_03F4AA8626E2100E_METHOD_3_4E22A18EF530BFA8_OFFSET UNITYSDK_OFFSET(0x143B0340)
#define CLASS_3_03F4AA8626E2100E_METHOD_3_9276CA9E1909CA0C_OFFSET UNITYSDK_OFFSET(0x143B03A0)
#define CLASS_3_03F4AA8626E2100E__CTOR_OFFSET UNITYSDK_OFFSET(0x143B07E0)

inline static constexpr unsigned int Class_3_03F4AA8626E2100E_TypeDefinitionIndex = 71973;

class Class_3_03F4AA8626E2100E : public ::Class_2_6B72CB78996603D1
{
public:
	::Class_1_FB3E7B71A45FEB7C* Field_3_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_03F4AA8626E2100E__CTOR_OFFSET))(this);
	}

	::System::Void Method_3_4E22A18EF530BFA8(::Class_3_D637C1E17FCBBFB0* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_D637C1E17FCBBFB0*))((::PBYTE)hIl2Cpp + CLASS_3_03F4AA8626E2100E_METHOD_3_4E22A18EF530BFA8_OFFSET))(this, a1);
	}

	::System::Boolean Method_3_9276CA9E1909CA0C(::Class_1_A92BC063ED2379EB* a1, ::System::Collections::Generic::List_1<::Class_2_B66C1067C0468FBB*>* a2, ::RPG::GameCore::ChimeraDuelEffectConfig* a3)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_A92BC063ED2379EB*, ::System::Collections::Generic::List_1<::Class_2_B66C1067C0468FBB*>*, ::RPG::GameCore::ChimeraDuelEffectConfig*))((::PBYTE)hIl2Cpp + CLASS_3_03F4AA8626E2100E_METHOD_3_9276CA9E1909CA0C_OFFSET))(this, a1, a2, a3);
	}
};

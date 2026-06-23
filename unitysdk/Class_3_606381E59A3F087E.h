#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_40CD888D5D4FCB5B.h"
#include "unitysdk/MoleMole/Battle/LevelQuestConditionOperation.h"
#include "unitysdk/MoleMole/Battle/LevelQuestOperation.h"

class Class_1_B7E341C5F1A6F199;
class Class_2_3AD7450D1E94454F;
class Class_3_E7DAE994C565ED1F;
namespace MoleMole::Battle { class Entity; }
namespace Nap::NapECS { class EcsEntity; }
namespace Nap::NapECS { class EcsFilter; }
namespace Nap::NapECS { class EcsWorld; }
namespace System { class Action; }

#define CLASS_3_606381E59A3F087E_CREATEFILTERS_OFFSET UNITYSDK_OFFSET(0x15CCACF0)
#define CLASS_3_606381E59A3F087E_METHOD_3_124ADC42B8868BB5_OFFSET UNITYSDK_OFFSET(0x15CCB8C0)
#define CLASS_3_606381E59A3F087E_METHOD_3_1C15B12D1E054DD1_OFFSET UNITYSDK_OFFSET(0x15CCBBE0)
#define CLASS_3_606381E59A3F087E_METHOD_3_22BF706A189D417F_OFFSET UNITYSDK_OFFSET(0x15CCB040)
#define CLASS_3_606381E59A3F087E_METHOD_3_23F1C081B4CA6D2F_OFFSET UNITYSDK_OFFSET(0x15CCB5C0)
#define CLASS_3_606381E59A3F087E_METHOD_3_49418CF9B7F89B7D_OFFSET UNITYSDK_OFFSET(0x15CCBE00)
#define CLASS_3_606381E59A3F087E_METHOD_3_57926C881784E75F_OFFSET UNITYSDK_OFFSET(0x15CCB1C0)
#define CLASS_3_606381E59A3F087E_METHOD_3_A11144519902A27F_OFFSET UNITYSDK_OFFSET(0x15CCB710)
#define CLASS_3_606381E59A3F087E_METHOD_3_BADC81CF9C936EDA_OFFSET UNITYSDK_OFFSET(0x15CCB830)
#define CLASS_3_606381E59A3F087E_METHOD_3_BCE0870E24CB5A0E_OFFSET UNITYSDK_OFFSET(0x15CCB360)
#define CLASS_3_606381E59A3F087E_METHOD_3_CA31A291D148EB87_OFFSET UNITYSDK_OFFSET(0x15CCB230)
#define CLASS_3_606381E59A3F087E_METHOD_3_FFA995A2FFF926F0_OFFSET UNITYSDK_OFFSET(0x15CCB760)
#define CLASS_3_606381E59A3F087E__CTOR_OFFSET UNITYSDK_OFFSET(0x15CCAFF0)

inline static constexpr unsigned int Class_3_606381E59A3F087E_TypeDefinitionIndex = 41344;

class Class_3_606381E59A3F087E : public ::Class_2_40CD888D5D4FCB5B
{
public:
	::Nap::NapECS::EcsFilter* Field_3_0; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_606381E59A3F087E__CTOR_OFFSET))(this);
	}

	::System::Void CreateFilters(::Nap::NapECS::EcsWorld* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Nap::NapECS::EcsWorld*))((::PBYTE)hIl2Cpp + CLASS_3_606381E59A3F087E_CREATEFILTERS_OFFSET))(this, a1);
	}

	::System::Void Method_3_22BF706A189D417F(::Nap::NapECS::EcsEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Nap::NapECS::EcsEntity*))((::PBYTE)hIl2Cpp + CLASS_3_606381E59A3F087E_METHOD_3_22BF706A189D417F_OFFSET))(this, a1);
	}

	static ::System::Int32 Method_3_57926C881784E75F(::System::Int32 a1, ::MoleMole::Battle::LevelQuestConditionOperation a2, ::System::Int32 a3)
	{
		return ((::System::Int32(*)(::System::Int32, ::MoleMole::Battle::LevelQuestConditionOperation, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_3_606381E59A3F087E_METHOD_3_57926C881784E75F_OFFSET))(a1, a2, a3);
	}

	static ::System::Int32 Method_3_CA31A291D148EB87(::Class_3_E7DAE994C565ED1F* a1, ::System::Int32 a2)
	{
		return ((::System::Int32(*)(::Class_3_E7DAE994C565ED1F*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_3_606381E59A3F087E_METHOD_3_CA31A291D148EB87_OFFSET))(a1, a2);
	}

	::System::Void Method_3_BCE0870E24CB5A0E(::Class_2_3AD7450D1E94454F* a1, ::MoleMole::Battle::Entity* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_3AD7450D1E94454F*, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_3_606381E59A3F087E_METHOD_3_BCE0870E24CB5A0E_OFFSET))(this, a1, a2);
	}

	static ::System::Void Method_3_23F1C081B4CA6D2F(::Class_3_E7DAE994C565ED1F* a1, ::System::Int32 a2, ::MoleMole::Battle::LevelQuestOperation a3)
	{
		return ((::System::Void(*)(::Class_3_E7DAE994C565ED1F*, ::System::Int32, ::MoleMole::Battle::LevelQuestOperation))((::PBYTE)hIl2Cpp + CLASS_3_606381E59A3F087E_METHOD_3_23F1C081B4CA6D2F_OFFSET))(a1, a2, a3);
	}

	::System::Void Method_3_A11144519902A27F(::Nap::NapECS::EcsEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Nap::NapECS::EcsEntity*))((::PBYTE)hIl2Cpp + CLASS_3_606381E59A3F087E_METHOD_3_A11144519902A27F_OFFSET))(this, a1);
	}

	::System::Void Method_3_FFA995A2FFF926F0(::Class_1_B7E341C5F1A6F199* a1, ::MoleMole::Battle::Entity* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_B7E341C5F1A6F199*, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_3_606381E59A3F087E_METHOD_3_FFA995A2FFF926F0_OFFSET))(this, a1, a2);
	}

	::System::Void Method_3_BADC81CF9C936EDA(::Nap::NapECS::EcsWorld* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Nap::NapECS::EcsWorld*))((::PBYTE)hIl2Cpp + CLASS_3_606381E59A3F087E_METHOD_3_BADC81CF9C936EDA_OFFSET))(this, a1);
	}

	static ::System::Void Method_3_124ADC42B8868BB5(::Class_3_E7DAE994C565ED1F* a1, ::System::Int32 a2, ::System::Boolean a3, ::MoleMole::Battle::LevelQuestConditionOperation a4, ::System::Int32 a5)
	{
		return ((::System::Void(*)(::Class_3_E7DAE994C565ED1F*, ::System::Int32, ::System::Boolean, ::MoleMole::Battle::LevelQuestConditionOperation, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_3_606381E59A3F087E_METHOD_3_124ADC42B8868BB5_OFFSET))(a1, a2, a3, a4, a5);
	}

	static ::System::Boolean Method_3_1C15B12D1E054DD1(::Class_3_E7DAE994C565ED1F* a1, ::System::Int32 a2, ::System::Action* a3, ::System::Action* a4, ::System::Action* a5)
	{
		return ((::System::Boolean(*)(::Class_3_E7DAE994C565ED1F*, ::System::Int32, ::System::Action*, ::System::Action*, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_3_606381E59A3F087E_METHOD_3_1C15B12D1E054DD1_OFFSET))(a1, a2, a3, a4, a5);
	}

	static ::System::Int32 Method_3_49418CF9B7F89B7D(::Class_3_E7DAE994C565ED1F* a1, ::System::Int32 a2, ::System::Boolean a3)
	{
		return ((::System::Int32(*)(::Class_3_E7DAE994C565ED1F*, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_3_606381E59A3F087E_METHOD_3_49418CF9B7F89B7D_OFFSET))(a1, a2, a3);
	}
};

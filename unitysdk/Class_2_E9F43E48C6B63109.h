#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGame/FourRotateVoxel/FourRotateVoxelTriggerActionType.h"
#include "unitysdk/RPG/Client/LittleGame/SimpleTriggerService_1.h"
#include "unitysdk/RPG/GCFreeClosure/FuncClosureR_1.h"

class Class_1_6A4548AFE753106B;
class Class_1_867B6CE75953535A_1;
class Class_2_0C58AD91B0F4D809;
class Class_3_D6E9A038FA23103A;
namespace RPG::GameCore { class PropButtonConfig; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace UnityEngine { class Transform; }

#define CLASS_2_E9F43E48C6B63109_CLEARTRIGGER_OFFSET UNITYSDK_OFFSET(0xE4669A0)
#define CLASS_2_E9F43E48C6B63109_METHOD_2_0C32ED5B41B1582B_OFFSET UNITYSDK_OFFSET(0xE466850)
#define CLASS_2_E9F43E48C6B63109_METHOD_2_3E7178C5ECF017DB_OFFSET UNITYSDK_OFFSET(0xE466800)
#define CLASS_2_E9F43E48C6B63109_METHOD_2_417F137CE51275EF_OFFSET UNITYSDK_OFFSET(0xE466630)
#define CLASS_2_E9F43E48C6B63109_METHOD_2_69CD85726D432382_OFFSET UNITYSDK_OFFSET(0xE466F00)
#define CLASS_2_E9F43E48C6B63109_METHOD_2_D8F20C63102E0631_OFFSET UNITYSDK_OFFSET(0xE4660F0)
#define CLASS_2_E9F43E48C6B63109__CHECKDISABLEBUTTONCONDITIONS_OFFSET UNITYSDK_OFFSET(0xE466CE0)
#define CLASS_2_E9F43E48C6B63109__CHECKENABLEBUTTONCONDITIONS_OFFSET UNITYSDK_OFFSET(0xE466A20)
#define CLASS_2_E9F43E48C6B63109__CTOR_OFFSET UNITYSDK_OFFSET(0xE466780)
#define CLASS_2_E9F43E48C6B63109__GET_CHECKDISABLEINTERACT_B__2_0_OFFSET UNITYSDK_OFFSET(0xE466F50)

inline static constexpr unsigned int Class_2_E9F43E48C6B63109_TypeDefinitionIndex = 62464;

class Class_2_E9F43E48C6B63109 : public ::RPG::Client::LittleGame::SimpleTriggerService_1<::Class_2_0C58AD91B0F4D809*>
{
public:
	::Class_1_867B6CE75953535A_1* Field_2_0; // 0x38
	::Class_3_D6E9A038FA23103A* Field_2_1; // 0x40
	::System::Boolean Field_2_2; // 0x48

	::System::Void _ctor(::Class_3_D6E9A038FA23103A* a1, ::Class_1_867B6CE75953535A_1* a2, ::UnityEngine::Transform* a3)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_D6E9A038FA23103A*, ::Class_1_867B6CE75953535A_1*, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + CLASS_2_E9F43E48C6B63109__CTOR_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_2_D8F20C63102E0631(::Class_2_0C58AD91B0F4D809* a1, ::RPG::GameCore::PropButtonConfig* a2, ::System::Action_1<::Class_2_0C58AD91B0F4D809*>* a3)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_0C58AD91B0F4D809*, ::RPG::GameCore::PropButtonConfig*, ::System::Action_1<::Class_2_0C58AD91B0F4D809*>*))((::PBYTE)hIl2Cpp + CLASS_2_E9F43E48C6B63109_METHOD_2_D8F20C63102E0631_OFFSET))(this, a1, a2, a3);
	}

	::RPG::GCFreeClosure::FuncClosureR_1<::System::Boolean> Method_2_417F137CE51275EF()
	{
		return ((::RPG::GCFreeClosure::FuncClosureR_1<::System::Boolean>(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E9F43E48C6B63109_METHOD_2_417F137CE51275EF_OFFSET))(this);
	}

	::System::Void Method_2_3E7178C5ECF017DB(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_E9F43E48C6B63109_METHOD_2_3E7178C5ECF017DB_OFFSET))(this, a1);
	}

	::System::Void Method_2_0C32ED5B41B1582B(::Class_2_0C58AD91B0F4D809* a1, ::Class_1_6A4548AFE753106B* a2, ::System::String* a3)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_0C58AD91B0F4D809*, ::Class_1_6A4548AFE753106B*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_E9F43E48C6B63109_METHOD_2_0C32ED5B41B1582B_OFFSET))(this, a1, a2, a3);
	}

	::System::Void ClearTrigger(::Class_2_0C58AD91B0F4D809* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_0C58AD91B0F4D809*))((::PBYTE)hIl2Cpp + CLASS_2_E9F43E48C6B63109_CLEARTRIGGER_OFFSET))(this, a1);
	}

	::System::Boolean _CheckEnableButtonConditions(::Class_2_0C58AD91B0F4D809* a1, ::Class_1_6A4548AFE753106B* a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_2_0C58AD91B0F4D809*, ::Class_1_6A4548AFE753106B*))((::PBYTE)hIl2Cpp + CLASS_2_E9F43E48C6B63109__CHECKENABLEBUTTONCONDITIONS_OFFSET))(this, a1, a2);
	}

	::System::Boolean _CheckDisableButtonConditions(::Class_2_0C58AD91B0F4D809* a1, ::Class_1_6A4548AFE753106B* a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_2_0C58AD91B0F4D809*, ::Class_1_6A4548AFE753106B*))((::PBYTE)hIl2Cpp + CLASS_2_E9F43E48C6B63109__CHECKDISABLEBUTTONCONDITIONS_OFFSET))(this, a1, a2);
	}

	::System::Int32 Method_2_69CD85726D432382(::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelTriggerActionType a1)
	{
		return ((::System::Int32(*)(::PVOID, ::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelTriggerActionType))((::PBYTE)hIl2Cpp + CLASS_2_E9F43E48C6B63109_METHOD_2_69CD85726D432382_OFFSET))(this, a1);
	}

	::System::Boolean _get_CheckDisableInteract_b__2_0(::Class_2_E9F43E48C6B63109* self)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_2_E9F43E48C6B63109*))((::PBYTE)hIl2Cpp + CLASS_2_E9F43E48C6B63109__GET_CHECKDISABLEINTERACT_B__2_0_OFFSET))(this, self);
	}
};

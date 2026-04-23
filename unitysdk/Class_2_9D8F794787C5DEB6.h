#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGame/FourRotateVoxel/FourRotateVoxelTriggerActionType.h"
#include "unitysdk/RPG/Client/LittleGame/SimpleTriggerService_1.h"
#include "unitysdk/RPG/GCFreeClosure/FuncClosureR_1.h"

class Class_1_4D11CE62B2BEC69E;
class Class_1_6A4548AFE753106B;
class Class_2_0C58AD91B0F4D809;
class Class_3_D6E9A038FA23103A;
namespace RPG::GameCore { class PropButtonConfig; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace UnityEngine { class Transform; }

#define CLASS_2_9D8F794787C5DEB6_CLEARTRIGGER_OFFSET UNITYSDK_OFFSET(0x911E1C0)
#define CLASS_2_9D8F794787C5DEB6_METHOD_2_0C32ED5B41B1582B_OFFSET UNITYSDK_OFFSET(0x911E070)
#define CLASS_2_9D8F794787C5DEB6_METHOD_2_3E7178C5ECF017DB_OFFSET UNITYSDK_OFFSET(0x911E020)
#define CLASS_2_9D8F794787C5DEB6_METHOD_2_417F137CE51275EF_OFFSET UNITYSDK_OFFSET(0x911DD00)
#define CLASS_2_9D8F794787C5DEB6_METHOD_2_549A9AEF4E247CAB_OFFSET UNITYSDK_OFFSET(0x911E7A0)
#define CLASS_2_9D8F794787C5DEB6_METHOD_2_69CD85726D432382_OFFSET UNITYSDK_OFFSET(0x911E750)
#define CLASS_2_9D8F794787C5DEB6_METHOD_2_A59D291B14CE7911_OFFSET UNITYSDK_OFFSET(0x911D7B0)
#define CLASS_2_9D8F794787C5DEB6_METHOD_2_B8894D16AB00C20E_OFFSET UNITYSDK_OFFSET(0x911EAC0)
#define CLASS_2_9D8F794787C5DEB6__CHECKDISABLEBUTTONCONDITIONS_OFFSET UNITYSDK_OFFSET(0x911E520)
#define CLASS_2_9D8F794787C5DEB6__CHECKENABLEBUTTONCONDITIONS_OFFSET UNITYSDK_OFFSET(0x911E240)
#define CLASS_2_9D8F794787C5DEB6__CTOR_OFFSET UNITYSDK_OFFSET(0x911DE50)
#define CLASS_2_9D8F794787C5DEB6__GET_CHECKDISABLEINTERACT_B__2_0_OFFSET UNITYSDK_OFFSET(0x911EDC0)

inline static constexpr unsigned int Class_2_9D8F794787C5DEB6_TypeDefinitionIndex = 70464;

class Class_2_9D8F794787C5DEB6 : public ::RPG::Client::LittleGame::SimpleTriggerService_1<::Class_2_0C58AD91B0F4D809*>
{
public:
	::Class_3_D6E9A038FA23103A* Field_2_1; // 0x38
	::System::Collections::Generic::HashSet_1<::System::String*>* Field_2_3; // 0x40
	::Class_1_4D11CE62B2BEC69E* Field_2_0; // 0x48
	::System::Collections::Generic::HashSet_1<::System::String*>* Field_2_4; // 0x50
	::System::Boolean Field_2_2; // 0x58

	::System::Void _ctor(::Class_3_D6E9A038FA23103A* a1, ::Class_1_4D11CE62B2BEC69E* a2, ::UnityEngine::Transform* a3)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_D6E9A038FA23103A*, ::Class_1_4D11CE62B2BEC69E*, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + CLASS_2_9D8F794787C5DEB6__CTOR_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_2_A59D291B14CE7911(::Class_2_0C58AD91B0F4D809* a1, ::RPG::GameCore::PropButtonConfig* a2, ::System::Action_1<::Class_2_0C58AD91B0F4D809*>* a3)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_0C58AD91B0F4D809*, ::RPG::GameCore::PropButtonConfig*, ::System::Action_1<::Class_2_0C58AD91B0F4D809*>*))((::PBYTE)hIl2Cpp + CLASS_2_9D8F794787C5DEB6_METHOD_2_A59D291B14CE7911_OFFSET))(this, a1, a2, a3);
	}

	::RPG::GCFreeClosure::FuncClosureR_1<::System::Boolean> Method_2_417F137CE51275EF()
	{
		return ((::RPG::GCFreeClosure::FuncClosureR_1<::System::Boolean>(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_9D8F794787C5DEB6_METHOD_2_417F137CE51275EF_OFFSET))(this);
	}

	::System::Void Method_2_3E7178C5ECF017DB(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_9D8F794787C5DEB6_METHOD_2_3E7178C5ECF017DB_OFFSET))(this, a1);
	}

	::System::Void Method_2_0C32ED5B41B1582B(::Class_2_0C58AD91B0F4D809* a1, ::Class_1_6A4548AFE753106B* a2, ::System::String* a3)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_0C58AD91B0F4D809*, ::Class_1_6A4548AFE753106B*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_9D8F794787C5DEB6_METHOD_2_0C32ED5B41B1582B_OFFSET))(this, a1, a2, a3);
	}

	::System::Void ClearTrigger(::Class_2_0C58AD91B0F4D809* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_0C58AD91B0F4D809*))((::PBYTE)hIl2Cpp + CLASS_2_9D8F794787C5DEB6_CLEARTRIGGER_OFFSET))(this, a1);
	}

	::System::Boolean _CheckEnableButtonConditions(::Class_2_0C58AD91B0F4D809* a1, ::Class_1_6A4548AFE753106B* a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_2_0C58AD91B0F4D809*, ::Class_1_6A4548AFE753106B*))((::PBYTE)hIl2Cpp + CLASS_2_9D8F794787C5DEB6__CHECKENABLEBUTTONCONDITIONS_OFFSET))(this, a1, a2);
	}

	::System::Boolean _CheckDisableButtonConditions(::Class_2_0C58AD91B0F4D809* a1, ::Class_1_6A4548AFE753106B* a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_2_0C58AD91B0F4D809*, ::Class_1_6A4548AFE753106B*))((::PBYTE)hIl2Cpp + CLASS_2_9D8F794787C5DEB6__CHECKDISABLEBUTTONCONDITIONS_OFFSET))(this, a1, a2);
	}

	::System::Int32 Method_2_69CD85726D432382(::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelTriggerActionType a1)
	{
		return ((::System::Int32(*)(::PVOID, ::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelTriggerActionType))((::PBYTE)hIl2Cpp + CLASS_2_9D8F794787C5DEB6_METHOD_2_69CD85726D432382_OFFSET))(this, a1);
	}

	::System::Void Method_2_549A9AEF4E247CAB(::Class_2_0C58AD91B0F4D809* a1, ::System::Action_1<::Class_2_0C58AD91B0F4D809*>* a2, ::System::Action_1<::Class_2_0C58AD91B0F4D809*>* a3, ::System::String* a4, ::System::Boolean a5)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_0C58AD91B0F4D809*, ::System::Action_1<::Class_2_0C58AD91B0F4D809*>*, ::System::Action_1<::Class_2_0C58AD91B0F4D809*>*, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_9D8F794787C5DEB6_METHOD_2_549A9AEF4E247CAB_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::System::Void Method_2_B8894D16AB00C20E(::Class_2_0C58AD91B0F4D809* a1, ::System::Action_1<::Class_2_0C58AD91B0F4D809*>* a2, ::System::Action_1<::Class_2_0C58AD91B0F4D809*>* a3, ::System::String* a4)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_0C58AD91B0F4D809*, ::System::Action_1<::Class_2_0C58AD91B0F4D809*>*, ::System::Action_1<::Class_2_0C58AD91B0F4D809*>*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_9D8F794787C5DEB6_METHOD_2_B8894D16AB00C20E_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Boolean _get_CheckDisableInteract_b__2_0(::Class_2_9D8F794787C5DEB6* self)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_2_9D8F794787C5DEB6*))((::PBYTE)hIl2Cpp + CLASS_2_9D8F794787C5DEB6__GET_CHECKDISABLEINTERACT_B__2_0_OFFSET))(this, self);
	}
};

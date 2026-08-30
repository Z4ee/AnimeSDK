#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGame/FourRotateVoxel/FourRotateVoxelTriggerActionType.h"
#include "unitysdk/RPG/Client/LittleGame/SimpleTriggerService_1.h"
#include "unitysdk/RPG/GCFreeClosure/FuncClosureR_1.h"

class Class_1_2CDF619C23140440;
class Class_1_58F7C510A0EB2163;
class Class_2_B8E38BF47138A2E5;
class Class_3_912CC478F2B21832;
namespace RPG::GameCore { class PropButtonConfig; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace UnityEngine { class Transform; }

#define CLASS_2_9D8F794787C5DEB6_CLEARTRIGGER_OFFSET UNITYSDK_OFFSET(0x19B50730)
#define CLASS_2_9D8F794787C5DEB6_METHOD_2_0C32ED5B41B1582B_OFFSET UNITYSDK_OFFSET(0x19B50590)
#define CLASS_2_9D8F794787C5DEB6_METHOD_2_3E7178C5ECF017DB_OFFSET UNITYSDK_OFFSET(0x19B50540)
#define CLASS_2_9D8F794787C5DEB6_METHOD_2_406D18D7229C87E0_OFFSET UNITYSDK_OFFSET(0x19B4FC00)
#define CLASS_2_9D8F794787C5DEB6_METHOD_2_549A9AEF4E247CAB_OFFSET UNITYSDK_OFFSET(0x19B50F70)
#define CLASS_2_9D8F794787C5DEB6_METHOD_2_69CD85726D432382_OFFSET UNITYSDK_OFFSET(0x19B50F20)
#define CLASS_2_9D8F794787C5DEB6_METHOD_2_892811B0A5984DEC_OFFSET UNITYSDK_OFFSET(0x19B501F0)
#define CLASS_2_9D8F794787C5DEB6_METHOD_2_B8894D16AB00C20E_OFFSET UNITYSDK_OFFSET(0x19B51270)
#define CLASS_2_9D8F794787C5DEB6__CCTOR_OFFSET UNITYSDK_OFFSET(0x19B51550)
#define CLASS_2_9D8F794787C5DEB6__CHECKDISABLEBUTTONCONDITIONS_OFFSET UNITYSDK_OFFSET(0x19B50BE0)
#define CLASS_2_9D8F794787C5DEB6__CHECKENABLEBUTTONCONDITIONS_OFFSET UNITYSDK_OFFSET(0x19B507B0)
#define CLASS_2_9D8F794787C5DEB6__CTOR_OFFSET UNITYSDK_OFFSET(0x19B50370)
#define CLASS_2_9D8F794787C5DEB6__GET_CHECKDISABLEINTERACT_B__2_0_OFFSET UNITYSDK_OFFSET(0x19B51680)

inline static constexpr unsigned int Class_2_9D8F794787C5DEB6_TypeDefinitionIndex = 76264;

class Class_2_9D8F794787C5DEB6 : public ::RPG::Client::LittleGame::SimpleTriggerService_1<::Class_2_B8E38BF47138A2E5*>
{
public:
	static ::System::Collections::Generic::HashSet_1<::System::String*>** StaticGet_NFGBPDAJKBJ()
	{
		return (::System::Collections::Generic::HashSet_1<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_2_9D8F794787C5DEB6_TypeDefinitionIndex)->GetStaticField(0x63D60);
	}
	::System::Collections::Generic::HashSet_1<::System::String*>* AHIFNJJGHOJ; // 0x38
	::Class_1_2CDF619C23140440* FKINCGODJEP; // 0x40
	::Class_3_912CC478F2B21832* PDENFEFCAGN; // 0x48
	::System::Collections::Generic::HashSet_1<::System::String*>* GPAGLKMGBCK; // 0x50
	::System::Boolean FBGLNDAHFJK; // 0x58

	::System::Void _ctor(::Class_3_912CC478F2B21832* a1, ::Class_1_2CDF619C23140440* a2, ::UnityEngine::Transform* a3)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_912CC478F2B21832*, ::Class_1_2CDF619C23140440*, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + CLASS_2_9D8F794787C5DEB6__CTOR_OFFSET))(this, a1, a2, a3);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_9D8F794787C5DEB6__CCTOR_OFFSET))();
	}

	::System::Void Method_2_406D18D7229C87E0(::Class_2_B8E38BF47138A2E5* a1, ::RPG::GameCore::PropButtonConfig* a2, ::System::Action_1<::Class_2_B8E38BF47138A2E5*>* a3)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_B8E38BF47138A2E5*, ::RPG::GameCore::PropButtonConfig*, ::System::Action_1<::Class_2_B8E38BF47138A2E5*>*))((::PBYTE)hIl2Cpp + CLASS_2_9D8F794787C5DEB6_METHOD_2_406D18D7229C87E0_OFFSET))(this, a1, a2, a3);
	}

	::RPG::GCFreeClosure::FuncClosureR_1<::System::Boolean> Method_2_892811B0A5984DEC()
	{
		return ((::RPG::GCFreeClosure::FuncClosureR_1<::System::Boolean>(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_9D8F794787C5DEB6_METHOD_2_892811B0A5984DEC_OFFSET))(this);
	}

	::System::Void Method_2_3E7178C5ECF017DB(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_9D8F794787C5DEB6_METHOD_2_3E7178C5ECF017DB_OFFSET))(this, a1);
	}

	::System::Void Method_2_0C32ED5B41B1582B(::Class_2_B8E38BF47138A2E5* a1, ::Class_1_58F7C510A0EB2163* a2, ::System::String* a3)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_B8E38BF47138A2E5*, ::Class_1_58F7C510A0EB2163*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_9D8F794787C5DEB6_METHOD_2_0C32ED5B41B1582B_OFFSET))(this, a1, a2, a3);
	}

	::System::Void ClearTrigger(::Class_2_B8E38BF47138A2E5* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_B8E38BF47138A2E5*))((::PBYTE)hIl2Cpp + CLASS_2_9D8F794787C5DEB6_CLEARTRIGGER_OFFSET))(this, a1);
	}

	::System::Boolean _CheckEnableButtonConditions(::Class_2_B8E38BF47138A2E5* a1, ::Class_1_58F7C510A0EB2163* a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_2_B8E38BF47138A2E5*, ::Class_1_58F7C510A0EB2163*))((::PBYTE)hIl2Cpp + CLASS_2_9D8F794787C5DEB6__CHECKENABLEBUTTONCONDITIONS_OFFSET))(this, a1, a2);
	}

	::System::Boolean _CheckDisableButtonConditions(::Class_2_B8E38BF47138A2E5* a1, ::Class_1_58F7C510A0EB2163* a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_2_B8E38BF47138A2E5*, ::Class_1_58F7C510A0EB2163*))((::PBYTE)hIl2Cpp + CLASS_2_9D8F794787C5DEB6__CHECKDISABLEBUTTONCONDITIONS_OFFSET))(this, a1, a2);
	}

	::System::Int32 Method_2_69CD85726D432382(::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelTriggerActionType a1)
	{
		return ((::System::Int32(*)(::PVOID, ::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelTriggerActionType))((::PBYTE)hIl2Cpp + CLASS_2_9D8F794787C5DEB6_METHOD_2_69CD85726D432382_OFFSET))(this, a1);
	}

	::System::Void Method_2_549A9AEF4E247CAB(::Class_2_B8E38BF47138A2E5* a1, ::System::Action_1<::Class_2_B8E38BF47138A2E5*>* a2, ::System::Action_1<::Class_2_B8E38BF47138A2E5*>* a3, ::System::String* a4, ::System::Boolean a5)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_B8E38BF47138A2E5*, ::System::Action_1<::Class_2_B8E38BF47138A2E5*>*, ::System::Action_1<::Class_2_B8E38BF47138A2E5*>*, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_9D8F794787C5DEB6_METHOD_2_549A9AEF4E247CAB_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::System::Void Method_2_B8894D16AB00C20E(::Class_2_B8E38BF47138A2E5* a1, ::System::Action_1<::Class_2_B8E38BF47138A2E5*>* a2, ::System::Action_1<::Class_2_B8E38BF47138A2E5*>* a3, ::System::String* a4)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_B8E38BF47138A2E5*, ::System::Action_1<::Class_2_B8E38BF47138A2E5*>*, ::System::Action_1<::Class_2_B8E38BF47138A2E5*>*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_9D8F794787C5DEB6_METHOD_2_B8894D16AB00C20E_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Boolean _get_CheckDisableInteract_b__2_0(::Class_2_9D8F794787C5DEB6* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_2_9D8F794787C5DEB6*))((::PBYTE)hIl2Cpp + CLASS_2_9D8F794787C5DEB6__GET_CHECKDISABLEINTERACT_B__2_0_OFFSET))(this, a1);
	}
};

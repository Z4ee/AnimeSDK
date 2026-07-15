#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGame/FourRotateVoxel/FourRotateVoxelTriggerActionType.h"
#include "unitysdk/RPG/Client/LittleGame/SimpleTriggerService_1.h"
#include "unitysdk/RPG/GCFreeClosure/FuncClosureR_1.h"

class Class_1_2CDF619C23140440;
class Class_1_58F7C510A0EB2163;
class Class_2_56DCA1B58073717B;
class Class_3_001D9EA49F6215B6;
namespace RPG::GameCore { class PropButtonConfig; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace UnityEngine { class Transform; }

#define CLASS_2_1310E39F33F30506_CLEARTRIGGER_OFFSET UNITYSDK_OFFSET(0x1822AD30)
#define CLASS_2_1310E39F33F30506_METHOD_2_0C32ED5B41B1582B_OFFSET UNITYSDK_OFFSET(0x1822AB90)
#define CLASS_2_1310E39F33F30506_METHOD_2_3E7178C5ECF017DB_OFFSET UNITYSDK_OFFSET(0x1822AB40)
#define CLASS_2_1310E39F33F30506_METHOD_2_406D18D7229C87E0_OFFSET UNITYSDK_OFFSET(0x1822A2D0)
#define CLASS_2_1310E39F33F30506_METHOD_2_417F137CE51275EF_OFFSET UNITYSDK_OFFSET(0x1822A850)
#define CLASS_2_1310E39F33F30506_METHOD_2_69CD85726D432382_OFFSET UNITYSDK_OFFSET(0x1822B4A0)
#define CLASS_2_1310E39F33F30506_METHOD_2_AAEEA776A4AB1D62_OFFSET UNITYSDK_OFFSET(0x1822B4F0)
#define CLASS_2_1310E39F33F30506_METHOD_2_B8894D16AB00C20E_OFFSET UNITYSDK_OFFSET(0x1822B7B0)
#define CLASS_2_1310E39F33F30506__CCTOR_OFFSET UNITYSDK_OFFSET(0x1822BA60)
#define CLASS_2_1310E39F33F30506__CHECKDISABLEBUTTONCONDITIONS_OFFSET UNITYSDK_OFFSET(0x1822B190)
#define CLASS_2_1310E39F33F30506__CHECKENABLEBUTTONCONDITIONS_OFFSET UNITYSDK_OFFSET(0x1822AD90)
#define CLASS_2_1310E39F33F30506__CTOR_OFFSET UNITYSDK_OFFSET(0x1822A990)
#define CLASS_2_1310E39F33F30506__GET_CHECKDISABLEINTERACT_B__2_0_OFFSET UNITYSDK_OFFSET(0x1822BB50)

inline static constexpr unsigned int Class_2_1310E39F33F30506_TypeDefinitionIndex = 72804;

class Class_2_1310E39F33F30506 : public ::RPG::Client::LittleGame::SimpleTriggerService_1<::Class_2_56DCA1B58073717B*>
{
public:
	static ::System::Collections::Generic::HashSet_1<::System::String*>** StaticGet_Field_2_0()
	{
		return (::System::Collections::Generic::HashSet_1<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_2_1310E39F33F30506_TypeDefinitionIndex)->GetStaticField(0x65E10);
	}
	::Class_3_001D9EA49F6215B6* Field_2_1; // 0x38
	::Class_1_2CDF619C23140440* Field_2_2; // 0x40
	::System::Collections::Generic::HashSet_1<::System::String*>* Field_2_3; // 0x48
	::System::Collections::Generic::HashSet_1<::System::String*>* Field_2_4; // 0x50
	::System::Boolean Field_2_5; // 0x58

	::System::Void _ctor(::Class_3_001D9EA49F6215B6* a1, ::Class_1_2CDF619C23140440* a2, ::UnityEngine::Transform* a3)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_001D9EA49F6215B6*, ::Class_1_2CDF619C23140440*, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + CLASS_2_1310E39F33F30506__CTOR_OFFSET))(this, a1, a2, a3);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_1310E39F33F30506__CCTOR_OFFSET))();
	}

	::System::Void Method_2_406D18D7229C87E0(::Class_2_56DCA1B58073717B* a1, ::RPG::GameCore::PropButtonConfig* a2, ::System::Action_1<::Class_2_56DCA1B58073717B*>* a3)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_56DCA1B58073717B*, ::RPG::GameCore::PropButtonConfig*, ::System::Action_1<::Class_2_56DCA1B58073717B*>*))((::PBYTE)hIl2Cpp + CLASS_2_1310E39F33F30506_METHOD_2_406D18D7229C87E0_OFFSET))(this, a1, a2, a3);
	}

	::RPG::GCFreeClosure::FuncClosureR_1<::System::Boolean> Method_2_417F137CE51275EF()
	{
		return ((::RPG::GCFreeClosure::FuncClosureR_1<::System::Boolean>(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_1310E39F33F30506_METHOD_2_417F137CE51275EF_OFFSET))(this);
	}

	::System::Void Method_2_3E7178C5ECF017DB(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_1310E39F33F30506_METHOD_2_3E7178C5ECF017DB_OFFSET))(this, a1);
	}

	::System::Void Method_2_0C32ED5B41B1582B(::Class_2_56DCA1B58073717B* a1, ::Class_1_58F7C510A0EB2163* a2, ::System::String* a3)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_56DCA1B58073717B*, ::Class_1_58F7C510A0EB2163*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_1310E39F33F30506_METHOD_2_0C32ED5B41B1582B_OFFSET))(this, a1, a2, a3);
	}

	::System::Void ClearTrigger(::Class_2_56DCA1B58073717B* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_56DCA1B58073717B*))((::PBYTE)hIl2Cpp + CLASS_2_1310E39F33F30506_CLEARTRIGGER_OFFSET))(this, a1);
	}

	::System::Boolean _CheckEnableButtonConditions(::Class_2_56DCA1B58073717B* a1, ::Class_1_58F7C510A0EB2163* a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_2_56DCA1B58073717B*, ::Class_1_58F7C510A0EB2163*))((::PBYTE)hIl2Cpp + CLASS_2_1310E39F33F30506__CHECKENABLEBUTTONCONDITIONS_OFFSET))(this, a1, a2);
	}

	::System::Boolean _CheckDisableButtonConditions(::Class_2_56DCA1B58073717B* a1, ::Class_1_58F7C510A0EB2163* a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_2_56DCA1B58073717B*, ::Class_1_58F7C510A0EB2163*))((::PBYTE)hIl2Cpp + CLASS_2_1310E39F33F30506__CHECKDISABLEBUTTONCONDITIONS_OFFSET))(this, a1, a2);
	}

	::System::Int32 Method_2_69CD85726D432382(::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelTriggerActionType a1)
	{
		return ((::System::Int32(*)(::PVOID, ::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelTriggerActionType))((::PBYTE)hIl2Cpp + CLASS_2_1310E39F33F30506_METHOD_2_69CD85726D432382_OFFSET))(this, a1);
	}

	::System::Void Method_2_AAEEA776A4AB1D62(::Class_2_56DCA1B58073717B* a1, ::System::Action_1<::Class_2_56DCA1B58073717B*>* a2, ::System::Action_1<::Class_2_56DCA1B58073717B*>* a3, ::System::String* a4, ::System::Boolean a5)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_56DCA1B58073717B*, ::System::Action_1<::Class_2_56DCA1B58073717B*>*, ::System::Action_1<::Class_2_56DCA1B58073717B*>*, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_1310E39F33F30506_METHOD_2_AAEEA776A4AB1D62_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::System::Void Method_2_B8894D16AB00C20E(::Class_2_56DCA1B58073717B* a1, ::System::Action_1<::Class_2_56DCA1B58073717B*>* a2, ::System::Action_1<::Class_2_56DCA1B58073717B*>* a3, ::System::String* a4)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_56DCA1B58073717B*, ::System::Action_1<::Class_2_56DCA1B58073717B*>*, ::System::Action_1<::Class_2_56DCA1B58073717B*>*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_1310E39F33F30506_METHOD_2_B8894D16AB00C20E_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Boolean _get_CheckDisableInteract_b__2_0(::Class_2_1310E39F33F30506* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_2_1310E39F33F30506*))((::PBYTE)hIl2Cpp + CLASS_2_1310E39F33F30506__GET_CHECKDISABLEINTERACT_B__2_0_OFFSET))(this, a1);
	}
};

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_C68FC364873FDA67_TriggerDisableReason.h"
#include "unitysdk/RPG/GameCore/AliveState.h"
#include "unitysdk/System/Object.h"

class Class_1_5F51D4049EA87B7B;
class Class_1_CBE3940117D4417A;
class Class_2_AB846E7B21D5AD33;
class Class_3_07C3C4D2990C49EE;
namespace RPG::GameCore { class ColliderTriggerComponent; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class SummonUnitGlobalConfig; }
namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class UnitCustomTriggerConfig; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class IList_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Transform; }

#define CLASS_1_C68FC364873FDA67_METHOD_1_126AB3935214AA22_OFFSET UNITYSDK_OFFSET(0x15C1EDA0)
#define CLASS_1_C68FC364873FDA67_METHOD_1_24748FC20F375725_OFFSET UNITYSDK_OFFSET(0x15C1EDD0)
#define CLASS_1_C68FC364873FDA67_METHOD_1_43E0506067472339_OFFSET UNITYSDK_OFFSET(0x15C1C540)
#define CLASS_1_C68FC364873FDA67_METHOD_1_479759059E440327_OFFSET UNITYSDK_OFFSET(0x15C1E070)
#define CLASS_1_C68FC364873FDA67_METHOD_1_53FE75B00F3A21BF_OFFSET UNITYSDK_OFFSET(0x15C1BCA0)
#define CLASS_1_C68FC364873FDA67_METHOD_1_700971FD483F8D08_OFFSET UNITYSDK_OFFSET(0x15C1EDC0)
#define CLASS_1_C68FC364873FDA67_METHOD_1_70ABAF7F0B6E54DF_OFFSET UNITYSDK_OFFSET(0x15C1EDE0)
#define CLASS_1_C68FC364873FDA67_METHOD_1_75F06AA2B167CAB6_OFFSET UNITYSDK_OFFSET(0x15C1ECE0)
#define CLASS_1_C68FC364873FDA67_METHOD_1_7B6EC255F45D034F_OFFSET UNITYSDK_OFFSET(0x15C1C460)
#define CLASS_1_C68FC364873FDA67_METHOD_1_85377D41FEE05B66_OFFSET UNITYSDK_OFFSET(0x15C1BFB0)
#define CLASS_1_C68FC364873FDA67_METHOD_1_87228966056CB632_1_OFFSET UNITYSDK_OFFSET(0x15C1D6D0)
#define CLASS_1_C68FC364873FDA67_METHOD_1_87228966056CB632_2_OFFSET UNITYSDK_OFFSET(0x15C1EA40)
#define CLASS_1_C68FC364873FDA67_METHOD_1_87228966056CB632_OFFSET UNITYSDK_OFFSET(0x15C1D970)
#define CLASS_1_C68FC364873FDA67_METHOD_1_AA2C0B4005734BA0_OFFSET UNITYSDK_OFFSET(0x15C1C390)
#define CLASS_1_C68FC364873FDA67_METHOD_1_B58984781C172663_OFFSET UNITYSDK_OFFSET(0x15C1D520)
#define CLASS_1_C68FC364873FDA67_METHOD_1_EAD10B3E55E2C4C5_OFFSET UNITYSDK_OFFSET(0x15C1DC10)
#define CLASS_1_C68FC364873FDA67_METHOD_1_EE3CCB3EBB7312F7_OFFSET UNITYSDK_OFFSET(0x15C1BBB0)
#define CLASS_1_C68FC364873FDA67_METHOD_1_F0088C88851A7DFB_1_OFFSET UNITYSDK_OFFSET(0x15C1EDB0)
#define CLASS_1_C68FC364873FDA67_METHOD_1_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x15C1C380)
#define CLASS_1_C68FC364873FDA67_METHOD_1_F44C933722F13965_OFFSET UNITYSDK_OFFSET(0x15C1C7A0)
#define CLASS_1_C68FC364873FDA67_METHOD_1_F77BBFBC56288301_OFFSET UNITYSDK_OFFSET(0x15C1C290)
#define CLASS_1_C68FC364873FDA67_METHOD_1_FA2B1D07C223AE82_OFFSET UNITYSDK_OFFSET(0x15C1BD40)
#define CLASS_1_C68FC364873FDA67_METHOD_1_FD7491A53D5F5FC6_OFFSET UNITYSDK_OFFSET(0x15C1E100)
#define CLASS_1_C68FC364873FDA67_METHOD_1_FF8F8C575E487469_OFFSET UNITYSDK_OFFSET(0x15C1AE60)
#define CLASS_1_C68FC364873FDA67__CTOR_OFFSET UNITYSDK_OFFSET(0x15C1EDF0)

inline static constexpr unsigned int Class_1_C68FC364873FDA67_TypeDefinitionIndex = 57460;

class Class_1_C68FC364873FDA67 : public ::System::Object
{
public:
	::Class_3_07C3C4D2990C49EE* ENAIBJGFMFI; // 0x10
	::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x18
	::RPG::GameCore::ColliderTriggerComponent* EJEEIAAFHNN; // 0x20
	::Class_3_07C3C4D2990C49EE* GMEDBNAABDC; // 0x28
	::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* NCIHENHPKCH; // 0x30
	::Class_1_CBE3940117D4417A* GALAHGAJODG; // 0x38
	::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* NBCPCIFHEHG; // 0x40
	::RPG::GameCore::UnitCustomTriggerConfig* IGHAHBNLIJA; // 0x48
	::System::String* GIDAEFPOGHI; // 0x50
	::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* AKHPJHLBMCM; // 0x58
	::Class_1_5F51D4049EA87B7B* DJHOAONPLLH; // 0x60
	::RPG::GameCore::SummonUnitGlobalConfig* FAFFFDIKBBI; // 0x68
	::Class_2_AB846E7B21D5AD33* LFFDPMJPHEG; // 0x70
	::System::Single MDNPNOEMHIC; // 0x78
	::System::Single FJPOKCBJDAL; // 0x7C
	::Class_1_C68FC364873FDA67_TriggerDisableReason KPIJLMIIJKF; // 0x80
	::System::Boolean OKCCLDANMCE; // 0x84
	::System::Boolean HKKLHMHNNHG; // 0x85
	::System::Boolean OLABICPNDFJ; // 0x86
	::System::Boolean BDKBIJFDANJ; // 0x87
	::System::Boolean AGMMNOOOFAD; // 0x88
	::System::Boolean HOBLOANFANB; // 0x89
	::System::Single COAELIHGAHH; // 0x8C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C68FC364873FDA67__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_FF8F8C575E487469(::Class_2_AB846E7B21D5AD33* a1, ::RPG::GameCore::ColliderTriggerComponent* a2, ::RPG::GameCore::UnitCustomTriggerConfig* a3, ::System::Int32 a4, ::RPG::GameCore::TaskContext* a5, ::System::Boolean a6, ::System::Boolean a7)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_AB846E7B21D5AD33*, ::RPG::GameCore::ColliderTriggerComponent*, ::RPG::GameCore::UnitCustomTriggerConfig*, ::System::Int32, ::RPG::GameCore::TaskContext*, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_C68FC364873FDA67_METHOD_1_FF8F8C575E487469_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7);
	}

	::System::Void Method_1_85377D41FEE05B66()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C68FC364873FDA67_METHOD_1_85377D41FEE05B66_OFFSET))(this);
	}

	::System::Void Method_1_FA2B1D07C223AE82(::System::Boolean a1, ::Class_1_C68FC364873FDA67_TriggerDisableReason a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean, ::Class_1_C68FC364873FDA67_TriggerDisableReason))((::PBYTE)hIl2Cpp + CLASS_1_C68FC364873FDA67_METHOD_1_FA2B1D07C223AE82_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_AA2C0B4005734BA0(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::AliveState a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::AliveState))((::PBYTE)hIl2Cpp + CLASS_1_C68FC364873FDA67_METHOD_1_AA2C0B4005734BA0_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_43E0506067472339(::Class_1_CBE3940117D4417A* a1, ::RPG::GameCore::GameEntity* a2, ::System::Boolean a3)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_CBE3940117D4417A*, ::RPG::GameCore::GameEntity*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_C68FC364873FDA67_METHOD_1_43E0506067472339_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_B58984781C172663(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_1_C68FC364873FDA67_METHOD_1_B58984781C172663_OFFSET))(this, a1);
	}

	::System::Void Method_1_7B6EC255F45D034F(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_1_C68FC364873FDA67_METHOD_1_7B6EC255F45D034F_OFFSET))(this, a1);
	}

	::System::Void Method_1_EAD10B3E55E2C4C5()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C68FC364873FDA67_METHOD_1_EAD10B3E55E2C4C5_OFFSET))(this);
	}

	::System::Void Method_1_479759059E440327(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_C68FC364873FDA67_METHOD_1_479759059E440327_OFFSET))(this, a1);
	}

	::System::Void Method_1_FD7491A53D5F5FC6(::System::Collections::Generic::IList_1<::System::UInt32>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IList_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + CLASS_1_C68FC364873FDA67_METHOD_1_FD7491A53D5F5FC6_OFFSET))(this, a1);
	}

	::System::Void Method_1_F77BBFBC56288301()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C68FC364873FDA67_METHOD_1_F77BBFBC56288301_OFFSET))(this);
	}

	::System::Boolean Method_1_F44C933722F13965(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_1_C68FC364873FDA67_METHOD_1_F44C933722F13965_OFFSET))(this, a1);
	}

	static ::System::Boolean Method_1_75F06AA2B167CAB6(::UnityEngine::Transform* a1, ::UnityEngine::Transform* a2)
	{
		return ((::System::Boolean(*)(::UnityEngine::Transform*, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + CLASS_1_C68FC364873FDA67_METHOD_1_75F06AA2B167CAB6_OFFSET))(a1, a2);
	}

	::System::Void Method_1_87228966056CB632(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_1_C68FC364873FDA67_METHOD_1_87228966056CB632_OFFSET))(this, a1);
	}

	::System::Void Method_1_87228966056CB632_1(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_1_C68FC364873FDA67_METHOD_1_87228966056CB632_1_OFFSET))(this, a1);
	}

	::System::Void Method_1_87228966056CB632_2(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_1_C68FC364873FDA67_METHOD_1_87228966056CB632_2_OFFSET))(this, a1);
	}

	::System::Void Method_1_53FE75B00F3A21BF(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_C68FC364873FDA67_METHOD_1_53FE75B00F3A21BF_OFFSET))(this, a1);
	}

	::System::Int32 Method_1_EE3CCB3EBB7312F7()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C68FC364873FDA67_METHOD_1_EE3CCB3EBB7312F7_OFFSET))(this);
	}

	::System::String* Method_1_126AB3935214AA22()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C68FC364873FDA67_METHOD_1_126AB3935214AA22_OFFSET))(this);
	}

	::System::Boolean Method_1_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C68FC364873FDA67_METHOD_1_F0088C88851A7DFB_OFFSET))(this);
	}

	::System::Boolean Method_1_F0088C88851A7DFB_1()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C68FC364873FDA67_METHOD_1_F0088C88851A7DFB_1_OFFSET))(this);
	}

	::RPG::GameCore::UnitCustomTriggerConfig* Method_1_700971FD483F8D08()
	{
		return ((::RPG::GameCore::UnitCustomTriggerConfig*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C68FC364873FDA67_METHOD_1_700971FD483F8D08_OFFSET))(this);
	}

	::Class_1_CBE3940117D4417A* Method_1_24748FC20F375725()
	{
		return ((::Class_1_CBE3940117D4417A*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C68FC364873FDA67_METHOD_1_24748FC20F375725_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* Method_1_70ABAF7F0B6E54DF()
	{
		return ((::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C68FC364873FDA67_METHOD_1_70ABAF7F0B6E54DF_OFFSET))(this);
	}
};

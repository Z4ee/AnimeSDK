#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_B6AB561EB80E0B93.h"
#include "unitysdk/RPG/GameCore/ActivitySubModeType.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/RPG/GameCore/PropertyModifyFunction.h"

class Class_0_16E4307DCC419505_663;
class Class_2_973B114F250678D9_Class_1_0AB3957A5CD667A3;
class Class_2_973B114F250678D9_Class_1_D0E38BACF7313C48;
namespace RPG::GameCore { class JsonEnum; }
namespace RPG::GameCore { class LevelCharacterBeginAttack; }
namespace RPG::GameCore { class LevelCharacterDie; }
namespace RPG::GameCore { class LevelCharacterEndAttack; }
namespace RPG::GameCore { class LevelDamageEntityPhase1; }
namespace RPG::GameCore { class PVEGameStatistics; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_973B114F250678D9_DISPOSE_OFFSET UNITYSDK_OFFSET(0xC2678A0)
#define CLASS_2_973B114F250678D9_GENSTATISTICS_OFFSET UNITYSDK_OFFSET(0xC2682F0)
#define CLASS_2_973B114F250678D9_GET_ACTIVITYSUBMODETYPE_OFFSET UNITYSDK_OFFSET(0xC267180)
#define CLASS_2_973B114F250678D9_METHOD_2_017CF52C3EF5F6C2_OFFSET UNITYSDK_OFFSET(0xC267250)
#define CLASS_2_973B114F250678D9_METHOD_2_0263065C4FB495EF_OFFSET UNITYSDK_OFFSET(0xC267A00)
#define CLASS_2_973B114F250678D9_METHOD_2_0860F812E446AE7C_OFFSET UNITYSDK_OFFSET(0xC2673E0)
#define CLASS_2_973B114F250678D9_METHOD_2_214D81C5C5D8C705_OFFSET UNITYSDK_OFFSET(0xC266A20)
#define CLASS_2_973B114F250678D9_METHOD_2_2E06C7864AB69B69_OFFSET UNITYSDK_OFFSET(0xC267190)
#define CLASS_2_973B114F250678D9_METHOD_2_35352E75FE6E819C_OFFSET UNITYSDK_OFFSET(0xC267D20)
#define CLASS_2_973B114F250678D9_METHOD_2_3B200ED17C4AEBE0_OFFSET UNITYSDK_OFFSET(0xC266A90)
#define CLASS_2_973B114F250678D9_METHOD_2_48C710EE6C813513_OFFSET UNITYSDK_OFFSET(0xC266FF0)
#define CLASS_2_973B114F250678D9_METHOD_2_4ED9AC70395CC495_OFFSET UNITYSDK_OFFSET(0xC267BA0)
#define CLASS_2_973B114F250678D9_METHOD_2_677A5EF663CAC9AD_OFFSET UNITYSDK_OFFSET(0xC268020)
#define CLASS_2_973B114F250678D9_METHOD_2_ACE2B7C6605C2458_OFFSET UNITYSDK_OFFSET(0xC2680A0)
#define CLASS_2_973B114F250678D9_METHOD_2_B43C848B078B3C34_OFFSET UNITYSDK_OFFSET(0xC267600)
#define CLASS_2_973B114F250678D9_METHOD_2_C50B93169B85DAEA_OFFSET UNITYSDK_OFFSET(0xC2682A0)
#define CLASS_2_973B114F250678D9_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0xC2679C0)
#define CLASS_2_973B114F250678D9_METHOD_2_D394FC19DBFBB97B_OFFSET UNITYSDK_OFFSET(0xC266EF0)
#define CLASS_2_973B114F250678D9_METHOD_2_D5092B5C3F0042DE_OFFSET UNITYSDK_OFFSET(0xC266950)
#define CLASS_2_973B114F250678D9_METHOD_2_E39F4C36A19FE6E6_OFFSET UNITYSDK_OFFSET(0xC268890)
#define CLASS_2_973B114F250678D9_METHOD_2_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0xC266940)
#define CLASS_2_973B114F250678D9_METHOD_2_F25D2DE7181D2805_OFFSET UNITYSDK_OFFSET(0xC2671F0)
#define CLASS_2_973B114F250678D9_METHOD_2_FBCC8E41846763EA_OFFSET UNITYSDK_OFFSET(0xC267C30)
#define CLASS_2_973B114F250678D9_ONBATTLEINSTANCECREATED_OFFSET UNITYSDK_OFFSET(0xC267970)
#define CLASS_2_973B114F250678D9_ONINITIALIZE_OFFSET UNITYSDK_OFFSET(0xC2672B0)
#define CLASS_2_973B114F250678D9__CTOR_OFFSET UNITYSDK_OFFSET(0xC268C50)

inline static constexpr unsigned int Class_2_973B114F250678D9_TypeDefinitionIndex = 55958;

class Class_2_973B114F250678D9 : public ::Class_1_B6AB561EB80E0B93
{
public:
	::Il2CppArray<::Class_2_973B114F250678D9_Class_1_0AB3957A5CD667A3*>* HKKMLKEOGBG; // 0x38
	::System::Collections::Generic::List_1<::Class_2_973B114F250678D9_Class_1_0AB3957A5CD667A3*>* EBMEBJEIJHJ; // 0x40
	::System::Collections::Generic::List_1<::System::Int32>* MDCJLGIBFDF; // 0x48
	::RPG::GameCore::FixPoint ABHLBGIIGMF; // 0x50

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_973B114F250678D9__CTOR_OFFSET))(this);
	}

	::System::Boolean Method_2_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_973B114F250678D9_METHOD_2_F0088C88851A7DFB_OFFSET))(this);
	}

	::System::Void Method_2_D5092B5C3F0042DE(::System::Int32 a1, ::System::Int32 a2, ::RPG::GameCore::FixPoint a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + CLASS_2_973B114F250678D9_METHOD_2_D5092B5C3F0042DE_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_2_3B200ED17C4AEBE0(::System::UInt32 a1, ::System::Int32 a2, ::RPG::GameCore::FixPoint a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Int32, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + CLASS_2_973B114F250678D9_METHOD_2_3B200ED17C4AEBE0_OFFSET))(this, a1, a2, a3);
	}

	::RPG::GameCore::FixPoint Method_2_D394FC19DBFBB97B(::System::Int32 a1, ::System::Int32 a2)
	{
		return ((::RPG::GameCore::FixPoint(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_973B114F250678D9_METHOD_2_D394FC19DBFBB97B_OFFSET))(this, a1, a2);
	}

	::RPG::GameCore::FixPoint Method_2_48C710EE6C813513(::System::UInt32 a1, ::System::Int32 a2)
	{
		return ((::RPG::GameCore::FixPoint(*)(::PVOID, ::System::UInt32, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_973B114F250678D9_METHOD_2_48C710EE6C813513_OFFSET))(this, a1, a2);
	}

	::RPG::GameCore::ActivitySubModeType get_ActivitySubModeType()
	{
		return ((::RPG::GameCore::ActivitySubModeType(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_973B114F250678D9_GET_ACTIVITYSUBMODETYPE_OFFSET))(this);
	}

	::RPG::GameCore::FixPoint Method_2_2E06C7864AB69B69()
	{
		return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_973B114F250678D9_METHOD_2_2E06C7864AB69B69_OFFSET))(this);
	}

	::RPG::GameCore::FixPoint Method_2_F25D2DE7181D2805()
	{
		return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_973B114F250678D9_METHOD_2_F25D2DE7181D2805_OFFSET))(this);
	}

	::RPG::GameCore::FixPoint Method_2_017CF52C3EF5F6C2()
	{
		return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_973B114F250678D9_METHOD_2_017CF52C3EF5F6C2_OFFSET))(this);
	}

	::System::Void OnInitialize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_973B114F250678D9_ONINITIALIZE_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_973B114F250678D9_DISPOSE_OFFSET))(this);
	}

	::System::Void OnBattleInstanceCreated()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_973B114F250678D9_ONBATTLEINSTANCECREATED_OFFSET))(this);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_973B114F250678D9_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_2_B43C848B078B3C34()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_973B114F250678D9_METHOD_2_B43C848B078B3C34_OFFSET))(this);
	}

	::Class_2_973B114F250678D9_Class_1_0AB3957A5CD667A3* Method_2_214D81C5C5D8C705(::System::Int32 a1)
	{
		return ((::Class_2_973B114F250678D9_Class_1_0AB3957A5CD667A3*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_973B114F250678D9_METHOD_2_214D81C5C5D8C705_OFFSET))(this, a1);
	}

	::System::Void Method_2_0263065C4FB495EF(::RPG::GameCore::JsonEnum* a1, ::RPG::GameCore::PropertyModifyFunction a2, ::RPG::GameCore::FixPoint a3)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::JsonEnum*, ::RPG::GameCore::PropertyModifyFunction, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + CLASS_2_973B114F250678D9_METHOD_2_0263065C4FB495EF_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_2_4ED9AC70395CC495(::RPG::GameCore::FixPoint& a1, ::RPG::GameCore::PropertyModifyFunction a2, ::RPG::GameCore::FixPoint a3)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::FixPoint&, ::RPG::GameCore::PropertyModifyFunction, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + CLASS_2_973B114F250678D9_METHOD_2_4ED9AC70395CC495_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_2_FBCC8E41846763EA(::RPG::GameCore::LevelCharacterDie* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::LevelCharacterDie*))((::PBYTE)hIl2Cpp + CLASS_2_973B114F250678D9_METHOD_2_FBCC8E41846763EA_OFFSET))(this, a1);
	}

	::System::Void Method_2_35352E75FE6E819C(::RPG::GameCore::LevelCharacterEndAttack* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::LevelCharacterEndAttack*))((::PBYTE)hIl2Cpp + CLASS_2_973B114F250678D9_METHOD_2_35352E75FE6E819C_OFFSET))(this, a1);
	}

	::System::Void Method_2_677A5EF663CAC9AD(::RPG::GameCore::LevelCharacterBeginAttack* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::LevelCharacterBeginAttack*))((::PBYTE)hIl2Cpp + CLASS_2_973B114F250678D9_METHOD_2_677A5EF663CAC9AD_OFFSET))(this, a1);
	}

	::System::Void Method_2_ACE2B7C6605C2458(::RPG::GameCore::LevelDamageEntityPhase1* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::LevelDamageEntityPhase1*))((::PBYTE)hIl2Cpp + CLASS_2_973B114F250678D9_METHOD_2_ACE2B7C6605C2458_OFFSET))(this, a1);
	}

	::System::Void Method_2_0860F812E446AE7C()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_973B114F250678D9_METHOD_2_0860F812E446AE7C_OFFSET))(this);
	}

	::System::Void Method_2_C50B93169B85DAEA(::Class_0_16E4307DCC419505_663* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_663*))((::PBYTE)hIl2Cpp + CLASS_2_973B114F250678D9_METHOD_2_C50B93169B85DAEA_OFFSET))(this, a1);
	}

	::System::Void GenStatistics(::RPG::GameCore::PVEGameStatistics* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::PVEGameStatistics*))((::PBYTE)hIl2Cpp + CLASS_2_973B114F250678D9_GENSTATISTICS_OFFSET))(this, a1);
	}

	::Class_2_973B114F250678D9_Class_1_D0E38BACF7313C48* Method_2_E39F4C36A19FE6E6()
	{
		return ((::Class_2_973B114F250678D9_Class_1_D0E38BACF7313C48*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_973B114F250678D9_METHOD_2_E39F4C36A19FE6E6_OFFSET))(this);
	}
};

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_D90D29A0DA06B4F8.h"
#include "unitysdk/RPG/GameCore/ActivityStatisticsType.h"
#include "unitysdk/RPG/GameCore/ActivitySubModeType.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/RPG/GameCore/PropertyModifyFunction.h"

class Class_0_16E4307DCC419505_540;
class Class_2_0F82B10534F7616F_Class_1_0AB3957A5CD667A3;
class Class_2_0F82B10534F7616F_Class_1_D0E38BACF7313C48;
namespace RPG::GameCore { class LevelCharacterBeginAttack; }
namespace RPG::GameCore { class LevelCharacterDie; }
namespace RPG::GameCore { class LevelCharacterEndAttack; }
namespace RPG::GameCore { class LevelDamageEntityPhase1; }
namespace RPG::GameCore { class PVEGameStatistics; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_0F82B10534F7616F_DISPOSE_OFFSET UNITYSDK_OFFSET(0x15EB55F0)
#define CLASS_2_0F82B10534F7616F_GENSTATISTICS_OFFSET UNITYSDK_OFFSET(0x15EB5FF0)
#define CLASS_2_0F82B10534F7616F_GET_ACTIVITYSUBMODETYPE_OFFSET UNITYSDK_OFFSET(0x15EB4F00)
#define CLASS_2_0F82B10534F7616F_METHOD_2_017CF52C3EF5F6C2_OFFSET UNITYSDK_OFFSET(0x15EB4FD0)
#define CLASS_2_0F82B10534F7616F_METHOD_2_214D81C5C5D8C705_OFFSET UNITYSDK_OFFSET(0x15EB47A0)
#define CLASS_2_0F82B10534F7616F_METHOD_2_2E06C7864AB69B69_OFFSET UNITYSDK_OFFSET(0x15EB4F10)
#define CLASS_2_0F82B10534F7616F_METHOD_2_35352E75FE6E819C_OFFSET UNITYSDK_OFFSET(0x15EB5A40)
#define CLASS_2_0F82B10534F7616F_METHOD_2_3B200ED17C4AEBE0_OFFSET UNITYSDK_OFFSET(0x15EB4810)
#define CLASS_2_0F82B10534F7616F_METHOD_2_3D6722B9F8F20694_OFFSET UNITYSDK_OFFSET(0x15EB5160)
#define CLASS_2_0F82B10534F7616F_METHOD_2_48C710EE6C813513_OFFSET UNITYSDK_OFFSET(0x15EB4D70)
#define CLASS_2_0F82B10534F7616F_METHOD_2_4ED9AC70395CC495_OFFSET UNITYSDK_OFFSET(0x15EB58C0)
#define CLASS_2_0F82B10534F7616F_METHOD_2_677A5EF663CAC9AD_OFFSET UNITYSDK_OFFSET(0x15EB5D40)
#define CLASS_2_0F82B10534F7616F_METHOD_2_90E193E5FBAC2C4E_OFFSET UNITYSDK_OFFSET(0x15EB5770)
#define CLASS_2_0F82B10534F7616F_METHOD_2_ACE2B7C6605C2458_OFFSET UNITYSDK_OFFSET(0x15EB5DC0)
#define CLASS_2_0F82B10534F7616F_METHOD_2_B43C848B078B3C34_OFFSET UNITYSDK_OFFSET(0x15EB5360)
#define CLASS_2_0F82B10534F7616F_METHOD_2_C50B93169B85DAEA_OFFSET UNITYSDK_OFFSET(0x15EB5FA0)
#define CLASS_2_0F82B10534F7616F_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x15EB5730)
#define CLASS_2_0F82B10534F7616F_METHOD_2_D394FC19DBFBB97B_OFFSET UNITYSDK_OFFSET(0x15EB4C70)
#define CLASS_2_0F82B10534F7616F_METHOD_2_D5092B5C3F0042DE_OFFSET UNITYSDK_OFFSET(0x15EB46D0)
#define CLASS_2_0F82B10534F7616F_METHOD_2_E39F4C36A19FE6E6_OFFSET UNITYSDK_OFFSET(0x15EB65A0)
#define CLASS_2_0F82B10534F7616F_METHOD_2_F25D2DE7181D2805_OFFSET UNITYSDK_OFFSET(0x15EB4F70)
#define CLASS_2_0F82B10534F7616F_METHOD_2_FBCC8E41846763EA_OFFSET UNITYSDK_OFFSET(0x15EB5950)
#define CLASS_2_0F82B10534F7616F_ONBATTLEINSTANCECREATED_OFFSET UNITYSDK_OFFSET(0x15EB56E0)
#define CLASS_2_0F82B10534F7616F_ONINITIALIZE_OFFSET UNITYSDK_OFFSET(0x15EB5030)
#define CLASS_2_0F82B10534F7616F__CTOR_OFFSET UNITYSDK_OFFSET(0x15EB6960)

inline static constexpr unsigned int Class_2_0F82B10534F7616F_TypeDefinitionIndex = 53432;

class Class_2_0F82B10534F7616F : public ::Class_1_D90D29A0DA06B4F8
{
public:
	::System::Collections::Generic::List_1<::Class_2_0F82B10534F7616F_Class_1_0AB3957A5CD667A3*>* Field_2_0; // 0x38
	::System::Collections::Generic::List_1<::System::Int32>* Field_2_1; // 0x40
	::Il2CppArray<::Class_2_0F82B10534F7616F_Class_1_0AB3957A5CD667A3*>* Field_2_2; // 0x48
	::RPG::GameCore::FixPoint Field_2_3; // 0x50

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0F82B10534F7616F__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_D5092B5C3F0042DE(::System::Int32 a1, ::System::Int32 a2, ::RPG::GameCore::FixPoint a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + CLASS_2_0F82B10534F7616F_METHOD_2_D5092B5C3F0042DE_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_2_3B200ED17C4AEBE0(::System::UInt32 a1, ::System::Int32 a2, ::RPG::GameCore::FixPoint a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Int32, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + CLASS_2_0F82B10534F7616F_METHOD_2_3B200ED17C4AEBE0_OFFSET))(this, a1, a2, a3);
	}

	::RPG::GameCore::FixPoint Method_2_D394FC19DBFBB97B(::System::Int32 a1, ::System::Int32 a2)
	{
		return ((::RPG::GameCore::FixPoint(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_0F82B10534F7616F_METHOD_2_D394FC19DBFBB97B_OFFSET))(this, a1, a2);
	}

	::RPG::GameCore::FixPoint Method_2_48C710EE6C813513(::System::UInt32 a1, ::System::Int32 a2)
	{
		return ((::RPG::GameCore::FixPoint(*)(::PVOID, ::System::UInt32, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_0F82B10534F7616F_METHOD_2_48C710EE6C813513_OFFSET))(this, a1, a2);
	}

	::RPG::GameCore::ActivitySubModeType get_ActivitySubModeType()
	{
		return ((::RPG::GameCore::ActivitySubModeType(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0F82B10534F7616F_GET_ACTIVITYSUBMODETYPE_OFFSET))(this);
	}

	::RPG::GameCore::FixPoint Method_2_2E06C7864AB69B69()
	{
		return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0F82B10534F7616F_METHOD_2_2E06C7864AB69B69_OFFSET))(this);
	}

	::RPG::GameCore::FixPoint Method_2_F25D2DE7181D2805()
	{
		return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0F82B10534F7616F_METHOD_2_F25D2DE7181D2805_OFFSET))(this);
	}

	::RPG::GameCore::FixPoint Method_2_017CF52C3EF5F6C2()
	{
		return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0F82B10534F7616F_METHOD_2_017CF52C3EF5F6C2_OFFSET))(this);
	}

	::System::Void OnInitialize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0F82B10534F7616F_ONINITIALIZE_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0F82B10534F7616F_DISPOSE_OFFSET))(this);
	}

	::System::Void OnBattleInstanceCreated()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0F82B10534F7616F_ONBATTLEINSTANCECREATED_OFFSET))(this);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0F82B10534F7616F_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_2_B43C848B078B3C34()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0F82B10534F7616F_METHOD_2_B43C848B078B3C34_OFFSET))(this);
	}

	::Class_2_0F82B10534F7616F_Class_1_0AB3957A5CD667A3* Method_2_214D81C5C5D8C705(::System::Int32 a1)
	{
		return ((::Class_2_0F82B10534F7616F_Class_1_0AB3957A5CD667A3*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_0F82B10534F7616F_METHOD_2_214D81C5C5D8C705_OFFSET))(this, a1);
	}

	::System::Void Method_2_90E193E5FBAC2C4E(::RPG::GameCore::ActivityStatisticsType a1, ::RPG::GameCore::PropertyModifyFunction a2, ::RPG::GameCore::FixPoint a3)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::ActivityStatisticsType, ::RPG::GameCore::PropertyModifyFunction, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + CLASS_2_0F82B10534F7616F_METHOD_2_90E193E5FBAC2C4E_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_2_4ED9AC70395CC495(::RPG::GameCore::FixPoint& a1, ::RPG::GameCore::PropertyModifyFunction a2, ::RPG::GameCore::FixPoint a3)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::FixPoint&, ::RPG::GameCore::PropertyModifyFunction, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + CLASS_2_0F82B10534F7616F_METHOD_2_4ED9AC70395CC495_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_2_FBCC8E41846763EA(::RPG::GameCore::LevelCharacterDie* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::LevelCharacterDie*))((::PBYTE)hIl2Cpp + CLASS_2_0F82B10534F7616F_METHOD_2_FBCC8E41846763EA_OFFSET))(this, a1);
	}

	::System::Void Method_2_35352E75FE6E819C(::RPG::GameCore::LevelCharacterEndAttack* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::LevelCharacterEndAttack*))((::PBYTE)hIl2Cpp + CLASS_2_0F82B10534F7616F_METHOD_2_35352E75FE6E819C_OFFSET))(this, a1);
	}

	::System::Void Method_2_677A5EF663CAC9AD(::RPG::GameCore::LevelCharacterBeginAttack* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::LevelCharacterBeginAttack*))((::PBYTE)hIl2Cpp + CLASS_2_0F82B10534F7616F_METHOD_2_677A5EF663CAC9AD_OFFSET))(this, a1);
	}

	::System::Void Method_2_ACE2B7C6605C2458(::RPG::GameCore::LevelDamageEntityPhase1* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::LevelDamageEntityPhase1*))((::PBYTE)hIl2Cpp + CLASS_2_0F82B10534F7616F_METHOD_2_ACE2B7C6605C2458_OFFSET))(this, a1);
	}

	::System::Void Method_2_3D6722B9F8F20694()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0F82B10534F7616F_METHOD_2_3D6722B9F8F20694_OFFSET))(this);
	}

	::System::Void Method_2_C50B93169B85DAEA(::Class_0_16E4307DCC419505_540* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_540*))((::PBYTE)hIl2Cpp + CLASS_2_0F82B10534F7616F_METHOD_2_C50B93169B85DAEA_OFFSET))(this, a1);
	}

	::System::Void GenStatistics(::RPG::GameCore::PVEGameStatistics* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::PVEGameStatistics*))((::PBYTE)hIl2Cpp + CLASS_2_0F82B10534F7616F_GENSTATISTICS_OFFSET))(this, a1);
	}

	::Class_2_0F82B10534F7616F_Class_1_D0E38BACF7313C48* Method_2_E39F4C36A19FE6E6()
	{
		return ((::Class_2_0F82B10534F7616F_Class_1_D0E38BACF7313C48*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0F82B10534F7616F_METHOD_2_E39F4C36A19FE6E6_OFFSET))(this);
	}
};

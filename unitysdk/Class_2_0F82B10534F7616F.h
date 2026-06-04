#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_9E296C95827C90A8.h"
#include "unitysdk/RPG/GameCore/ActivityStatisticsType.h"
#include "unitysdk/RPG/GameCore/ActivitySubModeType.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/RPG/GameCore/PropertyModifyFunction.h"

class Class_0_16E4307DCC419505_516;
class Class_2_0F82B10534F7616F_Class_1_0AB3957A5CD667A3;
class Class_2_0F82B10534F7616F_Class_1_D0E38BACF7313C48;
namespace RPG::GameCore { class LevelCharacterBeginAttack; }
namespace RPG::GameCore { class LevelCharacterDie; }
namespace RPG::GameCore { class LevelCharacterEndAttack; }
namespace RPG::GameCore { class LevelDamageEntityPhase1; }
namespace RPG::GameCore { class PVEGameStatistics; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_0F82B10534F7616F_DISPOSE_OFFSET UNITYSDK_OFFSET(0xAF2FC50)
#define CLASS_2_0F82B10534F7616F_GENSTATISTICS_OFFSET UNITYSDK_OFFSET(0xAF30600)
#define CLASS_2_0F82B10534F7616F_GET_ACTIVITYSUBMODETYPE_OFFSET UNITYSDK_OFFSET(0xAF2F560)
#define CLASS_2_0F82B10534F7616F_METHOD_2_017CF52C3EF5F6C2_OFFSET UNITYSDK_OFFSET(0xAF2F630)
#define CLASS_2_0F82B10534F7616F_METHOD_2_214D81C5C5D8C705_OFFSET UNITYSDK_OFFSET(0xAF2EE20)
#define CLASS_2_0F82B10534F7616F_METHOD_2_2E06C7864AB69B69_OFFSET UNITYSDK_OFFSET(0xAF2F570)
#define CLASS_2_0F82B10534F7616F_METHOD_2_35352E75FE6E819C_OFFSET UNITYSDK_OFFSET(0xAF30050)
#define CLASS_2_0F82B10534F7616F_METHOD_2_3B200ED17C4AEBE0_OFFSET UNITYSDK_OFFSET(0xAF2EE90)
#define CLASS_2_0F82B10534F7616F_METHOD_2_3D6722B9F8F20694_OFFSET UNITYSDK_OFFSET(0xAF2F7C0)
#define CLASS_2_0F82B10534F7616F_METHOD_2_48C710EE6C813513_OFFSET UNITYSDK_OFFSET(0xAF2F3D0)
#define CLASS_2_0F82B10534F7616F_METHOD_2_4ED9AC70395CC495_OFFSET UNITYSDK_OFFSET(0xAF2FED0)
#define CLASS_2_0F82B10534F7616F_METHOD_2_5790A55946AA509D_OFFSET UNITYSDK_OFFSET(0xAF31110)
#define CLASS_2_0F82B10534F7616F_METHOD_2_677A5EF663CAC9AD_OFFSET UNITYSDK_OFFSET(0xAF30350)
#define CLASS_2_0F82B10534F7616F_METHOD_2_90E193E5FBAC2C4E_OFFSET UNITYSDK_OFFSET(0xAF2FD80)
#define CLASS_2_0F82B10534F7616F_METHOD_2_ACE2B7C6605C2458_OFFSET UNITYSDK_OFFSET(0xAF303D0)
#define CLASS_2_0F82B10534F7616F_METHOD_2_B43C848B078B3C34_OFFSET UNITYSDK_OFFSET(0xAF2F9C0)
#define CLASS_2_0F82B10534F7616F_METHOD_2_C50B93169B85DAEA_OFFSET UNITYSDK_OFFSET(0xAF305B0)
#define CLASS_2_0F82B10534F7616F_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0xAF2FD40)
#define CLASS_2_0F82B10534F7616F_METHOD_2_CB21C488147ABF3E_OFFSET UNITYSDK_OFFSET(0xAF31170)
#define CLASS_2_0F82B10534F7616F_METHOD_2_D394FC19DBFBB97B_OFFSET UNITYSDK_OFFSET(0xAF2F2D0)
#define CLASS_2_0F82B10534F7616F_METHOD_2_D5092B5C3F0042DE_OFFSET UNITYSDK_OFFSET(0xAF2ED50)
#define CLASS_2_0F82B10534F7616F_METHOD_2_E39F4C36A19FE6E6_OFFSET UNITYSDK_OFFSET(0xAF30BA0)
#define CLASS_2_0F82B10534F7616F_METHOD_2_F25D2DE7181D2805_OFFSET UNITYSDK_OFFSET(0xAF2F5D0)
#define CLASS_2_0F82B10534F7616F_METHOD_2_FBCC8E41846763EA_OFFSET UNITYSDK_OFFSET(0xAF2FF60)
#define CLASS_2_0F82B10534F7616F_ONBATTLEINSTANCECREATED_OFFSET UNITYSDK_OFFSET(0xAF2FCF0)
#define CLASS_2_0F82B10534F7616F_ONINITIALIZE_OFFSET UNITYSDK_OFFSET(0xAF2F690)
#define CLASS_2_0F82B10534F7616F__CTOR_OFFSET UNITYSDK_OFFSET(0xAF30F60)
#define CLASS_2_0F82B10534F7616F___IFIXBASEPROXY_DISPOSE_OFFSET UNITYSDK_OFFSET(0xAF31030)
#define CLASS_2_0F82B10534F7616F___IFIXBASEPROXY_GENSTATISTICS_OFFSET UNITYSDK_OFFSET(0xAF311E0)
#define CLASS_2_0F82B10534F7616F___IFIXBASEPROXY_ONBATTLEINSTANCECREATED_OFFSET UNITYSDK_OFFSET(0xAF310B0)
#define CLASS_2_0F82B10534F7616F___IFIXBASEPROXY_ONINITIALIZE_OFFSET UNITYSDK_OFFSET(0xAF30FD0)

inline static constexpr unsigned int Class_2_0F82B10534F7616F_TypeDefinitionIndex = 52280;

class Class_2_0F82B10534F7616F : public ::Class_1_9E296C95827C90A8
{
public:
	::System::Collections::Generic::List_1<::System::Int32>* Field_2_0; // 0x30
	::Il2CppArray<::Class_2_0F82B10534F7616F_Class_1_0AB3957A5CD667A3*>* Field_2_1; // 0x38
	::System::Collections::Generic::List_1<::Class_2_0F82B10534F7616F_Class_1_0AB3957A5CD667A3*>* Field_2_2; // 0x40
	::RPG::GameCore::FixPoint Field_2_3; // 0x48

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

	::System::Void Method_2_C50B93169B85DAEA(::Class_0_16E4307DCC419505_516* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_516*))((::PBYTE)hIl2Cpp + CLASS_2_0F82B10534F7616F_METHOD_2_C50B93169B85DAEA_OFFSET))(this, a1);
	}

	::System::Void GenStatistics(::RPG::GameCore::PVEGameStatistics* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::PVEGameStatistics*))((::PBYTE)hIl2Cpp + CLASS_2_0F82B10534F7616F_GENSTATISTICS_OFFSET))(this, a1);
	}

	::Class_2_0F82B10534F7616F_Class_1_D0E38BACF7313C48* Method_2_E39F4C36A19FE6E6()
	{
		return ((::Class_2_0F82B10534F7616F_Class_1_D0E38BACF7313C48*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0F82B10534F7616F_METHOD_2_E39F4C36A19FE6E6_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_OnInitialize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0F82B10534F7616F___IFIXBASEPROXY_ONINITIALIZE_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0F82B10534F7616F___IFIXBASEPROXY_DISPOSE_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_OnBattleInstanceCreated()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0F82B10534F7616F___IFIXBASEPROXY_ONBATTLEINSTANCECREATED_OFFSET))(this);
	}

	::System::Void Method_2_5790A55946AA509D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0F82B10534F7616F_METHOD_2_5790A55946AA509D_OFFSET))(this);
	}

	::System::Void Method_2_CB21C488147ABF3E(::RPG::GameCore::ActivityStatisticsType a1, ::RPG::GameCore::PropertyModifyFunction a2, ::RPG::GameCore::FixPoint a3)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::ActivityStatisticsType, ::RPG::GameCore::PropertyModifyFunction, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + CLASS_2_0F82B10534F7616F_METHOD_2_CB21C488147ABF3E_OFFSET))(this, a1, a2, a3);
	}

	::System::Void __iFixBaseProxy_GenStatistics(::RPG::GameCore::PVEGameStatistics* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::PVEGameStatistics*))((::PBYTE)hIl2Cpp + CLASS_2_0F82B10534F7616F___IFIXBASEPROXY_GENSTATISTICS_OFFSET))(this, a1);
	}
};

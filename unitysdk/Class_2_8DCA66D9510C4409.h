#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_9E296C95827C90A8.h"
#include "unitysdk/RPG/GameCore/ActivitySubModeType.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/RPG/GameCore/PropertyModifyFunction.h"

class Class_0_16E4307DCC419505_482;
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class LevelUseAbility; }
namespace RPG::GameCore { class PVEGameStatistics; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_8DCA66D9510C4409_GENSTATISTICS_OFFSET UNITYSDK_OFFSET(0x129952D0)
#define CLASS_2_8DCA66D9510C4409_GET_ACTIVITYSUBMODETYPE_OFFSET UNITYSDK_OFFSET(0x129947F0)
#define CLASS_2_8DCA66D9510C4409_GET_ELATIONABILITYCHANGEPARAMLIST_OFFSET UNITYSDK_OFFSET(0x12995C70)
#define CLASS_2_8DCA66D9510C4409_GET_ELATIONPOWER_OFFSET UNITYSDK_OFFSET(0x12995C90)
#define CLASS_2_8DCA66D9510C4409_METHOD_2_184AE6D5B1216FA2_OFFSET UNITYSDK_OFFSET(0x1294A880)
#define CLASS_2_8DCA66D9510C4409_METHOD_2_66B03BDD93F1C7B1_OFFSET UNITYSDK_OFFSET(0x12995770)
#define CLASS_2_8DCA66D9510C4409_METHOD_2_688236BBEF011481_OFFSET UNITYSDK_OFFSET(0x12995230)
#define CLASS_2_8DCA66D9510C4409_METHOD_2_899F013A507BD6D1_OFFSET UNITYSDK_OFFSET(0x12994ED0)
#define CLASS_2_8DCA66D9510C4409_METHOD_2_95780ED94B90ED36_OFFSET UNITYSDK_OFFSET(0x12995C20)
#define CLASS_2_8DCA66D9510C4409_METHOD_2_9C1F668AC136A1A1_OFFSET UNITYSDK_OFFSET(0x12995A20)
#define CLASS_2_8DCA66D9510C4409_METHOD_2_AD6438C287489460_OFFSET UNITYSDK_OFFSET(0x12995B40)
#define CLASS_2_8DCA66D9510C4409_METHOD_2_BC34D12C14FA32D8_OFFSET UNITYSDK_OFFSET(0x12995AB0)
#define CLASS_2_8DCA66D9510C4409_METHOD_2_C11966B2D64219DD_OFFSET UNITYSDK_OFFSET(0x12994A70)
#define CLASS_2_8DCA66D9510C4409_METHOD_2_CA373AA1C7054598_1_OFFSET UNITYSDK_OFFSET(0x129951F0)
#define CLASS_2_8DCA66D9510C4409_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x129959D0)
#define CLASS_2_8DCA66D9510C4409_ONBATTLEINSTANCECREATED_OFFSET UNITYSDK_OFFSET(0x12994930)
#define CLASS_2_8DCA66D9510C4409_ONINITIALIZE_OFFSET UNITYSDK_OFFSET(0x12994800)
#define CLASS_2_8DCA66D9510C4409_SET_ELATIONABILITYCHANGEPARAMLIST_OFFSET UNITYSDK_OFFSET(0x12995C80)
#define CLASS_2_8DCA66D9510C4409_SET_ELATIONPOWER_OFFSET UNITYSDK_OFFSET(0x12995CA0)
#define CLASS_2_8DCA66D9510C4409__CTOR_OFFSET UNITYSDK_OFFSET(0x12995CB0)
#define CLASS_2_8DCA66D9510C4409___IFIXBASEPROXY_GENSTATISTICS_OFFSET UNITYSDK_OFFSET(0x12995E60)
#define CLASS_2_8DCA66D9510C4409___IFIXBASEPROXY_ONBATTLEINSTANCECREATED_OFFSET UNITYSDK_OFFSET(0x12995E00)
#define CLASS_2_8DCA66D9510C4409___IFIXBASEPROXY_ONINITIALIZE_OFFSET UNITYSDK_OFFSET(0x12995DA0)

inline static constexpr unsigned int Class_2_8DCA66D9510C4409_TypeDefinitionIndex = 51608;

class Class_2_8DCA66D9510C4409 : public ::Class_1_9E296C95827C90A8
{
public:
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::GameCore::FixPoint>* Field_2_9; // 0x30
	::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_482*>* _ElationAbilityChangeParamList_k__BackingField; // 0x38
	::RPG::GameCore::FixPoint Field_2_5; // 0x40
	::RPG::GameCore::FixPoint Field_2_4; // 0x48
	::System::UInt32 Field_2_7; // 0x50
	::System::UInt32 Field_2_6; // 0x54
	::System::Boolean Field_2_8; // 0x58
	::RPG::GameCore::FixPoint _ElationPower_k__BackingField; // 0x60
	::RPG::GameCore::FixPoint Field_2_2; // 0x68
	::RPG::GameCore::FixPoint Field_2_3; // 0x70

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8DCA66D9510C4409__CTOR_OFFSET))(this);
	}

	::RPG::GameCore::ActivitySubModeType get_ActivitySubModeType()
	{
		return ((::RPG::GameCore::ActivitySubModeType(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8DCA66D9510C4409_GET_ACTIVITYSUBMODETYPE_OFFSET))(this);
	}

	::System::Void OnInitialize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8DCA66D9510C4409_ONINITIALIZE_OFFSET))(this);
	}

	::System::Void OnBattleInstanceCreated()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8DCA66D9510C4409_ONBATTLEINSTANCECREATED_OFFSET))(this);
	}

	::System::Boolean Method_2_C11966B2D64219DD(::RPG::GameCore::PropertyModifyFunction a1, ::RPG::GameCore::FixPoint a2, ::RPG::GameCore::GameEntity* a3)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::PropertyModifyFunction, ::RPG::GameCore::FixPoint, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_2_8DCA66D9510C4409_METHOD_2_C11966B2D64219DD_OFFSET))(this, a1, a2, a3);
	}

	::System::UInt32 Method_2_184AE6D5B1216FA2()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8DCA66D9510C4409_METHOD_2_184AE6D5B1216FA2_OFFSET))(this);
	}

	::System::Void GenStatistics(::RPG::GameCore::PVEGameStatistics* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::PVEGameStatistics*))((::PBYTE)hIl2Cpp + CLASS_2_8DCA66D9510C4409_GENSTATISTICS_OFFSET))(this, a1);
	}

	::System::Void Method_2_66B03BDD93F1C7B1(::RPG::GameCore::LevelUseAbility* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::LevelUseAbility*))((::PBYTE)hIl2Cpp + CLASS_2_8DCA66D9510C4409_METHOD_2_66B03BDD93F1C7B1_OFFSET))(this, a1);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8DCA66D9510C4409_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_2_CA373AA1C7054598_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8DCA66D9510C4409_METHOD_2_CA373AA1C7054598_1_OFFSET))(this);
	}

	::System::Void Method_2_899F013A507BD6D1(::RPG::GameCore::FixPoint a1, ::RPG::GameCore::FixPoint a2, ::RPG::GameCore::GameEntity* a3)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::FixPoint, ::RPG::GameCore::FixPoint, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_2_8DCA66D9510C4409_METHOD_2_899F013A507BD6D1_OFFSET))(this, a1, a2, a3);
	}

	::System::UInt32 Method_2_688236BBEF011481(::RPG::GameCore::FixPoint a1)
	{
		return ((::System::UInt32(*)(::PVOID, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + CLASS_2_8DCA66D9510C4409_METHOD_2_688236BBEF011481_OFFSET))(this, a1);
	}

	::System::Void Method_2_9C1F668AC136A1A1(::Class_0_16E4307DCC419505_482* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_482*))((::PBYTE)hIl2Cpp + CLASS_2_8DCA66D9510C4409_METHOD_2_9C1F668AC136A1A1_OFFSET))(this, a1);
	}

	::System::Void Method_2_BC34D12C14FA32D8(::Class_0_16E4307DCC419505_482* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_482*))((::PBYTE)hIl2Cpp + CLASS_2_8DCA66D9510C4409_METHOD_2_BC34D12C14FA32D8_OFFSET))(this, a1);
	}

	::System::Void Method_2_AD6438C287489460(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_2_8DCA66D9510C4409_METHOD_2_AD6438C287489460_OFFSET))(this, a1);
	}

	::System::Int32 Method_2_95780ED94B90ED36()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8DCA66D9510C4409_METHOD_2_95780ED94B90ED36_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_482*>* get_ElationAbilityChangeParamList()
	{
		return ((::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_482*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8DCA66D9510C4409_GET_ELATIONABILITYCHANGEPARAMLIST_OFFSET))(this);
	}

	::System::Void set_ElationAbilityChangeParamList(::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_482*>* value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_482*>*))((::PBYTE)hIl2Cpp + CLASS_2_8DCA66D9510C4409_SET_ELATIONABILITYCHANGEPARAMLIST_OFFSET))(this, value);
	}

	::RPG::GameCore::FixPoint get_ElationPower()
	{
		return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8DCA66D9510C4409_GET_ELATIONPOWER_OFFSET))(this);
	}

	::System::Void set_ElationPower(::RPG::GameCore::FixPoint value)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + CLASS_2_8DCA66D9510C4409_SET_ELATIONPOWER_OFFSET))(this, value);
	}

	::System::Void __iFixBaseProxy_OnInitialize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8DCA66D9510C4409___IFIXBASEPROXY_ONINITIALIZE_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_OnBattleInstanceCreated()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8DCA66D9510C4409___IFIXBASEPROXY_ONBATTLEINSTANCECREATED_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_GenStatistics(::RPG::GameCore::PVEGameStatistics* P0)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::PVEGameStatistics*))((::PBYTE)hIl2Cpp + CLASS_2_8DCA66D9510C4409___IFIXBASEPROXY_GENSTATISTICS_OFFSET))(this, P0);
	}
};

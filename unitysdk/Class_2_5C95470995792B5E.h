#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_B6AB561EB80E0B93.h"
#include "unitysdk/RPG/GameCore/ActivitySubModeType.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/RPG/GameCore/PropertyModifyFunction.h"

class Class_0_16E4307DCC419505_650;
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class LevelUseAbility; }
namespace RPG::GameCore { class PVEGameStatistics; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_5C95470995792B5E_GENSTATISTICS_OFFSET UNITYSDK_OFFSET(0xB594290)
#define CLASS_2_5C95470995792B5E_GET_ACTIVITYSUBMODETYPE_OFFSET UNITYSDK_OFFSET(0xB5933B0)
#define CLASS_2_5C95470995792B5E_GET_ELATIONABILITYCHANGEPARAMLIST_OFFSET UNITYSDK_OFFSET(0xB594EC0)
#define CLASS_2_5C95470995792B5E_GET_ELATIONPOWER_OFFSET UNITYSDK_OFFSET(0xB594EE0)
#define CLASS_2_5C95470995792B5E_METHOD_2_554435A66E82B693_OFFSET UNITYSDK_OFFSET(0xB594D70)
#define CLASS_2_5C95470995792B5E_METHOD_2_5B0531D5B96D6B96_OFFSET UNITYSDK_OFFSET(0xB594C00)
#define CLASS_2_5C95470995792B5E_METHOD_2_634B90EA084872BB_OFFSET UNITYSDK_OFFSET(0xB593BF0)
#define CLASS_2_5C95470995792B5E_METHOD_2_8D89A5979C787D3B_OFFSET UNITYSDK_OFFSET(0xB5949C0)
#define CLASS_2_5C95470995792B5E_METHOD_2_95780ED94B90ED36_OFFSET UNITYSDK_OFFSET(0xB594E70)
#define CLASS_2_5C95470995792B5E_METHOD_2_BC34D12C14FA32D8_OFFSET UNITYSDK_OFFSET(0xB594CE0)
#define CLASS_2_5C95470995792B5E_METHOD_2_CA373AA1C7054598_1_OFFSET UNITYSDK_OFFSET(0xB593F80)
#define CLASS_2_5C95470995792B5E_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0xB594BA0)
#define CLASS_2_5C95470995792B5E_METHOD_2_EEAA28689E8B2C62_OFFSET UNITYSDK_OFFSET(0xB5935B0)
#define CLASS_2_5C95470995792B5E_METHOD_2_F0E4FAC8E5EC9E93_OFFSET UNITYSDK_OFFSET(0xB593FC0)
#define CLASS_2_5C95470995792B5E_METHOD_2_F6BBCC3D0EF58628_OFFSET UNITYSDK_OFFSET(0xB594140)
#define CLASS_2_5C95470995792B5E_ONBATTLEINSTANCECREATED_OFFSET UNITYSDK_OFFSET(0xB593480)
#define CLASS_2_5C95470995792B5E_ONINITIALIZE_OFFSET UNITYSDK_OFFSET(0xB5933C0)
#define CLASS_2_5C95470995792B5E_SET_ELATIONABILITYCHANGEPARAMLIST_OFFSET UNITYSDK_OFFSET(0xB594ED0)
#define CLASS_2_5C95470995792B5E_SET_ELATIONPOWER_OFFSET UNITYSDK_OFFSET(0xB594EF0)
#define CLASS_2_5C95470995792B5E__CTOR_OFFSET UNITYSDK_OFFSET(0xB594F00)

inline static constexpr unsigned int Class_2_5C95470995792B5E_TypeDefinitionIndex = 55955;

class Class_2_5C95470995792B5E : public ::Class_1_B6AB561EB80E0B93
{
public:
	::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_650*>* _ElationAbilityChangeParamList_k__BackingField; // 0x38
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::GameCore::FixPoint>* CKICPNNHBOI; // 0x40
	::System::UInt32 NKCCHCLGKBI; // 0x48
	::RPG::GameCore::FixPoint _ElationPower_k__BackingField; // 0x50
	::RPG::GameCore::FixPoint FMGKDGLEDPJ; // 0x58
	::RPG::GameCore::FixPoint GFGJAFMIILP; // 0x60
	::System::Boolean NEGEAEEFIBN; // 0x68
	::System::UInt32 LJCHAINMLBD; // 0x6C
	::RPG::GameCore::FixPoint LHKEOHCIFBJ; // 0x70
	::RPG::GameCore::FixPoint IEKLENGNGNH; // 0x78

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5C95470995792B5E__CTOR_OFFSET))(this);
	}

	::RPG::GameCore::ActivitySubModeType get_ActivitySubModeType()
	{
		return ((::RPG::GameCore::ActivitySubModeType(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5C95470995792B5E_GET_ACTIVITYSUBMODETYPE_OFFSET))(this);
	}

	::System::Void OnInitialize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5C95470995792B5E_ONINITIALIZE_OFFSET))(this);
	}

	::System::Void OnBattleInstanceCreated()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5C95470995792B5E_ONBATTLEINSTANCECREATED_OFFSET))(this);
	}

	::System::Boolean Method_2_EEAA28689E8B2C62(::RPG::GameCore::PropertyModifyFunction a1, ::RPG::GameCore::FixPoint a2, ::RPG::GameCore::GameEntity* a3)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::PropertyModifyFunction, ::RPG::GameCore::FixPoint, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_2_5C95470995792B5E_METHOD_2_EEAA28689E8B2C62_OFFSET))(this, a1, a2, a3);
	}

	::System::UInt32 Method_2_F0E4FAC8E5EC9E93()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5C95470995792B5E_METHOD_2_F0E4FAC8E5EC9E93_OFFSET))(this);
	}

	::System::Void GenStatistics(::RPG::GameCore::PVEGameStatistics* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::PVEGameStatistics*))((::PBYTE)hIl2Cpp + CLASS_2_5C95470995792B5E_GENSTATISTICS_OFFSET))(this, a1);
	}

	::System::Void Method_2_8D89A5979C787D3B(::RPG::GameCore::LevelUseAbility* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::LevelUseAbility*))((::PBYTE)hIl2Cpp + CLASS_2_5C95470995792B5E_METHOD_2_8D89A5979C787D3B_OFFSET))(this, a1);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5C95470995792B5E_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_2_CA373AA1C7054598_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5C95470995792B5E_METHOD_2_CA373AA1C7054598_1_OFFSET))(this);
	}

	::System::Void Method_2_634B90EA084872BB(::RPG::GameCore::FixPoint a1, ::RPG::GameCore::FixPoint a2, ::RPG::GameCore::GameEntity* a3)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::FixPoint, ::RPG::GameCore::FixPoint, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_2_5C95470995792B5E_METHOD_2_634B90EA084872BB_OFFSET))(this, a1, a2, a3);
	}

	::System::UInt32 Method_2_F6BBCC3D0EF58628(::RPG::GameCore::FixPoint a1)
	{
		return ((::System::UInt32(*)(::PVOID, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + CLASS_2_5C95470995792B5E_METHOD_2_F6BBCC3D0EF58628_OFFSET))(this, a1);
	}

	::System::Void Method_2_5B0531D5B96D6B96(::Class_0_16E4307DCC419505_650* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_650*))((::PBYTE)hIl2Cpp + CLASS_2_5C95470995792B5E_METHOD_2_5B0531D5B96D6B96_OFFSET))(this, a1);
	}

	::System::Void Method_2_BC34D12C14FA32D8(::Class_0_16E4307DCC419505_650* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_650*))((::PBYTE)hIl2Cpp + CLASS_2_5C95470995792B5E_METHOD_2_BC34D12C14FA32D8_OFFSET))(this, a1);
	}

	::System::Void Method_2_554435A66E82B693(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_2_5C95470995792B5E_METHOD_2_554435A66E82B693_OFFSET))(this, a1);
	}

	::System::Int32 Method_2_95780ED94B90ED36()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5C95470995792B5E_METHOD_2_95780ED94B90ED36_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_650*>* get_ElationAbilityChangeParamList()
	{
		return ((::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_650*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5C95470995792B5E_GET_ELATIONABILITYCHANGEPARAMLIST_OFFSET))(this);
	}

	::System::Void set_ElationAbilityChangeParamList(::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_650*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_650*>*))((::PBYTE)hIl2Cpp + CLASS_2_5C95470995792B5E_SET_ELATIONABILITYCHANGEPARAMLIST_OFFSET))(this, a1);
	}

	::RPG::GameCore::FixPoint get_ElationPower()
	{
		return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5C95470995792B5E_GET_ELATIONPOWER_OFFSET))(this);
	}

	::System::Void set_ElationPower(::RPG::GameCore::FixPoint a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + CLASS_2_5C95470995792B5E_SET_ELATIONPOWER_OFFSET))(this, a1);
	}
};

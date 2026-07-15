#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_D90D29A0DA06B4F8.h"
#include "unitysdk/RPG/GameCore/ActivitySubModeType.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/RPG/GameCore/PropertyModifyFunction.h"

class Class_0_16E4307DCC419505_527;
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class LevelUseAbility; }
namespace RPG::GameCore { class PVEGameStatistics; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_D4B8A1380C1BB35B_GENSTATISTICS_OFFSET UNITYSDK_OFFSET(0x188DB1F0)
#define CLASS_2_D4B8A1380C1BB35B_GET_ACTIVITYSUBMODETYPE_OFFSET UNITYSDK_OFFSET(0x188DA690)
#define CLASS_2_D4B8A1380C1BB35B_GET_ELATIONABILITYCHANGEPARAMLIST_OFFSET UNITYSDK_OFFSET(0x17831130)
#define CLASS_2_D4B8A1380C1BB35B_GET_ELATIONPOWER_OFFSET UNITYSDK_OFFSET(0x17831150)
#define CLASS_2_D4B8A1380C1BB35B_METHOD_2_0284BBCF8B386591_OFFSET UNITYSDK_OFFSET(0x188DB1A0)
#define CLASS_2_D4B8A1380C1BB35B_METHOD_2_2AE1D711F460B5DC_OFFSET UNITYSDK_OFFSET(0x188DAEF0)
#define CLASS_2_D4B8A1380C1BB35B_METHOD_2_554435A66E82B693_OFFSET UNITYSDK_OFFSET(0x17830FE0)
#define CLASS_2_D4B8A1380C1BB35B_METHOD_2_5B0531D5B96D6B96_OFFSET UNITYSDK_OFFSET(0x17830E70)
#define CLASS_2_D4B8A1380C1BB35B_METHOD_2_8D89A5979C787D3B_OFFSET UNITYSDK_OFFSET(0x188DB920)
#define CLASS_2_D4B8A1380C1BB35B_METHOD_2_95780ED94B90ED36_OFFSET UNITYSDK_OFFSET(0x178310E0)
#define CLASS_2_D4B8A1380C1BB35B_METHOD_2_BC34D12C14FA32D8_OFFSET UNITYSDK_OFFSET(0x17830F50)
#define CLASS_2_D4B8A1380C1BB35B_METHOD_2_CA373AA1C7054598_1_OFFSET UNITYSDK_OFFSET(0x188DB160)
#define CLASS_2_D4B8A1380C1BB35B_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x188DBB00)
#define CLASS_2_D4B8A1380C1BB35B_METHOD_2_EEAA28689E8B2C62_OFFSET UNITYSDK_OFFSET(0x188DA8B0)
#define CLASS_2_D4B8A1380C1BB35B_METHOD_2_F6BBCC3D0EF58628_OFFSET UNITYSDK_OFFSET(0x17830D20)
#define CLASS_2_D4B8A1380C1BB35B_ONBATTLEINSTANCECREATED_OFFSET UNITYSDK_OFFSET(0x188DA760)
#define CLASS_2_D4B8A1380C1BB35B_ONINITIALIZE_OFFSET UNITYSDK_OFFSET(0x188DA6A0)
#define CLASS_2_D4B8A1380C1BB35B_SET_ELATIONABILITYCHANGEPARAMLIST_OFFSET UNITYSDK_OFFSET(0x17831140)
#define CLASS_2_D4B8A1380C1BB35B_SET_ELATIONPOWER_OFFSET UNITYSDK_OFFSET(0x17831160)
#define CLASS_2_D4B8A1380C1BB35B__CTOR_OFFSET UNITYSDK_OFFSET(0x17831170)

inline static constexpr unsigned int Class_2_D4B8A1380C1BB35B_TypeDefinitionIndex = 53429;

class Class_2_D4B8A1380C1BB35B : public ::Class_1_D90D29A0DA06B4F8
{
public:
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::GameCore::FixPoint>* Field_2_0; // 0x38
	::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_527*>* _ElationAbilityChangeParamList_k__BackingField; // 0x40
	::RPG::GameCore::FixPoint Field_2_2; // 0x48
	::RPG::GameCore::FixPoint _ElationPower_k__BackingField; // 0x50
	::RPG::GameCore::FixPoint Field_2_4; // 0x58
	::System::UInt32 Field_2_5; // 0x60
	::System::UInt32 Field_2_6; // 0x64
	::RPG::GameCore::FixPoint Field_2_7; // 0x68
	::System::Boolean Field_2_8; // 0x70
	::RPG::GameCore::FixPoint Field_2_9; // 0x78

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D4B8A1380C1BB35B__CTOR_OFFSET))(this);
	}

	::RPG::GameCore::ActivitySubModeType get_ActivitySubModeType()
	{
		return ((::RPG::GameCore::ActivitySubModeType(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D4B8A1380C1BB35B_GET_ACTIVITYSUBMODETYPE_OFFSET))(this);
	}

	::System::Void OnInitialize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D4B8A1380C1BB35B_ONINITIALIZE_OFFSET))(this);
	}

	::System::Void OnBattleInstanceCreated()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D4B8A1380C1BB35B_ONBATTLEINSTANCECREATED_OFFSET))(this);
	}

	::System::Boolean Method_2_EEAA28689E8B2C62(::RPG::GameCore::PropertyModifyFunction a1, ::RPG::GameCore::FixPoint a2, ::RPG::GameCore::GameEntity* a3)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::PropertyModifyFunction, ::RPG::GameCore::FixPoint, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_2_D4B8A1380C1BB35B_METHOD_2_EEAA28689E8B2C62_OFFSET))(this, a1, a2, a3);
	}

	::System::UInt32 Method_2_0284BBCF8B386591()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D4B8A1380C1BB35B_METHOD_2_0284BBCF8B386591_OFFSET))(this);
	}

	::System::Void GenStatistics(::RPG::GameCore::PVEGameStatistics* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::PVEGameStatistics*))((::PBYTE)hIl2Cpp + CLASS_2_D4B8A1380C1BB35B_GENSTATISTICS_OFFSET))(this, a1);
	}

	::System::Void Method_2_8D89A5979C787D3B(::RPG::GameCore::LevelUseAbility* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::LevelUseAbility*))((::PBYTE)hIl2Cpp + CLASS_2_D4B8A1380C1BB35B_METHOD_2_8D89A5979C787D3B_OFFSET))(this, a1);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D4B8A1380C1BB35B_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_2_CA373AA1C7054598_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D4B8A1380C1BB35B_METHOD_2_CA373AA1C7054598_1_OFFSET))(this);
	}

	::System::Void Method_2_2AE1D711F460B5DC(::RPG::GameCore::FixPoint a1, ::RPG::GameCore::FixPoint a2, ::RPG::GameCore::GameEntity* a3)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::FixPoint, ::RPG::GameCore::FixPoint, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_2_D4B8A1380C1BB35B_METHOD_2_2AE1D711F460B5DC_OFFSET))(this, a1, a2, a3);
	}

	::System::UInt32 Method_2_F6BBCC3D0EF58628(::RPG::GameCore::FixPoint a1)
	{
		return ((::System::UInt32(*)(::PVOID, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + CLASS_2_D4B8A1380C1BB35B_METHOD_2_F6BBCC3D0EF58628_OFFSET))(this, a1);
	}

	::System::Void Method_2_5B0531D5B96D6B96(::Class_0_16E4307DCC419505_527* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_527*))((::PBYTE)hIl2Cpp + CLASS_2_D4B8A1380C1BB35B_METHOD_2_5B0531D5B96D6B96_OFFSET))(this, a1);
	}

	::System::Void Method_2_BC34D12C14FA32D8(::Class_0_16E4307DCC419505_527* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_527*))((::PBYTE)hIl2Cpp + CLASS_2_D4B8A1380C1BB35B_METHOD_2_BC34D12C14FA32D8_OFFSET))(this, a1);
	}

	::System::Void Method_2_554435A66E82B693(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_2_D4B8A1380C1BB35B_METHOD_2_554435A66E82B693_OFFSET))(this, a1);
	}

	::System::Int32 Method_2_95780ED94B90ED36()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D4B8A1380C1BB35B_METHOD_2_95780ED94B90ED36_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_527*>* get_ElationAbilityChangeParamList()
	{
		return ((::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_527*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D4B8A1380C1BB35B_GET_ELATIONABILITYCHANGEPARAMLIST_OFFSET))(this);
	}

	::System::Void set_ElationAbilityChangeParamList(::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_527*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_527*>*))((::PBYTE)hIl2Cpp + CLASS_2_D4B8A1380C1BB35B_SET_ELATIONABILITYCHANGEPARAMLIST_OFFSET))(this, a1);
	}

	::RPG::GameCore::FixPoint get_ElationPower()
	{
		return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D4B8A1380C1BB35B_GET_ELATIONPOWER_OFFSET))(this);
	}

	::System::Void set_ElationPower(::RPG::GameCore::FixPoint a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + CLASS_2_D4B8A1380C1BB35B_SET_ELATIONPOWER_OFFSET))(this, a1);
	}
};

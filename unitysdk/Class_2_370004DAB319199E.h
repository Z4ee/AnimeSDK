#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FiveDimLoadMode.h"
#include "unitysdk/RPG/GameCore/GameComponentBase.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_151B93D9C4BBDCA4;
namespace RPG::GameCore { class LevelLittleGameInfo; }
namespace RPG::GameCore { class LittleGameLevelConfig; }
namespace RPG::GameCore { class LittleGameLevelVarBindingMap; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_370004DAB319199E_DISPOSE_OFFSET UNITYSDK_OFFSET(0x12A9FA30)
#define CLASS_2_370004DAB319199E_GET_CONTAINERINFO_OFFSET UNITYSDK_OFFSET(0x12A9FF30)
#define CLASS_2_370004DAB319199E_GET_LEVELCONFIGPATH_OFFSET UNITYSDK_OFFSET(0x12A9FF10)
#define CLASS_2_370004DAB319199E_GET_LEVELCONFIG_OFFSET UNITYSDK_OFFSET(0x12A9FF50)
#define CLASS_2_370004DAB319199E_GET_LEVELVARBINDING_OFFSET UNITYSDK_OFFSET(0x12A9FF90)
#define CLASS_2_370004DAB319199E_GET_LITTLEGAMEINSTANCE_OFFSET UNITYSDK_OFFSET(0x12A9FF70)
#define CLASS_2_370004DAB319199E_LATEUPDATE_OFFSET UNITYSDK_OFFSET(0x12A9FDF0)
#define CLASS_2_370004DAB319199E_METHOD_2_289F28027FF47717_OFFSET UNITYSDK_OFFSET(0x12A9F9A0)
#define CLASS_2_370004DAB319199E_METHOD_2_354036A4D50F194A_OFFSET UNITYSDK_OFFSET(0x12A9F5C0)
#define CLASS_2_370004DAB319199E_METHOD_2_4343F372F34C05BF_OFFSET UNITYSDK_OFFSET(0x12A9FC00)
#define CLASS_2_370004DAB319199E_METHOD_2_45714050EDEF8291_OFFSET UNITYSDK_OFFSET(0x12A9FB00)
#define CLASS_2_370004DAB319199E_METHOD_2_4B290C2E739247F1_OFFSET UNITYSDK_OFFSET(0x12A9F540)
#define CLASS_2_370004DAB319199E_METHOD_2_5176DC743E478510_OFFSET UNITYSDK_OFFSET(0x12A9F740)
#define CLASS_2_370004DAB319199E_METHOD_2_6E7B39B4A39C0DD8_OFFSET UNITYSDK_OFFSET(0x12A9FEA0)
#define CLASS_2_370004DAB319199E_ONWILLBEDESTROY_OFFSET UNITYSDK_OFFSET(0x12A9FA80)
#define CLASS_2_370004DAB319199E_SET_CONTAINERINFO_OFFSET UNITYSDK_OFFSET(0x12A9FF40)
#define CLASS_2_370004DAB319199E_SET_LEVELCONFIGPATH_OFFSET UNITYSDK_OFFSET(0x12A9FF20)
#define CLASS_2_370004DAB319199E_SET_LEVELCONFIG_OFFSET UNITYSDK_OFFSET(0x12A9FF60)
#define CLASS_2_370004DAB319199E_SET_LEVELVARBINDING_OFFSET UNITYSDK_OFFSET(0x12A9FFA0)
#define CLASS_2_370004DAB319199E_SET_LITTLEGAMEINSTANCE_OFFSET UNITYSDK_OFFSET(0x12A9FF80)
#define CLASS_2_370004DAB319199E_TICK_OFFSET UNITYSDK_OFFSET(0x12A9FC60)
#define CLASS_2_370004DAB319199E__CTOR_OFFSET UNITYSDK_OFFSET(0x12A9FFB0)
#define CLASS_2_370004DAB319199E___IFIXBASEPROXY_LATEUPDATE_OFFSET UNITYSDK_OFFSET(0x12A9FFD0)
#define CLASS_2_370004DAB319199E___IFIXBASEPROXY_TICK_OFFSET UNITYSDK_OFFSET(0x12A9FFC0)

inline static constexpr unsigned int Class_2_370004DAB319199E_TypeDefinitionIndex = 52814;

class Class_2_370004DAB319199E : public ::RPG::GameCore::GameComponentBase
{
public:
	::RPG::GameCore::LittleGameLevelConfig* _LevelConfig_k__BackingField; // 0x18
	::RPG::GameCore::LittleGameLevelVarBindingMap* _LevelVarBinding_k__BackingField; // 0x20
	::RPG::GameCore::LevelLittleGameInfo* _ContainerInfo_k__BackingField; // 0x28
	::Class_1_151B93D9C4BBDCA4* _LittleGameInstance_k__BackingField; // 0x30
	::System::String* _LevelConfigPath_k__BackingField; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_370004DAB319199E__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_4B290C2E739247F1(::RPG::GameCore::FiveDimLoadMode a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::FiveDimLoadMode))((::PBYTE)hIl2Cpp + CLASS_2_370004DAB319199E_METHOD_2_4B290C2E739247F1_OFFSET))(this, a1);
	}

	::System::Void Method_2_354036A4D50F194A(::RPG::GameCore::LevelLittleGameInfo* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::LevelLittleGameInfo*))((::PBYTE)hIl2Cpp + CLASS_2_370004DAB319199E_METHOD_2_354036A4D50F194A_OFFSET))(this, a1);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_370004DAB319199E_DISPOSE_OFFSET))(this);
	}

	::System::Void OnWillBeDestroy()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_370004DAB319199E_ONWILLBEDESTROY_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_370004DAB319199E_TICK_OFFSET))(this, a1);
	}

	::System::Void LateUpdate(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_370004DAB319199E_LATEUPDATE_OFFSET))(this, a1);
	}

	::System::Void Method_2_6E7B39B4A39C0DD8(::System::Collections::Generic::List_1<::UnityEngine::Vector3>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::UnityEngine::Vector3>*))((::PBYTE)hIl2Cpp + CLASS_2_370004DAB319199E_METHOD_2_6E7B39B4A39C0DD8_OFFSET))(this, a1);
	}

	::System::Void Method_2_5176DC743E478510()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_370004DAB319199E_METHOD_2_5176DC743E478510_OFFSET))(this);
	}

	::System::Void Method_2_4343F372F34C05BF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_370004DAB319199E_METHOD_2_4343F372F34C05BF_OFFSET))(this);
	}

	::System::Void Method_2_289F28027FF47717()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_370004DAB319199E_METHOD_2_289F28027FF47717_OFFSET))(this);
	}

	::System::Void Method_2_45714050EDEF8291()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_370004DAB319199E_METHOD_2_45714050EDEF8291_OFFSET))(this);
	}

	::System::String* get_LevelConfigPath()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_370004DAB319199E_GET_LEVELCONFIGPATH_OFFSET))(this);
	}

	::System::Void set_LevelConfigPath(::System::String* value)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_370004DAB319199E_SET_LEVELCONFIGPATH_OFFSET))(this, value);
	}

	::RPG::GameCore::LevelLittleGameInfo* get_ContainerInfo()
	{
		return ((::RPG::GameCore::LevelLittleGameInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_370004DAB319199E_GET_CONTAINERINFO_OFFSET))(this);
	}

	::System::Void set_ContainerInfo(::RPG::GameCore::LevelLittleGameInfo* value)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::LevelLittleGameInfo*))((::PBYTE)hIl2Cpp + CLASS_2_370004DAB319199E_SET_CONTAINERINFO_OFFSET))(this, value);
	}

	::RPG::GameCore::LittleGameLevelConfig* get_LevelConfig()
	{
		return ((::RPG::GameCore::LittleGameLevelConfig*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_370004DAB319199E_GET_LEVELCONFIG_OFFSET))(this);
	}

	::System::Void set_LevelConfig(::RPG::GameCore::LittleGameLevelConfig* value)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::LittleGameLevelConfig*))((::PBYTE)hIl2Cpp + CLASS_2_370004DAB319199E_SET_LEVELCONFIG_OFFSET))(this, value);
	}

	::Class_1_151B93D9C4BBDCA4* get_LittleGameInstance()
	{
		return ((::Class_1_151B93D9C4BBDCA4*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_370004DAB319199E_GET_LITTLEGAMEINSTANCE_OFFSET))(this);
	}

	::System::Void set_LittleGameInstance(::Class_1_151B93D9C4BBDCA4* value)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_151B93D9C4BBDCA4*))((::PBYTE)hIl2Cpp + CLASS_2_370004DAB319199E_SET_LITTLEGAMEINSTANCE_OFFSET))(this, value);
	}

	::RPG::GameCore::LittleGameLevelVarBindingMap* get_LevelVarBinding()
	{
		return ((::RPG::GameCore::LittleGameLevelVarBindingMap*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_370004DAB319199E_GET_LEVELVARBINDING_OFFSET))(this);
	}

	::System::Void set_LevelVarBinding(::RPG::GameCore::LittleGameLevelVarBindingMap* value)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::LittleGameLevelVarBindingMap*))((::PBYTE)hIl2Cpp + CLASS_2_370004DAB319199E_SET_LEVELVARBINDING_OFFSET))(this, value);
	}

	::System::Void __iFixBaseProxy_Tick(::System::Single P0)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_370004DAB319199E___IFIXBASEPROXY_TICK_OFFSET))(this, P0);
	}

	::System::Void __iFixBaseProxy_LateUpdate(::System::Single P0)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_370004DAB319199E___IFIXBASEPROXY_LATEUPDATE_OFFSET))(this, P0);
	}
};

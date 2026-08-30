#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FiveDimLoadMode.h"
#include "unitysdk/RPG/GameCore/GameComponentBase.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_E0103A0EA6CD0F4C;
namespace RPG::GameCore { class LevelLittleGameInfo; }
namespace RPG::GameCore { class LittleGameLevelConfig; }
namespace RPG::GameCore { class LittleGameLevelVarBindingMap; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_849DACF0B6D839B1_DISPOSE_OFFSET UNITYSDK_OFFSET(0xBAE1EF0)
#define CLASS_2_849DACF0B6D839B1_GET_CONTAINERINFO_OFFSET UNITYSDK_OFFSET(0xBAE24C0)
#define CLASS_2_849DACF0B6D839B1_GET_LEVELCONFIGPATH_OFFSET UNITYSDK_OFFSET(0xBAE24A0)
#define CLASS_2_849DACF0B6D839B1_GET_LEVELCONFIG_OFFSET UNITYSDK_OFFSET(0xBAE24E0)
#define CLASS_2_849DACF0B6D839B1_GET_LEVELVARBINDING_OFFSET UNITYSDK_OFFSET(0xBAE2520)
#define CLASS_2_849DACF0B6D839B1_GET_LITTLEGAMEINSTANCE_OFFSET UNITYSDK_OFFSET(0xBAE2500)
#define CLASS_2_849DACF0B6D839B1_LATEUPDATE_OFFSET UNITYSDK_OFFSET(0xBAE2360)
#define CLASS_2_849DACF0B6D839B1_METHOD_2_354036A4D50F194A_OFFSET UNITYSDK_OFFSET(0xBAE1A80)
#define CLASS_2_849DACF0B6D839B1_METHOD_2_4343F372F34C05BF_OFFSET UNITYSDK_OFFSET(0xBAE20A0)
#define CLASS_2_849DACF0B6D839B1_METHOD_2_5176DC743E478510_OFFSET UNITYSDK_OFFSET(0xBAE1C00)
#define CLASS_2_849DACF0B6D839B1_METHOD_2_7FBAA229ED524F8E_OFFSET UNITYSDK_OFFSET(0xBAE1E60)
#define CLASS_2_849DACF0B6D839B1_METHOD_2_D14D1C669EDC2D6B_OFFSET UNITYSDK_OFFSET(0xBAE1FC0)
#define CLASS_2_849DACF0B6D839B1_METHOD_2_D7F8E51377682B4C_OFFSET UNITYSDK_OFFSET(0xBAE23D0)
#define CLASS_2_849DACF0B6D839B1_METHOD_2_F85D0650F8957CC8_OFFSET UNITYSDK_OFFSET(0xBAE19F0)
#define CLASS_2_849DACF0B6D839B1_ONWILLBEDESTROY_OFFSET UNITYSDK_OFFSET(0xBAE1F40)
#define CLASS_2_849DACF0B6D839B1_SET_CONTAINERINFO_OFFSET UNITYSDK_OFFSET(0xBAE24D0)
#define CLASS_2_849DACF0B6D839B1_SET_LEVELCONFIGPATH_OFFSET UNITYSDK_OFFSET(0xBAE24B0)
#define CLASS_2_849DACF0B6D839B1_SET_LEVELCONFIG_OFFSET UNITYSDK_OFFSET(0xBAE24F0)
#define CLASS_2_849DACF0B6D839B1_SET_LEVELVARBINDING_OFFSET UNITYSDK_OFFSET(0xBAE2530)
#define CLASS_2_849DACF0B6D839B1_SET_LITTLEGAMEINSTANCE_OFFSET UNITYSDK_OFFSET(0xBAE2510)
#define CLASS_2_849DACF0B6D839B1_TICK_OFFSET UNITYSDK_OFFSET(0xBAE2100)
#define CLASS_2_849DACF0B6D839B1__CTOR_OFFSET UNITYSDK_OFFSET(0xBAE2540)

inline static constexpr unsigned int Class_2_849DACF0B6D839B1_TypeDefinitionIndex = 57457;

class Class_2_849DACF0B6D839B1 : public ::RPG::GameCore::GameComponentBase
{
public:
	::RPG::GameCore::LittleGameLevelConfig* _LevelConfig_k__BackingField; // 0x18
	::Class_1_E0103A0EA6CD0F4C* _LittleGameInstance_k__BackingField; // 0x20
	::RPG::GameCore::LevelLittleGameInfo* _ContainerInfo_k__BackingField; // 0x28
	::System::String* _LevelConfigPath_k__BackingField; // 0x30
	::RPG::GameCore::LittleGameLevelVarBindingMap* _LevelVarBinding_k__BackingField; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_849DACF0B6D839B1__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_F85D0650F8957CC8(::RPG::GameCore::FiveDimLoadMode a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::FiveDimLoadMode))((::PBYTE)hIl2Cpp + CLASS_2_849DACF0B6D839B1_METHOD_2_F85D0650F8957CC8_OFFSET))(this, a1);
	}

	::System::Void Method_2_354036A4D50F194A(::RPG::GameCore::LevelLittleGameInfo* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::LevelLittleGameInfo*))((::PBYTE)hIl2Cpp + CLASS_2_849DACF0B6D839B1_METHOD_2_354036A4D50F194A_OFFSET))(this, a1);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_849DACF0B6D839B1_DISPOSE_OFFSET))(this);
	}

	::System::Void OnWillBeDestroy()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_849DACF0B6D839B1_ONWILLBEDESTROY_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_849DACF0B6D839B1_TICK_OFFSET))(this, a1);
	}

	::System::Void LateUpdate(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_849DACF0B6D839B1_LATEUPDATE_OFFSET))(this, a1);
	}

	::System::Void Method_2_D7F8E51377682B4C(::System::Collections::Generic::List_1<::UnityEngine::Vector3>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::UnityEngine::Vector3>*))((::PBYTE)hIl2Cpp + CLASS_2_849DACF0B6D839B1_METHOD_2_D7F8E51377682B4C_OFFSET))(this, a1);
	}

	::System::Void Method_2_5176DC743E478510()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_849DACF0B6D839B1_METHOD_2_5176DC743E478510_OFFSET))(this);
	}

	::System::Void Method_2_4343F372F34C05BF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_849DACF0B6D839B1_METHOD_2_4343F372F34C05BF_OFFSET))(this);
	}

	::System::Void Method_2_7FBAA229ED524F8E()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_849DACF0B6D839B1_METHOD_2_7FBAA229ED524F8E_OFFSET))(this);
	}

	::System::Void Method_2_D14D1C669EDC2D6B()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_849DACF0B6D839B1_METHOD_2_D14D1C669EDC2D6B_OFFSET))(this);
	}

	::System::String* get_LevelConfigPath()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_849DACF0B6D839B1_GET_LEVELCONFIGPATH_OFFSET))(this);
	}

	::System::Void set_LevelConfigPath(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_849DACF0B6D839B1_SET_LEVELCONFIGPATH_OFFSET))(this, a1);
	}

	::RPG::GameCore::LevelLittleGameInfo* get_ContainerInfo()
	{
		return ((::RPG::GameCore::LevelLittleGameInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_849DACF0B6D839B1_GET_CONTAINERINFO_OFFSET))(this);
	}

	::System::Void set_ContainerInfo(::RPG::GameCore::LevelLittleGameInfo* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::LevelLittleGameInfo*))((::PBYTE)hIl2Cpp + CLASS_2_849DACF0B6D839B1_SET_CONTAINERINFO_OFFSET))(this, a1);
	}

	::RPG::GameCore::LittleGameLevelConfig* get_LevelConfig()
	{
		return ((::RPG::GameCore::LittleGameLevelConfig*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_849DACF0B6D839B1_GET_LEVELCONFIG_OFFSET))(this);
	}

	::System::Void set_LevelConfig(::RPG::GameCore::LittleGameLevelConfig* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::LittleGameLevelConfig*))((::PBYTE)hIl2Cpp + CLASS_2_849DACF0B6D839B1_SET_LEVELCONFIG_OFFSET))(this, a1);
	}

	::Class_1_E0103A0EA6CD0F4C* get_LittleGameInstance()
	{
		return ((::Class_1_E0103A0EA6CD0F4C*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_849DACF0B6D839B1_GET_LITTLEGAMEINSTANCE_OFFSET))(this);
	}

	::System::Void set_LittleGameInstance(::Class_1_E0103A0EA6CD0F4C* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_E0103A0EA6CD0F4C*))((::PBYTE)hIl2Cpp + CLASS_2_849DACF0B6D839B1_SET_LITTLEGAMEINSTANCE_OFFSET))(this, a1);
	}

	::RPG::GameCore::LittleGameLevelVarBindingMap* get_LevelVarBinding()
	{
		return ((::RPG::GameCore::LittleGameLevelVarBindingMap*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_849DACF0B6D839B1_GET_LEVELVARBINDING_OFFSET))(this);
	}

	::System::Void set_LevelVarBinding(::RPG::GameCore::LittleGameLevelVarBindingMap* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::LittleGameLevelVarBindingMap*))((::PBYTE)hIl2Cpp + CLASS_2_849DACF0B6D839B1_SET_LEVELVARBINDING_OFFSET))(this, a1);
	}
};

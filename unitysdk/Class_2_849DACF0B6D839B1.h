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

#define CLASS_2_849DACF0B6D839B1_DISPOSE_OFFSET UNITYSDK_OFFSET(0x16D9F2C0)
#define CLASS_2_849DACF0B6D839B1_GET_CONTAINERINFO_OFFSET UNITYSDK_OFFSET(0x16D9F8B0)
#define CLASS_2_849DACF0B6D839B1_GET_LEVELCONFIGPATH_OFFSET UNITYSDK_OFFSET(0x16D9F890)
#define CLASS_2_849DACF0B6D839B1_GET_LEVELCONFIG_OFFSET UNITYSDK_OFFSET(0x16D9F8D0)
#define CLASS_2_849DACF0B6D839B1_GET_LEVELVARBINDING_OFFSET UNITYSDK_OFFSET(0x16D9F910)
#define CLASS_2_849DACF0B6D839B1_GET_LITTLEGAMEINSTANCE_OFFSET UNITYSDK_OFFSET(0x16D9F8F0)
#define CLASS_2_849DACF0B6D839B1_LATEUPDATE_OFFSET UNITYSDK_OFFSET(0x16D9F750)
#define CLASS_2_849DACF0B6D839B1_METHOD_2_289F28027FF47717_OFFSET UNITYSDK_OFFSET(0x16D9F230)
#define CLASS_2_849DACF0B6D839B1_METHOD_2_354036A4D50F194A_OFFSET UNITYSDK_OFFSET(0x16D9EE50)
#define CLASS_2_849DACF0B6D839B1_METHOD_2_4343F372F34C05BF_OFFSET UNITYSDK_OFFSET(0x16D9F490)
#define CLASS_2_849DACF0B6D839B1_METHOD_2_5176DC743E478510_OFFSET UNITYSDK_OFFSET(0x16D9EFD0)
#define CLASS_2_849DACF0B6D839B1_METHOD_2_97889423B3D78768_OFFSET UNITYSDK_OFFSET(0x16D9F390)
#define CLASS_2_849DACF0B6D839B1_METHOD_2_D7F8E51377682B4C_OFFSET UNITYSDK_OFFSET(0x16D9F7C0)
#define CLASS_2_849DACF0B6D839B1_METHOD_2_F85D0650F8957CC8_OFFSET UNITYSDK_OFFSET(0x16D9EDC0)
#define CLASS_2_849DACF0B6D839B1_ONWILLBEDESTROY_OFFSET UNITYSDK_OFFSET(0x16D9F310)
#define CLASS_2_849DACF0B6D839B1_SET_CONTAINERINFO_OFFSET UNITYSDK_OFFSET(0x16D9F8C0)
#define CLASS_2_849DACF0B6D839B1_SET_LEVELCONFIGPATH_OFFSET UNITYSDK_OFFSET(0x16D9F8A0)
#define CLASS_2_849DACF0B6D839B1_SET_LEVELCONFIG_OFFSET UNITYSDK_OFFSET(0x16D9F8E0)
#define CLASS_2_849DACF0B6D839B1_SET_LEVELVARBINDING_OFFSET UNITYSDK_OFFSET(0x16D9F920)
#define CLASS_2_849DACF0B6D839B1_SET_LITTLEGAMEINSTANCE_OFFSET UNITYSDK_OFFSET(0x16D9F900)
#define CLASS_2_849DACF0B6D839B1_TICK_OFFSET UNITYSDK_OFFSET(0x16D9F4F0)
#define CLASS_2_849DACF0B6D839B1__CTOR_OFFSET UNITYSDK_OFFSET(0x16D9F930)

inline static constexpr unsigned int Class_2_849DACF0B6D839B1_TypeDefinitionIndex = 54736;

class Class_2_849DACF0B6D839B1 : public ::RPG::GameCore::GameComponentBase
{
public:
	::RPG::GameCore::LittleGameLevelVarBindingMap* _LevelVarBinding_k__BackingField; // 0x18
	::System::String* _LevelConfigPath_k__BackingField; // 0x20
	::Class_1_E0103A0EA6CD0F4C* _LittleGameInstance_k__BackingField; // 0x28
	::RPG::GameCore::LevelLittleGameInfo* _ContainerInfo_k__BackingField; // 0x30
	::RPG::GameCore::LittleGameLevelConfig* _LevelConfig_k__BackingField; // 0x38

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

	::System::Void Method_2_289F28027FF47717()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_849DACF0B6D839B1_METHOD_2_289F28027FF47717_OFFSET))(this);
	}

	::System::Void Method_2_97889423B3D78768()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_849DACF0B6D839B1_METHOD_2_97889423B3D78768_OFFSET))(this);
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

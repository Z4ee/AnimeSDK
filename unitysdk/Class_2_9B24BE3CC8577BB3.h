#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/DistrictSoundUsage.h"
#include "unitysdk/RPG/GameCore/GameComponentBase.h"

class Class_2_9B24BE3CC8577BB3_Class_0_16E7307DCC43CB2C_17;
namespace RPG::Client { class MapDistrictDef; }
namespace RPG::GameCore { class AudioStateConfig; }
namespace RPG::GameCore { class DistrictAreaSoundTransform; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class TaskConfig; }
namespace System { class String; }

#define CLASS_2_9B24BE3CC8577BB3_DISPOSE_OFFSET UNITYSDK_OFFSET(0xB4428F0)
#define CLASS_2_9B24BE3CC8577BB3_GET_DISTRICTNAME_OFFSET UNITYSDK_OFFSET(0xB443DA0)
#define CLASS_2_9B24BE3CC8577BB3_GET_ONCREATECONFIG_OFFSET UNITYSDK_OFFSET(0xB443DC0)
#define CLASS_2_9B24BE3CC8577BB3_METHOD_2_0DFDBF8D764E36E1_OFFSET UNITYSDK_OFFSET(0xB443B10)
#define CLASS_2_9B24BE3CC8577BB3_METHOD_2_2AACB6D3B22390C6_OFFSET UNITYSDK_OFFSET(0xB442FB0)
#define CLASS_2_9B24BE3CC8577BB3_METHOD_2_30D1209326FA87FC_OFFSET UNITYSDK_OFFSET(0xB442AA0)
#define CLASS_2_9B24BE3CC8577BB3_METHOD_2_80313B77C31AD02B_OFFSET UNITYSDK_OFFSET(0xB4435A0)
#define CLASS_2_9B24BE3CC8577BB3_METHOD_2_83819677B5AC5823_OFFSET UNITYSDK_OFFSET(0xB4426E0)
#define CLASS_2_9B24BE3CC8577BB3_METHOD_2_8B9C60E6779B6FF4_OFFSET UNITYSDK_OFFSET(0xB443D90)
#define CLASS_2_9B24BE3CC8577BB3_METHOD_2_AE52A64C2E55455B_OFFSET UNITYSDK_OFFSET(0xB443100)
#define CLASS_2_9B24BE3CC8577BB3_METHOD_2_B6D6955E852620F9_OFFSET UNITYSDK_OFFSET(0xB442850)
#define CLASS_2_9B24BE3CC8577BB3_METHOD_2_D109CE569415FA03_OFFSET UNITYSDK_OFFSET(0xB443180)
#define CLASS_2_9B24BE3CC8577BB3_METHOD_2_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0xB443D80)
#define CLASS_2_9B24BE3CC8577BB3_METHOD_2_F0BD65B017F2AC0B_1_OFFSET UNITYSDK_OFFSET(0xB443460)
#define CLASS_2_9B24BE3CC8577BB3_METHOD_2_F0BD65B017F2AC0B_OFFSET UNITYSDK_OFFSET(0xB442960)
#define CLASS_2_9B24BE3CC8577BB3_ONMODELROOTLOADED_OFFSET UNITYSDK_OFFSET(0xB442B40)
#define CLASS_2_9B24BE3CC8577BB3_ONMODELROOTUNLOADED_OFFSET UNITYSDK_OFFSET(0xB442E10)
#define CLASS_2_9B24BE3CC8577BB3_SET_DISTRICTNAME_OFFSET UNITYSDK_OFFSET(0xB443DB0)
#define CLASS_2_9B24BE3CC8577BB3_SET_ONCREATECONFIG_OFFSET UNITYSDK_OFFSET(0xB443DD0)
#define CLASS_2_9B24BE3CC8577BB3_TICK_OFFSET UNITYSDK_OFFSET(0xB442E50)
#define CLASS_2_9B24BE3CC8577BB3__CTOR_OFFSET UNITYSDK_OFFSET(0xB442840)

inline static constexpr unsigned int Class_2_9B24BE3CC8577BB3_TypeDefinitionIndex = 57234;

class Class_2_9B24BE3CC8577BB3 : public ::RPG::GameCore::GameComponentBase
{
public:
	::Class_2_9B24BE3CC8577BB3_Class_0_16E7307DCC43CB2C_17* LOACOFGEFMG; // 0x18
	::RPG::GameCore::GameEntity* BOMFAKPMHMI; // 0x20
	::Il2CppArray<::RPG::GameCore::TaskConfig*>* _OnCreateConfig_k__BackingField; // 0x28
	::RPG::Client::MapDistrictDef* IGDOPMDPNEL; // 0x30
	::System::String* _DistrictName_k__BackingField; // 0x38
	::System::Boolean FMCHJKDPJDE; // 0x40

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_9B24BE3CC8577BB3__CTOR_OFFSET))(this);
	}

	static ::Class_2_9B24BE3CC8577BB3_Class_0_16E7307DCC43CB2C_17* Method_2_83819677B5AC5823(::RPG::GameCore::DistrictSoundUsage a1)
	{
		return ((::Class_2_9B24BE3CC8577BB3_Class_0_16E7307DCC43CB2C_17*(*)(::RPG::GameCore::DistrictSoundUsage))((::PBYTE)hIl2Cpp + CLASS_2_9B24BE3CC8577BB3_METHOD_2_83819677B5AC5823_OFFSET))(a1);
	}

	::System::Void Method_2_B6D6955E852620F9(::RPG::Client::MapDistrictDef* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::MapDistrictDef*))((::PBYTE)hIl2Cpp + CLASS_2_9B24BE3CC8577BB3_METHOD_2_B6D6955E852620F9_OFFSET))(this, a1);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_9B24BE3CC8577BB3_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_2_30D1209326FA87FC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_9B24BE3CC8577BB3_METHOD_2_30D1209326FA87FC_OFFSET))(this);
	}

	::System::Void OnModelRootLoaded()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_9B24BE3CC8577BB3_ONMODELROOTLOADED_OFFSET))(this);
	}

	::System::Void OnModelRootUnloaded()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_9B24BE3CC8577BB3_ONMODELROOTUNLOADED_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_9B24BE3CC8577BB3_TICK_OFFSET))(this, a1);
	}

	::System::Void Method_2_2AACB6D3B22390C6(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_2_9B24BE3CC8577BB3_METHOD_2_2AACB6D3B22390C6_OFFSET))(this, a1);
	}

	::System::Void Method_2_F0BD65B017F2AC0B()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_9B24BE3CC8577BB3_METHOD_2_F0BD65B017F2AC0B_OFFSET))(this);
	}

	::Il2CppArray<::RPG::GameCore::AudioStateConfig*>* Method_2_AE52A64C2E55455B()
	{
		return ((::Il2CppArray<::RPG::GameCore::AudioStateConfig*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_9B24BE3CC8577BB3_METHOD_2_AE52A64C2E55455B_OFFSET))(this);
	}

	::System::Void Method_2_D109CE569415FA03()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_9B24BE3CC8577BB3_METHOD_2_D109CE569415FA03_OFFSET))(this);
	}

	::System::Void Method_2_F0BD65B017F2AC0B_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_9B24BE3CC8577BB3_METHOD_2_F0BD65B017F2AC0B_1_OFFSET))(this);
	}

	::System::Void Method_2_80313B77C31AD02B()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_9B24BE3CC8577BB3_METHOD_2_80313B77C31AD02B_OFFSET))(this);
	}

	::System::Void Method_2_0DFDBF8D764E36E1(::Il2CppArray<::RPG::GameCore::DistrictAreaSoundTransform*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::RPG::GameCore::DistrictAreaSoundTransform*>*))((::PBYTE)hIl2Cpp + CLASS_2_9B24BE3CC8577BB3_METHOD_2_0DFDBF8D764E36E1_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_9B24BE3CC8577BB3_METHOD_2_F0088C88851A7DFB_OFFSET))(this);
	}

	::RPG::Client::MapDistrictDef* Method_2_8B9C60E6779B6FF4()
	{
		return ((::RPG::Client::MapDistrictDef*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_9B24BE3CC8577BB3_METHOD_2_8B9C60E6779B6FF4_OFFSET))(this);
	}

	::System::String* get_DistrictName()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_9B24BE3CC8577BB3_GET_DISTRICTNAME_OFFSET))(this);
	}

	::System::Void set_DistrictName(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_9B24BE3CC8577BB3_SET_DISTRICTNAME_OFFSET))(this, a1);
	}

	::Il2CppArray<::RPG::GameCore::TaskConfig*>* get_OnCreateConfig()
	{
		return ((::Il2CppArray<::RPG::GameCore::TaskConfig*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_9B24BE3CC8577BB3_GET_ONCREATECONFIG_OFFSET))(this);
	}

	::System::Void set_OnCreateConfig(::Il2CppArray<::RPG::GameCore::TaskConfig*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::RPG::GameCore::TaskConfig*>*))((::PBYTE)hIl2Cpp + CLASS_2_9B24BE3CC8577BB3_SET_ONCREATECONFIG_OFFSET))(this, a1);
	}
};

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class LittleWheelSelectConfigRow; }

#define RPG_CLIENT_LITTLEWHEELSELECTCONFIG_CREATEBYROW_OFFSET UNITYSDK_OFFSET(0xA6E8C70)
#define RPG_CLIENT_LITTLEWHEELSELECTCONFIG_GET_LEFT1_OFFSET UNITYSDK_OFFSET(0xA6E8D10)
#define RPG_CLIENT_LITTLEWHEELSELECTCONFIG_GET_LEFT2_OFFSET UNITYSDK_OFFSET(0xA6E8D30)
#define RPG_CLIENT_LITTLEWHEELSELECTCONFIG_GET_LEFT3_OFFSET UNITYSDK_OFFSET(0xA6E8D50)
#define RPG_CLIENT_LITTLEWHEELSELECTCONFIG_GET_LEFT4_OFFSET UNITYSDK_OFFSET(0xA6E8D70)
#define RPG_CLIENT_LITTLEWHEELSELECTCONFIG_GET_RIGHT1_OFFSET UNITYSDK_OFFSET(0xA6E8D90)
#define RPG_CLIENT_LITTLEWHEELSELECTCONFIG_GET_RIGHT2_OFFSET UNITYSDK_OFFSET(0xA6E8DB0)
#define RPG_CLIENT_LITTLEWHEELSELECTCONFIG_GET_RIGHT3_OFFSET UNITYSDK_OFFSET(0xA6E8DD0)
#define RPG_CLIENT_LITTLEWHEELSELECTCONFIG_GET_RIGHT4_OFFSET UNITYSDK_OFFSET(0xA6E8DF0)
#define RPG_CLIENT_LITTLEWHEELSELECTCONFIG_SET_LEFT1_OFFSET UNITYSDK_OFFSET(0xA6E8D20)
#define RPG_CLIENT_LITTLEWHEELSELECTCONFIG_SET_LEFT2_OFFSET UNITYSDK_OFFSET(0xA6E8D40)
#define RPG_CLIENT_LITTLEWHEELSELECTCONFIG_SET_LEFT3_OFFSET UNITYSDK_OFFSET(0xA6E8D60)
#define RPG_CLIENT_LITTLEWHEELSELECTCONFIG_SET_LEFT4_OFFSET UNITYSDK_OFFSET(0xA6E8D80)
#define RPG_CLIENT_LITTLEWHEELSELECTCONFIG_SET_RIGHT1_OFFSET UNITYSDK_OFFSET(0xA6E8DA0)
#define RPG_CLIENT_LITTLEWHEELSELECTCONFIG_SET_RIGHT2_OFFSET UNITYSDK_OFFSET(0xA6E8DC0)
#define RPG_CLIENT_LITTLEWHEELSELECTCONFIG_SET_RIGHT3_OFFSET UNITYSDK_OFFSET(0xA6E8DE0)
#define RPG_CLIENT_LITTLEWHEELSELECTCONFIG_SET_RIGHT4_OFFSET UNITYSDK_OFFSET(0xA6E8E00)
#define RPG_CLIENT_LITTLEWHEELSELECTCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0xA6E8C60)

namespace RPG::Client
{
	inline static constexpr unsigned int LittleWheelSelectConfig_TypeDefinitionIndex = 56527;

	class LittleWheelSelectConfig : public ::System::Object
	{
	public:
		::Il2CppArray<::System::UInt32>* _Left4_k__BackingField; // 0x10
		::Il2CppArray<::System::UInt32>* _Left1_k__BackingField; // 0x18
		::Il2CppArray<::System::UInt32>* _Right3_k__BackingField; // 0x20
		::Il2CppArray<::System::UInt32>* _Right1_k__BackingField; // 0x28
		::Il2CppArray<::System::UInt32>* _Left3_k__BackingField; // 0x30
		::Il2CppArray<::System::UInt32>* _Right2_k__BackingField; // 0x38
		::Il2CppArray<::System::UInt32>* _Right4_k__BackingField; // 0x40
		::Il2CppArray<::System::UInt32>* _Left2_k__BackingField; // 0x48

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEWHEELSELECTCONFIG__CTOR_OFFSET))(this);
		}

		static ::RPG::Client::LittleWheelSelectConfig* CreateByRow(::RPG::GameCore::LittleWheelSelectConfigRow* row)
		{
			return ((::RPG::Client::LittleWheelSelectConfig*(*)(::RPG::GameCore::LittleWheelSelectConfigRow*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEWHEELSELECTCONFIG_CREATEBYROW_OFFSET))(row);
		}

		::Il2CppArray<::System::UInt32>* get_Left1()
		{
			return ((::Il2CppArray<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEWHEELSELECTCONFIG_GET_LEFT1_OFFSET))(this);
		}

		::System::Void set_Left1(::Il2CppArray<::System::UInt32>* value)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEWHEELSELECTCONFIG_SET_LEFT1_OFFSET))(this, value);
		}

		::Il2CppArray<::System::UInt32>* get_Left2()
		{
			return ((::Il2CppArray<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEWHEELSELECTCONFIG_GET_LEFT2_OFFSET))(this);
		}

		::System::Void set_Left2(::Il2CppArray<::System::UInt32>* value)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEWHEELSELECTCONFIG_SET_LEFT2_OFFSET))(this, value);
		}

		::Il2CppArray<::System::UInt32>* get_Left3()
		{
			return ((::Il2CppArray<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEWHEELSELECTCONFIG_GET_LEFT3_OFFSET))(this);
		}

		::System::Void set_Left3(::Il2CppArray<::System::UInt32>* value)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEWHEELSELECTCONFIG_SET_LEFT3_OFFSET))(this, value);
		}

		::Il2CppArray<::System::UInt32>* get_Left4()
		{
			return ((::Il2CppArray<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEWHEELSELECTCONFIG_GET_LEFT4_OFFSET))(this);
		}

		::System::Void set_Left4(::Il2CppArray<::System::UInt32>* value)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEWHEELSELECTCONFIG_SET_LEFT4_OFFSET))(this, value);
		}

		::Il2CppArray<::System::UInt32>* get_Right1()
		{
			return ((::Il2CppArray<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEWHEELSELECTCONFIG_GET_RIGHT1_OFFSET))(this);
		}

		::System::Void set_Right1(::Il2CppArray<::System::UInt32>* value)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEWHEELSELECTCONFIG_SET_RIGHT1_OFFSET))(this, value);
		}

		::Il2CppArray<::System::UInt32>* get_Right2()
		{
			return ((::Il2CppArray<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEWHEELSELECTCONFIG_GET_RIGHT2_OFFSET))(this);
		}

		::System::Void set_Right2(::Il2CppArray<::System::UInt32>* value)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEWHEELSELECTCONFIG_SET_RIGHT2_OFFSET))(this, value);
		}

		::Il2CppArray<::System::UInt32>* get_Right3()
		{
			return ((::Il2CppArray<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEWHEELSELECTCONFIG_GET_RIGHT3_OFFSET))(this);
		}

		::System::Void set_Right3(::Il2CppArray<::System::UInt32>* value)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEWHEELSELECTCONFIG_SET_RIGHT3_OFFSET))(this, value);
		}

		::Il2CppArray<::System::UInt32>* get_Right4()
		{
			return ((::Il2CppArray<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEWHEELSELECTCONFIG_GET_RIGHT4_OFFSET))(this);
		}

		::System::Void set_Right4(::Il2CppArray<::System::UInt32>* value)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEWHEELSELECTCONFIG_SET_RIGHT4_OFFSET))(this, value);
		}
	};
}

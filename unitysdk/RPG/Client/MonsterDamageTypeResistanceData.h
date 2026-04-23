#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/AttackDamageType.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class ElementResistanceConfig; }
namespace System { class String; }

#define RPG_CLIENT_MONSTERDAMAGETYPERESISTANCEDATA_CREATE_OFFSET UNITYSDK_OFFSET(0xAAC8C90)
#define RPG_CLIENT_MONSTERDAMAGETYPERESISTANCEDATA_GET_DAMAGETYPE_OFFSET UNITYSDK_OFFSET(0xAAC90A0)
#define RPG_CLIENT_MONSTERDAMAGETYPERESISTANCEDATA_GET_DESC_OFFSET UNITYSDK_OFFSET(0xAAC9080)
#define RPG_CLIENT_MONSTERDAMAGETYPERESISTANCEDATA_GET_ICONPATH_OFFSET UNITYSDK_OFFSET(0xAAC9060)
#define RPG_CLIENT_MONSTERDAMAGETYPERESISTANCEDATA_SET_DAMAGETYPE_OFFSET UNITYSDK_OFFSET(0xAAC90B0)
#define RPG_CLIENT_MONSTERDAMAGETYPERESISTANCEDATA_SET_DESC_OFFSET UNITYSDK_OFFSET(0xAAC9090)
#define RPG_CLIENT_MONSTERDAMAGETYPERESISTANCEDATA_SET_ICONPATH_OFFSET UNITYSDK_OFFSET(0xAAC9070)
#define RPG_CLIENT_MONSTERDAMAGETYPERESISTANCEDATA__CCTOR_OFFSET UNITYSDK_OFFSET(0xAAC90C0)
#define RPG_CLIENT_MONSTERDAMAGETYPERESISTANCEDATA__CREATEHIGHRESISTANCEDATA_OFFSET UNITYSDK_OFFSET(0xAAC8EC0)
#define RPG_CLIENT_MONSTERDAMAGETYPERESISTANCEDATA__CREATERESISTANCEDATA_OFFSET UNITYSDK_OFFSET(0xAAC8DB0)
#define RPG_CLIENT_MONSTERDAMAGETYPERESISTANCEDATA__CREATE_OFFSET UNITYSDK_OFFSET(0xAAC8FD0)
#define RPG_CLIENT_MONSTERDAMAGETYPERESISTANCEDATA__CTOR_OFFSET UNITYSDK_OFFSET(0xAAC9050)

namespace RPG::Client
{
	inline static constexpr unsigned int MonsterDamageTypeResistanceData_TypeDefinitionIndex = 66142;

	class MonsterDamageTypeResistanceData : public ::System::Object
	{
	public:
		static ::System::Single* StaticGet__ResistanceThreshold()
		{
			return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(MonsterDamageTypeResistanceData_TypeDefinitionIndex)->GetStaticField(0xF570);
		}
		static ::System::Single* StaticGet__HightResistanceThreshold()
		{
			return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(MonsterDamageTypeResistanceData_TypeDefinitionIndex)->GetStaticField(0xF574);
		}
		// static const ::System::String* _RESISTANCE_THRESHOLD_KEY; // 0x0
		// static const ::System::Single _RESISTANCE_DEFAULT_THRESHOLD; // 0x0
		// static const ::System::String* _HIGHT_RESISTANCE_THRESHOLD_KEY; // 0x0
		// static const ::System::Single _HIGHT_RESISTANCE_THRESHOLD; // 0x0
		::System::String* _IconPath_k__BackingField; // 0x10
		::RPG::Client::TextID _Desc_k__BackingField; // 0x18
		::RPG::GameCore::AttackDamageType _DamageType_k__BackingField; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONSTERDAMAGETYPERESISTANCEDATA__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_MONSTERDAMAGETYPERESISTANCEDATA__CCTOR_OFFSET))();
		}

		static ::RPG::Client::MonsterDamageTypeResistanceData* Create(::RPG::GameCore::ElementResistanceConfig* data)
		{
			return ((::RPG::Client::MonsterDamageTypeResistanceData*(*)(::RPG::GameCore::ElementResistanceConfig*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONSTERDAMAGETYPERESISTANCEDATA_CREATE_OFFSET))(data);
		}

		static ::RPG::Client::MonsterDamageTypeResistanceData* _CreateResistanceData(::RPG::GameCore::AttackDamageType damageType)
		{
			return ((::RPG::Client::MonsterDamageTypeResistanceData*(*)(::RPG::GameCore::AttackDamageType))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONSTERDAMAGETYPERESISTANCEDATA__CREATERESISTANCEDATA_OFFSET))(damageType);
		}

		static ::RPG::Client::MonsterDamageTypeResistanceData* _CreateHighResistanceData(::RPG::GameCore::AttackDamageType damageType)
		{
			return ((::RPG::Client::MonsterDamageTypeResistanceData*(*)(::RPG::GameCore::AttackDamageType))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONSTERDAMAGETYPERESISTANCEDATA__CREATEHIGHRESISTANCEDATA_OFFSET))(damageType);
		}

		static ::RPG::Client::MonsterDamageTypeResistanceData* _Create(::RPG::GameCore::AttackDamageType damageType, ::System::String* iconPath, ::RPG::Client::TextID desc)
		{
			return ((::RPG::Client::MonsterDamageTypeResistanceData*(*)(::RPG::GameCore::AttackDamageType, ::System::String*, ::RPG::Client::TextID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONSTERDAMAGETYPERESISTANCEDATA__CREATE_OFFSET))(damageType, iconPath, desc);
		}

		::System::String* get_IconPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONSTERDAMAGETYPERESISTANCEDATA_GET_ICONPATH_OFFSET))(this);
		}

		::System::Void set_IconPath(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONSTERDAMAGETYPERESISTANCEDATA_SET_ICONPATH_OFFSET))(this, value);
		}

		::RPG::Client::TextID get_Desc()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONSTERDAMAGETYPERESISTANCEDATA_GET_DESC_OFFSET))(this);
		}

		::System::Void set_Desc(::RPG::Client::TextID value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::TextID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONSTERDAMAGETYPERESISTANCEDATA_SET_DESC_OFFSET))(this, value);
		}

		::RPG::GameCore::AttackDamageType get_DamageType()
		{
			return ((::RPG::GameCore::AttackDamageType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONSTERDAMAGETYPERESISTANCEDATA_GET_DAMAGETYPE_OFFSET))(this);
		}

		::System::Void set_DamageType(::RPG::GameCore::AttackDamageType value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::AttackDamageType))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONSTERDAMAGETYPERESISTANCEDATA_SET_DAMAGETYPE_OFFSET))(this, value);
		}
	};
}

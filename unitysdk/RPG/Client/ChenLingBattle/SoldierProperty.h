#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_71AA90D596A09AC8_9.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/System/Object.h"

class Class_1_96E2BE1901BC43AD;
namespace System { class String; }

#define RPG_CLIENT_CHENLINGBATTLE_SOLDIERPROPERTY_COMPARETO_OFFSET UNITYSDK_OFFSET(0xB5CFCD0)
#define RPG_CLIENT_CHENLINGBATTLE_SOLDIERPROPERTY_CREATE_OFFSET UNITYSDK_OFFSET(0xB5CE1F0)
#define RPG_CLIENT_CHENLINGBATTLE_SOLDIERPROPERTY_FORMAT_OFFSET UNITYSDK_OFFSET(0xB5CF7E0)
#define RPG_CLIENT_CHENLINGBATTLE_SOLDIERPROPERTY_GET_FLOATVALUE_OFFSET UNITYSDK_OFFSET(0xB5CFB70)
#define RPG_CLIENT_CHENLINGBATTLE_SOLDIERPROPERTY_GET_FORMATVALUE_OFFSET UNITYSDK_OFFSET(0xB5CF740)
#define RPG_CLIENT_CHENLINGBATTLE_SOLDIERPROPERTY_GET_ICON_OFFSET UNITYSDK_OFFSET(0xB5CF6E0)
#define RPG_CLIENT_CHENLINGBATTLE_SOLDIERPROPERTY_GET_INTVALUE_OFFSET UNITYSDK_OFFSET(0xB5CFBD0)
#define RPG_CLIENT_CHENLINGBATTLE_SOLDIERPROPERTY_GET_ISSHOW_OFFSET UNITYSDK_OFFSET(0xB5CF700)
#define RPG_CLIENT_CHENLINGBATTLE_SOLDIERPROPERTY_GET_NAME_OFFSET UNITYSDK_OFFSET(0xB5CF6B0)
#define RPG_CLIENT_CHENLINGBATTLE_SOLDIERPROPERTY_GET_PROPERTYTYPE_OFFSET UNITYSDK_OFFSET(0xB5CF690)
#define RPG_CLIENT_CHENLINGBATTLE_SOLDIERPROPERTY_GET_VALUE_OFFSET UNITYSDK_OFFSET(0xB5CF720)
#define RPG_CLIENT_CHENLINGBATTLE_SOLDIERPROPERTY_GET__CONFIG_OFFSET UNITYSDK_OFFSET(0xB5CFCB0)
#define RPG_CLIENT_CHENLINGBATTLE_SOLDIERPROPERTY_SET_VALUE_OFFSET UNITYSDK_OFFSET(0xB5CF730)
#define RPG_CLIENT_CHENLINGBATTLE_SOLDIERPROPERTY_SET__CONFIG_OFFSET UNITYSDK_OFFSET(0xB5CFCC0)
#define RPG_CLIENT_CHENLINGBATTLE_SOLDIERPROPERTY__CCTOR_OFFSET UNITYSDK_OFFSET(0xB5CFD50)
#define RPG_CLIENT_CHENLINGBATTLE_SOLDIERPROPERTY__CTOR_OFFSET UNITYSDK_OFFSET(0xB5CF680)

namespace RPG::Client::ChenLingBattle
{
	inline static constexpr unsigned int SoldierProperty_TypeDefinitionIndex = 70950;

	class SoldierProperty : public ::System::Object
	{
	public:
		static ::Il2CppArray<::Enum_3_71AA90D596A09AC8_9>** StaticGet_AllPropertyTypes()
		{
			return (::Il2CppArray<::Enum_3_71AA90D596A09AC8_9>**)Il2CppClass::FromTypeDefinitionIndex(SoldierProperty_TypeDefinitionIndex)->GetStaticField(0x1AA0);
		}
		static ::RPG::GameCore::FixPoint* StaticGet_Precision()
		{
			return (::RPG::GameCore::FixPoint*)Il2CppClass::FromTypeDefinitionIndex(SoldierProperty_TypeDefinitionIndex)->GetStaticField(0xB00);
		}
		::Class_1_96E2BE1901BC43AD* __Config_k__BackingField; // 0x10
		::RPG::GameCore::FixPoint _Value_k__BackingField; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLE_SOLDIERPROPERTY__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLE_SOLDIERPROPERTY__CCTOR_OFFSET))();
		}

		static ::RPG::Client::ChenLingBattle::SoldierProperty* Create(::Enum_3_71AA90D596A09AC8_9 a1, ::RPG::GameCore::FixPoint a2)
		{
			return ((::RPG::Client::ChenLingBattle::SoldierProperty*(*)(::Enum_3_71AA90D596A09AC8_9, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLE_SOLDIERPROPERTY_CREATE_OFFSET))(a1, a2);
		}

		::Enum_3_71AA90D596A09AC8_9 get_PropertyType()
		{
			return ((::Enum_3_71AA90D596A09AC8_9(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLE_SOLDIERPROPERTY_GET_PROPERTYTYPE_OFFSET))(this);
		}

		::RPG::Client::TextID get_Name()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLE_SOLDIERPROPERTY_GET_NAME_OFFSET))(this);
		}

		::System::String* get_Icon()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLE_SOLDIERPROPERTY_GET_ICON_OFFSET))(this);
		}

		::System::Boolean get_IsShow()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLE_SOLDIERPROPERTY_GET_ISSHOW_OFFSET))(this);
		}

		::RPG::GameCore::FixPoint get_Value()
		{
			return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLE_SOLDIERPROPERTY_GET_VALUE_OFFSET))(this);
		}

		::System::Void set_Value(::RPG::GameCore::FixPoint a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLE_SOLDIERPROPERTY_SET_VALUE_OFFSET))(this, a1);
		}

		::System::String* get_FormatValue()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLE_SOLDIERPROPERTY_GET_FORMATVALUE_OFFSET))(this);
		}

		::System::Single get_FloatValue()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLE_SOLDIERPROPERTY_GET_FLOATVALUE_OFFSET))(this);
		}

		::System::Int32 get_IntValue()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLE_SOLDIERPROPERTY_GET_INTVALUE_OFFSET))(this);
		}

		::Class_1_96E2BE1901BC43AD* get__Config()
		{
			return ((::Class_1_96E2BE1901BC43AD*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLE_SOLDIERPROPERTY_GET__CONFIG_OFFSET))(this);
		}

		::System::Void set__Config(::Class_1_96E2BE1901BC43AD* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_96E2BE1901BC43AD*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLE_SOLDIERPROPERTY_SET__CONFIG_OFFSET))(this, a1);
		}

		static ::System::String* Format(::Enum_3_71AA90D596A09AC8_9 a1, ::RPG::GameCore::FixPoint a2)
		{
			return ((::System::String*(*)(::Enum_3_71AA90D596A09AC8_9, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLE_SOLDIERPROPERTY_FORMAT_OFFSET))(a1, a2);
		}

		::System::Int32 CompareTo(::RPG::Client::ChenLingBattle::SoldierProperty* a1)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::ChenLingBattle::SoldierProperty*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLE_SOLDIERPROPERTY_COMPARETO_OFFSET))(this, a1);
		}
	};
}

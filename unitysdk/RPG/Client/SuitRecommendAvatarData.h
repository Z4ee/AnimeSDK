#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/SuitRecommendDataType.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/AttackDamageType.h"
#include "unitysdk/RPG/GameCore/ItemRarity.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define RPG_CLIENT_SUITRECOMMENDAVATARDATA_CHECKISHAVE_OFFSET UNITYSDK_OFFSET(0xC944110)
#define RPG_CLIENT_SUITRECOMMENDAVATARDATA_COMPARETO_OFFSET UNITYSDK_OFFSET(0xC9441F0)
#define RPG_CLIENT_SUITRECOMMENDAVATARDATA_CREATECONFIGDATA_OFFSET UNITYSDK_OFFSET(0xC944330)
#define RPG_CLIENT_SUITRECOMMENDAVATARDATA_CREATE_OFFSET UNITYSDK_OFFSET(0xC944280)
#define RPG_CLIENT_SUITRECOMMENDAVATARDATA_GETICONPATH_OFFSET UNITYSDK_OFFSET(0xC9441B0)
#define RPG_CLIENT_SUITRECOMMENDAVATARDATA_GETNAME_OFFSET UNITYSDK_OFFSET(0xC944150)
#define RPG_CLIENT_SUITRECOMMENDAVATARDATA_GET_DATATYPE_OFFSET UNITYSDK_OFFSET(0xC943F50)
#define RPG_CLIENT_SUITRECOMMENDAVATARDATA_GET_ISBIGDATA_OFFSET UNITYSDK_OFFSET(0xC943F40)
#define RPG_CLIENT_SUITRECOMMENDAVATARDATA_GET_ISCONFIGDATA_OFFSET UNITYSDK_OFFSET(0xC943F30)
#define RPG_CLIENT_SUITRECOMMENDAVATARDATA_SET_DATATYPE_OFFSET UNITYSDK_OFFSET(0xC943F60)
#define RPG_CLIENT_SUITRECOMMENDAVATARDATA__CTOR_OFFSET UNITYSDK_OFFSET(0xC943F70)

namespace RPG::Client
{
	inline static constexpr unsigned int SuitRecommendAvatarData_TypeDefinitionIndex = 62534;

	class SuitRecommendAvatarData : public ::System::Object
	{
	public:
		::System::String* IconPath; // 0x10
		::System::String* DamageIconPath; // 0x18
		::RPG::Client::SuitRecommendDataType _DataType_k__BackingField; // 0x20
		::RPG::GameCore::AttackDamageType DamageType; // 0x24
		::System::UInt32 AvatarID; // 0x28
		::System::Boolean IsFallback; // 0x2C
		::System::Boolean IsHave; // 0x2D
		::RPG::GameCore::ItemRarity Rarity; // 0x30
		::System::Int32 RecommendWeight; // 0x34
		::RPG::Client::TextID Name; // 0x38

		::System::Void _ctor(::System::UInt32 a1, ::System::Int32 a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_SUITRECOMMENDAVATARDATA__CTOR_OFFSET))(this, a1, a2, a3);
		}

		::System::Boolean get_IsConfigData()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SUITRECOMMENDAVATARDATA_GET_ISCONFIGDATA_OFFSET))(this);
		}

		::System::Boolean get_IsBigData()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SUITRECOMMENDAVATARDATA_GET_ISBIGDATA_OFFSET))(this);
		}

		::RPG::Client::SuitRecommendDataType get_DataType()
		{
			return ((::RPG::Client::SuitRecommendDataType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SUITRECOMMENDAVATARDATA_GET_DATATYPE_OFFSET))(this);
		}

		::System::Void set_DataType(::RPG::Client::SuitRecommendDataType a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::SuitRecommendDataType))((::PBYTE)hIl2Cpp + RPG_CLIENT_SUITRECOMMENDAVATARDATA_SET_DATATYPE_OFFSET))(this, a1);
		}

		::System::Boolean CheckIsHave()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SUITRECOMMENDAVATARDATA_CHECKISHAVE_OFFSET))(this);
		}

		::RPG::Client::TextID GetName()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SUITRECOMMENDAVATARDATA_GETNAME_OFFSET))(this);
		}

		::System::String* GetIconPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SUITRECOMMENDAVATARDATA_GETICONPATH_OFFSET))(this);
		}

		::System::Int32 CompareTo(::RPG::Client::SuitRecommendAvatarData* a1)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::SuitRecommendAvatarData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_SUITRECOMMENDAVATARDATA_COMPARETO_OFFSET))(this, a1);
		}

		static ::RPG::Client::SuitRecommendAvatarData* Create(::System::UInt32 a1, ::System::Int32 a2, ::System::Boolean a3)
		{
			return ((::RPG::Client::SuitRecommendAvatarData*(*)(::System::UInt32, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_SUITRECOMMENDAVATARDATA_CREATE_OFFSET))(a1, a2, a3);
		}

		static ::RPG::Client::SuitRecommendAvatarData* CreateConfigData(::System::UInt32 a1)
		{
			return ((::RPG::Client::SuitRecommendAvatarData*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_SUITRECOMMENDAVATARDATA_CREATECONFIGDATA_OFFSET))(a1);
		}
	};
}

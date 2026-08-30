#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/DrinkMakerQuantifyTagType.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class DrinkMakerCheersTypeTextmapRow; }
namespace System { class String; }

#define RPG_CLIENT_DRINKMAKERCHEERSTAGDATA_GETQUANTIFYDESCBYVALUE_OFFSET UNITYSDK_OFFSET(0xCD9EF30)
#define RPG_CLIENT_DRINKMAKERCHEERSTAGDATA_GET_GROUPID_OFFSET UNITYSDK_OFFSET(0xCD9F060)
#define RPG_CLIENT_DRINKMAKERCHEERSTAGDATA_GET_NEGATIVETAGNAME_OFFSET UNITYSDK_OFFSET(0xCD9F1D0)
#define RPG_CLIENT_DRINKMAKERCHEERSTAGDATA_GET_POSITIVETAGNAME_OFFSET UNITYSDK_OFFSET(0xCD9F110)
#define RPG_CLIENT_DRINKMAKERCHEERSTAGDATA_GET_QUANTIFYTAGTYPE_OFFSET UNITYSDK_OFFSET(0xCD9F080)
#define RPG_CLIENT_DRINKMAKERCHEERSTAGDATA_GET_SLIDERCOLOR_OFFSET UNITYSDK_OFFSET(0xCD9F290)
#define RPG_CLIENT_DRINKMAKERCHEERSTAGDATA_GET_TAGNAME_OFFSET UNITYSDK_OFFSET(0xCD9F0A0)
#define RPG_CLIENT_DRINKMAKERCHEERSTAGDATA_GET_TYPEICONPATH_OFFSET UNITYSDK_OFFSET(0xCD9F0C0)
#define RPG_CLIENT_DRINKMAKERCHEERSTAGDATA_SET_GROUPID_OFFSET UNITYSDK_OFFSET(0xCD9F070)
#define RPG_CLIENT_DRINKMAKERCHEERSTAGDATA_SET_QUANTIFYTAGTYPE_OFFSET UNITYSDK_OFFSET(0xCD9F090)
#define RPG_CLIENT_DRINKMAKERCHEERSTAGDATA_SET_TAGNAME_OFFSET UNITYSDK_OFFSET(0xCD9F0B0)
#define RPG_CLIENT_DRINKMAKERCHEERSTAGDATA__CTOR_OFFSET UNITYSDK_OFFSET(0xCD98B80)

namespace RPG::Client
{
	inline static constexpr unsigned int DrinkMakerCheersTagData_TypeDefinitionIndex = 63687;

	class DrinkMakerCheersTagData : public ::System::Object
	{
	public:
		::RPG::GameCore::DrinkMakerCheersTypeTextmapRow* _TypeTextMapConfigRow; // 0x10
		::RPG::Client::TextID _TagName_k__BackingField; // 0x18
		::System::UInt32 _GroupId_k__BackingField; // 0x28
		::RPG::GameCore::DrinkMakerQuantifyTagType _QuantifyTagType_k__BackingField; // 0x2C

		::System::Void _ctor(::System::UInt32 a1, ::RPG::GameCore::DrinkMakerQuantifyTagType a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::RPG::GameCore::DrinkMakerQuantifyTagType))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERCHEERSTAGDATA__CTOR_OFFSET))(this, a1, a2);
		}

		::RPG::Client::TextID GetQuantifyDescByValue(::System::Int32 a1)
		{
			return ((::RPG::Client::TextID(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERCHEERSTAGDATA_GETQUANTIFYDESCBYVALUE_OFFSET))(this, a1);
		}

		::System::UInt32 get_GroupId()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERCHEERSTAGDATA_GET_GROUPID_OFFSET))(this);
		}

		::System::Void set_GroupId(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERCHEERSTAGDATA_SET_GROUPID_OFFSET))(this, a1);
		}

		::RPG::GameCore::DrinkMakerQuantifyTagType get_QuantifyTagType()
		{
			return ((::RPG::GameCore::DrinkMakerQuantifyTagType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERCHEERSTAGDATA_GET_QUANTIFYTAGTYPE_OFFSET))(this);
		}

		::System::Void set_QuantifyTagType(::RPG::GameCore::DrinkMakerQuantifyTagType a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::DrinkMakerQuantifyTagType))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERCHEERSTAGDATA_SET_QUANTIFYTAGTYPE_OFFSET))(this, a1);
		}

		::RPG::Client::TextID get_TagName()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERCHEERSTAGDATA_GET_TAGNAME_OFFSET))(this);
		}

		::System::Void set_TagName(::RPG::Client::TextID a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::TextID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERCHEERSTAGDATA_SET_TAGNAME_OFFSET))(this, a1);
		}

		::System::String* get_TypeIconPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERCHEERSTAGDATA_GET_TYPEICONPATH_OFFSET))(this);
		}

		::RPG::Client::TextID get_PositiveTagName()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERCHEERSTAGDATA_GET_POSITIVETAGNAME_OFFSET))(this);
		}

		::RPG::Client::TextID get_NegativeTagName()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERCHEERSTAGDATA_GET_NEGATIVETAGNAME_OFFSET))(this);
		}

		::System::String* get_SliderColor()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERCHEERSTAGDATA_GET_SLIDERCOLOR_OFFSET))(this);
		}
	};
}

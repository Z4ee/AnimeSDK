#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/DrinkMakerQuantifyTagType.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class DrinkMakerCheersTypeTextmapRow; }
namespace System { class String; }

#define RPG_CLIENT_DRINKMAKERCHEERSTAGDATA_GETQUANTIFYDESCBYVALUE_OFFSET UNITYSDK_OFFSET(0xA194B10)
#define RPG_CLIENT_DRINKMAKERCHEERSTAGDATA_GET_GROUPID_OFFSET UNITYSDK_OFFSET(0xA194C40)
#define RPG_CLIENT_DRINKMAKERCHEERSTAGDATA_GET_NEGATIVETAGNAME_OFFSET UNITYSDK_OFFSET(0xA194D80)
#define RPG_CLIENT_DRINKMAKERCHEERSTAGDATA_GET_POSITIVETAGNAME_OFFSET UNITYSDK_OFFSET(0xA194CC0)
#define RPG_CLIENT_DRINKMAKERCHEERSTAGDATA_GET_QUANTIFYTAGTYPE_OFFSET UNITYSDK_OFFSET(0xA194C60)
#define RPG_CLIENT_DRINKMAKERCHEERSTAGDATA_GET_SLIDERCOLOR_OFFSET UNITYSDK_OFFSET(0xA194E40)
#define RPG_CLIENT_DRINKMAKERCHEERSTAGDATA_GET_TAGNAME_OFFSET UNITYSDK_OFFSET(0xA194C80)
#define RPG_CLIENT_DRINKMAKERCHEERSTAGDATA_GET_TYPEICONPATH_OFFSET UNITYSDK_OFFSET(0xA194CA0)
#define RPG_CLIENT_DRINKMAKERCHEERSTAGDATA_SET_GROUPID_OFFSET UNITYSDK_OFFSET(0xA194C50)
#define RPG_CLIENT_DRINKMAKERCHEERSTAGDATA_SET_QUANTIFYTAGTYPE_OFFSET UNITYSDK_OFFSET(0xA194C70)
#define RPG_CLIENT_DRINKMAKERCHEERSTAGDATA_SET_TAGNAME_OFFSET UNITYSDK_OFFSET(0xA194C90)
#define RPG_CLIENT_DRINKMAKERCHEERSTAGDATA__CTOR_OFFSET UNITYSDK_OFFSET(0xA18F4F0)

namespace RPG::Client
{
	inline static constexpr unsigned int DrinkMakerCheersTagData_TypeDefinitionIndex = 58620;

	class DrinkMakerCheersTagData : public ::System::Object
	{
	public:
		::RPG::GameCore::DrinkMakerCheersTypeTextmapRow* _TypeTextMapConfigRow; // 0x10
		::RPG::Client::TextID _TagName_k__BackingField; // 0x18
		::System::UInt32 _GroupId_k__BackingField; // 0x28
		::RPG::GameCore::DrinkMakerQuantifyTagType _QuantifyTagType_k__BackingField; // 0x2C

		::System::Void _ctor(::System::UInt32 groupId, ::RPG::GameCore::DrinkMakerQuantifyTagType quantifyTagType)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::RPG::GameCore::DrinkMakerQuantifyTagType))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERCHEERSTAGDATA__CTOR_OFFSET))(this, groupId, quantifyTagType);
		}

		::RPG::Client::TextID GetQuantifyDescByValue(::System::Int32 value)
		{
			return ((::RPG::Client::TextID(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERCHEERSTAGDATA_GETQUANTIFYDESCBYVALUE_OFFSET))(this, value);
		}

		::System::UInt32 get_GroupId()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERCHEERSTAGDATA_GET_GROUPID_OFFSET))(this);
		}

		::System::Void set_GroupId(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERCHEERSTAGDATA_SET_GROUPID_OFFSET))(this, value);
		}

		::RPG::GameCore::DrinkMakerQuantifyTagType get_QuantifyTagType()
		{
			return ((::RPG::GameCore::DrinkMakerQuantifyTagType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERCHEERSTAGDATA_GET_QUANTIFYTAGTYPE_OFFSET))(this);
		}

		::System::Void set_QuantifyTagType(::RPG::GameCore::DrinkMakerQuantifyTagType value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::DrinkMakerQuantifyTagType))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERCHEERSTAGDATA_SET_QUANTIFYTAGTYPE_OFFSET))(this, value);
		}

		::RPG::Client::TextID get_TagName()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERCHEERSTAGDATA_GET_TAGNAME_OFFSET))(this);
		}

		::System::Void set_TagName(::RPG::Client::TextID value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::TextID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERCHEERSTAGDATA_SET_TAGNAME_OFFSET))(this, value);
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

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/LimaoNewsOfficeSurveyType.h"
#include "unitysdk/System/Object.h"

class Class_1_BCC3E80A274A1E2E;
namespace System { class String; }

#define RPG_CLIENT_MVVM_MODEL_LIMAONEWSOFFICESURVEYTYPEDATA_CREATE_1_OFFSET UNITYSDK_OFFSET(0xA730FE0)
#define RPG_CLIENT_MVVM_MODEL_LIMAONEWSOFFICESURVEYTYPEDATA_CREATE_OFFSET UNITYSDK_OFFSET(0xA7300D0)
#define RPG_CLIENT_MVVM_MODEL_LIMAONEWSOFFICESURVEYTYPEDATA_GET_ISNONE_OFFSET UNITYSDK_OFFSET(0xA731110)
#define RPG_CLIENT_MVVM_MODEL_LIMAONEWSOFFICESURVEYTYPEDATA_GET_OFFICESURVEYTYPE_OFFSET UNITYSDK_OFFSET(0xA7310B0)
#define RPG_CLIENT_MVVM_MODEL_LIMAONEWSOFFICESURVEYTYPEDATA_GET_SURVEYTYPECOLORSTATE_OFFSET UNITYSDK_OFFSET(0xA731120)
#define RPG_CLIENT_MVVM_MODEL_LIMAONEWSOFFICESURVEYTYPEDATA_GET_SURVEYTYPEICON_OFFSET UNITYSDK_OFFSET(0xA7310D0)
#define RPG_CLIENT_MVVM_MODEL_LIMAONEWSOFFICESURVEYTYPEDATA_GET_SURVEYTYPEMASKCOLORSTATE_OFFSET UNITYSDK_OFFSET(0xA731180)
#define RPG_CLIENT_MVVM_MODEL_LIMAONEWSOFFICESURVEYTYPEDATA_GET_SURVEYTYPETEXTID_OFFSET UNITYSDK_OFFSET(0xA7310F0)
#define RPG_CLIENT_MVVM_MODEL_LIMAONEWSOFFICESURVEYTYPEDATA_SET_OFFICESURVEYTYPE_OFFSET UNITYSDK_OFFSET(0xA7310C0)
#define RPG_CLIENT_MVVM_MODEL_LIMAONEWSOFFICESURVEYTYPEDATA_SET_SURVEYTYPEICON_OFFSET UNITYSDK_OFFSET(0xA7310E0)
#define RPG_CLIENT_MVVM_MODEL_LIMAONEWSOFFICESURVEYTYPEDATA_SET_SURVEYTYPETEXTID_OFFSET UNITYSDK_OFFSET(0xA731100)
#define RPG_CLIENT_MVVM_MODEL_LIMAONEWSOFFICESURVEYTYPEDATA__CTOR_OFFSET UNITYSDK_OFFSET(0xA730F70)
#define RPG_CLIENT_MVVM_MODEL_LIMAONEWSOFFICESURVEYTYPEDATA__INITBYROW_OFFSET UNITYSDK_OFFSET(0xA730F80)

namespace RPG::Client::MVVM::Model
{
	inline static constexpr unsigned int LimaoNewsOfficeSurveyTypeData_TypeDefinitionIndex = 68525;

	class LimaoNewsOfficeSurveyTypeData : public ::System::Object
	{
	public:
		::System::String* _SurveyTypeIcon_k__BackingField; // 0x10
		::RPG::GameCore::LimaoNewsOfficeSurveyType _OfficeSurveyType_k__BackingField; // 0x18
		::RPG::Client::TextID _SurveyTypeTextID_k__BackingField; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MVVM_MODEL_LIMAONEWSOFFICESURVEYTYPEDATA__CTOR_OFFSET))(this);
		}

		static ::RPG::Client::MVVM::Model::LimaoNewsOfficeSurveyTypeData* Create(::RPG::GameCore::LimaoNewsOfficeSurveyType type)
		{
			return ((::RPG::Client::MVVM::Model::LimaoNewsOfficeSurveyTypeData*(*)(::RPG::GameCore::LimaoNewsOfficeSurveyType))((::PBYTE)hIl2Cpp + RPG_CLIENT_MVVM_MODEL_LIMAONEWSOFFICESURVEYTYPEDATA_CREATE_OFFSET))(type);
		}

		static ::RPG::Client::MVVM::Model::LimaoNewsOfficeSurveyTypeData* Create_1(::Class_1_BCC3E80A274A1E2E* row)
		{
			return ((::RPG::Client::MVVM::Model::LimaoNewsOfficeSurveyTypeData*(*)(::Class_1_BCC3E80A274A1E2E*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MVVM_MODEL_LIMAONEWSOFFICESURVEYTYPEDATA_CREATE_1_OFFSET))(row);
		}

		::System::Void _InitByRow(::Class_1_BCC3E80A274A1E2E* row)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_BCC3E80A274A1E2E*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MVVM_MODEL_LIMAONEWSOFFICESURVEYTYPEDATA__INITBYROW_OFFSET))(this, row);
		}

		::RPG::GameCore::LimaoNewsOfficeSurveyType get_OfficeSurveyType()
		{
			return ((::RPG::GameCore::LimaoNewsOfficeSurveyType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MVVM_MODEL_LIMAONEWSOFFICESURVEYTYPEDATA_GET_OFFICESURVEYTYPE_OFFSET))(this);
		}

		::System::Void set_OfficeSurveyType(::RPG::GameCore::LimaoNewsOfficeSurveyType value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::LimaoNewsOfficeSurveyType))((::PBYTE)hIl2Cpp + RPG_CLIENT_MVVM_MODEL_LIMAONEWSOFFICESURVEYTYPEDATA_SET_OFFICESURVEYTYPE_OFFSET))(this, value);
		}

		::System::String* get_SurveyTypeIcon()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MVVM_MODEL_LIMAONEWSOFFICESURVEYTYPEDATA_GET_SURVEYTYPEICON_OFFSET))(this);
		}

		::System::Void set_SurveyTypeIcon(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MVVM_MODEL_LIMAONEWSOFFICESURVEYTYPEDATA_SET_SURVEYTYPEICON_OFFSET))(this, value);
		}

		::RPG::Client::TextID get_SurveyTypeTextID()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MVVM_MODEL_LIMAONEWSOFFICESURVEYTYPEDATA_GET_SURVEYTYPETEXTID_OFFSET))(this);
		}

		::System::Void set_SurveyTypeTextID(::RPG::Client::TextID value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::TextID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MVVM_MODEL_LIMAONEWSOFFICESURVEYTYPEDATA_SET_SURVEYTYPETEXTID_OFFSET))(this, value);
		}

		::System::Boolean get_IsNone()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MVVM_MODEL_LIMAONEWSOFFICESURVEYTYPEDATA_GET_ISNONE_OFFSET))(this);
		}

		::System::String* get_SurveyTypeColorState()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MVVM_MODEL_LIMAONEWSOFFICESURVEYTYPEDATA_GET_SURVEYTYPECOLORSTATE_OFFSET))(this);
		}

		::System::String* get_SurveyTypeMaskColorState()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MVVM_MODEL_LIMAONEWSOFFICESURVEYTYPEDATA_GET_SURVEYTYPEMASKCOLORSTATE_OFFSET))(this);
		}
	};
}

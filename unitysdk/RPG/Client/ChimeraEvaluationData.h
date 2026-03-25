#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class ChimeraEvaluationConfig; }
namespace RPG::GameCore { class ChimeraEvaluationRow; }
namespace System { class String; }

#define RPG_CLIENT_CHIMERAEVALUATIONDATA_COMPARETO_OFFSET UNITYSDK_OFFSET(0x93B8260)
#define RPG_CLIENT_CHIMERAEVALUATIONDATA_CREATE_OFFSET UNITYSDK_OFFSET(0x93B7DD0)
#define RPG_CLIENT_CHIMERAEVALUATIONDATA_GET_CONDITIONJSON_OFFSET UNITYSDK_OFFSET(0x93B7FC0)
#define RPG_CLIENT_CHIMERAEVALUATIONDATA_GET_CONFIG_OFFSET UNITYSDK_OFFSET(0x93B80A0)
#define RPG_CLIENT_CHIMERAEVALUATIONDATA_GET_EVALUATIONDESC_OFFSET UNITYSDK_OFFSET(0x93B7F40)
#define RPG_CLIENT_CHIMERAEVALUATIONDATA_GET_EVALUATIONNAME_OFFSET UNITYSDK_OFFSET(0x93B7E60)
#define RPG_CLIENT_CHIMERAEVALUATIONDATA_GET_GROUPID_OFFSET UNITYSDK_OFFSET(0x93B8030)
#define RPG_CLIENT_CHIMERAEVALUATIONDATA_GET_ID_OFFSET UNITYSDK_OFFSET(0x93B7E40)
#define RPG_CLIENT_CHIMERAEVALUATIONDATA_GET_ISNEEDRELATEDEVALUATION_OFFSET UNITYSDK_OFFSET(0x93B81B0)
#define RPG_CLIENT_CHIMERAEVALUATIONDATA_GET__ROW_OFFSET UNITYSDK_OFFSET(0x93B7EE0)
#define RPG_CLIENT_CHIMERAEVALUATIONDATA_SET_ID_OFFSET UNITYSDK_OFFSET(0x93B7E50)
#define RPG_CLIENT_CHIMERAEVALUATIONDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x93B7E30)

namespace RPG::Client
{
	inline static constexpr unsigned int ChimeraEvaluationData_TypeDefinitionIndex = 51558;

	class ChimeraEvaluationData : public ::System::Object
	{
	public:
		::System::UInt32 _ID_k__BackingField; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERAEVALUATIONDATA__CTOR_OFFSET))(this);
		}

		static ::RPG::Client::ChimeraEvaluationData* Create(::System::UInt32 id)
		{
			return ((::RPG::Client::ChimeraEvaluationData*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERAEVALUATIONDATA_CREATE_OFFSET))(id);
		}

		::System::UInt32 get_ID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERAEVALUATIONDATA_GET_ID_OFFSET))(this);
		}

		::System::Void set_ID(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERAEVALUATIONDATA_SET_ID_OFFSET))(this, value);
		}

		::RPG::Client::TextID get_EvaluationName()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERAEVALUATIONDATA_GET_EVALUATIONNAME_OFFSET))(this);
		}

		::RPG::Client::TextID get_EvaluationDesc()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERAEVALUATIONDATA_GET_EVALUATIONDESC_OFFSET))(this);
		}

		::System::String* get_ConditionJson()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERAEVALUATIONDATA_GET_CONDITIONJSON_OFFSET))(this);
		}

		::System::UInt32 get_GroupID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERAEVALUATIONDATA_GET_GROUPID_OFFSET))(this);
		}

		::RPG::GameCore::ChimeraEvaluationConfig* get_Config()
		{
			return ((::RPG::GameCore::ChimeraEvaluationConfig*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERAEVALUATIONDATA_GET_CONFIG_OFFSET))(this);
		}

		::System::Boolean get_IsNeedRelatedEvaluation()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERAEVALUATIONDATA_GET_ISNEEDRELATEDEVALUATION_OFFSET))(this);
		}

		::RPG::GameCore::ChimeraEvaluationRow* get__Row()
		{
			return ((::RPG::GameCore::ChimeraEvaluationRow*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERAEVALUATIONDATA_GET__ROW_OFFSET))(this);
		}

		::System::Int32 CompareTo(::RPG::Client::ChimeraEvaluationData* other)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::ChimeraEvaluationData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERAEVALUATIONDATA_COMPARETO_OFFSET))(this, other);
		}
	};
}

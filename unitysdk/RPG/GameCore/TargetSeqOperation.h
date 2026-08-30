#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_TARGETSEQOPERATION_METHOD_2_217BAE0F42864A8E_OFFSET UNITYSDK_OFFSET(0x1E1BF6B0)
#define RPG_GAMECORE_TARGETSEQOPERATION_METHOD_2_6112A888C5B98EBD_OFFSET UNITYSDK_OFFSET(0x1E1BF750)
#define RPG_GAMECORE_TARGETSEQOPERATION_METHOD_2_9C4C5D2174678974_OFFSET UNITYSDK_OFFSET(0x1E1BF6F0)
#define RPG_GAMECORE_TARGETSEQOPERATION_METHOD_2_B571ADBE19D3F564_OFFSET UNITYSDK_OFFSET(0x1E1BF7B0)
#define RPG_GAMECORE_TARGETSEQOPERATION_METHOD_2_D9014E6A724C6ECA_OFFSET UNITYSDK_OFFSET(0x1E1BF7C0)
#define RPG_GAMECORE_TARGETSEQOPERATION__CTOR_OFFSET UNITYSDK_OFFSET(0x1E1B8640)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TargetSeqOperation_TypeDefinitionIndex = 23469;

	class TargetSeqOperation : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETSEQOPERATION__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_217BAE0F42864A8E(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TargetSeqOperation*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TargetSeqOperation*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETSEQOPERATION_METHOD_2_217BAE0F42864A8E_OFFSET))(a1, a2);
		}

		static ::System::Void Method_2_9C4C5D2174678974(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TargetSeqOperation* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TargetSeqOperation*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETSEQOPERATION_METHOD_2_9C4C5D2174678974_OFFSET))(a1, a2);
		}

		static ::System::Void Method_2_6112A888C5B98EBD(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetSeqOperation*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetSeqOperation*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETSEQOPERATION_METHOD_2_6112A888C5B98EBD_OFFSET))(a1, a2);
		}

		static ::System::Void Method_2_B571ADBE19D3F564(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetSeqOperation* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetSeqOperation*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETSEQOPERATION_METHOD_2_B571ADBE19D3F564_OFFSET))(a1, a2);
		}

		static ::System::Void Method_2_D9014E6A724C6ECA(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetSeqOperation*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetSeqOperation*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETSEQOPERATION_METHOD_2_D9014E6A724C6ECA_OFFSET))(a1, a2);
		}
	};
}

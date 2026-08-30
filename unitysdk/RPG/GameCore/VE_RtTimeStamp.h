#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RtTimeScope.h"
#include "unitysdk/RPG/GameCore/ValueEvaluatorConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TargetEvaluator; }
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_VE_RTTIMESTAMP_METHOD_3_2CD6EE2FDCDC4582_OFFSET UNITYSDK_OFFSET(0x1DEA7FE0)
#define RPG_GAMECORE_VE_RTTIMESTAMP_METHOD_3_9552EA1BB2F6AA20_OFFSET UNITYSDK_OFFSET(0x1DEA8240)
#define RPG_GAMECORE_VE_RTTIMESTAMP_METHOD_3_ACA65C7FB85D2921_OFFSET UNITYSDK_OFFSET(0x1DEA7F40)
#define RPG_GAMECORE_VE_RTTIMESTAMP_METHOD_3_C05CE16DE156F3E1_OFFSET UNITYSDK_OFFSET(0x1DEA81E0)
#define RPG_GAMECORE_VE_RTTIMESTAMP__CTOR_OFFSET UNITYSDK_OFFSET(0x1DEA7FA0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int VE_RtTimeStamp_TypeDefinitionIndex = 23999;

	class VE_RtTimeStamp : public ::RPG::GameCore::ValueEvaluatorConfig
	{
	public:
		::RPG::GameCore::RtTimeScope TimeScope; // 0x20
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_VE_RTTIMESTAMP__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_ACA65C7FB85D2921(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::VE_RtTimeStamp*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::VE_RtTimeStamp*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_VE_RTTIMESTAMP_METHOD_3_ACA65C7FB85D2921_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_2CD6EE2FDCDC4582(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::VE_RtTimeStamp* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::VE_RtTimeStamp*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_VE_RTTIMESTAMP_METHOD_3_2CD6EE2FDCDC4582_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_C05CE16DE156F3E1(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::VE_RtTimeStamp*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::VE_RtTimeStamp*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_VE_RTTIMESTAMP_METHOD_3_C05CE16DE156F3E1_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_9552EA1BB2F6AA20(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::VE_RtTimeStamp* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::VE_RtTimeStamp*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_VE_RTTIMESTAMP_METHOD_3_9552EA1BB2F6AA20_OFFSET))(a1, a2);
		}
	};
}

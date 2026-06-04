#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RtTimeScope.h"
#include "unitysdk/RPG/GameCore/ValueEvaluatorConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TargetEvaluator; }
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_VE_RTTIMESTAMP_METHOD_3_2CD6EE2FDCDC4582_OFFSET UNITYSDK_OFFSET(0x19E45C60)
#define RPG_GAMECORE_VE_RTTIMESTAMP_METHOD_3_A54AB8AE6B13D332_OFFSET UNITYSDK_OFFSET(0x19E45E60)
#define RPG_GAMECORE_VE_RTTIMESTAMP_METHOD_3_ACA65C7FB85D2921_OFFSET UNITYSDK_OFFSET(0x19E45BC0)
#define RPG_GAMECORE_VE_RTTIMESTAMP_METHOD_3_DF8FDC78A5E447E7_OFFSET UNITYSDK_OFFSET(0x19E45EC0)
#define RPG_GAMECORE_VE_RTTIMESTAMP__CTOR_OFFSET UNITYSDK_OFFSET(0x19E45C20)

namespace RPG::GameCore
{
	inline static constexpr unsigned int VE_RtTimeStamp_TypeDefinitionIndex = 22952;

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

		static ::System::Void Method_3_A54AB8AE6B13D332(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::VE_RtTimeStamp*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::VE_RtTimeStamp*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_VE_RTTIMESTAMP_METHOD_3_A54AB8AE6B13D332_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_DF8FDC78A5E447E7(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::VE_RtTimeStamp* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::VE_RtTimeStamp*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_VE_RTTIMESTAMP_METHOD_3_DF8FDC78A5E447E7_OFFSET))(a1, a2);
		}
	};
}

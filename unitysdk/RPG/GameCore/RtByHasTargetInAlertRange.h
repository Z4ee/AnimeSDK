#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TargetEvaluator; }
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_RTBYHASTARGETINALERTRANGE_METHOD_4_937AB86299DB861D_OFFSET UNITYSDK_OFFSET(0x1CCDD800)
#define RPG_GAMECORE_RTBYHASTARGETINALERTRANGE_METHOD_4_963245C0B3B12756_OFFSET UNITYSDK_OFFSET(0x1CCDD9F0)
#define RPG_GAMECORE_RTBYHASTARGETINALERTRANGE_METHOD_4_A9CAAF7D5E939E68_OFFSET UNITYSDK_OFFSET(0x1CCDD840)
#define RPG_GAMECORE_RTBYHASTARGETINALERTRANGE_METHOD_4_E3D67FAF502A1D18_OFFSET UNITYSDK_OFFSET(0x1CCDD9C0)
#define RPG_GAMECORE_RTBYHASTARGETINALERTRANGE__CTOR_OFFSET UNITYSDK_OFFSET(0x1CCDD830)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RtByHasTargetInAlertRange_TypeDefinitionIndex = 23952;

	class RtByHasTargetInAlertRange : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTBYHASTARGETINALERTRANGE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_937AB86299DB861D(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RtByHasTargetInAlertRange*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RtByHasTargetInAlertRange*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTBYHASTARGETINALERTRANGE_METHOD_4_937AB86299DB861D_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_A9CAAF7D5E939E68(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RtByHasTargetInAlertRange* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RtByHasTargetInAlertRange*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTBYHASTARGETINALERTRANGE_METHOD_4_A9CAAF7D5E939E68_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_E3D67FAF502A1D18(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::RtByHasTargetInAlertRange*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::RtByHasTargetInAlertRange*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTBYHASTARGETINALERTRANGE_METHOD_4_E3D67FAF502A1D18_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_963245C0B3B12756(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::RtByHasTargetInAlertRange* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::RtByHasTargetInAlertRange*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTBYHASTARGETINALERTRANGE_METHOD_4_963245C0B3B12756_OFFSET))(a1, a2);
		}
	};
}

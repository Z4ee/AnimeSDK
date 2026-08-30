#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TargetEvaluator; }
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_RTBYISMOVING_METHOD_4_05F3853619FF323A_OFFSET UNITYSDK_OFFSET(0x1CCDEBA0)
#define RPG_GAMECORE_RTBYISMOVING_METHOD_4_8704B90EA24EA90F_OFFSET UNITYSDK_OFFSET(0x1CCDED90)
#define RPG_GAMECORE_RTBYISMOVING_METHOD_4_B49D8404E20FF189_OFFSET UNITYSDK_OFFSET(0x1CCDED60)
#define RPG_GAMECORE_RTBYISMOVING_METHOD_4_F4695B58E5E83BB3_OFFSET UNITYSDK_OFFSET(0x1CCDEBE0)
#define RPG_GAMECORE_RTBYISMOVING__CTOR_OFFSET UNITYSDK_OFFSET(0x1CCDEBD0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RtByIsMoving_TypeDefinitionIndex = 23844;

	class RtByIsMoving : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTBYISMOVING__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_05F3853619FF323A(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RtByIsMoving*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RtByIsMoving*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTBYISMOVING_METHOD_4_05F3853619FF323A_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_F4695B58E5E83BB3(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RtByIsMoving* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RtByIsMoving*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTBYISMOVING_METHOD_4_F4695B58E5E83BB3_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_B49D8404E20FF189(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::RtByIsMoving*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::RtByIsMoving*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTBYISMOVING_METHOD_4_B49D8404E20FF189_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_8704B90EA24EA90F(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::RtByIsMoving* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::RtByIsMoving*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTBYISMOVING_METHOD_4_8704B90EA24EA90F_OFFSET))(a1, a2);
		}
	};
}

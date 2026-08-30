#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AnimStateLogicType.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TargetEvaluator; }
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_BYANIMSTATELOGICTYPE_METHOD_4_3766BB5BA8BFCABC_OFFSET UNITYSDK_OFFSET(0x1C2F1CA0)
#define RPG_GAMECORE_BYANIMSTATELOGICTYPE_METHOD_4_8193A95F61FFFA39_OFFSET UNITYSDK_OFFSET(0x1C2F1D40)
#define RPG_GAMECORE_BYANIMSTATELOGICTYPE_METHOD_4_C586470227BFB2DF_OFFSET UNITYSDK_OFFSET(0x1C2F1F70)
#define RPG_GAMECORE_BYANIMSTATELOGICTYPE_METHOD_4_F8A91AD5F150D21A_OFFSET UNITYSDK_OFFSET(0x1C2F1F10)
#define RPG_GAMECORE_BYANIMSTATELOGICTYPE__CTOR_OFFSET UNITYSDK_OFFSET(0x1C2F1D00)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByAnimStateLogicType_TypeDefinitionIndex = 22173;

	class ByAnimStateLogicType : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x20
		::RPG::GameCore::AnimStateLogicType AnimState; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYANIMSTATELOGICTYPE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_3766BB5BA8BFCABC(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByAnimStateLogicType*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByAnimStateLogicType*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYANIMSTATELOGICTYPE_METHOD_4_3766BB5BA8BFCABC_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_8193A95F61FFFA39(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByAnimStateLogicType* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByAnimStateLogicType*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYANIMSTATELOGICTYPE_METHOD_4_8193A95F61FFFA39_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_F8A91AD5F150D21A(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByAnimStateLogicType*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByAnimStateLogicType*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYANIMSTATELOGICTYPE_METHOD_4_F8A91AD5F150D21A_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_C586470227BFB2DF(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByAnimStateLogicType* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByAnimStateLogicType*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYANIMSTATELOGICTYPE_METHOD_4_C586470227BFB2DF_OFFSET))(a1, a2);
		}
	};
}

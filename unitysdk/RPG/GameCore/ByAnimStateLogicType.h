#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AnimStateLogicType.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_BYANIMSTATELOGICTYPE_METHOD_4_01C90884FDEE5FEA_OFFSET UNITYSDK_OFFSET(0x16FFA150)
#define RPG_GAMECORE_BYANIMSTATELOGICTYPE_METHOD_4_8193A95F61FFFA39_OFFSET UNITYSDK_OFFSET(0x16FFA270)
#define RPG_GAMECORE_BYANIMSTATELOGICTYPE__CTOR_OFFSET UNITYSDK_OFFSET(0x16FFA1F0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByAnimStateLogicType_TypeDefinitionIndex = 20615;

	class ByAnimStateLogicType : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x20
		::RPG::GameCore::AnimStateLogicType AnimState; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYANIMSTATELOGICTYPE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_01C90884FDEE5FEA(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByAnimStateLogicType*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByAnimStateLogicType*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYANIMSTATELOGICTYPE_METHOD_4_01C90884FDEE5FEA_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_8193A95F61FFFA39(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByAnimStateLogicType* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByAnimStateLogicType*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYANIMSTATELOGICTYPE_METHOD_4_8193A95F61FFFA39_OFFSET))(a1, a2);
		}
	};
}

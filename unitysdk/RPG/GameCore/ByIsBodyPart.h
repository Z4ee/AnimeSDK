#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_BYISBODYPART_METHOD_4_3CD83BCFF5008EB6_OFFSET UNITYSDK_OFFSET(0x17029E10)
#define RPG_GAMECORE_BYISBODYPART_METHOD_4_D5092F1293684E94_OFFSET UNITYSDK_OFFSET(0x1702A050)
#define RPG_GAMECORE_BYISBODYPART__CTOR_OFFSET UNITYSDK_OFFSET(0x1702A000)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByIsBodyPart_TypeDefinitionIndex = 21546;

	class ByIsBodyPart : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISBODYPART__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_3CD83BCFF5008EB6(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByIsBodyPart*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByIsBodyPart*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISBODYPART_METHOD_4_3CD83BCFF5008EB6_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_D5092F1293684E94(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByIsBodyPart* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByIsBodyPart*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISBODYPART_METHOD_4_D5092F1293684E94_OFFSET))(a1, a2);
		}
	};
}

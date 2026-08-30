#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_COLLECTIONSTOPBUBBLETALK_METHOD_3_8D9F529A7ED90C99_OFFSET UNITYSDK_OFFSET(0x1CFEEBE0)
#define RPG_GAMECORE_COLLECTIONSTOPBUBBLETALK_METHOD_3_E3246CD1F7593C22_OFFSET UNITYSDK_OFFSET(0x1CFEEC20)
#define RPG_GAMECORE_COLLECTIONSTOPBUBBLETALK__CTOR_OFFSET UNITYSDK_OFFSET(0x1CFEEC10)

namespace RPG::GameCore
{
	inline static constexpr unsigned int CollectionStopBubbleTalk_TypeDefinitionIndex = 20173;

	class CollectionStopBubbleTalk : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_COLLECTIONSTOPBUBBLETALK__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_8D9F529A7ED90C99(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::CollectionStopBubbleTalk*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::CollectionStopBubbleTalk*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_COLLECTIONSTOPBUBBLETALK_METHOD_3_8D9F529A7ED90C99_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_E3246CD1F7593C22(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::CollectionStopBubbleTalk* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::CollectionStopBubbleTalk*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_COLLECTIONSTOPBUBBLETALK_METHOD_3_E3246CD1F7593C22_OFFSET))(a1, a2);
		}
	};
}

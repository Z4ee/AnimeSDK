#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicStringList; }
namespace RPG::GameCore { class SimpleTalkInfo; }

#define RPG_GAMECORE_COLLECTIONPLAYSIMPLETALK_METHOD_3_4114C02E6E463901_OFFSET UNITYSDK_OFFSET(0x1BC21480)
#define RPG_GAMECORE_COLLECTIONPLAYSIMPLETALK_METHOD_3_9D237791A02B5034_OFFSET UNITYSDK_OFFSET(0x1BC21430)
#define RPG_GAMECORE_COLLECTIONPLAYSIMPLETALK__CTOR_OFFSET UNITYSDK_OFFSET(0x1BC21470)

namespace RPG::GameCore
{
	inline static constexpr unsigned int CollectionPlaySimpleTalk_TypeDefinitionIndex = 19628;

	class CollectionPlaySimpleTalk : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::SimpleTalkInfo* TalkTemplate; // 0x18
		::RPG::GameCore::DynamicStringList* TalkSentenceIdList; // 0x20
		::System::Boolean KeepDisplay; // 0x28
		::System::Boolean BlackMask; // 0x29
		::System::Boolean NeedFadeBlackMask; // 0x2A

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_COLLECTIONPLAYSIMPLETALK__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_9D237791A02B5034(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::CollectionPlaySimpleTalk*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::CollectionPlaySimpleTalk*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_COLLECTIONPLAYSIMPLETALK_METHOD_3_9D237791A02B5034_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_4114C02E6E463901(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::CollectionPlaySimpleTalk* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::CollectionPlaySimpleTalk*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_COLLECTIONPLAYSIMPLETALK_METHOD_3_4114C02E6E463901_OFFSET))(a1, a2);
		}
	};
}

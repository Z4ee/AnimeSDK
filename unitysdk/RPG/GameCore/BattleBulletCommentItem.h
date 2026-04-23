#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_BATTLEBULLETCOMMENTITEM_METHOD_2_3FD6231EB2747C54_OFFSET UNITYSDK_OFFSET(0x186F00E0)
#define RPG_GAMECORE_BATTLEBULLETCOMMENTITEM__CTOR_OFFSET UNITYSDK_OFFSET(0x186F0250)

namespace RPG::GameCore
{
	inline static constexpr unsigned int BattleBulletCommentItem_TypeDefinitionIndex = 22215;

	class BattleBulletCommentItem : public ::RPG::GameCore::JsonConfig
	{
	public:
		::RPG::Client::TextID Text; // 0x10
		::System::String* Icon; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BATTLEBULLETCOMMENTITEM__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_3FD6231EB2747C54(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::BattleBulletCommentItem*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::BattleBulletCommentItem*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BATTLEBULLETCOMMENTITEM_METHOD_2_3FD6231EB2747C54_OFFSET))(a1, a2);
		}
	};
}

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define RPG_GAMECORE_BULLETCOMMENTITEM__CTOR_OFFSET UNITYSDK_OFFSET(0xE53EA50)

namespace RPG::GameCore
{
	inline static constexpr unsigned int BulletCommentItem_TypeDefinitionIndex = 55798;

	class BulletCommentItem : public ::System::Object
	{
	public:
		::System::String* Icon; // 0x10
		::RPG::Client::TextID Text; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BULLETCOMMENTITEM__CTOR_OFFSET))(this);
		}
	};
}

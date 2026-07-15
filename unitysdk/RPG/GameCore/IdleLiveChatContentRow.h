#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_IDLELIVECHATCONTENTROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1B6937B0)
#define RPG_GAMECORE_IDLELIVECHATCONTENTROW__CTOR_OFFSET UNITYSDK_OFFSET(0x1B6939C0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int IdleLiveChatContentRow_TypeDefinitionIndex = 11368;

	class IdleLiveChatContentRow : public ::System::Object
	{
	public:
		::RPG::Client::TextID Name; // 0x10
		::System::UInt32 ID; // 0x20
		::RPG::Client::TextID Content; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_IDLELIVECHATCONTENTROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::IdleLiveChatContentRow*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::IdleLiveChatContentRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_IDLELIVECHATCONTENTROW_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}

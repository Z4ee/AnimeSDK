#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class LoopSceneMoveObject; }
namespace System { class String; }

#define RPG_CLIENT_ATTACHMOVEOBJECT__CTOR_OFFSET UNITYSDK_OFFSET(0x1B339C40)

namespace RPG::Client
{
	inline static constexpr unsigned int AttachMoveObject_TypeDefinitionIndex = 68831;

	class AttachMoveObject : public ::System::Object
	{
	public:
		::System::String* Name; // 0x10
		::RPG::Client::LoopSceneMoveObject* MoveObject; // 0x18

		::System::Void _ctor(::System::String* a1, ::RPG::Client::LoopSceneMoveObject* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::RPG::Client::LoopSceneMoveObject*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ATTACHMOVEOBJECT__CTOR_OFFSET))(this, a1, a2);
		}
	};
}

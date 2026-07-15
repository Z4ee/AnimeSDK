#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::CustomRP { class IRPMessage; }
namespace System { class String; }

namespace RPG::CustomRP
{
	inline static constexpr unsigned int BaseMsgCreator_1_TypeDefinitionIndex = 36196;

	template <typename T>
	class BaseMsgCreator_1 : public ::System::Object
	{
	public:
		::System::String* m_MessageType; // 0x0
	};
}

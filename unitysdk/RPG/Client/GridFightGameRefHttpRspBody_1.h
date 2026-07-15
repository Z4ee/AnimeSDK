#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightGameRefHttpRspBody_1_TypeDefinitionIndex = 61856;

	template <typename T>
	class GridFightGameRefHttpRspBody_1 : public ::System::Object
	{
	public:
		::System::Int32 RetCode; // 0x0
		::System::String* Message; // 0x0
		T Data; // 0x0
	};
}

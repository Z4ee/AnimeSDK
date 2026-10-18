#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

namespace RPG::GameCore
{
	inline static constexpr unsigned int JsonConfigRefBase_1_TypeDefinitionIndex = 56519;

	template <typename T>
	class JsonConfigRefBase_1 : public ::System::Object
	{
	public:
		::System::String* _configPath; // 0x0
		::System::Int32 _offset; // 0x0
		T _resolved; // 0x0
	};
}

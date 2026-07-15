#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

namespace RPG::GameCore
{
	inline static constexpr unsigned int SharedAsset_1_TypeDefinitionIndex = 53988;

	template <typename T>
	class SharedAsset_1 : public ::System::Object
	{
	public:
		T _object; // 0x0
		::System::String* _path; // 0x0
		::System::UInt32 _count; // 0x0
	};
}

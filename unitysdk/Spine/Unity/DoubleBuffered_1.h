#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Spine::Unity
{
	inline static constexpr unsigned int DoubleBuffered_1_TypeDefinitionIndex = 42275;

	template <typename T>
	class DoubleBuffered_1 : public ::System::Object
	{
	public:
		T a; // 0x0
		T b; // 0x0
		::System::Boolean usingA; // 0x0
	};
}

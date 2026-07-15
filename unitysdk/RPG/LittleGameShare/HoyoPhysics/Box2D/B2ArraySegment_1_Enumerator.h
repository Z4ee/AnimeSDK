#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class Object; }

namespace RPG::LittleGameShare::HoyoPhysics::Box2D
{
	inline static constexpr unsigned int B2ArraySegment_1_Enumerator_TypeDefinitionIndex = 35033;

	template <typename T>
	struct B2ArraySegment_1_Enumerator
	{
		::Il2CppArray<T>* _array; // 0x0
		::System::Int32 _start; // 0x0
		::System::Int32 _end; // 0x0
		::System::Int32 _current; // 0x0
	};
}

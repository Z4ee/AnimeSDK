#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client::LittleGame::FiveDim
{
	inline static constexpr unsigned int PhantomPlayerFrameData_1_TypeDefinitionIndex = 40986;

	template <typename T>
	class PhantomPlayerFrameData_1 : public ::System::Object
	{
	public:
		::Il2CppArray<::System::Int32>* FrameIndex; // 0x0
		::Il2CppArray<T>* Value; // 0x0
	};
}

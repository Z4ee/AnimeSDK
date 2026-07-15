#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int EnumMaxValueHelper_1_TypeDefinitionIndex = 51234;

	template <typename E>
	class EnumMaxValueHelper_1 : public ::System::Object
	{
	public:
		static ::System::Int32* StaticGet_MaxValue()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(EnumMaxValueHelper_1_TypeDefinitionIndex)->GetStaticField(0x0);
		}
	};
}

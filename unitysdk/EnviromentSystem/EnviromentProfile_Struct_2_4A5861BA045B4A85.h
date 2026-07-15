#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace EnviromentSystem { class EnviroGradientProperty; }
namespace System::Collections::Generic { template <typename T> class List_1; }

namespace EnviromentSystem
{
	inline static constexpr unsigned int EnviromentProfile_Struct_2_4A5861BA045B4A85_TypeDefinitionIndex = 47731;

	struct alignas(8) EnviromentProfile_Struct_2_4A5861BA045B4A85
	{
		::System::Collections::Generic::List_1<::EnviromentSystem::EnviroGradientProperty*>* Field_2_0; // 0x10
	};
}

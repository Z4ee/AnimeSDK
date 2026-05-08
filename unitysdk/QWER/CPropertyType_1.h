#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/QWER/EPropertyFieldType.h"
#include "unitysdk/System/Object.h"

namespace QWER
{
	inline static constexpr unsigned int CPropertyType_1_TypeDefinitionIndex = 9683;

	template <typename T>
	class CPropertyType_1 : public ::System::Object
	{
	public:
		static ::QWER::EPropertyFieldType* StaticGet__Type_k__BackingField()
		{
			return (::QWER::EPropertyFieldType*)Il2CppClass::FromTypeDefinitionIndex(CPropertyType_1_TypeDefinitionIndex)->GetStaticField(0x0);
		}
	};
}

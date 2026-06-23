#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/ReadOnlyNativeVariableArray_1.h"
#include "unitysdk/Foundation/Unreal/FName.h"
#include "unitysdk/System/Object.h"

namespace System::Collections::Generic { template <typename T> class Comparer_1; }

namespace Foundation
{
	inline static constexpr unsigned int NameValueUtility_1_TypeDefinitionIndex = 8427;

	template <typename T>
	class NameValueUtility_1 : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::Comparer_1<T>** StaticGet_Comparer()
		{
			return (::System::Collections::Generic::Comparer_1<T>**)Il2CppClass::FromTypeDefinitionIndex(NameValueUtility_1_TypeDefinitionIndex)->GetStaticField(0x0);
		}
	};
}

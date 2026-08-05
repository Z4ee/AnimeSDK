#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RichTap::Internal
{
	inline static constexpr unsigned int SingletonBase_1_TypeDefinitionIndex = 38760;

	template <typename T>
	class SingletonBase_1 : public ::System::Object
	{
	public:
		static T* StaticGet_instance()
		{
			return (T*)Il2CppClass::FromTypeDefinitionIndex(SingletonBase_1_TypeDefinitionIndex)->GetStaticField(0x0);
		}
		static ::System::Object** StaticGet_locker()
		{
			return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(SingletonBase_1_TypeDefinitionIndex)->GetStaticField(0x0);
		}
	};
}

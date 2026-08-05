#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/ViewObject/EViewObjectComponentFeatureEvent.h"
#include "unitysdk/System/Object.h"

namespace Foundation::ViewObject
{
	inline static constexpr unsigned int ViewObjectFeatureEventMask_1_TypeDefinitionIndex = 88582;

	template <typename T>
	class ViewObjectFeatureEventMask_1 : public ::System::Object
	{
	public:
		static ::System::Int32* StaticGet_EventMask()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ViewObjectFeatureEventMask_1_TypeDefinitionIndex)->GetStaticField(0x0);
		}
	};
}

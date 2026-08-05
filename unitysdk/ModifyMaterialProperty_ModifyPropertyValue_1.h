#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

inline static constexpr unsigned int ModifyMaterialProperty_ModifyPropertyValue_1_TypeDefinitionIndex = 44832;

template <typename T>
class ModifyMaterialProperty_ModifyPropertyValue_1 : public ::System::Object
{
public:
	::System::String* propertyName; // 0x0
	T value; // 0x0
};

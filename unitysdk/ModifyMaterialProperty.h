#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"
#include "unitysdk/UnityEngine/Vector4.h"

class ModifyMaterialProperty_ModifyHDRColorPropertyValue;
namespace System::Collections::Generic { template <typename T> class List_1; }
template <typename T> class ModifyMaterialProperty_ModifyPropertyValue_1;

#define MODIFYMATERIALPROPERTY__CTOR_OFFSET UNITYSDK_OFFSET(0x13FE76A0)

inline static constexpr unsigned int ModifyMaterialProperty_TypeDefinitionIndex = 61236;

class ModifyMaterialProperty : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::ModifyMaterialProperty_ModifyHDRColorPropertyValue*>* hdrColorPropertyValues; // 0x10
	::System::Collections::Generic::List_1<::ModifyMaterialProperty_ModifyPropertyValue_1<::UnityEngine::Color>*>* colorPropertyValues; // 0x18
	::System::Collections::Generic::List_1<::ModifyMaterialProperty_ModifyPropertyValue_1<::System::Single>*>* floatPropertyValues; // 0x20
	::System::Collections::Generic::List_1<::ModifyMaterialProperty_ModifyPropertyValue_1<::UnityEngine::Vector3>*>* vector3PropertyValues; // 0x28
	::System::Collections::Generic::List_1<::ModifyMaterialProperty_ModifyPropertyValue_1<::UnityEngine::Vector2>*>* vector2PropertyValues; // 0x30
	::System::Collections::Generic::List_1<::ModifyMaterialProperty_ModifyPropertyValue_1<::UnityEngine::Vector4>*>* vector4PropertyValues; // 0x38
	::System::Collections::Generic::List_1<::ModifyMaterialProperty_ModifyPropertyValue_1<::System::Boolean>*>* boolPropertyValues; // 0x40

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MODIFYMATERIALPROPERTY__CTOR_OFFSET))(this);
	}
};

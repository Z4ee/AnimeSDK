#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class MB_TextureArrayReference;
namespace System { class String; }

#define MB_TEXARRAYFORPROPERTY__CTOR_OFFSET UNITYSDK_OFFSET(0x1DA6FC90)

inline static constexpr unsigned int MB_TexArrayForProperty_TypeDefinitionIndex = 90524;

class MB_TexArrayForProperty : public ::System::Object
{
public:
	::System::String* texPropertyName; // 0x10
	::Il2CppArray<::MB_TextureArrayReference*>* formats; // 0x18

	::System::Void _ctor(::System::String* name, ::Il2CppArray<::MB_TextureArrayReference*>* texRefs)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::Il2CppArray<::MB_TextureArrayReference*>*))((::PBYTE)hIl2Cpp + MB_TEXARRAYFORPROPERTY__CTOR_OFFSET))(this, name, texRefs);
	}
};

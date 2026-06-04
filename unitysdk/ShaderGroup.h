#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class ShaderPropertyData;
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Shader; }

#define SHADERGROUP__CTOR_OFFSET UNITYSDK_OFFSET(0xD07FE20)

inline static constexpr unsigned int ShaderGroup_TypeDefinitionIndex = 44841;

class ShaderGroup : public ::System::Object
{
public:
	::UnityEngine::Shader* shader; // 0x10
	::System::Collections::Generic::List_1<::ShaderPropertyData*>* properties; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SHADERGROUP__CTOR_OFFSET))(this);
	}
};

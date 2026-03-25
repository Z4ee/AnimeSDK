#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/ScriptableObject.h"

class ShaderGroup;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define SHADERPROPERTYPROFILE__CTOR_OFFSET UNITYSDK_OFFSET(0xABC65C0)

inline static constexpr unsigned int ShaderPropertyProfile_TypeDefinitionIndex = 38412;

class ShaderPropertyProfile : public ::UnityEngine::ScriptableObject
{
public:
	::System::Collections::Generic::List_1<::ShaderGroup*>* shaderGroups; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SHADERPROPERTYPROFILE__CTOR_OFFSET))(this);
	}
};

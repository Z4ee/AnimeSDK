#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/ScriptableObject.h"

namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Material; }

#define SHADERPERFVIPMATCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0xABC65A0)

inline static constexpr unsigned int ShaderPerfVIPMatConfig_TypeDefinitionIndex = 38342;

class ShaderPerfVIPMatConfig : public ::UnityEngine::ScriptableObject
{
public:
	::System::Collections::Generic::List_1<::UnityEngine::Material*>* MVPMaterials; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SHADERPERFVIPMATCONFIG__CTOR_OFFSET))(this);
	}
};

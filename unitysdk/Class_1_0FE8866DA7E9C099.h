#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace UnityEngine { class ComputeShader; }
namespace UnityEngine { class Material; }
namespace UnityEngine { class Texture; }
namespace UnityEngine::UI { class RuntimeAtlasManager; }

#define CLASS_1_0FE8866DA7E9C099_DISPOSE_OFFSET UNITYSDK_OFFSET(0x13FEDE20)
#define CLASS_1_0FE8866DA7E9C099_METHOD_1_81A66FB988DFA6AA_OFFSET UNITYSDK_OFFSET(0x13FEDC80)
#define CLASS_1_0FE8866DA7E9C099_METHOD_1_AA7E3074254D484A_OFFSET UNITYSDK_OFFSET(0x13FEDEB0)
#define CLASS_1_0FE8866DA7E9C099__CTOR_OFFSET UNITYSDK_OFFSET(0x13FEDC70)

inline static constexpr unsigned int Class_1_0FE8866DA7E9C099_TypeDefinitionIndex = 67873;

class Class_1_0FE8866DA7E9C099 : public ::System::Object
{
public:
	::UnityEngine::UI::RuntimeAtlasManager* Field_1_0; // 0x10
	::UnityEngine::Material* Field_1_1; // 0x18
	::UnityEngine::Texture* Field_1_2; // 0x20
	::UnityEngine::ComputeShader* Field_1_3; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0FE8866DA7E9C099__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_81A66FB988DFA6AA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0FE8866DA7E9C099_METHOD_1_81A66FB988DFA6AA_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0FE8866DA7E9C099_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_1_AA7E3074254D484A()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0FE8866DA7E9C099_METHOD_1_AA7E3074254D484A_OFFSET))(this);
	}
};

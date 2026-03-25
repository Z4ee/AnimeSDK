#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace UnityEngine { class ComputeShader; }
namespace UnityEngine { class Material; }
namespace UnityEngine { class Texture; }
namespace UnityEngine::UI { class RuntimeAtlasManager; }

#define CLASS_1_82C7DF4EFF9BB28B_DISPOSE_OFFSET UNITYSDK_OFFSET(0xA1BEA10)
#define CLASS_1_82C7DF4EFF9BB28B_METHOD_1_0860F812E446AE7C_OFFSET UNITYSDK_OFFSET(0xA1BE880)
#define CLASS_1_82C7DF4EFF9BB28B_METHOD_1_5F08B426ADF31FF5_OFFSET UNITYSDK_OFFSET(0xA1BEAB0)
#define CLASS_1_82C7DF4EFF9BB28B__CTOR_OFFSET UNITYSDK_OFFSET(0xA1BE870)

inline static constexpr unsigned int Class_1_82C7DF4EFF9BB28B_TypeDefinitionIndex = 59536;

class Class_1_82C7DF4EFF9BB28B : public ::System::Object
{
public:
	::UnityEngine::Texture* Field_1_3; // 0x10
	::UnityEngine::ComputeShader* Field_1_1; // 0x18
	::UnityEngine::UI::RuntimeAtlasManager* Field_1_0; // 0x20
	::UnityEngine::Material* Field_1_2; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_82C7DF4EFF9BB28B__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_0860F812E446AE7C()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_82C7DF4EFF9BB28B_METHOD_1_0860F812E446AE7C_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_82C7DF4EFF9BB28B_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_1_5F08B426ADF31FF5()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_82C7DF4EFF9BB28B_METHOD_1_5F08B426ADF31FF5_OFFSET))(this);
	}
};

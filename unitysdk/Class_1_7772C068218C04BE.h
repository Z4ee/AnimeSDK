#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/AssetPathInSRP.h"

namespace UnityEngine { class GameObject; }

#define CLASS_1_7772C068218C04BE_METHOD_1_083B1C412DB2CFB4_OFFSET UNITYSDK_OFFSET(0x12BD7B40)
#define CLASS_1_7772C068218C04BE_METHOD_1_45BDE1E108783E59_OFFSET UNITYSDK_OFFSET(0x12BD7BA0)
#define CLASS_1_7772C068218C04BE_METHOD_1_B7D9312F93BC725E_OFFSET UNITYSDK_OFFSET(0x12BD7D00)
#define CLASS_1_7772C068218C04BE_METHOD_1_F0EDA764F7AFCD75_OFFSET UNITYSDK_OFFSET(0x12BD7C50)
#define CLASS_1_7772C068218C04BE__CTOR_OFFSET UNITYSDK_OFFSET(0x12BD7B30)

inline static constexpr unsigned int Class_1_7772C068218C04BE_TypeDefinitionIndex = 77869;

class Class_1_7772C068218C04BE : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7772C068218C04BE__CTOR_OFFSET))(this);
	}

	::UnityEngine::GameObject* Method_1_083B1C412DB2CFB4(::UnityEngine::NAPRenderPipeline0::AssetPathInSRP a1)
	{
		return ((::UnityEngine::GameObject*(*)(::PVOID, ::UnityEngine::NAPRenderPipeline0::AssetPathInSRP))((::PBYTE)hIl2Cpp + CLASS_1_7772C068218C04BE_METHOD_1_083B1C412DB2CFB4_OFFSET))(this, a1);
	}

	static ::System::Void Method_1_F0EDA764F7AFCD75(::UnityEngine::NAPRenderPipeline0::AssetPathInSRP a1, ::UnityEngine::GameObject* a2)
	{
		return ((::System::Void(*)(::UnityEngine::NAPRenderPipeline0::AssetPathInSRP, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + CLASS_1_7772C068218C04BE_METHOD_1_F0EDA764F7AFCD75_OFFSET))(a1, a2);
	}

	static ::UnityEngine::GameObject* Method_1_45BDE1E108783E59(::UnityEngine::NAPRenderPipeline0::AssetPathInSRP a1)
	{
		return ((::UnityEngine::GameObject*(*)(::UnityEngine::NAPRenderPipeline0::AssetPathInSRP))((::PBYTE)hIl2Cpp + CLASS_1_7772C068218C04BE_METHOD_1_45BDE1E108783E59_OFFSET))(a1);
	}

	::System::Void Method_1_B7D9312F93BC725E(::UnityEngine::NAPRenderPipeline0::AssetPathInSRP a1, ::UnityEngine::GameObject* a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::NAPRenderPipeline0::AssetPathInSRP, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + CLASS_1_7772C068218C04BE_METHOD_1_B7D9312F93BC725E_OFFSET))(this, a1, a2);
	}
};

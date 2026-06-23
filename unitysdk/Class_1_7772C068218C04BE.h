#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/AssetPathInSRP.h"

namespace UnityEngine { class GameObject; }

#define CLASS_1_7772C068218C04BE_METHOD_1_083B1C412DB2CFB4_OFFSET UNITYSDK_OFFSET(0x168AB250)
#define CLASS_1_7772C068218C04BE_METHOD_1_45BDE1E108783E59_OFFSET UNITYSDK_OFFSET(0x168AB080)
#define CLASS_1_7772C068218C04BE_METHOD_1_B7D9312F93BC725E_OFFSET UNITYSDK_OFFSET(0x168AB130)
#define CLASS_1_7772C068218C04BE_METHOD_1_F0EDA764F7AFCD75_OFFSET UNITYSDK_OFFSET(0x168AB1A0)
#define CLASS_1_7772C068218C04BE__CTOR_OFFSET UNITYSDK_OFFSET(0x168AB070)

inline static constexpr unsigned int Class_1_7772C068218C04BE_TypeDefinitionIndex = 54937;

class Class_1_7772C068218C04BE : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7772C068218C04BE__CTOR_OFFSET))(this);
	}

	static ::UnityEngine::GameObject* Method_1_45BDE1E108783E59(::UnityEngine::NAPRenderPipeline0::AssetPathInSRP a1)
	{
		return ((::UnityEngine::GameObject*(*)(::UnityEngine::NAPRenderPipeline0::AssetPathInSRP))((::PBYTE)hIl2Cpp + CLASS_1_7772C068218C04BE_METHOD_1_45BDE1E108783E59_OFFSET))(a1);
	}

	::System::Void Method_1_B7D9312F93BC725E(::UnityEngine::NAPRenderPipeline0::AssetPathInSRP a1, ::UnityEngine::GameObject* a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::NAPRenderPipeline0::AssetPathInSRP, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + CLASS_1_7772C068218C04BE_METHOD_1_B7D9312F93BC725E_OFFSET))(this, a1, a2);
	}

	::UnityEngine::GameObject* Method_1_083B1C412DB2CFB4(::UnityEngine::NAPRenderPipeline0::AssetPathInSRP a1)
	{
		return ((::UnityEngine::GameObject*(*)(::PVOID, ::UnityEngine::NAPRenderPipeline0::AssetPathInSRP))((::PBYTE)hIl2Cpp + CLASS_1_7772C068218C04BE_METHOD_1_083B1C412DB2CFB4_OFFSET))(this, a1);
	}

	static ::System::Void Method_1_F0EDA764F7AFCD75(::UnityEngine::NAPRenderPipeline0::AssetPathInSRP a1, ::UnityEngine::GameObject* a2)
	{
		return ((::System::Void(*)(::UnityEngine::NAPRenderPipeline0::AssetPathInSRP, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + CLASS_1_7772C068218C04BE_METHOD_1_F0EDA764F7AFCD75_OFFSET))(a1, a2);
	}
};

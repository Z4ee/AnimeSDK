#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/INapLevel_CommonStateChangeEffect.h"
#include "unitysdk/UnityEngine/Vector2.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Material; }
namespace UnityEngine { class MaterialPropertyBlock; }
namespace UnityEngine { class Renderer; }

#define NAPLEVELSTATECHANGEUV_APPLYSTATE_OFFSET UNITYSDK_OFFSET(0x1CB0C4B0)
#define NAPLEVELSTATECHANGEUV_AWAKE_OFFSET UNITYSDK_OFFSET(0x1CB0C210)
#define NAPLEVELSTATECHANGEUV_CALCULATEQUADRANTOFFSET_OFFSET UNITYSDK_OFFSET(0x1CB0C920)
#define NAPLEVELSTATECHANGEUV_CONTAINSSTATEMATERIAL_OFFSET UNITYSDK_OFFSET(0x1CB0CA10)
#define NAPLEVELSTATECHANGEUV_ENSUREINITIALIZED_OFFSET UNITYSDK_OFFSET(0x1CB0C260)
#define NAPLEVELSTATECHANGEUV_ONSTATECHANGE_1_OFFSET UNITYSDK_OFFSET(0x1CB0CC00)
#define NAPLEVELSTATECHANGEUV_ONSTATECHANGE_OFFSET UNITYSDK_OFFSET(0x1CB0C450)
#define NAPLEVELSTATECHANGEUV__CCTOR_OFFSET UNITYSDK_OFFSET(0x1CB0CD50)
#define NAPLEVELSTATECHANGEUV__CTOR_OFFSET UNITYSDK_OFFSET(0x1CB0CC50)

inline static constexpr unsigned int NapLevelStateChangeUV_TypeDefinitionIndex = 27270;

class NapLevelStateChangeUV : public ::INapLevel_CommonStateChangeEffect
{
public:
	static ::System::Int32* StaticGet_BaseMapSTId()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(NapLevelStateChangeUV_TypeDefinitionIndex)->GetStaticField(0x7120);
	}
	::UnityEngine::Renderer* _targetRenderer; // 0x48
	::Il2CppArray<::UnityEngine::Material*>* _stateMaterials; // 0x50
	::UnityEngine::MaterialPropertyBlock* _propertyBlock; // 0x58
	::System::Collections::Generic::List_1<::UnityEngine::Material*>* _sharedMaterialsCache; // 0x60

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NAPLEVELSTATECHANGEUV__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NAPLEVELSTATECHANGEUV__CCTOR_OFFSET))();
	}

	::System::Void Awake()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NAPLEVELSTATECHANGEUV_AWAKE_OFFSET))(this);
	}

	::System::Void OnStateChange(::System::Int32 from, ::System::Int32 to)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + NAPLEVELSTATECHANGEUV_ONSTATECHANGE_OFFSET))(this, from, to);
	}

	::System::Void ApplyState(::System::Int32 state)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + NAPLEVELSTATECHANGEUV_APPLYSTATE_OFFSET))(this, state);
	}

	::System::Void EnsureInitialized()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NAPLEVELSTATECHANGEUV_ENSUREINITIALIZED_OFFSET))(this);
	}

	static ::UnityEngine::Vector2 CalculateQuadrantOffset(::System::Int32 state)
	{
		return ((::UnityEngine::Vector2(*)(::System::Int32))((::PBYTE)hIl2Cpp + NAPLEVELSTATECHANGEUV_CALCULATEQUADRANTOFFSET_OFFSET))(state);
	}

	::System::Boolean ContainsStateMaterial(::UnityEngine::Material* material)
	{
		return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Material*))((::PBYTE)hIl2Cpp + NAPLEVELSTATECHANGEUV_CONTAINSSTATEMATERIAL_OFFSET))(this, material);
	}

	::System::Void OnStateChange_1(::System::String* from, ::System::String* to)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + NAPLEVELSTATECHANGEUV_ONSTATECHANGE_1_OFFSET))(this, from, to);
	}
};

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector4.h"

namespace UnityEngine { class Material; }
namespace UnityEngine { class MaterialPropertyBlock; }

#define CLASS_1_6829E23328DB1268_SETPROPERTY_1_OFFSET UNITYSDK_OFFSET(0x8F768E0)
#define CLASS_1_6829E23328DB1268_SETPROPERTY_OFFSET UNITYSDK_OFFSET(0x8F76860)
#define CLASS_1_6829E23328DB1268__CTOR_OFFSET UNITYSDK_OFFSET(0x8F76970)

inline static constexpr unsigned int Class_1_6829E23328DB1268_TypeDefinitionIndex = 64363;

class Class_1_6829E23328DB1268 : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6829E23328DB1268__CTOR_OFFSET))(this);
	}

	::System::Void SetProperty(::UnityEngine::Material* a1, ::System::Int32 a2, ::Il2CppArray<::UnityEngine::Vector4>* a3)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Material*, ::System::Int32, ::Il2CppArray<::UnityEngine::Vector4>*))((::PBYTE)hIl2Cpp + CLASS_1_6829E23328DB1268_SETPROPERTY_OFFSET))(this, a1, a2, a3);
	}

	::System::Void SetProperty_1(::UnityEngine::MaterialPropertyBlock* a1, ::System::Int32 a2, ::Il2CppArray<::UnityEngine::Vector4>* a3)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::MaterialPropertyBlock*, ::System::Int32, ::Il2CppArray<::UnityEngine::Vector4>*))((::PBYTE)hIl2Cpp + CLASS_1_6829E23328DB1268_SETPROPERTY_1_OFFSET))(this, a1, a2, a3);
	}
};

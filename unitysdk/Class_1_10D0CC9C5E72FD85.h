#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector4.h"

namespace UnityEngine { class Material; }
namespace UnityEngine { class MaterialPropertyBlock; }

#define CLASS_1_10D0CC9C5E72FD85_SETPROPERTY_1_OFFSET UNITYSDK_OFFSET(0x10647820)
#define CLASS_1_10D0CC9C5E72FD85_SETPROPERTY_OFFSET UNITYSDK_OFFSET(0x10647790)
#define CLASS_1_10D0CC9C5E72FD85__CTOR_OFFSET UNITYSDK_OFFSET(0x106478B0)

inline static constexpr unsigned int Class_1_10D0CC9C5E72FD85_TypeDefinitionIndex = 57108;

class Class_1_10D0CC9C5E72FD85 : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_10D0CC9C5E72FD85__CTOR_OFFSET))(this);
	}

	::System::Void SetProperty(::UnityEngine::Material* a1, ::System::Int32 a2, ::UnityEngine::Vector4 a3)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Material*, ::System::Int32, ::UnityEngine::Vector4))((::PBYTE)hIl2Cpp + CLASS_1_10D0CC9C5E72FD85_SETPROPERTY_OFFSET))(this, a1, a2, a3);
	}

	::System::Void SetProperty_1(::UnityEngine::MaterialPropertyBlock* a1, ::System::Int32 a2, ::UnityEngine::Vector4 a3)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::MaterialPropertyBlock*, ::System::Int32, ::UnityEngine::Vector4))((::PBYTE)hIl2Cpp + CLASS_1_10D0CC9C5E72FD85_SETPROPERTY_1_OFFSET))(this, a1, a2, a3);
	}
};

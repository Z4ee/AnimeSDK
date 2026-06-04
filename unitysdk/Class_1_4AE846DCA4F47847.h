#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace UnityEngine { class Material; }
namespace UnityEngine { class MaterialPropertyBlock; }
namespace UnityEngine { class Texture; }

#define CLASS_1_4AE846DCA4F47847_SETPROPERTY_1_OFFSET UNITYSDK_OFFSET(0x139A4DD0)
#define CLASS_1_4AE846DCA4F47847_SETPROPERTY_OFFSET UNITYSDK_OFFSET(0x139A4D50)
#define CLASS_1_4AE846DCA4F47847__CTOR_OFFSET UNITYSDK_OFFSET(0x139A4E50)

inline static constexpr unsigned int Class_1_4AE846DCA4F47847_TypeDefinitionIndex = 65279;

class Class_1_4AE846DCA4F47847 : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4AE846DCA4F47847__CTOR_OFFSET))(this);
	}

	::System::Void SetProperty(::UnityEngine::Material* a1, ::System::Int32 a2, ::UnityEngine::Texture* a3)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Material*, ::System::Int32, ::UnityEngine::Texture*))((::PBYTE)hIl2Cpp + CLASS_1_4AE846DCA4F47847_SETPROPERTY_OFFSET))(this, a1, a2, a3);
	}

	::System::Void SetProperty_1(::UnityEngine::MaterialPropertyBlock* a1, ::System::Int32 a2, ::UnityEngine::Texture* a3)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::MaterialPropertyBlock*, ::System::Int32, ::UnityEngine::Texture*))((::PBYTE)hIl2Cpp + CLASS_1_4AE846DCA4F47847_SETPROPERTY_1_OFFSET))(this, a1, a2, a3);
	}
};

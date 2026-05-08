#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/ParticleSystemCullingMode.h"

namespace MoleMole { class MonoEffectPluginTransform; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Animation; }
namespace UnityEngine { class ParticleSystem; }

#define CLASS_1_1ECECFF61CDF060B_METHOD_1_AC0F8B2123B5D010_OFFSET UNITYSDK_OFFSET(0x119119B0)
#define CLASS_1_1ECECFF61CDF060B_METHOD_1_AECF8BEC293ED42A_OFFSET UNITYSDK_OFFSET(0x11911840)
#define CLASS_1_1ECECFF61CDF060B_METHOD_1_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x11911960)
#define CLASS_1_1ECECFF61CDF060B__CTOR_OFFSET UNITYSDK_OFFSET(0x11911830)

inline static constexpr unsigned int Class_1_1ECECFF61CDF060B_TypeDefinitionIndex = 62916;

class Class_1_1ECECFF61CDF060B : public ::System::Object
{
public:
	::UnityEngine::Animation* Field_1_2; // 0x10
	::System::Collections::Generic::List_1<::UnityEngine::ParticleSystemCullingMode>* Field_1_3; // 0x18
	::System::Collections::Generic::List_1<::UnityEngine::ParticleSystem*>* Field_1_0; // 0x20
	::MoleMole::MonoEffectPluginTransform* Field_1_1; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1ECECFF61CDF060B__CTOR_OFFSET))(this);
	}

	static ::Class_1_1ECECFF61CDF060B* Method_1_AECF8BEC293ED42A()
	{
		return ((::Class_1_1ECECFF61CDF060B*(*)())((::PBYTE)hIl2Cpp + CLASS_1_1ECECFF61CDF060B_METHOD_1_AECF8BEC293ED42A_OFFSET))();
	}

	::System::Void Method_1_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1ECECFF61CDF060B_METHOD_1_CA373AA1C7054598_OFFSET))(this);
	}

	static ::System::Void Method_1_AC0F8B2123B5D010(::Class_1_1ECECFF61CDF060B* a1)
	{
		return ((::System::Void(*)(::Class_1_1ECECFF61CDF060B*))((::PBYTE)hIl2Cpp + CLASS_1_1ECECFF61CDF060B_METHOD_1_AC0F8B2123B5D010_OFFSET))(a1);
	}
};

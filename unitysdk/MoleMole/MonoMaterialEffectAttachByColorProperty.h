#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/BaseMonoMaterialEffectAttach.h"
#include "unitysdk/UnityEngine/Color.h"

class Class_0_16E4307DCC419505_254;
namespace System { class String; }
namespace UnityEngine { class Material; }
namespace UnityEngine { class Renderer; }

#define MOLEMOLE_MONOMATERIALEFFECTATTACHBYCOLORPROPERTY_METHOD_6_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x11D4F2C0)
#define MOLEMOLE_MONOMATERIALEFFECTATTACHBYCOLORPROPERTY_METHOD_6_EB08A605622E1578_OFFSET UNITYSDK_OFFSET(0x11D4ED50)
#define MOLEMOLE_MONOMATERIALEFFECTATTACHBYCOLORPROPERTY_ONATTACH_OFFSET UNITYSDK_OFFSET(0x11D4ED00)
#define MOLEMOLE_MONOMATERIALEFFECTATTACHBYCOLORPROPERTY__CTOR_OFFSET UNITYSDK_OFFSET(0x11D4F300)

namespace MoleMole
{
	inline static constexpr unsigned int MonoMaterialEffectAttachByColorProperty_TypeDefinitionIndex = 58344;

	class MonoMaterialEffectAttachByColorProperty : public ::MoleMole::BaseMonoMaterialEffectAttach
	{
	public:
		::System::String* floatPropertyKey; // 0x20
		::System::Int32 Field_6_1; // 0x28
		::System::Int32 curveIx; // 0x2C
		::Class_0_16E4307DCC419505_254* Field_6_7; // 0x30
		::UnityEngine::Renderer* Field_6_6; // 0x38
		::System::Int32 _materialIndex; // 0x40
		::UnityEngine::Material* Field_6_4; // 0x48
		::System::String* MatName; // 0x50
		::UnityEngine::Color Field_6_10; // 0x58

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOMATERIALEFFECTATTACHBYCOLORPROPERTY__CTOR_OFFSET))(this);
		}

		::System::Void OnAttach(::Class_0_16E4307DCC419505_254* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_254*))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOMATERIALEFFECTATTACHBYCOLORPROPERTY_ONATTACH_OFFSET))(this, a1);
		}

		::System::Void Method_6_CA373AA1C7054598()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOMATERIALEFFECTATTACHBYCOLORPROPERTY_METHOD_6_CA373AA1C7054598_OFFSET))(this);
		}

		::System::Void Method_6_EB08A605622E1578(::Class_0_16E4307DCC419505_254* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_254*))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOMATERIALEFFECTATTACHBYCOLORPROPERTY_METHOD_6_EB08A605622E1578_OFFSET))(this, a1);
		}
	};
}

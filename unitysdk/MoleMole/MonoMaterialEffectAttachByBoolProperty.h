#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/BaseMonoMaterialEffectAttach.h"

class Class_0_16E4307DCC419505_254;
namespace System { class String; }
namespace UnityEngine { class Material; }
namespace UnityEngine { class Renderer; }

#define MOLEMOLE_MONOMATERIALEFFECTATTACHBYBOOLPROPERTY_METHOD_6_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x13851E20)
#define MOLEMOLE_MONOMATERIALEFFECTATTACHBYBOOLPROPERTY_METHOD_6_DFB814365CC3427C_OFFSET UNITYSDK_OFFSET(0x13851880)
#define MOLEMOLE_MONOMATERIALEFFECTATTACHBYBOOLPROPERTY_ONATTACH_OFFSET UNITYSDK_OFFSET(0x13851830)
#define MOLEMOLE_MONOMATERIALEFFECTATTACHBYBOOLPROPERTY__CTOR_OFFSET UNITYSDK_OFFSET(0x13851E60)

namespace MoleMole
{
	inline static constexpr unsigned int MonoMaterialEffectAttachByBoolProperty_TypeDefinitionIndex = 46892;

	class MonoMaterialEffectAttachByBoolProperty : public ::MoleMole::BaseMonoMaterialEffectAttach
	{
	public:
		// static const ::System::Single Field_6_13; // 0x0
		// static const ::System::Single Field_6_12; // 0x0
		::System::String* floatPropertyKey; // 0x20
		::System::Int32 Field_6_7; // 0x28
		::System::Int32 curveIx; // 0x2C
		::Class_0_16E4307DCC419505_254* Field_6_5; // 0x30
		::UnityEngine::Renderer* Field_6_4; // 0x38
		::System::Int32 _materialIndex; // 0x40
		::System::String* Keyword; // 0x48
		::UnityEngine::Material* Field_6_9; // 0x50
		::System::String* MatName; // 0x58
		::System::Boolean Field_6_15; // 0x60
		::System::Boolean Field_6_14; // 0x61

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOMATERIALEFFECTATTACHBYBOOLPROPERTY__CTOR_OFFSET))(this);
		}

		::System::Void OnAttach(::Class_0_16E4307DCC419505_254* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_254*))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOMATERIALEFFECTATTACHBYBOOLPROPERTY_ONATTACH_OFFSET))(this, a1);
		}

		::System::Void Method_6_CA373AA1C7054598()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOMATERIALEFFECTATTACHBYBOOLPROPERTY_METHOD_6_CA373AA1C7054598_OFFSET))(this);
		}

		::System::Void Method_6_DFB814365CC3427C(::Class_0_16E4307DCC419505_254* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_254*))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOMATERIALEFFECTATTACHBYBOOLPROPERTY_METHOD_6_DFB814365CC3427C_OFFSET))(this, a1);
		}
	};
}

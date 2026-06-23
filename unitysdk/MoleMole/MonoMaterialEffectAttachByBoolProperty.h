#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/BaseMonoMaterialEffectAttach.h"

class Class_0_16E4307DCC419505_389;
namespace System { class String; }
namespace UnityEngine { class Material; }
namespace UnityEngine { class Renderer; }

#define MOLEMOLE_MONOMATERIALEFFECTATTACHBYBOOLPROPERTY_METHOD_6_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x12BD2E70)
#define MOLEMOLE_MONOMATERIALEFFECTATTACHBYBOOLPROPERTY_METHOD_6_DFB814365CC3427C_OFFSET UNITYSDK_OFFSET(0x12BD28B0)
#define MOLEMOLE_MONOMATERIALEFFECTATTACHBYBOOLPROPERTY_ONATTACH_OFFSET UNITYSDK_OFFSET(0x12BD2860)
#define MOLEMOLE_MONOMATERIALEFFECTATTACHBYBOOLPROPERTY__CTOR_OFFSET UNITYSDK_OFFSET(0x12BD2EB0)

namespace MoleMole
{
	inline static constexpr unsigned int MonoMaterialEffectAttachByBoolProperty_TypeDefinitionIndex = 80917;

	class MonoMaterialEffectAttachByBoolProperty : public ::MoleMole::BaseMonoMaterialEffectAttach
	{
	public:
		// static const ::System::Single Field_6_11; // 0x0
		// static const ::System::Single Field_6_12; // 0x0
		::System::String* floatPropertyKey; // 0x20
		::System::Int32 Field_6_1; // 0x28
		::System::Int32 curveIx; // 0x2C
		::Class_0_16E4307DCC419505_389* Field_6_3; // 0x30
		::UnityEngine::Renderer* Field_6_4; // 0x38
		::System::Int32 _materialIndex; // 0x40
		::System::String* Keyword; // 0x48
		::UnityEngine::Material* Field_6_7; // 0x50
		::System::String* MatName; // 0x58
		::System::Boolean Field_6_9; // 0x60
		::System::Boolean Field_6_10; // 0x61

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOMATERIALEFFECTATTACHBYBOOLPROPERTY__CTOR_OFFSET))(this);
		}

		::System::Void OnAttach(::Class_0_16E4307DCC419505_389* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_389*))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOMATERIALEFFECTATTACHBYBOOLPROPERTY_ONATTACH_OFFSET))(this, a1);
		}

		::System::Void Method_6_CA373AA1C7054598()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOMATERIALEFFECTATTACHBYBOOLPROPERTY_METHOD_6_CA373AA1C7054598_OFFSET))(this);
		}

		::System::Void Method_6_DFB814365CC3427C(::Class_0_16E4307DCC419505_389* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_389*))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOMATERIALEFFECTATTACHBYBOOLPROPERTY_METHOD_6_DFB814365CC3427C_OFFSET))(this, a1);
		}
	};
}

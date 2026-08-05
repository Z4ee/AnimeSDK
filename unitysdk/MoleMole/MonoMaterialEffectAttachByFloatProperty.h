#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/BaseMonoMaterialEffectAttach.h"

class Class_0_16E4307DCC419505_254;
namespace System { class String; }
namespace UnityEngine { class Material; }
namespace UnityEngine { class Renderer; }

#define MOLEMOLE_MONOMATERIALEFFECTATTACHBYFLOATPROPERTY_METHOD_6_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x18081A10)
#define MOLEMOLE_MONOMATERIALEFFECTATTACHBYFLOATPROPERTY_METHOD_6_EB08A605622E1578_OFFSET UNITYSDK_OFFSET(0x180814C0)
#define MOLEMOLE_MONOMATERIALEFFECTATTACHBYFLOATPROPERTY_ONATTACH_OFFSET UNITYSDK_OFFSET(0x18081470)
#define MOLEMOLE_MONOMATERIALEFFECTATTACHBYFLOATPROPERTY__CTOR_OFFSET UNITYSDK_OFFSET(0x18081A50)

namespace MoleMole
{
	inline static constexpr unsigned int MonoMaterialEffectAttachByFloatProperty_TypeDefinitionIndex = 68346;

	class MonoMaterialEffectAttachByFloatProperty : public ::MoleMole::BaseMonoMaterialEffectAttach
	{
	public:
		::System::String* floatPropertyKey; // 0x20
		::System::Int32 Field_6_2; // 0x28
		::System::Int32 curveIx; // 0x2C
		::Class_0_16E4307DCC419505_254* Field_6_0; // 0x30
		::UnityEngine::Renderer* Field_6_7; // 0x38
		::System::Int32 _materialIndex; // 0x40
		::UnityEngine::Material* Field_6_5; // 0x48
		::System::String* MatName; // 0x50
		::System::Single Field_6_11; // 0x58
		::System::Single Field_6_10; // 0x5C
		::System::Single Factor; // 0x60
		::System::Boolean UseClamp; // 0x64
		::System::Single Min; // 0x68
		::System::Single Max; // 0x6C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOMATERIALEFFECTATTACHBYFLOATPROPERTY__CTOR_OFFSET))(this);
		}

		::System::Void OnAttach(::Class_0_16E4307DCC419505_254* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_254*))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOMATERIALEFFECTATTACHBYFLOATPROPERTY_ONATTACH_OFFSET))(this, a1);
		}

		::System::Void Method_6_CA373AA1C7054598()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOMATERIALEFFECTATTACHBYFLOATPROPERTY_METHOD_6_CA373AA1C7054598_OFFSET))(this);
		}

		::System::Void Method_6_EB08A605622E1578(::Class_0_16E4307DCC419505_254* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_254*))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOMATERIALEFFECTATTACHBYFLOATPROPERTY_METHOD_6_EB08A605622E1578_OFFSET))(this, a1);
		}
	};
}

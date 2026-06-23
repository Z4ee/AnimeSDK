#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace FluffyUnderware::Curvy::Generator { class SamplePointsMaterialGroup; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define FLUFFYUNDERWARE_CURVY_GENERATOR_MODULES_MODIFIERMIXSHAPES___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1E1D1A70)
#define FLUFFYUNDERWARE_CURVY_GENERATOR_MODULES_MODIFIERMIXSHAPES___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1E1D1AB0)
#define FLUFFYUNDERWARE_CURVY_GENERATOR_MODULES_MODIFIERMIXSHAPES___C__INTERPOLATESHAPE_B__15_0_OFFSET UNITYSDK_OFFSET(0x1E1D1AC0)

namespace FluffyUnderware::Curvy::Generator::Modules
{
	inline static constexpr unsigned int ModifierMixShapes___c_TypeDefinitionIndex = 38981;

	class ModifierMixShapes___c : public ::System::Object
	{
	public:
		static ::System::Func_2<::FluffyUnderware::Curvy::Generator::SamplePointsMaterialGroup*, ::FluffyUnderware::Curvy::Generator::SamplePointsMaterialGroup*>** StaticGet___9__15_0()
		{
			return (::System::Func_2<::FluffyUnderware::Curvy::Generator::SamplePointsMaterialGroup*, ::FluffyUnderware::Curvy::Generator::SamplePointsMaterialGroup*>**)Il2CppClass::FromTypeDefinitionIndex(ModifierMixShapes___c_TypeDefinitionIndex)->GetStaticField(0x295A0);
		}
		static ::FluffyUnderware::Curvy::Generator::Modules::ModifierMixShapes___c** StaticGet___9()
		{
			return (::FluffyUnderware::Curvy::Generator::Modules::ModifierMixShapes___c**)Il2CppClass::FromTypeDefinitionIndex(ModifierMixShapes___c_TypeDefinitionIndex)->GetStaticField(0x295A8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_MODULES_MODIFIERMIXSHAPES___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_MODULES_MODIFIERMIXSHAPES___C__CTOR_OFFSET))(this);
		}

		::FluffyUnderware::Curvy::Generator::SamplePointsMaterialGroup* _InterpolateShape_b__15_0(::FluffyUnderware::Curvy::Generator::SamplePointsMaterialGroup* g)
		{
			return ((::FluffyUnderware::Curvy::Generator::SamplePointsMaterialGroup*(*)(::PVOID, ::FluffyUnderware::Curvy::Generator::SamplePointsMaterialGroup*))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_MODULES_MODIFIERMIXSHAPES___C__INTERPOLATESHAPE_B__15_0_OFFSET))(this, g);
		}
	};
}

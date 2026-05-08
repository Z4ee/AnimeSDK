#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace FluffyUnderware::Curvy::Generator { class SamplePointsMaterialGroup; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define FLUFFYUNDERWARE_CURVY_GENERATOR_CGSHAPE___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1C0BC230)
#define FLUFFYUNDERWARE_CURVY_GENERATOR_CGSHAPE___C__COPY_B__53_0_OFFSET UNITYSDK_OFFSET(0x1C0BC280)
#define FLUFFYUNDERWARE_CURVY_GENERATOR_CGSHAPE___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1C0BC270)

namespace FluffyUnderware::Curvy::Generator
{
	inline static constexpr unsigned int CGShape___c_TypeDefinitionIndex = 37338;

	class CGShape___c : public ::System::Object
	{
	public:
		static ::FluffyUnderware::Curvy::Generator::CGShape___c** StaticGet___9()
		{
			return (::FluffyUnderware::Curvy::Generator::CGShape___c**)Il2CppClass::FromTypeDefinitionIndex(CGShape___c_TypeDefinitionIndex)->GetStaticField(0x27850);
		}
		static ::System::Func_2<::FluffyUnderware::Curvy::Generator::SamplePointsMaterialGroup*, ::FluffyUnderware::Curvy::Generator::SamplePointsMaterialGroup*>** StaticGet___9__53_0()
		{
			return (::System::Func_2<::FluffyUnderware::Curvy::Generator::SamplePointsMaterialGroup*, ::FluffyUnderware::Curvy::Generator::SamplePointsMaterialGroup*>**)Il2CppClass::FromTypeDefinitionIndex(CGShape___c_TypeDefinitionIndex)->GetStaticField(0x27858);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_CGSHAPE___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_CGSHAPE___C__CTOR_OFFSET))(this);
		}

		::FluffyUnderware::Curvy::Generator::SamplePointsMaterialGroup* _Copy_b__53_0(::FluffyUnderware::Curvy::Generator::SamplePointsMaterialGroup* g)
		{
			return ((::FluffyUnderware::Curvy::Generator::SamplePointsMaterialGroup*(*)(::PVOID, ::FluffyUnderware::Curvy::Generator::SamplePointsMaterialGroup*))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_CGSHAPE___C__COPY_B__53_0_OFFSET))(this, g);
		}
	};
}

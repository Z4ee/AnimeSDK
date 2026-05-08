#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace FluffyUnderware::Curvy::Generator { class CGShape; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System { template <typename T> class Action_1; }

#define FLUFFYUNDERWARE_CURVY_GENERATOR_MODULES_BUILDSHAPEEXTRUSION___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1B7C9670)
#define FLUFFYUNDERWARE_CURVY_GENERATOR_MODULES_BUILDSHAPEEXTRUSION___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1B7C96B0)
#define FLUFFYUNDERWARE_CURVY_GENERATOR_MODULES_BUILDSHAPEEXTRUSION___C__REFRESH_B__131_0_OFFSET UNITYSDK_OFFSET(0x1B7C96D0)
#define FLUFFYUNDERWARE_CURVY_GENERATOR_MODULES_BUILDSHAPEEXTRUSION___C__REFRESH_B__131_1_OFFSET UNITYSDK_OFFSET(0x1B7C96C0)

namespace FluffyUnderware::Curvy::Generator::Modules
{
	inline static constexpr unsigned int BuildShapeExtrusion___c_TypeDefinitionIndex = 37391;

	class BuildShapeExtrusion___c : public ::System::Object
	{
	public:
		static ::System::Func_2<::FluffyUnderware::Curvy::Generator::CGShape*, ::System::Int32>** StaticGet___9__131_1()
		{
			return (::System::Func_2<::FluffyUnderware::Curvy::Generator::CGShape*, ::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(BuildShapeExtrusion___c_TypeDefinitionIndex)->GetStaticField(0x277F0);
		}
		static ::FluffyUnderware::Curvy::Generator::Modules::BuildShapeExtrusion___c** StaticGet___9()
		{
			return (::FluffyUnderware::Curvy::Generator::Modules::BuildShapeExtrusion___c**)Il2CppClass::FromTypeDefinitionIndex(BuildShapeExtrusion___c_TypeDefinitionIndex)->GetStaticField(0x277F8);
		}
		static ::System::Action_1<::FluffyUnderware::Curvy::Generator::CGShape*>** StaticGet___9__131_0()
		{
			return (::System::Action_1<::FluffyUnderware::Curvy::Generator::CGShape*>**)Il2CppClass::FromTypeDefinitionIndex(BuildShapeExtrusion___c_TypeDefinitionIndex)->GetStaticField(0x27800);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_MODULES_BUILDSHAPEEXTRUSION___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_MODULES_BUILDSHAPEEXTRUSION___C__CTOR_OFFSET))(this);
		}

		::System::Int32 _Refresh_b__131_1(::FluffyUnderware::Curvy::Generator::CGShape* c)
		{
			return ((::System::Int32(*)(::PVOID, ::FluffyUnderware::Curvy::Generator::CGShape*))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_MODULES_BUILDSHAPEEXTRUSION___C__REFRESH_B__131_1_OFFSET))(this, c);
		}

		::System::Void _Refresh_b__131_0(::FluffyUnderware::Curvy::Generator::CGShape* c)
		{
			return ((::System::Void(*)(::PVOID, ::FluffyUnderware::Curvy::Generator::CGShape*))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_MODULES_BUILDSHAPEEXTRUSION___C__REFRESH_B__131_0_OFFSET))(this, c);
		}
	};
}

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace FluffyUnderware::Curvy::Generator { class CGVolume; }
namespace System { template <typename T> class Action_1; }

#define FLUFFYUNDERWARE_CURVY_GENERATOR_MODULES_BUILDVOLUMECAPS___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1D617380)
#define FLUFFYUNDERWARE_CURVY_GENERATOR_MODULES_BUILDVOLUMECAPS___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1D6173C0)
#define FLUFFYUNDERWARE_CURVY_GENERATOR_MODULES_BUILDVOLUMECAPS___C__REFRESH_B__43_0_OFFSET UNITYSDK_OFFSET(0x1D6173D0)

namespace FluffyUnderware::Curvy::Generator::Modules
{
	inline static constexpr unsigned int BuildVolumeCaps___c_TypeDefinitionIndex = 38972;

	class BuildVolumeCaps___c : public ::System::Object
	{
	public:
		static ::FluffyUnderware::Curvy::Generator::Modules::BuildVolumeCaps___c** StaticGet___9()
		{
			return (::FluffyUnderware::Curvy::Generator::Modules::BuildVolumeCaps___c**)Il2CppClass::FromTypeDefinitionIndex(BuildVolumeCaps___c_TypeDefinitionIndex)->GetStaticField(0x29330);
		}
		static ::System::Action_1<::FluffyUnderware::Curvy::Generator::CGVolume*>** StaticGet___9__43_0()
		{
			return (::System::Action_1<::FluffyUnderware::Curvy::Generator::CGVolume*>**)Il2CppClass::FromTypeDefinitionIndex(BuildVolumeCaps___c_TypeDefinitionIndex)->GetStaticField(0x29338);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_MODULES_BUILDVOLUMECAPS___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_MODULES_BUILDVOLUMECAPS___C__CTOR_OFFSET))(this);
		}

		::System::Void _Refresh_b__43_0(::FluffyUnderware::Curvy::Generator::CGVolume* h)
		{
			return ((::System::Void(*)(::PVOID, ::FluffyUnderware::Curvy::Generator::CGVolume*))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_MODULES_BUILDVOLUMECAPS___C__REFRESH_B__43_0_OFFSET))(this, h);
		}
	};
}

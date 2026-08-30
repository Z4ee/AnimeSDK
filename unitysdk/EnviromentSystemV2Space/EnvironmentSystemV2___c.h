#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }

#define ENVIROMENTSYSTEMV2SPACE_ENVIRONMENTSYSTEMV2___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x106E7650)
#define ENVIROMENTSYSTEMV2SPACE_ENVIRONMENTSYSTEMV2___C__CTOR_OFFSET UNITYSDK_OFFSET(0x106E7690)
#define ENVIROMENTSYSTEMV2SPACE_ENVIRONMENTSYSTEMV2___C__SETACTIVEPROFILEAFTERASYNCRESLOADING_B__56_1_OFFSET UNITYSDK_OFFSET(0x106E76A0)

namespace EnviromentSystemV2Space
{
	inline static constexpr unsigned int EnvironmentSystemV2___c_TypeDefinitionIndex = 49896;

	class EnvironmentSystemV2___c : public ::System::Object
	{
	public:
		static ::System::Action** StaticGet___9__56_1()
		{
			return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(EnvironmentSystemV2___c_TypeDefinitionIndex)->GetStaticField(0x64F90);
		}
		static ::EnviromentSystemV2Space::EnvironmentSystemV2___c** StaticGet___9()
		{
			return (::EnviromentSystemV2Space::EnvironmentSystemV2___c**)Il2CppClass::FromTypeDefinitionIndex(EnvironmentSystemV2___c_TypeDefinitionIndex)->GetStaticField(0x64F98);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEMV2SPACE_ENVIRONMENTSYSTEMV2___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEMV2SPACE_ENVIRONMENTSYSTEMV2___C__CTOR_OFFSET))(this);
		}

		::System::Void _SetActiveProfileAfterAsyncResLoading_b__56_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEMV2SPACE_ENVIRONMENTSYSTEMV2___C__SETACTIVEPROFILEAFTERASYNCRESLOADING_B__56_1_OFFSET))(this);
		}
	};
}

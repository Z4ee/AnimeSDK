#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

#define MOLEMOLE_UTILS_DEFAULTCONSTRUCT__CCTOR_OFFSET UNITYSDK_OFFSET(0x11E56720)

namespace MoleMole::Utils
{
	inline static constexpr unsigned int DefaultConstruct_TypeDefinitionIndex = 59508;

	struct alignas(1) DefaultConstruct
	{
		static ::MoleMole::Utils::DefaultConstruct* StaticGet_Ins()
		{
			return (::MoleMole::Utils::DefaultConstruct*)Il2CppClass::FromTypeDefinitionIndex(DefaultConstruct_TypeDefinitionIndex)->GetStaticField(0x10DC0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UTILS_DEFAULTCONSTRUCT__CCTOR_OFFSET))();
		}
	};
}

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Nap/NapECS/ComponentMask.h"
#include "unitysdk/System/Object.h"

#define NAP_NAPECS_COMPONENTACCESSHELPER_TOCOMPONENTMASK_OFFSET UNITYSDK_OFFSET(0x1B2E0B30)

namespace Nap::NapECS
{
	inline static constexpr unsigned int ComponentAccessHelper_TypeDefinitionIndex = 37361;

	class ComponentAccessHelper : public ::System::Object
	{
	public:
		static ::Nap::NapECS::ComponentMask ToComponentMask(::Il2CppArray<::System::Int32>* componentIds)
		{
			return ((::Nap::NapECS::ComponentMask(*)(::Il2CppArray<::System::Int32>*))((::PBYTE)hIl2Cpp + NAP_NAPECS_COMPONENTACCESSHELPER_TOCOMPONENTMASK_OFFSET))(componentIds);
		}
	};
}

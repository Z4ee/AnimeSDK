#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sofa/Core/ObservableObject.h"

#define RPG_CLIENT_CHIMERADUEL_CHIMERADUELBATTLEMASTERMODEL__CTOR_OFFSET UNITYSDK_OFFSET(0xB674C30)

namespace RPG::Client::ChimeraDuel
{
	inline static constexpr unsigned int ChimeraDuelBattleMasterModel_TypeDefinitionIndex = 73905;

	class ChimeraDuelBattleMasterModel : public ::Sofa::Core::ObservableObject
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUEL_CHIMERADUELBATTLEMASTERMODEL__CTOR_OFFSET))(this);
		}
	};
}

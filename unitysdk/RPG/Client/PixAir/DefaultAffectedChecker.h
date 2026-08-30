#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PixAirEquipTag.h"
#include "unitysdk/System/Object.h"

#define RPG_CLIENT_PIXAIR_DEFAULTAFFECTEDCHECKER_CHECK_OFFSET UNITYSDK_OFFSET(0xDAE5290)
#define RPG_CLIENT_PIXAIR_DEFAULTAFFECTEDCHECKER__CTOR_OFFSET UNITYSDK_OFFSET(0xDAE5110)

namespace RPG::Client::PixAir
{
	inline static constexpr unsigned int DefaultAffectedChecker_TypeDefinitionIndex = 78827;

	class DefaultAffectedChecker : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_DEFAULTAFFECTEDCHECKER__CTOR_OFFSET))(this);
		}

		::System::Boolean Check(::Il2CppArray<::RPG::GameCore::PixAirEquipTag>* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::Il2CppArray<::RPG::GameCore::PixAirEquipTag>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_DEFAULTAFFECTEDCHECKER_CHECK_OFFSET))(this, a1);
		}
	};
}

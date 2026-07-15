#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PixAirEquipTag.h"
#include "unitysdk/System/Object.h"

#define RPG_CLIENT_PIXAIR_TAGAFFECTEDCHECKER_CHECK_OFFSET UNITYSDK_OFFSET(0x1A0E2790)
#define RPG_CLIENT_PIXAIR_TAGAFFECTEDCHECKER__CTOR_OFFSET UNITYSDK_OFFSET(0x1A0E2760)

namespace RPG::Client::PixAir
{
	inline static constexpr unsigned int TagAffectedChecker_TypeDefinitionIndex = 75281;

	class TagAffectedChecker : public ::System::Object
	{
	public:
		::Il2CppArray<::RPG::GameCore::PixAirEquipTag>* _tags; // 0x10

		::System::Void _ctor(::Il2CppArray<::RPG::GameCore::PixAirEquipTag>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::RPG::GameCore::PixAirEquipTag>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_TAGAFFECTEDCHECKER__CTOR_OFFSET))(this, a1);
		}

		::System::Boolean Check(::Il2CppArray<::RPG::GameCore::PixAirEquipTag>* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::Il2CppArray<::RPG::GameCore::PixAirEquipTag>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_TAGAFFECTEDCHECKER_CHECK_OFFSET))(this, a1);
		}
	};
}

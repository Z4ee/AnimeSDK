#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_CLOSEROGUENOUSPAGES_METHOD_3_531D4BB45A931610_OFFSET UNITYSDK_OFFSET(0x1CFEC010)
#define RPG_GAMECORE_CLOSEROGUENOUSPAGES_METHOD_3_A5C975627C9B8CCD_OFFSET UNITYSDK_OFFSET(0x1CFEBF40)
#define RPG_GAMECORE_CLOSEROGUENOUSPAGES__CTOR_OFFSET UNITYSDK_OFFSET(0x1CFEC000)

namespace RPG::GameCore
{
	inline static constexpr unsigned int CloseRogueNousPages_TypeDefinitionIndex = 24007;

	class CloseRogueNousPages : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CLOSEROGUENOUSPAGES__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_A5C975627C9B8CCD(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::CloseRogueNousPages*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::CloseRogueNousPages*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CLOSEROGUENOUSPAGES_METHOD_3_A5C975627C9B8CCD_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_531D4BB45A931610(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::CloseRogueNousPages* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::CloseRogueNousPages*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CLOSEROGUENOUSPAGES_METHOD_3_531D4BB45A931610_OFFSET))(a1, a2);
		}
	};
}

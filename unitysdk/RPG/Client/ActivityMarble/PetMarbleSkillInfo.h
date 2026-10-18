#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_2FEB0D469BFEA77C;
namespace System { class String; }

#define RPG_CLIENT_ACTIVITYMARBLE_PETMARBLESKILLINFO_GET_DESC_OFFSET UNITYSDK_OFFSET(0xC550DE0)
#define RPG_CLIENT_ACTIVITYMARBLE_PETMARBLESKILLINFO_GET_ID_OFFSET UNITYSDK_OFFSET(0xC550DC0)
#define RPG_CLIENT_ACTIVITYMARBLE_PETMARBLESKILLINFO_SET_ID_OFFSET UNITYSDK_OFFSET(0xC550DD0)
#define RPG_CLIENT_ACTIVITYMARBLE_PETMARBLESKILLINFO__CTOR_OFFSET UNITYSDK_OFFSET(0xC550D80)

namespace RPG::Client::ActivityMarble
{
	inline static constexpr unsigned int PetMarbleSkillInfo_TypeDefinitionIndex = 76018;

	class PetMarbleSkillInfo : public ::System::Object
	{
	public:
		::Class_1_2FEB0D469BFEA77C* _Row; // 0x10
		::System::UInt32 _ID_k__BackingField; // 0x18

		::System::Void _ctor(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMARBLE_PETMARBLESKILLINFO__CTOR_OFFSET))(this, a1);
		}

		::System::UInt32 get_ID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMARBLE_PETMARBLESKILLINFO_GET_ID_OFFSET))(this);
		}

		::System::Void set_ID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMARBLE_PETMARBLESKILLINFO_SET_ID_OFFSET))(this, a1);
		}

		::System::String* get_Desc()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMARBLE_PETMARBLESKILLINFO_GET_DESC_OFFSET))(this);
		}
	};
}

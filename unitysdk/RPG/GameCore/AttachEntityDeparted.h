#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_ATTACHENTITYDEPARTED_METHOD_3_5ACE9C44B10B4FC0_OFFSET UNITYSDK_OFFSET(0x1C57A5A0)
#define RPG_GAMECORE_ATTACHENTITYDEPARTED_METHOD_3_7612907818328953_OFFSET UNITYSDK_OFFSET(0x1C57A5E0)
#define RPG_GAMECORE_ATTACHENTITYDEPARTED__CTOR_OFFSET UNITYSDK_OFFSET(0x1C57A5D0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AttachEntityDeparted_TypeDefinitionIndex = 23340;

	class AttachEntityDeparted : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::String* ConfigGroupName; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ATTACHENTITYDEPARTED__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_5ACE9C44B10B4FC0(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AttachEntityDeparted*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AttachEntityDeparted*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ATTACHENTITYDEPARTED_METHOD_3_5ACE9C44B10B4FC0_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_7612907818328953(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AttachEntityDeparted* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AttachEntityDeparted*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ATTACHENTITYDEPARTED_METHOD_3_7612907818328953_OFFSET))(a1, a2);
		}
	};
}

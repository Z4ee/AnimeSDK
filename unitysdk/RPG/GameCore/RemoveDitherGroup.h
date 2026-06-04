#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_REMOVEDITHERGROUP_METHOD_3_612B08CA531B33A1_OFFSET UNITYSDK_OFFSET(0x19AC7D30)
#define RPG_GAMECORE_REMOVEDITHERGROUP_METHOD_3_B95D03ACB8740B5D_OFFSET UNITYSDK_OFFSET(0x19AC7DB0)
#define RPG_GAMECORE_REMOVEDITHERGROUP__CTOR_OFFSET UNITYSDK_OFFSET(0x19AC7D80)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RemoveDitherGroup_TypeDefinitionIndex = 21662;

	class RemoveDitherGroup : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::String* GroupName; // 0x18
		::System::Single FadeDuration; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_REMOVEDITHERGROUP__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_612B08CA531B33A1(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RemoveDitherGroup*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RemoveDitherGroup*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_REMOVEDITHERGROUP_METHOD_3_612B08CA531B33A1_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_B95D03ACB8740B5D(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RemoveDitherGroup* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RemoveDitherGroup*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_REMOVEDITHERGROUP_METHOD_3_B95D03ACB8740B5D_OFFSET))(a1, a2);
		}
	};
}

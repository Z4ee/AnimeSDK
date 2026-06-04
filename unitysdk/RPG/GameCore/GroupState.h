#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_GROUPSTATE_METHOD_2_9792F54AA0062613_OFFSET UNITYSDK_OFFSET(0x19814DB0)
#define RPG_GAMECORE_GROUPSTATE__CTOR_OFFSET UNITYSDK_OFFSET(0x19814EF0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GroupState_TypeDefinitionIndex = 16473;

	class GroupState : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::String* Comment; // 0x10
		::System::UInt32 SrcState; // 0x18
		::System::UInt32 DstState; // 0x1C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GROUPSTATE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_9792F54AA0062613(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::GroupState*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::GroupState*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GROUPSTATE_METHOD_2_9792F54AA0062613_OFFSET))(a1, a2);
		}
	};
}

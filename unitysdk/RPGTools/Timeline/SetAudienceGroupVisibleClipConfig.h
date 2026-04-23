#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class AudienceGroupMemberInfo; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPGTOOLS_TIMELINE_SETAUDIENCEGROUPVISIBLECLIPCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0xB911520)

namespace RPGTools::Timeline
{
	inline static constexpr unsigned int SetAudienceGroupVisibleClipConfig_TypeDefinitionIndex = 45014;

	class SetAudienceGroupVisibleClipConfig : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::RPG::GameCore::AudienceGroupMemberInfo*>* GroupMemberList; // 0x10
		::System::Boolean Visible; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_SETAUDIENCEGROUPVISIBLECLIPCONFIG__CTOR_OFFSET))(this);
		}
	};
}

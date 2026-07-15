#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/MVector2.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class AudienceGroupMemberInfo; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPGTOOLS_TIMELINE_MODIFYAUDIENCEGROUPANIMTYPECLIPCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1998BC00)

namespace RPGTools::Timeline
{
	inline static constexpr unsigned int ModifyAudienceGroupAnimTypeClipConfig_TypeDefinitionIndex = 46417;

	class ModifyAudienceGroupAnimTypeClipConfig : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::RPG::GameCore::AudienceGroupMemberInfo*>* GroupMemberList; // 0x10
		::System::String* AnimTypeName; // 0x18
		::RPG::MVector2 WaitTimeRange; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_MODIFYAUDIENCEGROUPANIMTYPECLIPCONFIG__CTOR_OFFSET))(this);
		}
	};
}

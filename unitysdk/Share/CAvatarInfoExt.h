#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define SHARE_CAVATARINFOEXT_GETRANKBYLEVEL_OFFSET UNITYSDK_OFFSET(0x1DAA4A50)

namespace Share
{
	inline static constexpr unsigned int CAvatarInfoExt_TypeDefinitionIndex = 16347;

	class CAvatarInfoExt : public ::System::Object
	{
	public:
		static ::System::Int32 GetRankByLevel(::System::Int32 avatarID, ::System::Int32 level)
		{
			return ((::System::Int32(*)(::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SHARE_CAVATARINFOEXT_GETRANKBYLEVEL_OFFSET))(avatarID, level);
		}
	};
}

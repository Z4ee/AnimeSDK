#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_CDA2AEC3D8A9362A.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

class Class_1_BE6BF7909AD9D940;
class Class_2_DF2C726EEEEC912D;
namespace System { template <typename T> class Action_1; }

#define MOLEMOLE_UIARCADEFRIENDINVITECONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x12B4F0B0)

namespace MoleMole
{
	inline static constexpr unsigned int UIArcadeFriendInviteContext_TypeDefinitionIndex = 47767;

	class UIArcadeFriendInviteContext : public ::MoleMole::UIControllerContextBase
	{
	public:
		::System::Action_1<::Class_1_BE6BF7909AD9D940*>* OnClickFriend; // 0x28
		::System::Action_1<::Class_2_DF2C726EEEEC912D*>* OnClickCircle; // 0x30
		::System::Int32 InitSelectTabIdx; // 0x38
		::Enum_3_CDA2AEC3D8A9362A InteractType; // 0x3C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIARCADEFRIENDINVITECONTEXT__CTOR_OFFSET))(this);
		}
	};
}

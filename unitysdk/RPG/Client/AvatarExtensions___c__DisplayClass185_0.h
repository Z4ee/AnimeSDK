#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_BAC064D277DD99F1.h"
#include "unitysdk/Struct_2_BC950E36747FB4C9.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_542;

#define RPG_CLIENT_AVATAREXTENSIONS___C__DISPLAYCLASS185_0__CTOR_OFFSET UNITYSDK_OFFSET(0xC6E3810)
#define RPG_CLIENT_AVATAREXTENSIONS___C__DISPLAYCLASS185_0__GETTRACETREELEVELS_B__0_OFFSET UNITYSDK_OFFSET(0xC6E7F20)

namespace RPG::Client
{
	inline static constexpr unsigned int AvatarExtensions___c__DisplayClass185_0_TypeDefinitionIndex = 62573;

	class AvatarExtensions___c__DisplayClass185_0 : public ::System::Object
	{
	public:
		::Class_0_16E4307DCC419505_542* traceNodeConverter; // 0x10
		::Struct_2_BC950E36747FB4C9 prototypeIdentifier; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATAREXTENSIONS___C__DISPLAYCLASS185_0__CTOR_OFFSET))(this);
		}

		::System::UInt32 _GetTraceTreeLevels_b__0(::Struct_2_BAC064D277DD99F1 a1)
		{
			return ((::System::UInt32(*)(::PVOID, ::Struct_2_BAC064D277DD99F1))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATAREXTENSIONS___C__DISPLAYCLASS185_0__GETTRACETREELEVELS_B__0_OFFSET))(this, a1);
		}
	};
}

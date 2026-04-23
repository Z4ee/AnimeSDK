#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AvatarRowWrapperDeriveType.h"
#include "unitysdk/System/ValueType.h"

namespace System { class Object; }

#define RPG_GAMECORE_AVATARROWWRAPPEREXTRAPARAM_CREATEGRIDFIGHTDEFAULTPARAM_OFFSET UNITYSDK_OFFSET(0x186CF8B0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AvatarRowWrapperExtraParam_TypeDefinitionIndex = 23618;

	struct alignas(8) AvatarRowWrapperExtraParam
	{
		::RPG::GameCore::AvatarRowWrapperDeriveType WrapperDeriveType; // 0x10
		::System::UInt32 DeriveTypeIntParam1; // 0x14
		::System::UInt32 DeriveTypeIntParam2; // 0x18
		::System::Boolean DeriveTypeBoolenParam1; // 0x1C
		::System::Object* MgrRef; // 0x20

		static ::RPG::GameCore::AvatarRowWrapperExtraParam CreateGridFightDefaultParam(::System::UInt32 AvatarID, ::System::UInt32 EnhancedID)
		{
			return ((::RPG::GameCore::AvatarRowWrapperExtraParam(*)(::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AVATARROWWRAPPEREXTRAPARAM_CREATEGRIDFIGHTDEFAULTPARAM_OFFSET))(AvatarID, EnhancedID);
		}
	};
}

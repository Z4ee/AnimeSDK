#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_RESOURCEDELETIONVPWHITELISTROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x175A11D0)
#define RPG_GAMECORE_RESOURCEDELETIONVPWHITELISTROW__CTOR_OFFSET UNITYSDK_OFFSET(0x175A1300)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ResourceDeletionVPWhitelistRow_TypeDefinitionIndex = 13380;

	class ResourceDeletionVPWhitelistRow : public ::System::Object
	{
	public:
		::System::String* Path; // 0x10
		::System::UInt32 ID; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RESOURCEDELETIONVPWHITELISTROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::ResourceDeletionVPWhitelistRow*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ResourceDeletionVPWhitelistRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RESOURCEDELETIONVPWHITELISTROW_FROMBINARY_OFFSET))(array, val);
		}
	};
}

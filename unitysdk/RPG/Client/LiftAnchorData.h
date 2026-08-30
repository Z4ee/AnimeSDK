#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define RPG_CLIENT_LIFTANCHORDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x194F90F0)

namespace RPG::Client
{
	inline static constexpr unsigned int LiftAnchorData_TypeDefinitionIndex = 60415;

	class LiftAnchorData : public ::System::Object
	{
	public:
		::System::String* AreaName; // 0x10
		::System::String* AnchorName; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIFTANCHORDATA__CTOR_OFFSET))(this);
		}
	};
}

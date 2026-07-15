#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define RPG_CLIENT_GRIDFIGHTFORGEADDCOINEVENT__CTOR_OFFSET UNITYSDK_OFFSET(0x1A6A9F90)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightForgeAddCoinEvent_TypeDefinitionIndex = 61998;

	class GridFightForgeAddCoinEvent : public ::System::Object
	{
	public:
		::System::Int32 Coin; // 0x10
		::System::UInt32 ForgeSelectIndex; // 0x14

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTFORGEADDCOINEVENT__CTOR_OFFSET))(this);
		}
	};
}

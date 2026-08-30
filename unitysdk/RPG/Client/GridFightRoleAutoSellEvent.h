#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class GridFightRole; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_GRIDFIGHTROLEAUTOSELLEVENT__CTOR_OFFSET UNITYSDK_OFFSET(0xD2FD8D0)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightRoleAutoSellEvent_TypeDefinitionIndex = 65212;

	class GridFightRoleAutoSellEvent : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::RPG::Client::GridFightRole*>* RemoveRole; // 0x10
		::System::Int32 Coin; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLEAUTOSELLEVENT__CTOR_OFFSET))(this);
		}
	};
}

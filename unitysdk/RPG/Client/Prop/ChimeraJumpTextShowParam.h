#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_PROP_CHIMERAJUMPTEXTSHOWPARAM__CTOR_OFFSET UNITYSDK_OFFSET(0x18FF8780)

namespace RPG::Client::Prop
{
	inline static constexpr unsigned int ChimeraJumpTextShowParam_TypeDefinitionIndex = 74462;

	class ChimeraJumpTextShowParam : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::System::UInt32>* ChimeraIDs; // 0x10
		::System::UInt32 WorkID; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERAJUMPTEXTSHOWPARAM__CTOR_OFFSET))(this);
		}
	};
}

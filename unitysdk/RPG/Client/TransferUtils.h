#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }

#define RPG_CLIENT_TRANSFERUTILS_TRANSFERCHECK_OFFSET UNITYSDK_OFFSET(0xCAC7800)

namespace RPG::Client
{
	inline static constexpr unsigned int TransferUtils_TypeDefinitionIndex = 63793;

	class TransferUtils : public ::System::Object
	{
	public:
		static ::System::Void TransferCheck(::System::Action* a1, ::System::UInt32 a2, ::System::UInt32 a3, ::System::Boolean a4)
		{
			return ((::System::Void(*)(::System::Action*, ::System::UInt32, ::System::UInt32, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRANSFERUTILS_TRANSFERCHECK_OFFSET))(a1, a2, a3, a4);
		}
	};
}

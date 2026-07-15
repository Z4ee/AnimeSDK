#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class PenaconyEndmostChronicleSimpleTalkItemData; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_PENACONYENDMOSTCHRONICLESIMPLETALKDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x17F383F0)

namespace RPG::Client
{
	inline static constexpr unsigned int PenaconyEndmostChronicleSimpleTalkData_TypeDefinitionIndex = 63167;

	class PenaconyEndmostChronicleSimpleTalkData : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::RPG::Client::PenaconyEndmostChronicleSimpleTalkItemData*>* Items; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PENACONYENDMOSTCHRONICLESIMPLETALKDATA__CTOR_OFFSET))(this);
		}
	};
}

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class ColorData; }
namespace RPG::Client { class MonoUIColorSwitcher_ColorItem; }
namespace RPG::Client { class MonoUIColorSwitcher_NodeItem; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_MONOUICOLORSWITCHER_NODERECORD__CTOR_OFFSET UNITYSDK_OFFSET(0x1A3631D0)

namespace RPG::Client
{
	inline static constexpr unsigned int MonoUIColorSwitcher_NodeRecord_TypeDefinitionIndex = 65900;

	class MonoUIColorSwitcher_NodeRecord : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::RPG::Client::MonoUIColorSwitcher_NodeItem*>* Components; // 0x10
		::RPG::Client::ColorData* ColorData; // 0x18
		::System::Collections::Generic::List_1<::RPG::Client::MonoUIColorSwitcher_ColorItem*>* ColorItems; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOUICOLORSWITCHER_NODERECORD__CTOR_OFFSET))(this);
		}
	};
}

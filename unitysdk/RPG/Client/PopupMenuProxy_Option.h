#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define RPG_CLIENT_POPUPMENUPROXY_OPTION__CTOR_OFFSET UNITYSDK_OFFSET(0x1939A530)

namespace RPG::Client
{
	inline static constexpr unsigned int PopupMenuProxy_Option_TypeDefinitionIndex = 69214;

	class PopupMenuProxy_Option : public ::System::Object
	{
	public:
		::System::String* IconPath; // 0x10
		::System::Action_1<::System::Int32>* Callback; // 0x18
		::RPG::Client::TextID Label; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_POPUPMENUPROXY_OPTION__CTOR_OFFSET))(this);
		}
	};
}

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Rect.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_HYPERTEXTLINK_HREFINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x19826AD0)

namespace RPG::Client
{
	inline static constexpr unsigned int HyperTextLink_HrefInfo_TypeDefinitionIndex = 72468;

	class HyperTextLink_HrefInfo : public ::System::Object
	{
	public:
		::System::String* type; // 0x10
		::System::String* name; // 0x18
		::System::Collections::Generic::List_1<::UnityEngine::Rect>* boxes; // 0x20
		::System::Int32 endIndex; // 0x28
		::System::Int32 startIndex; // 0x2C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_HYPERTEXTLINK_HREFINFO__CTOR_OFFSET))(this);
		}
	};
}

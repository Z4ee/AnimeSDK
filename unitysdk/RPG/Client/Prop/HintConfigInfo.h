#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client::Prop { class HintInfo; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_PROP_HINTCONFIGINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x160F44B0)

namespace RPG::Client::Prop
{
	inline static constexpr unsigned int HintConfigInfo_TypeDefinitionIndex = 78051;

	class HintConfigInfo : public ::System::Object
	{
	public:
		::System::UInt32 HintPropId; // 0x10
		::System::Collections::Generic::List_1<::RPG::Client::Prop::HintInfo*>* HintInfos; // 0x18
		::System::String* SubObjectName; // 0x20
		::System::Single RotateAngle; // 0x28
		::System::Single RotateSpeed; // 0x2C
		::System::Single DrawDelay; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_HINTCONFIGINFO__CTOR_OFFSET))(this);
		}
	};
}

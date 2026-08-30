#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define RPG_CLIENT_PROP_CHIMERADUELBATTLEBUFFCHANGEEVENT_BUFFDISPLAYDATA__CTOR_OFFSET UNITYSDK_OFFSET(0xDC0AEE0)

namespace RPG::Client::Prop
{
	inline static constexpr unsigned int ChimeraDuelBattleBuffChangeEvent_BuffDisplayData_TypeDefinitionIndex = 77800;

	class ChimeraDuelBattleBuffChangeEvent_BuffDisplayData : public ::System::Object
	{
	public:
		::System::String* UniqueName; // 0x10
		::Il2CppArray<::System::Int32>* DescParams; // 0x18
		::RPG::Client::TextID Desc; // 0x20
		::RPG::Client::TextID Name; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERADUELBATTLEBUFFCHANGEEVENT_BUFFDISPLAYDATA__CTOR_OFFSET))(this);
		}
	};
}

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_WAITANIMEVENT_METHOD_3_1AD33694BE122BFB_OFFSET UNITYSDK_OFFSET(0x19E508F0)
#define RPG_GAMECORE_WAITANIMEVENT_METHOD_3_72722F8F33A2CC52_OFFSET UNITYSDK_OFFSET(0x19E50970)
#define RPG_GAMECORE_WAITANIMEVENT__CTOR_OFFSET UNITYSDK_OFFSET(0x19E50940)

namespace RPG::GameCore
{
	inline static constexpr unsigned int WaitAnimEvent_TypeDefinitionIndex = 21631;

	class WaitAnimEvent : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::String* EventName; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WAITANIMEVENT__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_1AD33694BE122BFB(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::WaitAnimEvent*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::WaitAnimEvent*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WAITANIMEVENT_METHOD_3_1AD33694BE122BFB_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_72722F8F33A2CC52(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::WaitAnimEvent* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::WaitAnimEvent*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WAITANIMEVENT_METHOD_3_72722F8F33A2CC52_OFFSET))(a1, a2);
		}
	};
}

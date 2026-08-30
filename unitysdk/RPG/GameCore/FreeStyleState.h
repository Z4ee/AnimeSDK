#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_FREESTYLESTATE_METHOD_2_79D5B2EA7C583413_OFFSET UNITYSDK_OFFSET(0x1DCBBF30)
#define RPG_GAMECORE_FREESTYLESTATE__CTOR_OFFSET UNITYSDK_OFFSET(0x1DCBC140)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FreeStyleState_TypeDefinitionIndex = 16744;

	class FreeStyleState : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::UInt32 MotionID; // 0x10
		::Il2CppArray<::System::UInt32>* EntranceFreeStyleIDList; // 0x18
		::System::Boolean CanTransitionToState; // 0x20
		::Il2CppArray<::System::String*>* TransitionToStateNames; // 0x28
		::System::UInt32 SameAsMotionIDOnLoop; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FREESTYLESTATE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_79D5B2EA7C583413(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FreeStyleState*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FreeStyleState*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FREESTYLESTATE_METHOD_2_79D5B2EA7C583413_OFFSET))(a1, a2);
		}
	};
}

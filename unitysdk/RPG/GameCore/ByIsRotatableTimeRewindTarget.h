#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_BYISROTATABLETIMEREWINDTARGET_METHOD_4_49657812382DAA58_OFFSET UNITYSDK_OFFSET(0x18757190)
#define RPG_GAMECORE_BYISROTATABLETIMEREWINDTARGET_METHOD_4_F0EA30E74198AA76_OFFSET UNITYSDK_OFFSET(0x187570C0)
#define RPG_GAMECORE_BYISROTATABLETIMEREWINDTARGET__CTOR_OFFSET UNITYSDK_OFFSET(0x18757140)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByIsRotatableTimeRewindTarget_TypeDefinitionIndex = 19646;

	class ByIsRotatableTimeRewindTarget : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* Target; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISROTATABLETIMEREWINDTARGET__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_F0EA30E74198AA76(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByIsRotatableTimeRewindTarget*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByIsRotatableTimeRewindTarget*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISROTATABLETIMEREWINDTARGET_METHOD_4_F0EA30E74198AA76_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_49657812382DAA58(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByIsRotatableTimeRewindTarget* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByIsRotatableTimeRewindTarget*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISROTATABLETIMEREWINDTARGET_METHOD_4_49657812382DAA58_OFFSET))(a1, a2);
		}
	};
}

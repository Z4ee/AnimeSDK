#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_BYISTOPACTIONDELAYTARGET_METHOD_4_27BBC0B525E291A3_OFFSET UNITYSDK_OFFSET(0x17034E10)
#define RPG_GAMECORE_BYISTOPACTIONDELAYTARGET_METHOD_4_54BA36E229EA614B_OFFSET UNITYSDK_OFFSET(0x17034EE0)
#define RPG_GAMECORE_BYISTOPACTIONDELAYTARGET__CTOR_OFFSET UNITYSDK_OFFSET(0x17034E90)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByIsTopActionDelayTarget_TypeDefinitionIndex = 21257;

	class ByIsTopActionDelayTarget : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x20
		::RPG::GameCore::TargetEvaluator* CompareTargetType; // 0x28
		::RPG::GameCore::TargetEvaluator* ExcludeTargetType; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISTOPACTIONDELAYTARGET__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_27BBC0B525E291A3(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByIsTopActionDelayTarget*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByIsTopActionDelayTarget*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISTOPACTIONDELAYTARGET_METHOD_4_27BBC0B525E291A3_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_54BA36E229EA614B(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByIsTopActionDelayTarget* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByIsTopActionDelayTarget*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISTOPACTIONDELAYTARGET_METHOD_4_54BA36E229EA614B_OFFSET))(a1, a2);
		}
	};
}

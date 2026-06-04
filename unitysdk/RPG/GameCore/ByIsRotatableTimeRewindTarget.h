#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TargetEvaluator; }
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_BYISROTATABLETIMEREWINDTARGET_METHOD_4_384F087E24D33F28_OFFSET UNITYSDK_OFFSET(0x1956CCD0)
#define RPG_GAMECORE_BYISROTATABLETIMEREWINDTARGET_METHOD_4_49657812382DAA58_OFFSET UNITYSDK_OFFSET(0x1956CAD0)
#define RPG_GAMECORE_BYISROTATABLETIMEREWINDTARGET_METHOD_4_D9242371071330C5_OFFSET UNITYSDK_OFFSET(0x1956CC50)
#define RPG_GAMECORE_BYISROTATABLETIMEREWINDTARGET_METHOD_4_F0EA30E74198AA76_OFFSET UNITYSDK_OFFSET(0x1956CA00)
#define RPG_GAMECORE_BYISROTATABLETIMEREWINDTARGET__CTOR_OFFSET UNITYSDK_OFFSET(0x1956CA80)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByIsRotatableTimeRewindTarget_TypeDefinitionIndex = 19529;

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

		static ::System::Void Method_4_D9242371071330C5(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByIsRotatableTimeRewindTarget*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByIsRotatableTimeRewindTarget*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISROTATABLETIMEREWINDTARGET_METHOD_4_D9242371071330C5_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_384F087E24D33F28(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByIsRotatableTimeRewindTarget* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByIsRotatableTimeRewindTarget*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISROTATABLETIMEREWINDTARGET_METHOD_4_384F087E24D33F28_OFFSET))(a1, a2);
		}
	};
}

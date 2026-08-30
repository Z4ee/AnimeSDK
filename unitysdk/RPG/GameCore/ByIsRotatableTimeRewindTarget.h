#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TargetEvaluator; }
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_BYISROTATABLETIMEREWINDTARGET_METHOD_4_4641835E77A1AB8D_OFFSET UNITYSDK_OFFSET(0x1CF47670)
#define RPG_GAMECORE_BYISROTATABLETIMEREWINDTARGET_METHOD_4_49657812382DAA58_OFFSET UNITYSDK_OFFSET(0x1CF476B0)
#define RPG_GAMECORE_BYISROTATABLETIMEREWINDTARGET_METHOD_4_80BC7A35F1FD49E6_OFFSET UNITYSDK_OFFSET(0x1CF47860)
#define RPG_GAMECORE_BYISROTATABLETIMEREWINDTARGET_METHOD_4_85BC730EC300FD28_OFFSET UNITYSDK_OFFSET(0x1CF47830)
#define RPG_GAMECORE_BYISROTATABLETIMEREWINDTARGET__CTOR_OFFSET UNITYSDK_OFFSET(0x1CF476A0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByIsRotatableTimeRewindTarget_TypeDefinitionIndex = 20433;

	class ByIsRotatableTimeRewindTarget : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* Target; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISROTATABLETIMEREWINDTARGET__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_4641835E77A1AB8D(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByIsRotatableTimeRewindTarget*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByIsRotatableTimeRewindTarget*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISROTATABLETIMEREWINDTARGET_METHOD_4_4641835E77A1AB8D_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_49657812382DAA58(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByIsRotatableTimeRewindTarget* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByIsRotatableTimeRewindTarget*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISROTATABLETIMEREWINDTARGET_METHOD_4_49657812382DAA58_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_85BC730EC300FD28(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByIsRotatableTimeRewindTarget*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByIsRotatableTimeRewindTarget*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISROTATABLETIMEREWINDTARGET_METHOD_4_85BC730EC300FD28_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_80BC7A35F1FD49E6(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByIsRotatableTimeRewindTarget* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByIsRotatableTimeRewindTarget*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISROTATABLETIMEREWINDTARGET_METHOD_4_80BC7A35F1FD49E6_OFFSET))(a1, a2);
		}
	};
}

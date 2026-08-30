#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TargetEvaluator.h"

class Class_1_7A22A3DBEEDD1F80;
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_TARGETFETCHADVFAKEAVATAR_METHOD_4_1FCB6CE54285D0C1_OFFSET UNITYSDK_OFFSET(0x1E167420)
#define RPG_GAMECORE_TARGETFETCHADVFAKEAVATAR_METHOD_4_3417B7F4924A37C9_OFFSET UNITYSDK_OFFSET(0x1E167380)
#define RPG_GAMECORE_TARGETFETCHADVFAKEAVATAR_METHOD_4_54C5ABE1A794F074_OFFSET UNITYSDK_OFFSET(0x1E1672E0)
#define RPG_GAMECORE_TARGETFETCHADVFAKEAVATAR_METHOD_4_835DC72267533A9D_OFFSET UNITYSDK_OFFSET(0x1E1673E0)
#define RPG_GAMECORE_TARGETFETCHADVFAKEAVATAR__CTOR_OFFSET UNITYSDK_OFFSET(0x1E167370)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TargetFetchAdvFakeAvatar_TypeDefinitionIndex = 23606;

	class TargetFetchAdvFakeAvatar : public ::RPG::GameCore::TargetEvaluator
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHADVFAKEAVATAR__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_54C5ABE1A794F074(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TargetFetchAdvFakeAvatar*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TargetFetchAdvFakeAvatar*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHADVFAKEAVATAR_METHOD_4_54C5ABE1A794F074_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_3417B7F4924A37C9(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TargetFetchAdvFakeAvatar* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TargetFetchAdvFakeAvatar*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHADVFAKEAVATAR_METHOD_4_3417B7F4924A37C9_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_835DC72267533A9D(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetFetchAdvFakeAvatar*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetFetchAdvFakeAvatar*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHADVFAKEAVATAR_METHOD_4_835DC72267533A9D_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_1FCB6CE54285D0C1(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetFetchAdvFakeAvatar* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetFetchAdvFakeAvatar*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHADVFAKEAVATAR_METHOD_4_1FCB6CE54285D0C1_OFFSET))(a1, a2);
		}
	};
}

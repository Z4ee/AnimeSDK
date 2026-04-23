#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TargetEvaluator.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_TARGETFETCHADVFAKEAVATAR_METHOD_4_3417B7F4924A37C9_OFFSET UNITYSDK_OFFSET(0x18ED8590)
#define RPG_GAMECORE_TARGETFETCHADVFAKEAVATAR_METHOD_4_91E6606B34AA5E27_OFFSET UNITYSDK_OFFSET(0x18EE1C50)
#define RPG_GAMECORE_TARGETFETCHADVFAKEAVATAR__CTOR_OFFSET UNITYSDK_OFFSET(0x18ED8540)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TargetFetchAdvFakeAvatar_TypeDefinitionIndex = 22865;

	class TargetFetchAdvFakeAvatar : public ::RPG::GameCore::TargetEvaluator
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHADVFAKEAVATAR__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_91E6606B34AA5E27(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TargetFetchAdvFakeAvatar*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TargetFetchAdvFakeAvatar*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHADVFAKEAVATAR_METHOD_4_91E6606B34AA5E27_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_3417B7F4924A37C9(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TargetFetchAdvFakeAvatar* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TargetFetchAdvFakeAvatar*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHADVFAKEAVATAR_METHOD_4_3417B7F4924A37C9_OFFSET))(a1, a2);
		}
	};
}

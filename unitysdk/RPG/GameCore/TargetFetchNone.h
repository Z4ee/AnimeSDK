#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TargetEvaluator.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_TARGETFETCHNONE_METHOD_4_0791B0CA0C203F50_OFFSET UNITYSDK_OFFSET(0x18EE5010)
#define RPG_GAMECORE_TARGETFETCHNONE_METHOD_4_B5E3E3391D7DBBA2_OFFSET UNITYSDK_OFFSET(0x18EDE790)
#define RPG_GAMECORE_TARGETFETCHNONE__CTOR_OFFSET UNITYSDK_OFFSET(0x18EDE740)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TargetFetchNone_TypeDefinitionIndex = 22900;

	class TargetFetchNone : public ::RPG::GameCore::TargetEvaluator
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHNONE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_0791B0CA0C203F50(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TargetFetchNone*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TargetFetchNone*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHNONE_METHOD_4_0791B0CA0C203F50_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_B5E3E3391D7DBBA2(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TargetFetchNone* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TargetFetchNone*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHNONE_METHOD_4_B5E3E3391D7DBBA2_OFFSET))(a1, a2);
		}
	};
}

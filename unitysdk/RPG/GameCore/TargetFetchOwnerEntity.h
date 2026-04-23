#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TargetEvaluator.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_TARGETFETCHOWNERENTITY_METHOD_4_853F5B059CAEF954_OFFSET UNITYSDK_OFFSET(0x18EE5220)
#define RPG_GAMECORE_TARGETFETCHOWNERENTITY_METHOD_4_95FE3DE17BFEE216_OFFSET UNITYSDK_OFFSET(0x18EDEC40)
#define RPG_GAMECORE_TARGETFETCHOWNERENTITY__CTOR_OFFSET UNITYSDK_OFFSET(0x18EDEBF0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TargetFetchOwnerEntity_TypeDefinitionIndex = 22967;

	class TargetFetchOwnerEntity : public ::RPG::GameCore::TargetEvaluator
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHOWNERENTITY__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_853F5B059CAEF954(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TargetFetchOwnerEntity*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TargetFetchOwnerEntity*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHOWNERENTITY_METHOD_4_853F5B059CAEF954_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_95FE3DE17BFEE216(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TargetFetchOwnerEntity* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TargetFetchOwnerEntity*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHOWNERENTITY_METHOD_4_95FE3DE17BFEE216_OFFSET))(a1, a2);
		}
	};
}

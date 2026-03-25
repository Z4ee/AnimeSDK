#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AimTargetType.h"
#include "unitysdk/RPG/GameCore/TargetEvaluator.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_TARGETFETCHAIMATTARGETLIST_METHOD_4_4279B81DCECDD3CA_OFFSET UNITYSDK_OFFSET(0x177BCD30)
#define RPG_GAMECORE_TARGETFETCHAIMATTARGETLIST_METHOD_4_7C11CF74121445EE_OFFSET UNITYSDK_OFFSET(0x177B22A0)
#define RPG_GAMECORE_TARGETFETCHAIMATTARGETLIST__CTOR_OFFSET UNITYSDK_OFFSET(0x177B2250)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TargetFetchAimAtTargetList_TypeDefinitionIndex = 22302;

	class TargetFetchAimAtTargetList : public ::RPG::GameCore::TargetEvaluator
	{
	public:
		::RPG::GameCore::AimTargetType TargetType; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHAIMATTARGETLIST__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_4279B81DCECDD3CA(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TargetFetchAimAtTargetList*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TargetFetchAimAtTargetList*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHAIMATTARGETLIST_METHOD_4_4279B81DCECDD3CA_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_7C11CF74121445EE(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TargetFetchAimAtTargetList* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TargetFetchAimAtTargetList*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHAIMATTARGETLIST_METHOD_4_7C11CF74121445EE_OFFSET))(a1, a2);
		}
	};
}

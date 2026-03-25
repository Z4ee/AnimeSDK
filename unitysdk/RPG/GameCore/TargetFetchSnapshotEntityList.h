#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TargetEvaluator.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_TARGETFETCHSNAPSHOTENTITYLIST_METHOD_4_9016E0792E305DFD_OFFSET UNITYSDK_OFFSET(0x177B8370)
#define RPG_GAMECORE_TARGETFETCHSNAPSHOTENTITYLIST_METHOD_4_B862A03C82C56A4B_OFFSET UNITYSDK_OFFSET(0x177C0240)
#define RPG_GAMECORE_TARGETFETCHSNAPSHOTENTITYLIST__CTOR_OFFSET UNITYSDK_OFFSET(0x177B8320)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TargetFetchSnapshotEntityList_TypeDefinitionIndex = 22287;

	class TargetFetchSnapshotEntityList : public ::RPG::GameCore::TargetEvaluator
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHSNAPSHOTENTITYLIST__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_B862A03C82C56A4B(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TargetFetchSnapshotEntityList*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TargetFetchSnapshotEntityList*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHSNAPSHOTENTITYLIST_METHOD_4_B862A03C82C56A4B_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_9016E0792E305DFD(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TargetFetchSnapshotEntityList* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TargetFetchSnapshotEntityList*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHSNAPSHOTENTITYLIST_METHOD_4_9016E0792E305DFD_OFFSET))(a1, a2);
		}
	};
}

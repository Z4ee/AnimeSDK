#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TargetEvaluator.h"

class Class_1_7A22A3DBEEDD1F80;
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_TARGETFETCHSNAPSHOTENTITYLIST_METHOD_4_27371183311D8C1D_OFFSET UNITYSDK_OFFSET(0x19D0EBD0)
#define RPG_GAMECORE_TARGETFETCHSNAPSHOTENTITYLIST_METHOD_4_61BE79F520304C2D_OFFSET UNITYSDK_OFFSET(0x19D07170)
#define RPG_GAMECORE_TARGETFETCHSNAPSHOTENTITYLIST_METHOD_4_9016E0792E305DFD_OFFSET UNITYSDK_OFFSET(0x19CFC0A0)
#define RPG_GAMECORE_TARGETFETCHSNAPSHOTENTITYLIST_METHOD_4_B862A03C82C56A4B_OFFSET UNITYSDK_OFFSET(0x19D0EB10)
#define RPG_GAMECORE_TARGETFETCHSNAPSHOTENTITYLIST__CTOR_OFFSET UNITYSDK_OFFSET(0x19CFC050)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TargetFetchSnapshotEntityList_TypeDefinitionIndex = 22694;

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

		static ::System::Void Method_4_61BE79F520304C2D(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetFetchSnapshotEntityList*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetFetchSnapshotEntityList*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHSNAPSHOTENTITYLIST_METHOD_4_61BE79F520304C2D_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_27371183311D8C1D(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetFetchSnapshotEntityList* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetFetchSnapshotEntityList*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHSNAPSHOTENTITYLIST_METHOD_4_27371183311D8C1D_OFFSET))(a1, a2);
		}
	};
}

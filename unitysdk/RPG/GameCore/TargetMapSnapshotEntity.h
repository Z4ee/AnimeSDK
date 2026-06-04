#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TargetSeqOperation.h"

class Class_1_7A22A3DBEEDD1F80;
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_TARGETMAPSNAPSHOTENTITY_METHOD_3_06E3DDDA2129CF58_OFFSET UNITYSDK_OFFSET(0x19D14F60)
#define RPG_GAMECORE_TARGETMAPSNAPSHOTENTITY_METHOD_3_5500FE8EDE53ED89_OFFSET UNITYSDK_OFFSET(0x19D14EA0)
#define RPG_GAMECORE_TARGETMAPSNAPSHOTENTITY_METHOD_3_A11F6A18A7054275_OFFSET UNITYSDK_OFFSET(0x19D14FC0)
#define RPG_GAMECORE_TARGETMAPSNAPSHOTENTITY_METHOD_3_AEC8D02ED353079A_OFFSET UNITYSDK_OFFSET(0x19D15000)
#define RPG_GAMECORE_TARGETMAPSNAPSHOTENTITY__CTOR_OFFSET UNITYSDK_OFFSET(0x19D14F40)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TargetMapSnapshotEntity_TypeDefinitionIndex = 22638;

	class TargetMapSnapshotEntity : public ::RPG::GameCore::TargetSeqOperation
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETMAPSNAPSHOTENTITY__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_5500FE8EDE53ED89(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TargetMapSnapshotEntity*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TargetMapSnapshotEntity*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETMAPSNAPSHOTENTITY_METHOD_3_5500FE8EDE53ED89_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_06E3DDDA2129CF58(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TargetMapSnapshotEntity* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TargetMapSnapshotEntity*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETMAPSNAPSHOTENTITY_METHOD_3_06E3DDDA2129CF58_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_A11F6A18A7054275(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetMapSnapshotEntity*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetMapSnapshotEntity*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETMAPSNAPSHOTENTITY_METHOD_3_A11F6A18A7054275_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_AEC8D02ED353079A(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetMapSnapshotEntity* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetMapSnapshotEntity*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETMAPSNAPSHOTENTITY_METHOD_3_AEC8D02ED353079A_OFFSET))(a1, a2);
		}
	};
}

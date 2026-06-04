#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TargetSeqOperation.h"

class Class_1_7A22A3DBEEDD1F80;
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_TARGETMAPCHARACTERCHANGETARGET_METHOD_3_44A837D169268849_OFFSET UNITYSDK_OFFSET(0x19D12B60)
#define RPG_GAMECORE_TARGETMAPCHARACTERCHANGETARGET_METHOD_3_4F8DBCA2B7A32F72_OFFSET UNITYSDK_OFFSET(0x19D12970)
#define RPG_GAMECORE_TARGETMAPCHARACTERCHANGETARGET_METHOD_3_70DB6BB9CD96D0FE_OFFSET UNITYSDK_OFFSET(0x19D12AA0)
#define RPG_GAMECORE_TARGETMAPCHARACTERCHANGETARGET_METHOD_3_811CDF800BA122C0_OFFSET UNITYSDK_OFFSET(0x19D12BB0)
#define RPG_GAMECORE_TARGETMAPCHARACTERCHANGETARGET__CTOR_OFFSET UNITYSDK_OFFSET(0x19D12A80)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TargetMapCharacterChangeTarget_TypeDefinitionIndex = 22660;

	class TargetMapCharacterChangeTarget : public ::RPG::GameCore::TargetSeqOperation
	{
	public:
		::System::Boolean IncludeSelf; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETMAPCHARACTERCHANGETARGET__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_4F8DBCA2B7A32F72(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TargetMapCharacterChangeTarget*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TargetMapCharacterChangeTarget*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETMAPCHARACTERCHANGETARGET_METHOD_3_4F8DBCA2B7A32F72_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_70DB6BB9CD96D0FE(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TargetMapCharacterChangeTarget* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TargetMapCharacterChangeTarget*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETMAPCHARACTERCHANGETARGET_METHOD_3_70DB6BB9CD96D0FE_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_44A837D169268849(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetMapCharacterChangeTarget*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetMapCharacterChangeTarget*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETMAPCHARACTERCHANGETARGET_METHOD_3_44A837D169268849_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_811CDF800BA122C0(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetMapCharacterChangeTarget* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetMapCharacterChangeTarget*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETMAPCHARACTERCHANGETARGET_METHOD_3_811CDF800BA122C0_OFFSET))(a1, a2);
		}
	};
}

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TargetSeqOperation.h"

class Class_1_7A22A3DBEEDD1F80;
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_TARGETMAPBATTLEEVENTCREATOR_METHOD_3_51DBF00C99C01D11_OFFSET UNITYSDK_OFFSET(0x1E1BB200)
#define RPG_GAMECORE_TARGETMAPBATTLEEVENTCREATOR_METHOD_3_561BA3AAA89CAD35_OFFSET UNITYSDK_OFFSET(0x1E1BB240)
#define RPG_GAMECORE_TARGETMAPBATTLEEVENTCREATOR_METHOD_3_A75B1182B9E9D532_OFFSET UNITYSDK_OFFSET(0x1E1BB100)
#define RPG_GAMECORE_TARGETMAPBATTLEEVENTCREATOR_METHOD_3_DE18EA9B955DA4B3_OFFSET UNITYSDK_OFFSET(0x1E1BB1A0)
#define RPG_GAMECORE_TARGETMAPBATTLEEVENTCREATOR__CTOR_OFFSET UNITYSDK_OFFSET(0x1E1BB190)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TargetMapBattleEventCreator_TypeDefinitionIndex = 23656;

	class TargetMapBattleEventCreator : public ::RPG::GameCore::TargetSeqOperation
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETMAPBATTLEEVENTCREATOR__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_A75B1182B9E9D532(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TargetMapBattleEventCreator*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TargetMapBattleEventCreator*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETMAPBATTLEEVENTCREATOR_METHOD_3_A75B1182B9E9D532_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_DE18EA9B955DA4B3(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TargetMapBattleEventCreator* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TargetMapBattleEventCreator*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETMAPBATTLEEVENTCREATOR_METHOD_3_DE18EA9B955DA4B3_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_51DBF00C99C01D11(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetMapBattleEventCreator*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetMapBattleEventCreator*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETMAPBATTLEEVENTCREATOR_METHOD_3_51DBF00C99C01D11_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_561BA3AAA89CAD35(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetMapBattleEventCreator* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetMapBattleEventCreator*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETMAPBATTLEEVENTCREATOR_METHOD_3_561BA3AAA89CAD35_OFFSET))(a1, a2);
		}
	};
}

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
#include "unitysdk/RPG/MVector3.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_TRAINPARTYBUILDITEMSLOTEXT_METHOD_2_5B39F325D2EDAAF9_OFFSET UNITYSDK_OFFSET(0x190A7E20)
#define RPG_GAMECORE_TRAINPARTYBUILDITEMSLOTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x190A7FA0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TrainPartyBuildItemSlotExt_TypeDefinitionIndex = 15388;

	class TrainPartyBuildItemSlotExt : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::UInt32 DynamicID; // 0x10
		::RPG::MVector3 LocalPosition; // 0x14
		::RPG::MVector3 LocalRotation; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRAINPARTYBUILDITEMSLOTEXT__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_5B39F325D2EDAAF9(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TrainPartyBuildItemSlotExt*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TrainPartyBuildItemSlotExt*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRAINPARTYBUILDITEMSLOTEXT_METHOD_2_5B39F325D2EDAAF9_OFFSET))(a1, a2);
		}
	};
}

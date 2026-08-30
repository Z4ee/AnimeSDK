#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_FETCHADVNPCDATA_METHOD_2_5E2D7AD5320035CC_OFFSET UNITYSDK_OFFSET(0x1E0D2200)
#define RPG_GAMECORE_FETCHADVNPCDATA_METHOD_2_9850D7BFB02D5F74_OFFSET UNITYSDK_OFFSET(0x1E0D20D0)
#define RPG_GAMECORE_FETCHADVNPCDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x1E0D21F0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FetchAdvNPCData_TypeDefinitionIndex = 23599;

	class FetchAdvNPCData : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::UInt32 GroupID; // 0x10
		::System::UInt32 GroupNpcID; // 0x14

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FETCHADVNPCDATA__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_9850D7BFB02D5F74(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FetchAdvNPCData*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FetchAdvNPCData*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FETCHADVNPCDATA_METHOD_2_9850D7BFB02D5F74_OFFSET))(a1, a2);
		}

		static ::System::Void Method_2_5E2D7AD5320035CC(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::FetchAdvNPCData*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::FetchAdvNPCData*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FETCHADVNPCDATA_METHOD_2_5E2D7AD5320035CC_OFFSET))(a1, a2);
		}
	};
}

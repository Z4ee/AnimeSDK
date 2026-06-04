#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_FETCHADVNPCDATA_METHOD_2_40F2238D94393361_OFFSET UNITYSDK_OFFSET(0x197183E0)
#define RPG_GAMECORE_FETCHADVNPCDATA_METHOD_2_F4701E3108E85ECF_OFFSET UNITYSDK_OFFSET(0x197182E0)
#define RPG_GAMECORE_FETCHADVNPCDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x197183D0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FetchAdvNPCData_TypeDefinitionIndex = 22556;

	class FetchAdvNPCData : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::UInt32 GroupID; // 0x10
		::System::UInt32 GroupNpcID; // 0x14

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FETCHADVNPCDATA__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_F4701E3108E85ECF(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FetchAdvNPCData*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FetchAdvNPCData*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FETCHADVNPCDATA_METHOD_2_F4701E3108E85ECF_OFFSET))(a1, a2);
		}

		static ::System::Void Method_2_40F2238D94393361(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::FetchAdvNPCData*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::FetchAdvNPCData*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FETCHADVNPCDATA_METHOD_2_40F2238D94393361_OFFSET))(a1, a2);
		}
	};
}

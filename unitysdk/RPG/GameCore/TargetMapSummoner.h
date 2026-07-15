#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TargetSeqOperation.h"

class Class_1_7A22A3DBEEDD1F80;
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_TARGETMAPSUMMONER_METHOD_3_AA6B78F82D2419C3_OFFSET UNITYSDK_OFFSET(0x1D0C4000)
#define RPG_GAMECORE_TARGETMAPSUMMONER_METHOD_3_B1ADA4D90982F14F_OFFSET UNITYSDK_OFFSET(0x1D0C3E60)
#define RPG_GAMECORE_TARGETMAPSUMMONER_METHOD_3_D0F7E4D2667872D2_OFFSET UNITYSDK_OFFSET(0x1D0C3F40)
#define RPG_GAMECORE_TARGETMAPSUMMONER_METHOD_3_FB86DF1798815AB6_OFFSET UNITYSDK_OFFSET(0x1D0C4030)
#define RPG_GAMECORE_TARGETMAPSUMMONER__CTOR_OFFSET UNITYSDK_OFFSET(0x1D0C3F30)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TargetMapSummoner_TypeDefinitionIndex = 23097;

	class TargetMapSummoner : public ::RPG::GameCore::TargetSeqOperation
	{
	public:
		::System::Boolean Recursive; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETMAPSUMMONER__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_B1ADA4D90982F14F(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TargetMapSummoner*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TargetMapSummoner*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETMAPSUMMONER_METHOD_3_B1ADA4D90982F14F_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_D0F7E4D2667872D2(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TargetMapSummoner* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TargetMapSummoner*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETMAPSUMMONER_METHOD_3_D0F7E4D2667872D2_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_AA6B78F82D2419C3(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetMapSummoner*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetMapSummoner*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETMAPSUMMONER_METHOD_3_AA6B78F82D2419C3_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_FB86DF1798815AB6(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetMapSummoner* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetMapSummoner*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETMAPSUMMONER_METHOD_3_FB86DF1798815AB6_OFFSET))(a1, a2);
		}
	};
}

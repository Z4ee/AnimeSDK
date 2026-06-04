#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TargetSeqOperation.h"

class Class_1_7A22A3DBEEDD1F80;
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_TARGETMAPSUMMONER_METHOD_3_68EF654DD5FE7EFD_OFFSET UNITYSDK_OFFSET(0x19D15380)
#define RPG_GAMECORE_TARGETMAPSUMMONER_METHOD_3_C36E75F65330A97C_OFFSET UNITYSDK_OFFSET(0x19D153D0)
#define RPG_GAMECORE_TARGETMAPSUMMONER_METHOD_3_D0F7E4D2667872D2_OFFSET UNITYSDK_OFFSET(0x19D152C0)
#define RPG_GAMECORE_TARGETMAPSUMMONER_METHOD_3_DCD2D56BEA1A9566_OFFSET UNITYSDK_OFFSET(0x19D15190)
#define RPG_GAMECORE_TARGETMAPSUMMONER__CTOR_OFFSET UNITYSDK_OFFSET(0x19D152A0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TargetMapSummoner_TypeDefinitionIndex = 22634;

	class TargetMapSummoner : public ::RPG::GameCore::TargetSeqOperation
	{
	public:
		::System::Boolean Recursive; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETMAPSUMMONER__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_DCD2D56BEA1A9566(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TargetMapSummoner*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TargetMapSummoner*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETMAPSUMMONER_METHOD_3_DCD2D56BEA1A9566_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_D0F7E4D2667872D2(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TargetMapSummoner* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TargetMapSummoner*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETMAPSUMMONER_METHOD_3_D0F7E4D2667872D2_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_68EF654DD5FE7EFD(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetMapSummoner*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetMapSummoner*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETMAPSUMMONER_METHOD_3_68EF654DD5FE7EFD_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_C36E75F65330A97C(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetMapSummoner* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetMapSummoner*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETMAPSUMMONER_METHOD_3_C36E75F65330A97C_OFFSET))(a1, a2);
		}
	};
}

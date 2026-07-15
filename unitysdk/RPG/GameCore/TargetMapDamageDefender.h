#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TargetSeqOperation.h"

class Class_1_7A22A3DBEEDD1F80;
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_TARGETMAPDAMAGEDEFENDER_METHOD_3_12C73044BC9F8E48_OFFSET UNITYSDK_OFFSET(0x1D0C2200)
#define RPG_GAMECORE_TARGETMAPDAMAGEDEFENDER_METHOD_3_48E6ADFA93845395_OFFSET UNITYSDK_OFFSET(0x1D0C2220)
#define RPG_GAMECORE_TARGETMAPDAMAGEDEFENDER_METHOD_3_4C24DFA278F9AF12_OFFSET UNITYSDK_OFFSET(0x1D0C2120)
#define RPG_GAMECORE_TARGETMAPDAMAGEDEFENDER_METHOD_3_63557D0EBE19C913_OFFSET UNITYSDK_OFFSET(0x1D0C21A0)
#define RPG_GAMECORE_TARGETMAPDAMAGEDEFENDER__CTOR_OFFSET UNITYSDK_OFFSET(0x1D0C2190)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TargetMapDamageDefender_TypeDefinitionIndex = 23166;

	class TargetMapDamageDefender : public ::RPG::GameCore::TargetSeqOperation
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETMAPDAMAGEDEFENDER__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_4C24DFA278F9AF12(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TargetMapDamageDefender*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TargetMapDamageDefender*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETMAPDAMAGEDEFENDER_METHOD_3_4C24DFA278F9AF12_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_63557D0EBE19C913(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TargetMapDamageDefender* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TargetMapDamageDefender*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETMAPDAMAGEDEFENDER_METHOD_3_63557D0EBE19C913_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_12C73044BC9F8E48(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetMapDamageDefender*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetMapDamageDefender*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETMAPDAMAGEDEFENDER_METHOD_3_12C73044BC9F8E48_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_48E6ADFA93845395(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetMapDamageDefender* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetMapDamageDefender*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETMAPDAMAGEDEFENDER_METHOD_3_48E6ADFA93845395_OFFSET))(a1, a2);
		}
	};
}

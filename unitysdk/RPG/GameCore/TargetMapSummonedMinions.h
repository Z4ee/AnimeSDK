#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TargetSeqOperation.h"

class Class_1_7A22A3DBEEDD1F80;
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_TARGETMAPSUMMONEDMINIONS_METHOD_3_1A7DAC2A284C8195_OFFSET UNITYSDK_OFFSET(0x19D15010)
#define RPG_GAMECORE_TARGETMAPSUMMONEDMINIONS_METHOD_3_6D76543FDC3D64CC_OFFSET UNITYSDK_OFFSET(0x19D150B0)
#define RPG_GAMECORE_TARGETMAPSUMMONEDMINIONS_METHOD_3_8486ECA4DF30D3F1_OFFSET UNITYSDK_OFFSET(0x19D15110)
#define RPG_GAMECORE_TARGETMAPSUMMONEDMINIONS_METHOD_3_BBEED9848CF4BAC6_OFFSET UNITYSDK_OFFSET(0x19D15150)
#define RPG_GAMECORE_TARGETMAPSUMMONEDMINIONS__CTOR_OFFSET UNITYSDK_OFFSET(0x19D15160)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TargetMapSummonedMinions_TypeDefinitionIndex = 22636;

	class TargetMapSummonedMinions : public ::RPG::GameCore::TargetSeqOperation
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETMAPSUMMONEDMINIONS__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_1A7DAC2A284C8195(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TargetMapSummonedMinions*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TargetMapSummonedMinions*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETMAPSUMMONEDMINIONS_METHOD_3_1A7DAC2A284C8195_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_6D76543FDC3D64CC(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TargetMapSummonedMinions* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TargetMapSummonedMinions*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETMAPSUMMONEDMINIONS_METHOD_3_6D76543FDC3D64CC_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_8486ECA4DF30D3F1(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetMapSummonedMinions*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetMapSummonedMinions*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETMAPSUMMONEDMINIONS_METHOD_3_8486ECA4DF30D3F1_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_BBEED9848CF4BAC6(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetMapSummonedMinions* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetMapSummonedMinions*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETMAPSUMMONEDMINIONS_METHOD_3_BBEED9848CF4BAC6_OFFSET))(a1, a2);
		}
	};
}

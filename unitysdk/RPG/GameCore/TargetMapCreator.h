#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TargetSeqOperation.h"

class Class_1_7A22A3DBEEDD1F80;
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_TARGETMAPCREATOR_METHOD_3_1DA7541F4B1B04C6_OFFSET UNITYSDK_OFFSET(0x19D13020)
#define RPG_GAMECORE_TARGETMAPCREATOR_METHOD_3_6963DF70E8A01A78_OFFSET UNITYSDK_OFFSET(0x19D12DE0)
#define RPG_GAMECORE_TARGETMAPCREATOR_METHOD_3_BF26B22D7F08DD47_OFFSET UNITYSDK_OFFSET(0x19D12FD0)
#define RPG_GAMECORE_TARGETMAPCREATOR_METHOD_3_F60E08B86302AAA4_OFFSET UNITYSDK_OFFSET(0x19D12F10)
#define RPG_GAMECORE_TARGETMAPCREATOR__CTOR_OFFSET UNITYSDK_OFFSET(0x19D12EF0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TargetMapCreator_TypeDefinitionIndex = 22635;

	class TargetMapCreator : public ::RPG::GameCore::TargetSeqOperation
	{
	public:
		::System::Boolean Recursive; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETMAPCREATOR__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_6963DF70E8A01A78(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TargetMapCreator*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TargetMapCreator*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETMAPCREATOR_METHOD_3_6963DF70E8A01A78_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_F60E08B86302AAA4(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TargetMapCreator* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TargetMapCreator*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETMAPCREATOR_METHOD_3_F60E08B86302AAA4_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_BF26B22D7F08DD47(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetMapCreator*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetMapCreator*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETMAPCREATOR_METHOD_3_BF26B22D7F08DD47_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_1DA7541F4B1B04C6(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetMapCreator* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetMapCreator*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETMAPCREATOR_METHOD_3_1DA7541F4B1B04C6_OFFSET))(a1, a2);
		}
	};
}

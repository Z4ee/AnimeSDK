#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_BYCURRENTROGUEHASMIRACLE_METHOD_4_893B97EA58BC0FE8_OFFSET UNITYSDK_OFFSET(0x1CF11BF0)
#define RPG_GAMECORE_BYCURRENTROGUEHASMIRACLE_METHOD_4_986CA1204AFEBD2E_OFFSET UNITYSDK_OFFSET(0x1CF11A10)
#define RPG_GAMECORE_BYCURRENTROGUEHASMIRACLE_METHOD_4_98848E9034DBA46F_OFFSET UNITYSDK_OFFSET(0x1CF11BC0)
#define RPG_GAMECORE_BYCURRENTROGUEHASMIRACLE_METHOD_4_BFB9B70198F60B43_OFFSET UNITYSDK_OFFSET(0x1CF11A50)
#define RPG_GAMECORE_BYCURRENTROGUEHASMIRACLE__CTOR_OFFSET UNITYSDK_OFFSET(0x1CF11A40)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByCurrentRogueHasMiracle_TypeDefinitionIndex = 20807;

	class ByCurrentRogueHasMiracle : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::System::UInt32 MiracleID; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCURRENTROGUEHASMIRACLE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_986CA1204AFEBD2E(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByCurrentRogueHasMiracle*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByCurrentRogueHasMiracle*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCURRENTROGUEHASMIRACLE_METHOD_4_986CA1204AFEBD2E_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_BFB9B70198F60B43(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByCurrentRogueHasMiracle* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByCurrentRogueHasMiracle*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCURRENTROGUEHASMIRACLE_METHOD_4_BFB9B70198F60B43_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_98848E9034DBA46F(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCurrentRogueHasMiracle*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCurrentRogueHasMiracle*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCURRENTROGUEHASMIRACLE_METHOD_4_98848E9034DBA46F_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_893B97EA58BC0FE8(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCurrentRogueHasMiracle* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCurrentRogueHasMiracle*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCURRENTROGUEHASMIRACLE_METHOD_4_893B97EA58BC0FE8_OFFSET))(a1, a2);
		}
	};
}

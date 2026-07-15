#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_BYCHECKBLOODLINKDEAD_METHOD_4_36970B05CD3FD1C6_OFFSET UNITYSDK_OFFSET(0x19CC2210)
#define RPG_GAMECORE_BYCHECKBLOODLINKDEAD_METHOD_4_63C4D12E597B5410_OFFSET UNITYSDK_OFFSET(0x19CC20D0)
#define RPG_GAMECORE_BYCHECKBLOODLINKDEAD_METHOD_4_6B4AE156ECC0143B_OFFSET UNITYSDK_OFFSET(0x19CC2240)
#define RPG_GAMECORE_BYCHECKBLOODLINKDEAD_METHOD_4_F12CB8C36C82F7D3_OFFSET UNITYSDK_OFFSET(0x19CC2090)
#define RPG_GAMECORE_BYCHECKBLOODLINKDEAD__CTOR_OFFSET UNITYSDK_OFFSET(0x19CC20C0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByCheckBloodLinkDead_TypeDefinitionIndex = 22207;

	class ByCheckBloodLinkDead : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCHECKBLOODLINKDEAD__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_F12CB8C36C82F7D3(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByCheckBloodLinkDead*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByCheckBloodLinkDead*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCHECKBLOODLINKDEAD_METHOD_4_F12CB8C36C82F7D3_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_63C4D12E597B5410(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByCheckBloodLinkDead* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByCheckBloodLinkDead*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCHECKBLOODLINKDEAD_METHOD_4_63C4D12E597B5410_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_36970B05CD3FD1C6(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCheckBloodLinkDead*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCheckBloodLinkDead*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCHECKBLOODLINKDEAD_METHOD_4_36970B05CD3FD1C6_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_6B4AE156ECC0143B(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCheckBloodLinkDead* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCheckBloodLinkDead*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCHECKBLOODLINKDEAD_METHOD_4_6B4AE156ECC0143B_OFFSET))(a1, a2);
		}
	};
}

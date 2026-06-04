#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_BYCHIMERADUELISMASTERSELECTED_METHOD_4_1B0A5ACC20D35A7A_OFFSET UNITYSDK_OFFSET(0x19502380)
#define RPG_GAMECORE_BYCHIMERADUELISMASTERSELECTED_METHOD_4_DD6DF32DC627F547_OFFSET UNITYSDK_OFFSET(0x19502190)
#define RPG_GAMECORE_BYCHIMERADUELISMASTERSELECTED_METHOD_4_DE1F85B3568C50C5_OFFSET UNITYSDK_OFFSET(0x195020C0)
#define RPG_GAMECORE_BYCHIMERADUELISMASTERSELECTED_METHOD_4_E0F2845D944BD076_OFFSET UNITYSDK_OFFSET(0x19502300)
#define RPG_GAMECORE_BYCHIMERADUELISMASTERSELECTED__CTOR_OFFSET UNITYSDK_OFFSET(0x19502140)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByChimeraDuelIsMasterSelected_TypeDefinitionIndex = 22983;

	class ByChimeraDuelIsMasterSelected : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::System::UInt32 MasterID; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCHIMERADUELISMASTERSELECTED__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_DE1F85B3568C50C5(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByChimeraDuelIsMasterSelected*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByChimeraDuelIsMasterSelected*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCHIMERADUELISMASTERSELECTED_METHOD_4_DE1F85B3568C50C5_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_DD6DF32DC627F547(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByChimeraDuelIsMasterSelected* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByChimeraDuelIsMasterSelected*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCHIMERADUELISMASTERSELECTED_METHOD_4_DD6DF32DC627F547_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_E0F2845D944BD076(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByChimeraDuelIsMasterSelected*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByChimeraDuelIsMasterSelected*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCHIMERADUELISMASTERSELECTED_METHOD_4_E0F2845D944BD076_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_1B0A5ACC20D35A7A(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByChimeraDuelIsMasterSelected* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByChimeraDuelIsMasterSelected*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCHIMERADUELISMASTERSELECTED_METHOD_4_1B0A5ACC20D35A7A_OFFSET))(a1, a2);
		}
	};
}

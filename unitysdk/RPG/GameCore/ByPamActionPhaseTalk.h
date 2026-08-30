#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_BYPAMACTIONPHASETALK_METHOD_4_2948C2F0CE2F8118_OFFSET UNITYSDK_OFFSET(0x1CDB8E10)
#define RPG_GAMECORE_BYPAMACTIONPHASETALK_METHOD_4_A929381BFF99FAAB_OFFSET UNITYSDK_OFFSET(0x1CDB8E50)
#define RPG_GAMECORE_BYPAMACTIONPHASETALK_METHOD_4_CEB0421A8D563B88_OFFSET UNITYSDK_OFFSET(0x1CDB8FC0)
#define RPG_GAMECORE_BYPAMACTIONPHASETALK_METHOD_4_EBC748AEE7E52451_OFFSET UNITYSDK_OFFSET(0x1CDB8F90)
#define RPG_GAMECORE_BYPAMACTIONPHASETALK__CTOR_OFFSET UNITYSDK_OFFSET(0x1CDB8E40)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByPamActionPhaseTalk_TypeDefinitionIndex = 19778;

	class ByPamActionPhaseTalk : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYPAMACTIONPHASETALK__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_2948C2F0CE2F8118(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByPamActionPhaseTalk*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByPamActionPhaseTalk*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYPAMACTIONPHASETALK_METHOD_4_2948C2F0CE2F8118_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_A929381BFF99FAAB(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByPamActionPhaseTalk* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByPamActionPhaseTalk*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYPAMACTIONPHASETALK_METHOD_4_A929381BFF99FAAB_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_EBC748AEE7E52451(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByPamActionPhaseTalk*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByPamActionPhaseTalk*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYPAMACTIONPHASETALK_METHOD_4_EBC748AEE7E52451_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_CEB0421A8D563B88(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByPamActionPhaseTalk* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByPamActionPhaseTalk*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYPAMACTIONPHASETALK_METHOD_4_CEB0421A8D563B88_OFFSET))(a1, a2);
		}
	};
}

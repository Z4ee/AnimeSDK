#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_BYPAMMOVEPHASETALK_METHOD_4_122D60A140984919_OFFSET UNITYSDK_OFFSET(0x1B2B11D0)
#define RPG_GAMECORE_BYPAMMOVEPHASETALK_METHOD_4_67B27AD8B91878A2_OFFSET UNITYSDK_OFFSET(0x1B2B1210)
#define RPG_GAMECORE_BYPAMMOVEPHASETALK_METHOD_4_8596E39BCA3E3FDC_OFFSET UNITYSDK_OFFSET(0x1B2B1350)
#define RPG_GAMECORE_BYPAMMOVEPHASETALK_METHOD_4_C5BAE5A7CD9F8F9D_OFFSET UNITYSDK_OFFSET(0x1B2B1380)
#define RPG_GAMECORE_BYPAMMOVEPHASETALK__CTOR_OFFSET UNITYSDK_OFFSET(0x1B2B1200)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByPamMovePhaseTalk_TypeDefinitionIndex = 19236;

	class ByPamMovePhaseTalk : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYPAMMOVEPHASETALK__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_122D60A140984919(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByPamMovePhaseTalk*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByPamMovePhaseTalk*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYPAMMOVEPHASETALK_METHOD_4_122D60A140984919_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_67B27AD8B91878A2(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByPamMovePhaseTalk* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByPamMovePhaseTalk*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYPAMMOVEPHASETALK_METHOD_4_67B27AD8B91878A2_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_8596E39BCA3E3FDC(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByPamMovePhaseTalk*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByPamMovePhaseTalk*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYPAMMOVEPHASETALK_METHOD_4_8596E39BCA3E3FDC_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_C5BAE5A7CD9F8F9D(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByPamMovePhaseTalk* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByPamMovePhaseTalk*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYPAMMOVEPHASETALK_METHOD_4_C5BAE5A7CD9F8F9D_OFFSET))(a1, a2);
		}
	};
}

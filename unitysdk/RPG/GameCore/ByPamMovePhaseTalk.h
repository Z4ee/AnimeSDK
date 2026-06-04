#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_BYPAMMOVEPHASETALK_METHOD_4_486D043FD71859FD_OFFSET UNITYSDK_OFFSET(0x19578000)
#define RPG_GAMECORE_BYPAMMOVEPHASETALK_METHOD_4_67B27AD8B91878A2_OFFSET UNITYSDK_OFFSET(0x19577EC0)
#define RPG_GAMECORE_BYPAMMOVEPHASETALK_METHOD_4_7F59D04C20E441F1_OFFSET UNITYSDK_OFFSET(0x19578080)
#define RPG_GAMECORE_BYPAMMOVEPHASETALK_METHOD_4_A94004502D50BE48_OFFSET UNITYSDK_OFFSET(0x19577DF0)
#define RPG_GAMECORE_BYPAMMOVEPHASETALK__CTOR_OFFSET UNITYSDK_OFFSET(0x19577E70)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByPamMovePhaseTalk_TypeDefinitionIndex = 18886;

	class ByPamMovePhaseTalk : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYPAMMOVEPHASETALK__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_A94004502D50BE48(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByPamMovePhaseTalk*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByPamMovePhaseTalk*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYPAMMOVEPHASETALK_METHOD_4_A94004502D50BE48_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_67B27AD8B91878A2(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByPamMovePhaseTalk* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByPamMovePhaseTalk*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYPAMMOVEPHASETALK_METHOD_4_67B27AD8B91878A2_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_486D043FD71859FD(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByPamMovePhaseTalk*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByPamMovePhaseTalk*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYPAMMOVEPHASETALK_METHOD_4_486D043FD71859FD_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_7F59D04C20E441F1(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByPamMovePhaseTalk* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByPamMovePhaseTalk*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYPAMMOVEPHASETALK_METHOD_4_7F59D04C20E441F1_OFFSET))(a1, a2);
		}
	};
}

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_ADVBYPLAYERHIDE_METHOD_4_107AF908548DBFAD_OFFSET UNITYSDK_OFFSET(0x1BE156D0)
#define RPG_GAMECORE_ADVBYPLAYERHIDE_METHOD_4_199F62C376732C92_OFFSET UNITYSDK_OFFSET(0x1BE15560)
#define RPG_GAMECORE_ADVBYPLAYERHIDE_METHOD_4_46C9F541BE27DB2C_OFFSET UNITYSDK_OFFSET(0x1BE156A0)
#define RPG_GAMECORE_ADVBYPLAYERHIDE_METHOD_4_C8D9B0683CAEE809_OFFSET UNITYSDK_OFFSET(0x1BE15520)
#define RPG_GAMECORE_ADVBYPLAYERHIDE__CTOR_OFFSET UNITYSDK_OFFSET(0x1BE15550)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AdvByPlayerHide_TypeDefinitionIndex = 19246;

	class AdvByPlayerHide : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVBYPLAYERHIDE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_C8D9B0683CAEE809(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AdvByPlayerHide*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AdvByPlayerHide*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVBYPLAYERHIDE_METHOD_4_C8D9B0683CAEE809_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_199F62C376732C92(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AdvByPlayerHide* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AdvByPlayerHide*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVBYPLAYERHIDE_METHOD_4_199F62C376732C92_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_46C9F541BE27DB2C(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::AdvByPlayerHide*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::AdvByPlayerHide*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVBYPLAYERHIDE_METHOD_4_46C9F541BE27DB2C_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_107AF908548DBFAD(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::AdvByPlayerHide* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::AdvByPlayerHide*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVBYPLAYERHIDE_METHOD_4_107AF908548DBFAD_OFFSET))(a1, a2);
		}
	};
}

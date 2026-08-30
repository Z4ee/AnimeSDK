#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_BYTURNOWNERHASACTIONINTURN_METHOD_4_175C6E9943355E58_OFFSET UNITYSDK_OFFSET(0x1CF68B00)
#define RPG_GAMECORE_BYTURNOWNERHASACTIONINTURN_METHOD_4_2440CBBC74B1629E_OFFSET UNITYSDK_OFFSET(0x1CF689C0)
#define RPG_GAMECORE_BYTURNOWNERHASACTIONINTURN_METHOD_4_4A6F58531E4EFB5D_OFFSET UNITYSDK_OFFSET(0x1CF68980)
#define RPG_GAMECORE_BYTURNOWNERHASACTIONINTURN_METHOD_4_FDC05BD3BFD1C3F9_OFFSET UNITYSDK_OFFSET(0x1CF68B30)
#define RPG_GAMECORE_BYTURNOWNERHASACTIONINTURN__CTOR_OFFSET UNITYSDK_OFFSET(0x1CF689B0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByTurnOwnerHasActionInTurn_TypeDefinitionIndex = 23215;

	class ByTurnOwnerHasActionInTurn : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYTURNOWNERHASACTIONINTURN__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_4A6F58531E4EFB5D(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByTurnOwnerHasActionInTurn*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByTurnOwnerHasActionInTurn*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYTURNOWNERHASACTIONINTURN_METHOD_4_4A6F58531E4EFB5D_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_2440CBBC74B1629E(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByTurnOwnerHasActionInTurn* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByTurnOwnerHasActionInTurn*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYTURNOWNERHASACTIONINTURN_METHOD_4_2440CBBC74B1629E_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_175C6E9943355E58(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByTurnOwnerHasActionInTurn*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByTurnOwnerHasActionInTurn*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYTURNOWNERHASACTIONINTURN_METHOD_4_175C6E9943355E58_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_FDC05BD3BFD1C3F9(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByTurnOwnerHasActionInTurn* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByTurnOwnerHasActionInTurn*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYTURNOWNERHASACTIONINTURN_METHOD_4_FDC05BD3BFD1C3F9_OFFSET))(a1, a2);
		}
	};
}

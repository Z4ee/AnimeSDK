#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_BYLOCALWIN_METHOD_4_993E68B47A639A32_OFFSET UNITYSDK_OFFSET(0x19575B50)
#define RPG_GAMECORE_BYLOCALWIN_METHOD_4_A953868FB7B40733_OFFSET UNITYSDK_OFFSET(0x195758C0)
#define RPG_GAMECORE_BYLOCALWIN_METHOD_4_BDF9891C50790BB9_OFFSET UNITYSDK_OFFSET(0x19575990)
#define RPG_GAMECORE_BYLOCALWIN_METHOD_4_E59D2D43D96EB81A_OFFSET UNITYSDK_OFFSET(0x19575AD0)
#define RPG_GAMECORE_BYLOCALWIN__CTOR_OFFSET UNITYSDK_OFFSET(0x19575940)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByLocalWin_TypeDefinitionIndex = 22249;

	class ByLocalWin : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYLOCALWIN__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_A953868FB7B40733(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByLocalWin*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByLocalWin*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYLOCALWIN_METHOD_4_A953868FB7B40733_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_BDF9891C50790BB9(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByLocalWin* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByLocalWin*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYLOCALWIN_METHOD_4_BDF9891C50790BB9_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_E59D2D43D96EB81A(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByLocalWin*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByLocalWin*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYLOCALWIN_METHOD_4_E59D2D43D96EB81A_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_993E68B47A639A32(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByLocalWin* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByLocalWin*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYLOCALWIN_METHOD_4_993E68B47A639A32_OFFSET))(a1, a2);
		}
	};
}

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_BYLOCALWIN_METHOD_4_B2ABF4F80FFA92F6_OFFSET UNITYSDK_OFFSET(0x1CDB7090)
#define RPG_GAMECORE_BYLOCALWIN_METHOD_4_BDF9891C50790BB9_OFFSET UNITYSDK_OFFSET(0x1CDB6F20)
#define RPG_GAMECORE_BYLOCALWIN_METHOD_4_CD5E66F504817983_OFFSET UNITYSDK_OFFSET(0x1CDB7060)
#define RPG_GAMECORE_BYLOCALWIN_METHOD_4_FEB97BD34FC9B932_OFFSET UNITYSDK_OFFSET(0x1CDB6EE0)
#define RPG_GAMECORE_BYLOCALWIN__CTOR_OFFSET UNITYSDK_OFFSET(0x1CDB6F10)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByLocalWin_TypeDefinitionIndex = 23266;

	class ByLocalWin : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYLOCALWIN__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_FEB97BD34FC9B932(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByLocalWin*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByLocalWin*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYLOCALWIN_METHOD_4_FEB97BD34FC9B932_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_BDF9891C50790BB9(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByLocalWin* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByLocalWin*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYLOCALWIN_METHOD_4_BDF9891C50790BB9_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_CD5E66F504817983(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByLocalWin*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByLocalWin*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYLOCALWIN_METHOD_4_CD5E66F504817983_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_B2ABF4F80FFA92F6(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByLocalWin* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByLocalWin*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYLOCALWIN_METHOD_4_B2ABF4F80FFA92F6_OFFSET))(a1, a2);
		}
	};
}

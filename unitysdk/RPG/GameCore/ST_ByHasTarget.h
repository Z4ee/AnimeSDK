#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_ST_BYHASTARGET_METHOD_4_15DEE8610530F24E_OFFSET UNITYSDK_OFFSET(0x1B77DEB0)
#define RPG_GAMECORE_ST_BYHASTARGET_METHOD_4_8709E3D1FEDC160D_OFFSET UNITYSDK_OFFSET(0x1B77DEF0)
#define RPG_GAMECORE_ST_BYHASTARGET_METHOD_4_EA196302EA97547A_OFFSET UNITYSDK_OFFSET(0x1B77E060)
#define RPG_GAMECORE_ST_BYHASTARGET_METHOD_4_F4F16259E2C7DA67_OFFSET UNITYSDK_OFFSET(0x1B77E030)
#define RPG_GAMECORE_ST_BYHASTARGET__CTOR_OFFSET UNITYSDK_OFFSET(0x1B77DEE0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ST_ByHasTarget_TypeDefinitionIndex = 19293;

	class ST_ByHasTarget : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ST_BYHASTARGET__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_15DEE8610530F24E(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ST_ByHasTarget*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ST_ByHasTarget*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ST_BYHASTARGET_METHOD_4_15DEE8610530F24E_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_8709E3D1FEDC160D(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ST_ByHasTarget* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ST_ByHasTarget*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ST_BYHASTARGET_METHOD_4_8709E3D1FEDC160D_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_F4F16259E2C7DA67(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ST_ByHasTarget*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ST_ByHasTarget*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ST_BYHASTARGET_METHOD_4_F4F16259E2C7DA67_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_EA196302EA97547A(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ST_ByHasTarget* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ST_ByHasTarget*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ST_BYHASTARGET_METHOD_4_EA196302EA97547A_OFFSET))(a1, a2);
		}
	};
}

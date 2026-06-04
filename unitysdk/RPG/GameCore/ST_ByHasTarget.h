#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_ST_BYHASTARGET_METHOD_4_625DEA9D3CC5F326_OFFSET UNITYSDK_OFFSET(0x19C14D70)
#define RPG_GAMECORE_ST_BYHASTARGET_METHOD_4_796052435CBDF007_OFFSET UNITYSDK_OFFSET(0x19C14B60)
#define RPG_GAMECORE_ST_BYHASTARGET_METHOD_4_8709E3D1FEDC160D_OFFSET UNITYSDK_OFFSET(0x19C14C30)
#define RPG_GAMECORE_ST_BYHASTARGET_METHOD_4_8A0837E498F012CE_OFFSET UNITYSDK_OFFSET(0x19C14DF0)
#define RPG_GAMECORE_ST_BYHASTARGET__CTOR_OFFSET UNITYSDK_OFFSET(0x19C14BE0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ST_ByHasTarget_TypeDefinitionIndex = 18943;

	class ST_ByHasTarget : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ST_BYHASTARGET__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_796052435CBDF007(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ST_ByHasTarget*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ST_ByHasTarget*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ST_BYHASTARGET_METHOD_4_796052435CBDF007_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_8709E3D1FEDC160D(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ST_ByHasTarget* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ST_ByHasTarget*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ST_BYHASTARGET_METHOD_4_8709E3D1FEDC160D_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_625DEA9D3CC5F326(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ST_ByHasTarget*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ST_ByHasTarget*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ST_BYHASTARGET_METHOD_4_625DEA9D3CC5F326_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_8A0837E498F012CE(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ST_ByHasTarget* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ST_ByHasTarget*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ST_BYHASTARGET_METHOD_4_8A0837E498F012CE_OFFSET))(a1, a2);
		}
	};
}

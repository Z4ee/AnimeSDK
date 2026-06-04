#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_BYISERAFLIPPERENTITYSHOW_METHOD_4_0E47B3B5314C6E30_OFFSET UNITYSDK_OFFSET(0x19562800)
#define RPG_GAMECORE_BYISERAFLIPPERENTITYSHOW_METHOD_4_686F8D57009D71FF_OFFSET UNITYSDK_OFFSET(0x195629C0)
#define RPG_GAMECORE_BYISERAFLIPPERENTITYSHOW_METHOD_4_B9DF471D0A5892E3_OFFSET UNITYSDK_OFFSET(0x19562940)
#define RPG_GAMECORE_BYISERAFLIPPERENTITYSHOW_METHOD_4_E7D5633B03849D0A_OFFSET UNITYSDK_OFFSET(0x19562730)
#define RPG_GAMECORE_BYISERAFLIPPERENTITYSHOW__CTOR_OFFSET UNITYSDK_OFFSET(0x195627B0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByIsEraFlipperEntityShow_TypeDefinitionIndex = 21107;

	class ByIsEraFlipperEntityShow : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISERAFLIPPERENTITYSHOW__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_E7D5633B03849D0A(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByIsEraFlipperEntityShow*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByIsEraFlipperEntityShow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISERAFLIPPERENTITYSHOW_METHOD_4_E7D5633B03849D0A_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_0E47B3B5314C6E30(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByIsEraFlipperEntityShow* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByIsEraFlipperEntityShow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISERAFLIPPERENTITYSHOW_METHOD_4_0E47B3B5314C6E30_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_B9DF471D0A5892E3(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByIsEraFlipperEntityShow*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByIsEraFlipperEntityShow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISERAFLIPPERENTITYSHOW_METHOD_4_B9DF471D0A5892E3_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_686F8D57009D71FF(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByIsEraFlipperEntityShow* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByIsEraFlipperEntityShow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISERAFLIPPERENTITYSHOW_METHOD_4_686F8D57009D71FF_OFFSET))(a1, a2);
		}
	};
}

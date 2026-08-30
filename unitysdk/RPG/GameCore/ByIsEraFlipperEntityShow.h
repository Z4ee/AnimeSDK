#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_BYISERAFLIPPERENTITYSHOW_METHOD_4_09539E47B7C01473_OFFSET UNITYSDK_OFFSET(0x1CD9F0A0)
#define RPG_GAMECORE_BYISERAFLIPPERENTITYSHOW_METHOD_4_0E47B3B5314C6E30_OFFSET UNITYSDK_OFFSET(0x1CD9F0E0)
#define RPG_GAMECORE_BYISERAFLIPPERENTITYSHOW_METHOD_4_5A564F581C56BA66_OFFSET UNITYSDK_OFFSET(0x1CD9F220)
#define RPG_GAMECORE_BYISERAFLIPPERENTITYSHOW_METHOD_4_AFC1E33811CA24DB_OFFSET UNITYSDK_OFFSET(0x1CD9F250)
#define RPG_GAMECORE_BYISERAFLIPPERENTITYSHOW__CTOR_OFFSET UNITYSDK_OFFSET(0x1CD9F0D0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByIsEraFlipperEntityShow_TypeDefinitionIndex = 22085;

	class ByIsEraFlipperEntityShow : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISERAFLIPPERENTITYSHOW__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_09539E47B7C01473(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByIsEraFlipperEntityShow*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByIsEraFlipperEntityShow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISERAFLIPPERENTITYSHOW_METHOD_4_09539E47B7C01473_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_0E47B3B5314C6E30(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByIsEraFlipperEntityShow* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByIsEraFlipperEntityShow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISERAFLIPPERENTITYSHOW_METHOD_4_0E47B3B5314C6E30_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_5A564F581C56BA66(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByIsEraFlipperEntityShow*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByIsEraFlipperEntityShow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISERAFLIPPERENTITYSHOW_METHOD_4_5A564F581C56BA66_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_AFC1E33811CA24DB(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByIsEraFlipperEntityShow* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByIsEraFlipperEntityShow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISERAFLIPPERENTITYSHOW_METHOD_4_AFC1E33811CA24DB_OFFSET))(a1, a2);
		}
	};
}

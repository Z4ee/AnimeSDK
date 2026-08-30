#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_BYCOMPAREISWOLFBROPUZZLEAVATAR_METHOD_4_217450E1CB534F55_OFFSET UNITYSDK_OFFSET(0x1C325F00)
#define RPG_GAMECORE_BYCOMPAREISWOLFBROPUZZLEAVATAR_METHOD_4_4D3ECF3BA9AB9444_OFFSET UNITYSDK_OFFSET(0x1C325D80)
#define RPG_GAMECORE_BYCOMPAREISWOLFBROPUZZLEAVATAR_METHOD_4_721442199BE8E7DF_OFFSET UNITYSDK_OFFSET(0x1C325DC0)
#define RPG_GAMECORE_BYCOMPAREISWOLFBROPUZZLEAVATAR_METHOD_4_88C53559E8A86D8C_OFFSET UNITYSDK_OFFSET(0x1C325F30)
#define RPG_GAMECORE_BYCOMPAREISWOLFBROPUZZLEAVATAR__CTOR_OFFSET UNITYSDK_OFFSET(0x1C325DB0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByCompareIsWolfBroPuzzleAvatar_TypeDefinitionIndex = 21741;

	class ByCompareIsWolfBroPuzzleAvatar : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPAREISWOLFBROPUZZLEAVATAR__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_4D3ECF3BA9AB9444(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByCompareIsWolfBroPuzzleAvatar*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByCompareIsWolfBroPuzzleAvatar*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPAREISWOLFBROPUZZLEAVATAR_METHOD_4_4D3ECF3BA9AB9444_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_721442199BE8E7DF(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByCompareIsWolfBroPuzzleAvatar* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByCompareIsWolfBroPuzzleAvatar*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPAREISWOLFBROPUZZLEAVATAR_METHOD_4_721442199BE8E7DF_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_217450E1CB534F55(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareIsWolfBroPuzzleAvatar*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareIsWolfBroPuzzleAvatar*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPAREISWOLFBROPUZZLEAVATAR_METHOD_4_217450E1CB534F55_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_88C53559E8A86D8C(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareIsWolfBroPuzzleAvatar* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareIsWolfBroPuzzleAvatar*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPAREISWOLFBROPUZZLEAVATAR_METHOD_4_88C53559E8A86D8C_OFFSET))(a1, a2);
		}
	};
}

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_BYCHECKELFTODAYMANAGED_METHOD_4_2A949B52139FE3CA_OFFSET UNITYSDK_OFFSET(0x1C2FC7C0)
#define RPG_GAMECORE_BYCHECKELFTODAYMANAGED_METHOD_4_3BB0106A8AEE93AB_OFFSET UNITYSDK_OFFSET(0x1C2FC940)
#define RPG_GAMECORE_BYCHECKELFTODAYMANAGED_METHOD_4_A2456C257C18B771_OFFSET UNITYSDK_OFFSET(0x1C2FC800)
#define RPG_GAMECORE_BYCHECKELFTODAYMANAGED_METHOD_4_CA52348690C6FE9E_OFFSET UNITYSDK_OFFSET(0x1C2FC970)
#define RPG_GAMECORE_BYCHECKELFTODAYMANAGED__CTOR_OFFSET UNITYSDK_OFFSET(0x1C2FC7F0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByCheckElfTodayManaged_TypeDefinitionIndex = 21489;

	class ByCheckElfTodayManaged : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCHECKELFTODAYMANAGED__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_2A949B52139FE3CA(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByCheckElfTodayManaged*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByCheckElfTodayManaged*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCHECKELFTODAYMANAGED_METHOD_4_2A949B52139FE3CA_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_A2456C257C18B771(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByCheckElfTodayManaged* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByCheckElfTodayManaged*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCHECKELFTODAYMANAGED_METHOD_4_A2456C257C18B771_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_3BB0106A8AEE93AB(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCheckElfTodayManaged*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCheckElfTodayManaged*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCHECKELFTODAYMANAGED_METHOD_4_3BB0106A8AEE93AB_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_CA52348690C6FE9E(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCheckElfTodayManaged* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCheckElfTodayManaged*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCHECKELFTODAYMANAGED_METHOD_4_CA52348690C6FE9E_OFFSET))(a1, a2);
		}
	};
}

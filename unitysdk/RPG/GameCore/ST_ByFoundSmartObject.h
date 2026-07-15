#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_ST_BYFOUNDSMARTOBJECT_METHOD_4_27C0A1ACF2AD2246_OFFSET UNITYSDK_OFFSET(0x1B77C4F0)
#define RPG_GAMECORE_ST_BYFOUNDSMARTOBJECT_METHOD_4_30846F98C39F0090_OFFSET UNITYSDK_OFFSET(0x1B77C3B0)
#define RPG_GAMECORE_ST_BYFOUNDSMARTOBJECT_METHOD_4_5C7477FE122D64BB_OFFSET UNITYSDK_OFFSET(0x1B77C520)
#define RPG_GAMECORE_ST_BYFOUNDSMARTOBJECT_METHOD_4_BDEC572DD6A6A453_OFFSET UNITYSDK_OFFSET(0x1B77C370)
#define RPG_GAMECORE_ST_BYFOUNDSMARTOBJECT__CTOR_OFFSET UNITYSDK_OFFSET(0x1B77C3A0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ST_ByFoundSmartObject_TypeDefinitionIndex = 19315;

	class ST_ByFoundSmartObject : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ST_BYFOUNDSMARTOBJECT__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_BDEC572DD6A6A453(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ST_ByFoundSmartObject*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ST_ByFoundSmartObject*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ST_BYFOUNDSMARTOBJECT_METHOD_4_BDEC572DD6A6A453_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_30846F98C39F0090(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ST_ByFoundSmartObject* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ST_ByFoundSmartObject*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ST_BYFOUNDSMARTOBJECT_METHOD_4_30846F98C39F0090_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_27C0A1ACF2AD2246(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ST_ByFoundSmartObject*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ST_ByFoundSmartObject*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ST_BYFOUNDSMARTOBJECT_METHOD_4_27C0A1ACF2AD2246_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_5C7477FE122D64BB(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ST_ByFoundSmartObject* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ST_ByFoundSmartObject*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ST_BYFOUNDSMARTOBJECT_METHOD_4_5C7477FE122D64BB_OFFSET))(a1, a2);
		}
	};
}

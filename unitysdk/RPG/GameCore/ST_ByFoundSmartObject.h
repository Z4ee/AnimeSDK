#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_ST_BYFOUNDSMARTOBJECT_METHOD_4_17CC1DF1E62268DF_OFFSET UNITYSDK_OFFSET(0x19C137D0)
#define RPG_GAMECORE_ST_BYFOUNDSMARTOBJECT_METHOD_4_30846F98C39F0090_OFFSET UNITYSDK_OFFSET(0x19C13610)
#define RPG_GAMECORE_ST_BYFOUNDSMARTOBJECT_METHOD_4_3AC28F1AC2D3DCEA_OFFSET UNITYSDK_OFFSET(0x19C13540)
#define RPG_GAMECORE_ST_BYFOUNDSMARTOBJECT_METHOD_4_3C3E34A7A0E4D843_OFFSET UNITYSDK_OFFSET(0x19C13750)
#define RPG_GAMECORE_ST_BYFOUNDSMARTOBJECT__CTOR_OFFSET UNITYSDK_OFFSET(0x19C135C0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ST_ByFoundSmartObject_TypeDefinitionIndex = 18965;

	class ST_ByFoundSmartObject : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ST_BYFOUNDSMARTOBJECT__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_3AC28F1AC2D3DCEA(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ST_ByFoundSmartObject*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ST_ByFoundSmartObject*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ST_BYFOUNDSMARTOBJECT_METHOD_4_3AC28F1AC2D3DCEA_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_30846F98C39F0090(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ST_ByFoundSmartObject* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ST_ByFoundSmartObject*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ST_BYFOUNDSMARTOBJECT_METHOD_4_30846F98C39F0090_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_3C3E34A7A0E4D843(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ST_ByFoundSmartObject*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ST_ByFoundSmartObject*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ST_BYFOUNDSMARTOBJECT_METHOD_4_3C3E34A7A0E4D843_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_17CC1DF1E62268DF(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ST_ByFoundSmartObject* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ST_ByFoundSmartObject*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ST_BYFOUNDSMARTOBJECT_METHOD_4_17CC1DF1E62268DF_OFFSET))(a1, a2);
		}
	};
}

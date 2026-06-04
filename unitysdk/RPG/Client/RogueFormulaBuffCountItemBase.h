#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class RogueTournBuffTypeRow; }
namespace System { class String; }

#define RPG_CLIENT_ROGUEFORMULABUFFCOUNTITEMBASE_GET_BUFFTYPEICONLARGEPATH_OFFSET UNITYSDK_OFFSET(0xC77E4C0)
#define RPG_CLIENT_ROGUEFORMULABUFFCOUNTITEMBASE_GET_BUFFTYPEICONPATH_OFFSET UNITYSDK_OFFSET(0xC77E410)
#define RPG_CLIENT_ROGUEFORMULABUFFCOUNTITEMBASE_GET_BUFFTYPEID_OFFSET UNITYSDK_OFFSET(0xC77E2C0)
#define RPG_CLIENT_ROGUEFORMULABUFFCOUNTITEMBASE_GET_BUFFTYPENAME_OFFSET UNITYSDK_OFFSET(0xC77E2D0)
#define RPG_CLIENT_ROGUEFORMULABUFFCOUNTITEMBASE_GET__BUFFTYPEROW_OFFSET UNITYSDK_OFFSET(0xC77E3B0)
#define RPG_CLIENT_ROGUEFORMULABUFFCOUNTITEMBASE__CTOR_OFFSET UNITYSDK_OFFSET(0xC77E280)

namespace RPG::Client
{
	inline static constexpr unsigned int RogueFormulaBuffCountItemBase_TypeDefinitionIndex = 62841;

	class RogueFormulaBuffCountItemBase : public ::System::Object
	{
	public:
		::System::UInt32 _BuffTypeID_k__BackingField; // 0x10

		::System::Void _ctor(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEFORMULABUFFCOUNTITEMBASE__CTOR_OFFSET))(this, a1);
		}

		::System::UInt32 get_BuffTypeID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEFORMULABUFFCOUNTITEMBASE_GET_BUFFTYPEID_OFFSET))(this);
		}

		::RPG::Client::TextID get_BuffTypeName()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEFORMULABUFFCOUNTITEMBASE_GET_BUFFTYPENAME_OFFSET))(this);
		}

		::System::String* get_BuffTypeIconPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEFORMULABUFFCOUNTITEMBASE_GET_BUFFTYPEICONPATH_OFFSET))(this);
		}

		::System::String* get_BuffTypeIconLargePath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEFORMULABUFFCOUNTITEMBASE_GET_BUFFTYPEICONLARGEPATH_OFFSET))(this);
		}

		::RPG::GameCore::RogueTournBuffTypeRow* get__BuffTypeRow()
		{
			return ((::RPG::GameCore::RogueTournBuffTypeRow*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEFORMULABUFFCOUNTITEMBASE_GET__BUFFTYPEROW_OFFSET))(this);
		}
	};
}

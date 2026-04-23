#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class RogueTournBuffTypeRow; }
namespace System { class String; }

#define RPG_CLIENT_ROGUEFORMULABUFFCOUNTITEMBASE_GET_BUFFTYPEICONLARGEPATH_OFFSET UNITYSDK_OFFSET(0xB032680)
#define RPG_CLIENT_ROGUEFORMULABUFFCOUNTITEMBASE_GET_BUFFTYPEICONPATH_OFFSET UNITYSDK_OFFSET(0xB0325D0)
#define RPG_CLIENT_ROGUEFORMULABUFFCOUNTITEMBASE_GET_BUFFTYPEID_OFFSET UNITYSDK_OFFSET(0xB032490)
#define RPG_CLIENT_ROGUEFORMULABUFFCOUNTITEMBASE_GET_BUFFTYPENAME_OFFSET UNITYSDK_OFFSET(0xB0324A0)
#define RPG_CLIENT_ROGUEFORMULABUFFCOUNTITEMBASE_GET__BUFFTYPEROW_OFFSET UNITYSDK_OFFSET(0xB032570)
#define RPG_CLIENT_ROGUEFORMULABUFFCOUNTITEMBASE__CTOR_OFFSET UNITYSDK_OFFSET(0xB032450)

namespace RPG::Client
{
	inline static constexpr unsigned int RogueFormulaBuffCountItemBase_TypeDefinitionIndex = 61908;

	class RogueFormulaBuffCountItemBase : public ::System::Object
	{
	public:
		::System::UInt32 _BuffTypeID_k__BackingField; // 0x10

		::System::Void _ctor(::System::UInt32 buffTypeID)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEFORMULABUFFCOUNTITEMBASE__CTOR_OFFSET))(this, buffTypeID);
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

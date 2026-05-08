#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/MihoyoSerializedScriptableObject.h"

namespace MoleMole { class ConfigNewbie_NewbieGroup; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_CONFIGNEWBIE_EXPORTTOJSON_OFFSET UNITYSDK_OFFSET(0x153DF550)
#define MOLEMOLE_CONFIGNEWBIE_RELOADNEWBIECONFIG_OFFSET UNITYSDK_OFFSET(0x153DF590)
#define MOLEMOLE_CONFIGNEWBIE__CTOR_OFFSET UNITYSDK_OFFSET(0x153DF5D0)

namespace MoleMole
{
	inline static constexpr unsigned int ConfigNewbie_TypeDefinitionIndex = 56122;

	class ConfigNewbie : public ::Foundation::MihoyoSerializedScriptableObject
	{
	public:
		::System::Collections::Generic::List_1<::MoleMole::ConfigNewbie_NewbieGroup*>* NewbieList; // 0x58

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGNEWBIE__CTOR_OFFSET))(this);
		}

		::System::Void ExportToJson()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGNEWBIE_EXPORTTOJSON_OFFSET))(this);
		}

		::System::Void ReloadNewbieConfig()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGNEWBIE_RELOADNEWBIECONFIG_OFFSET))(this);
		}
	};
}

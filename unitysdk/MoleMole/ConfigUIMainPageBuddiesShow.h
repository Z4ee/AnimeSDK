#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/MihoyoSerializedScriptableObject.h"

namespace MoleMole { class ConfigUIMainPageBuddiesShowItem; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_CONFIGUIMAINPAGEBUDDIESSHOW__CTOR_OFFSET UNITYSDK_OFFSET(0x19ADA190)

namespace MoleMole
{
	inline static constexpr unsigned int ConfigUIMainPageBuddiesShow_TypeDefinitionIndex = 88494;

	class ConfigUIMainPageBuddiesShow : public ::Foundation::MihoyoSerializedScriptableObject
	{
	public:
		::System::Collections::Generic::List_1<::MoleMole::ConfigUIMainPageBuddiesShowItem*>* Settings; // 0x58

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGUIMAINPAGEBUDDIESSHOW__CTOR_OFFSET))(this);
		}
	};
}

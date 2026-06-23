#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/MihoyoSerializedScriptableObject.h"

namespace MoleMole { class ConfigUIMainPageGeneralShowItem; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_CONFIGUIMAINPAGESHOW__CTOR_OFFSET UNITYSDK_OFFSET(0x1AA851F0)

namespace MoleMole
{
	inline static constexpr unsigned int ConfigUIMainPageShow_TypeDefinitionIndex = 83369;

	class ConfigUIMainPageShow : public ::Foundation::MihoyoSerializedScriptableObject
	{
	public:
		::System::Collections::Generic::List_1<::MoleMole::ConfigUIMainPageGeneralShowItem*>* Settings; // 0x58

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGUIMAINPAGESHOW__CTOR_OFFSET))(this);
		}
	};
}

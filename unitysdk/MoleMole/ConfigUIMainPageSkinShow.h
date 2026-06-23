#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/MihoyoSerializedScriptableObject.h"

namespace MoleMole { class ConfigUIMainPageSkinShowItem; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_CONFIGUIMAINPAGESKINSHOW__CTOR_OFFSET UNITYSDK_OFFSET(0x192B73B0)

namespace MoleMole
{
	inline static constexpr unsigned int ConfigUIMainPageSkinShow_TypeDefinitionIndex = 82678;

	class ConfigUIMainPageSkinShow : public ::Foundation::MihoyoSerializedScriptableObject
	{
	public:
		::System::Collections::Generic::List_1<::MoleMole::ConfigUIMainPageSkinShowItem*>* Settings; // 0x58

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGUIMAINPAGESKINSHOW__CTOR_OFFSET))(this);
		}
	};
}

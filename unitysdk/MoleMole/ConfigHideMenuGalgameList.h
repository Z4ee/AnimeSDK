#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/MihoyoSerializedScriptableObject.h"

namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_CONFIGHIDEMENUGALGAMELIST__CTOR_OFFSET UNITYSDK_OFFSET(0x14259A00)

namespace MoleMole
{
	inline static constexpr unsigned int ConfigHideMenuGalgameList_TypeDefinitionIndex = 60699;

	class ConfigHideMenuGalgameList : public ::Foundation::MihoyoSerializedScriptableObject
	{
	public:
		::System::Collections::Generic::List_1<::System::Int32>* galgameList; // 0x58

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGHIDEMENUGALGAMELIST__CTOR_OFFSET))(this);
		}
	};
}

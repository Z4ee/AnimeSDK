#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_PRELOADSINGLEGROUPCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x12BDE040)

namespace MoleMole
{
	inline static constexpr unsigned int PreloadSingleGroupConfig_TypeDefinitionIndex = 59586;

	class PreloadSingleGroupConfig : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::System::Int32>* prefabPathIds; // 0x10
		::System::Collections::Generic::List_1<::System::Int32>* assetPathIds; // 0x18
		::System::Int32 groupId; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_PRELOADSINGLEGROUPCONFIG__CTOR_OFFSET))(this);
		}
	};
}

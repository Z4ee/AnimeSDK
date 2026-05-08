#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class MainCityObjectStateGraphItem;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MAINCITYOBJECTSTATEGRAPH__CTOR_OFFSET UNITYSDK_OFFSET(0xF95A950)

inline static constexpr unsigned int MainCityObjectStateGraph_TypeDefinitionIndex = 41503;

class MainCityObjectStateGraph : public ::System::Object
{
public:
	::System::String* StateKey; // 0x10
	::System::Collections::Generic::List_1<::MainCityObjectStateGraphItem*>* ManagerItem; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MAINCITYOBJECTSTATEGRAPH__CTOR_OFFSET))(this);
	}
};

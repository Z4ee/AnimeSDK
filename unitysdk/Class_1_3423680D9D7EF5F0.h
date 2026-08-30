#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class MapDistrictDef; }
namespace RPG::Client { class MapEntityDef; }
namespace RPG::Client { class MapNpcDef; }
namespace RPG::Client { class MapPropDef; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_3423680D9D7EF5F0_METHOD_1_016158E5DEAADD20_OFFSET UNITYSDK_OFFSET(0xDD943E0)
#define CLASS_1_3423680D9D7EF5F0_METHOD_1_568AE7A1499723FD_OFFSET UNITYSDK_OFFSET(0xDD94240)
#define CLASS_1_3423680D9D7EF5F0_METHOD_1_D78B51BFDA4B8B32_OFFSET UNITYSDK_OFFSET(0xDD942E0)
#define CLASS_1_3423680D9D7EF5F0__CTOR_OFFSET UNITYSDK_OFFSET(0xDD94560)

inline static constexpr unsigned int Class_1_3423680D9D7EF5F0_TypeDefinitionIndex = 62191;

class Class_1_3423680D9D7EF5F0 : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::RPG::Client::MapNpcDef*>* EPCMNACKPLF; // 0x10
	::System::Collections::Generic::List_1<::RPG::Client::MapPropDef*>* BPPKNKJBABP; // 0x18
	::System::Collections::Generic::List_1<::RPG::Client::MapDistrictDef*>* ABMOPLPFDOM; // 0x20
	::System::Collections::Generic::List_1<::RPG::Client::MapNpcDef*>* GAPILEHAEGN; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3423680D9D7EF5F0__CTOR_OFFSET))(this);
	}

	::System::Boolean Method_1_568AE7A1499723FD()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3423680D9D7EF5F0_METHOD_1_568AE7A1499723FD_OFFSET))(this);
	}

	::System::Void Method_1_D78B51BFDA4B8B32()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3423680D9D7EF5F0_METHOD_1_D78B51BFDA4B8B32_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::RPG::Client::MapEntityDef*>* Method_1_016158E5DEAADD20()
	{
		return ((::System::Collections::Generic::List_1<::RPG::Client::MapEntityDef*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3423680D9D7EF5F0_METHOD_1_016158E5DEAADD20_OFFSET))(this);
	}
};

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class MapDistrictDef; }
namespace RPG::Client { class MapEntityDef; }
namespace RPG::Client { class MapNpcDef; }
namespace RPG::Client { class MapPropDef; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_3423680D9D7EF5F0_METHOD_1_016158E5DEAADD20_OFFSET UNITYSDK_OFFSET(0xC728920)
#define CLASS_1_3423680D9D7EF5F0_METHOD_1_568AE7A1499723FD_OFFSET UNITYSDK_OFFSET(0xC728780)
#define CLASS_1_3423680D9D7EF5F0_METHOD_1_D78B51BFDA4B8B32_OFFSET UNITYSDK_OFFSET(0xC728820)
#define CLASS_1_3423680D9D7EF5F0__CTOR_OFFSET UNITYSDK_OFFSET(0xC728AA0)

inline static constexpr unsigned int Class_1_3423680D9D7EF5F0_TypeDefinitionIndex = 58090;

class Class_1_3423680D9D7EF5F0 : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::RPG::Client::MapDistrictDef*>* Field_1_0; // 0x10
	::System::Collections::Generic::List_1<::RPG::Client::MapPropDef*>* Field_1_1; // 0x18
	::System::Collections::Generic::List_1<::RPG::Client::MapNpcDef*>* Field_1_2; // 0x20
	::System::Collections::Generic::List_1<::RPG::Client::MapNpcDef*>* Field_1_3; // 0x28

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

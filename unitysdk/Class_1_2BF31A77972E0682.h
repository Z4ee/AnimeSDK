#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CrosshairType.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_948;
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_2BF31A77972E0682_METHOD_1_79DD91C6EBB7D7B5_OFFSET UNITYSDK_OFFSET(0x11B7AF30)
#define CLASS_1_2BF31A77972E0682_METHOD_1_80FE5793C3B79107_OFFSET UNITYSDK_OFFSET(0x11B7B2E0)
#define CLASS_1_2BF31A77972E0682__CCTOR_OFFSET UNITYSDK_OFFSET(0x11B7B320)
#define CLASS_1_2BF31A77972E0682__CTOR_OFFSET UNITYSDK_OFFSET(0x11B7B310)

inline static constexpr unsigned int Class_1_2BF31A77972E0682_TypeDefinitionIndex = 65969;

class Class_1_2BF31A77972E0682 : public ::System::Object
{
public:
	static ::Class_0_16E4307DCC419505_948** StaticGet_Field_1_0()
	{
		return (::Class_0_16E4307DCC419505_948**)Il2CppClass::FromTypeDefinitionIndex(Class_1_2BF31A77972E0682_TypeDefinitionIndex)->GetStaticField(0x15800);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2BF31A77972E0682__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_2BF31A77972E0682__CCTOR_OFFSET))();
	}

	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CrosshairType, ::Class_0_16E4307DCC419505_948*>* Method_1_79DD91C6EBB7D7B5()
	{
		return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CrosshairType, ::Class_0_16E4307DCC419505_948*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_2BF31A77972E0682_METHOD_1_79DD91C6EBB7D7B5_OFFSET))();
	}

	static ::Class_0_16E4307DCC419505_948* Method_1_80FE5793C3B79107()
	{
		return ((::Class_0_16E4307DCC419505_948*(*)())((::PBYTE)hIl2Cpp + CLASS_1_2BF31A77972E0682_METHOD_1_80FE5793C3B79107_OFFSET))();
	}
};

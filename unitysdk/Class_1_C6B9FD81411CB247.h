#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CrosshairType.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_997;
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_C6B9FD81411CB247_METHOD_1_0E960E0720A45CCD_OFFSET UNITYSDK_OFFSET(0x1390CFA0)
#define CLASS_1_C6B9FD81411CB247_METHOD_1_80FE5793C3B79107_OFFSET UNITYSDK_OFFSET(0x1390D320)
#define CLASS_1_C6B9FD81411CB247__CCTOR_OFFSET UNITYSDK_OFFSET(0x1390D360)
#define CLASS_1_C6B9FD81411CB247__CTOR_OFFSET UNITYSDK_OFFSET(0x1390D350)

inline static constexpr unsigned int Class_1_C6B9FD81411CB247_TypeDefinitionIndex = 66902;

class Class_1_C6B9FD81411CB247 : public ::System::Object
{
public:
	static ::Class_0_16E4307DCC419505_997** StaticGet_Field_1_0()
	{
		return (::Class_0_16E4307DCC419505_997**)Il2CppClass::FromTypeDefinitionIndex(Class_1_C6B9FD81411CB247_TypeDefinitionIndex)->GetStaticField(0x4DB00);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C6B9FD81411CB247__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_C6B9FD81411CB247__CCTOR_OFFSET))();
	}

	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CrosshairType, ::Class_0_16E4307DCC419505_997*>* Method_1_0E960E0720A45CCD()
	{
		return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CrosshairType, ::Class_0_16E4307DCC419505_997*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_C6B9FD81411CB247_METHOD_1_0E960E0720A45CCD_OFFSET))();
	}

	static ::Class_0_16E4307DCC419505_997* Method_1_80FE5793C3B79107()
	{
		return ((::Class_0_16E4307DCC419505_997*(*)())((::PBYTE)hIl2Cpp + CLASS_1_C6B9FD81411CB247_METHOD_1_80FE5793C3B79107_OFFSET))();
	}
};

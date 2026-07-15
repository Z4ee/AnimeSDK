#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CrosshairType.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_1039;
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_4D2F350E5E5214A4_METHOD_1_6A8E7EF7C9D88596_OFFSET UNITYSDK_OFFSET(0x17541A20)
#define CLASS_1_4D2F350E5E5214A4_METHOD_1_E20365345CC9C440_OFFSET UNITYSDK_OFFSET(0x17541E50)
#define CLASS_1_4D2F350E5E5214A4__CCTOR_OFFSET UNITYSDK_OFFSET(0x17541EC0)
#define CLASS_1_4D2F350E5E5214A4__CTOR_OFFSET UNITYSDK_OFFSET(0x17541EB0)

inline static constexpr unsigned int Class_1_4D2F350E5E5214A4_TypeDefinitionIndex = 68344;

class Class_1_4D2F350E5E5214A4 : public ::System::Object
{
public:
	static ::Class_0_16E4307DCC419505_1039** StaticGet_Field_1_0()
	{
		return (::Class_0_16E4307DCC419505_1039**)Il2CppClass::FromTypeDefinitionIndex(Class_1_4D2F350E5E5214A4_TypeDefinitionIndex)->GetStaticField(0x5D8E0);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4D2F350E5E5214A4__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_4D2F350E5E5214A4__CCTOR_OFFSET))();
	}

	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CrosshairType, ::Class_0_16E4307DCC419505_1039*>* Method_1_6A8E7EF7C9D88596()
	{
		return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CrosshairType, ::Class_0_16E4307DCC419505_1039*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_4D2F350E5E5214A4_METHOD_1_6A8E7EF7C9D88596_OFFSET))();
	}

	static ::Class_0_16E4307DCC419505_1039* Method_1_E20365345CC9C440()
	{
		return ((::Class_0_16E4307DCC419505_1039*(*)())((::PBYTE)hIl2Cpp + CLASS_1_4D2F350E5E5214A4_METHOD_1_E20365345CC9C440_OFFSET))();
	}
};

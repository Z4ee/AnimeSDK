#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/DisableNpcSyncMovementReason.h"
#include "unitysdk/RPG/GameCore/GameComponentBase.h"

namespace RPG::Client { class MapNpcDef; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_2_E86FB8F9CDD478D5_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1A09D460)
#define CLASS_2_E86FB8F9CDD478D5_METHOD_2_15EBAB9A95536CDF_OFFSET UNITYSDK_OFFSET(0x1A09D4F0)
#define CLASS_2_E86FB8F9CDD478D5_METHOD_2_5BCEE452B6FE89B6_OFFSET UNITYSDK_OFFSET(0x1A09D5F0)
#define CLASS_2_E86FB8F9CDD478D5_METHOD_2_7C4DD1DAA824F058_OFFSET UNITYSDK_OFFSET(0x1A09D3E0)
#define CLASS_2_E86FB8F9CDD478D5_METHOD_2_9D1353263EAF48A2_OFFSET UNITYSDK_OFFSET(0x1A09D560)
#define CLASS_2_E86FB8F9CDD478D5_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x1A09D4A0)
#define CLASS_2_E86FB8F9CDD478D5__CCTOR_OFFSET UNITYSDK_OFFSET(0x1A09D7D0)
#define CLASS_2_E86FB8F9CDD478D5__CTOR_OFFSET UNITYSDK_OFFSET(0x1A09D7C0)

inline static constexpr unsigned int Class_2_E86FB8F9CDD478D5_TypeDefinitionIndex = 73210;

class Class_2_E86FB8F9CDD478D5 : public ::RPG::GameCore::GameComponentBase
{
public:
	static ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Single>** StaticGet_ADFEOKGIOKB()
	{
		return (::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Single>**)Il2CppClass::FromTypeDefinitionIndex(Class_2_E86FB8F9CDD478D5_TypeDefinitionIndex)->GetStaticField(0x60E20);
	}
	::System::Int32 GIGGAMCGNHL; // 0x18
	::System::Single OMPINHODDNK; // 0x1C
	::System::Boolean BFCNAEAPOEJ; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E86FB8F9CDD478D5__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_E86FB8F9CDD478D5__CCTOR_OFFSET))();
	}

	::System::Void Method_2_7C4DD1DAA824F058(::RPG::Client::MapNpcDef* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::MapNpcDef*))((::PBYTE)hIl2Cpp + CLASS_2_E86FB8F9CDD478D5_METHOD_2_7C4DD1DAA824F058_OFFSET))(this, a1);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E86FB8F9CDD478D5_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E86FB8F9CDD478D5_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_2_15EBAB9A95536CDF(::System::Boolean a1, ::RPG::Client::DisableNpcSyncMovementReason a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean, ::RPG::Client::DisableNpcSyncMovementReason))((::PBYTE)hIl2Cpp + CLASS_2_E86FB8F9CDD478D5_METHOD_2_15EBAB9A95536CDF_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_2_9D1353263EAF48A2(::System::Single a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_E86FB8F9CDD478D5_METHOD_2_9D1353263EAF48A2_OFFSET))(this, a1);
	}

	::System::Single Method_2_5BCEE452B6FE89B6()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E86FB8F9CDD478D5_METHOD_2_5BCEE452B6FE89B6_OFFSET))(this);
	}
};

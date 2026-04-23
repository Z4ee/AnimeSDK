#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/DisableNpcSyncMovementReason.h"
#include "unitysdk/RPG/GameCore/GameComponentBase.h"

namespace RPG::Client { class MapNpcDef; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_2_E86FB8F9CDD478D5_DISPOSE_OFFSET UNITYSDK_OFFSET(0x11ADBC70)
#define CLASS_2_E86FB8F9CDD478D5_METHOD_2_15EBAB9A95536CDF_OFFSET UNITYSDK_OFFSET(0x11ADBD00)
#define CLASS_2_E86FB8F9CDD478D5_METHOD_2_7C4DD1DAA824F058_OFFSET UNITYSDK_OFFSET(0x11ADBBF0)
#define CLASS_2_E86FB8F9CDD478D5_METHOD_2_9D1353263EAF48A2_OFFSET UNITYSDK_OFFSET(0x11ADBD70)
#define CLASS_2_E86FB8F9CDD478D5_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x11ADBCB0)
#define CLASS_2_E86FB8F9CDD478D5_METHOD_2_DAC9219D09D338F5_OFFSET UNITYSDK_OFFSET(0x11ADBE00)
#define CLASS_2_E86FB8F9CDD478D5__CCTOR_OFFSET UNITYSDK_OFFSET(0x11ADBF90)
#define CLASS_2_E86FB8F9CDD478D5__CTOR_OFFSET UNITYSDK_OFFSET(0x11ADBF80)

inline static constexpr unsigned int Class_2_E86FB8F9CDD478D5_TypeDefinitionIndex = 67505;

class Class_2_E86FB8F9CDD478D5 : public ::RPG::GameCore::GameComponentBase
{
public:
	static ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Single>** StaticGet_Field_2_0()
	{
		return (::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Single>**)Il2CppClass::FromTypeDefinitionIndex(Class_2_E86FB8F9CDD478D5_TypeDefinitionIndex)->GetStaticField(0x44C80);
	}
	::System::Single Field_2_1; // 0x18
	::System::Boolean Field_2_3; // 0x1C
	::System::Int32 Field_2_2; // 0x20

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

	::System::Single Method_2_DAC9219D09D338F5()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E86FB8F9CDD478D5_METHOD_2_DAC9219D09D338F5_OFFSET))(this);
	}
};

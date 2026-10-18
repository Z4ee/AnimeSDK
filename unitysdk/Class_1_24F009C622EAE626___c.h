#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_ED790DAC948A65A9_15.h"
#include "unitysdk/System/Object.h"

class Class_1_24F009C622EAE626;

#define CLASS_1_24F009C622EAE626___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1E0759B0)
#define CLASS_1_24F009C622EAE626___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1E0759F0)
#define CLASS_1_24F009C622EAE626___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1E075A00)
#define CLASS_1_24F009C622EAE626___C___CCTOR_B__28_1_OFFSET UNITYSDK_OFFSET(0x1E075A50)
#define CLASS_1_24F009C622EAE626___C___CCTOR_B__28_2_OFFSET UNITYSDK_OFFSET(0x1E075A60)

inline static constexpr unsigned int Class_1_24F009C622EAE626___c_TypeDefinitionIndex = 26381;

class Class_1_24F009C622EAE626___c : public ::System::Object
{
public:
	static ::Class_1_24F009C622EAE626___c** StaticGet___9()
	{
		return (::Class_1_24F009C622EAE626___c**)Il2CppClass::FromTypeDefinitionIndex(Class_1_24F009C622EAE626___c_TypeDefinitionIndex)->GetStaticField(0x11CF0);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_24F009C622EAE626___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_24F009C622EAE626___C__CTOR_OFFSET))(this);
	}

	::Class_1_24F009C622EAE626* __cctor_b__28_0()
	{
		return ((::Class_1_24F009C622EAE626*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_24F009C622EAE626___C___CCTOR_B__28_0_OFFSET))(this);
	}

	::System::Int32 __cctor_b__28_1(::Enum_3_ED790DAC948A65A9_15 a1)
	{
		return ((::System::Int32(*)(::PVOID, ::Enum_3_ED790DAC948A65A9_15))((::PBYTE)hIl2Cpp + CLASS_1_24F009C622EAE626___C___CCTOR_B__28_1_OFFSET))(this, a1);
	}

	::Enum_3_ED790DAC948A65A9_15 __cctor_b__28_2(::System::Int32 a1)
	{
		return ((::Enum_3_ED790DAC948A65A9_15(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_24F009C622EAE626___C___CCTOR_B__28_2_OFFSET))(this, a1);
	}
};

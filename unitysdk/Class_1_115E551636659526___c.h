#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_74AFEC3818196291;
class Class_1_FCC22A0BAD3D5A17;
namespace RPG::Client { class ItemDisplayData; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define CLASS_1_115E551636659526___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x16460670)
#define CLASS_1_115E551636659526___C__CTOR_OFFSET UNITYSDK_OFFSET(0x164606B0)
#define CLASS_1_115E551636659526___C__GET_ISSESSIONSETTLED_B__20_0_OFFSET UNITYSDK_OFFSET(0x164606C0)
#define CLASS_1_115E551636659526___C___CTOR_B__53_0_OFFSET UNITYSDK_OFFSET(0x16460710)
#define CLASS_1_115E551636659526___C___CTOR_B__53_2_OFFSET UNITYSDK_OFFSET(0x16460780)

inline static constexpr unsigned int Class_1_115E551636659526___c_TypeDefinitionIndex = 76648;

class Class_1_115E551636659526___c : public ::System::Object
{
public:
	static ::System::Func_2<::RPG::Client::ItemDisplayData*, ::Class_1_74AFEC3818196291*>** StaticGet___9__53_0()
	{
		return (::System::Func_2<::RPG::Client::ItemDisplayData*, ::Class_1_74AFEC3818196291*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_115E551636659526___c_TypeDefinitionIndex)->GetStaticField(0x2B6B0);
	}
	static ::System::Func_2<::Class_1_FCC22A0BAD3D5A17*, ::System::Boolean>** StaticGet___9__20_0()
	{
		return (::System::Func_2<::Class_1_FCC22A0BAD3D5A17*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_115E551636659526___c_TypeDefinitionIndex)->GetStaticField(0x2B6B8);
	}
	static ::System::Func_2<::RPG::Client::ItemDisplayData*, ::System::UInt32>** StaticGet___9__53_2()
	{
		return (::System::Func_2<::RPG::Client::ItemDisplayData*, ::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_115E551636659526___c_TypeDefinitionIndex)->GetStaticField(0x2B6C0);
	}
	static ::Class_1_115E551636659526___c** StaticGet___9()
	{
		return (::Class_1_115E551636659526___c**)Il2CppClass::FromTypeDefinitionIndex(Class_1_115E551636659526___c_TypeDefinitionIndex)->GetStaticField(0x2B6C8);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_115E551636659526___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_115E551636659526___C__CTOR_OFFSET))(this);
	}

	::System::Boolean _get_IsSessionSettled_b__20_0(::Class_1_FCC22A0BAD3D5A17* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_FCC22A0BAD3D5A17*))((::PBYTE)hIl2Cpp + CLASS_1_115E551636659526___C__GET_ISSESSIONSETTLED_B__20_0_OFFSET))(this, a1);
	}

	::Class_1_74AFEC3818196291* __ctor_b__53_0(::RPG::Client::ItemDisplayData* a1)
	{
		return ((::Class_1_74AFEC3818196291*(*)(::PVOID, ::RPG::Client::ItemDisplayData*))((::PBYTE)hIl2Cpp + CLASS_1_115E551636659526___C___CTOR_B__53_0_OFFSET))(this, a1);
	}

	::System::UInt32 __ctor_b__53_2(::RPG::Client::ItemDisplayData* a1)
	{
		return ((::System::UInt32(*)(::PVOID, ::RPG::Client::ItemDisplayData*))((::PBYTE)hIl2Cpp + CLASS_1_115E551636659526___C___CTOR_B__53_2_OFFSET))(this, a1);
	}
};

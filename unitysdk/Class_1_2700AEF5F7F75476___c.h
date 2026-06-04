#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_74AFEC3818196291;
class Class_1_FCC22A0BAD3D5A17;
namespace RPG::Client { class ItemDisplayData; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define CLASS_1_2700AEF5F7F75476___C__CCTOR_OFFSET UNITYSDK_OFFSET(0xAF37870)
#define CLASS_1_2700AEF5F7F75476___C__CTOR_OFFSET UNITYSDK_OFFSET(0xAF378B0)
#define CLASS_1_2700AEF5F7F75476___C__GET_ISSESSIONSETTLED_B__20_0_OFFSET UNITYSDK_OFFSET(0xAF378C0)
#define CLASS_1_2700AEF5F7F75476___C___CTOR_B__53_0_OFFSET UNITYSDK_OFFSET(0xAF378E0)
#define CLASS_1_2700AEF5F7F75476___C___CTOR_B__53_2_OFFSET UNITYSDK_OFFSET(0xAF37950)

inline static constexpr unsigned int Class_1_2700AEF5F7F75476___c_TypeDefinitionIndex = 74264;

class Class_1_2700AEF5F7F75476___c : public ::System::Object
{
public:
	static ::System::Func_2<::RPG::Client::ItemDisplayData*, ::System::UInt32>** StaticGet___9__53_2()
	{
		return (::System::Func_2<::RPG::Client::ItemDisplayData*, ::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_2700AEF5F7F75476___c_TypeDefinitionIndex)->GetStaticField(0x39250);
	}
	static ::System::Func_2<::RPG::Client::ItemDisplayData*, ::Class_1_74AFEC3818196291*>** StaticGet___9__53_0()
	{
		return (::System::Func_2<::RPG::Client::ItemDisplayData*, ::Class_1_74AFEC3818196291*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_2700AEF5F7F75476___c_TypeDefinitionIndex)->GetStaticField(0x39258);
	}
	static ::Class_1_2700AEF5F7F75476___c** StaticGet___9()
	{
		return (::Class_1_2700AEF5F7F75476___c**)Il2CppClass::FromTypeDefinitionIndex(Class_1_2700AEF5F7F75476___c_TypeDefinitionIndex)->GetStaticField(0x39260);
	}
	static ::System::Func_2<::Class_1_FCC22A0BAD3D5A17*, ::System::Boolean>** StaticGet___9__20_0()
	{
		return (::System::Func_2<::Class_1_FCC22A0BAD3D5A17*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_2700AEF5F7F75476___c_TypeDefinitionIndex)->GetStaticField(0x39268);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_2700AEF5F7F75476___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2700AEF5F7F75476___C__CTOR_OFFSET))(this);
	}

	::System::Boolean _get_IsSessionSettled_b__20_0(::Class_1_FCC22A0BAD3D5A17* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_FCC22A0BAD3D5A17*))((::PBYTE)hIl2Cpp + CLASS_1_2700AEF5F7F75476___C__GET_ISSESSIONSETTLED_B__20_0_OFFSET))(this, a1);
	}

	::Class_1_74AFEC3818196291* __ctor_b__53_0(::RPG::Client::ItemDisplayData* a1)
	{
		return ((::Class_1_74AFEC3818196291*(*)(::PVOID, ::RPG::Client::ItemDisplayData*))((::PBYTE)hIl2Cpp + CLASS_1_2700AEF5F7F75476___C___CTOR_B__53_0_OFFSET))(this, a1);
	}

	::System::UInt32 __ctor_b__53_2(::RPG::Client::ItemDisplayData* a1)
	{
		return ((::System::UInt32(*)(::PVOID, ::RPG::Client::ItemDisplayData*))((::PBYTE)hIl2Cpp + CLASS_1_2700AEF5F7F75476___C___CTOR_B__53_2_OFFSET))(this, a1);
	}
};

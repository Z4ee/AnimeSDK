#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_40CD888D5D4FCB5B.h"

class Class_3_EA02B975BED3466B;
namespace MoleMole::Battle { class Entity; }
namespace Nap::NapECS { class EcsEntity; }
namespace Nap::NapECS { class EcsWorld; }

#define CLASS_3_FB573D79216A03BA_CREATEFILTERS_OFFSET UNITYSDK_OFFSET(0x1329B580)
#define CLASS_3_FB573D79216A03BA_METHOD_3_1C9328F9DDBDEBF2_OFFSET UNITYSDK_OFFSET(0x1329DD60)
#define CLASS_3_FB573D79216A03BA_METHOD_3_1DA89DF9585853CF_1_OFFSET UNITYSDK_OFFSET(0x1329E1C0)
#define CLASS_3_FB573D79216A03BA_METHOD_3_1DA89DF9585853CF_OFFSET UNITYSDK_OFFSET(0x1329DBE0)
#define CLASS_3_FB573D79216A03BA_METHOD_3_24BB8FC4536BDA11_OFFSET UNITYSDK_OFFSET(0x1329C900)
#define CLASS_3_FB573D79216A03BA_METHOD_3_3DA827B93370F468_OFFSET UNITYSDK_OFFSET(0x1329BA70)
#define CLASS_3_FB573D79216A03BA_METHOD_3_86026B47A3027B67_1_OFFSET UNITYSDK_OFFSET(0x1329E220)
#define CLASS_3_FB573D79216A03BA_METHOD_3_86026B47A3027B67_OFFSET UNITYSDK_OFFSET(0x1329CD90)
#define CLASS_3_FB573D79216A03BA_METHOD_3_9143980FF691F7C6_OFFSET UNITYSDK_OFFSET(0x1329BF00)
#define CLASS_3_FB573D79216A03BA_METHOD_3_9A91C2C4893DAC19_OFFSET UNITYSDK_OFFSET(0x1329D5D0)
#define CLASS_3_FB573D79216A03BA_METHOD_3_9D6D482D0D66151C_1_OFFSET UNITYSDK_OFFSET(0x1329E2D0)
#define CLASS_3_FB573D79216A03BA_METHOD_3_9D6D482D0D66151C_OFFSET UNITYSDK_OFFSET(0x1329DBA0)
#define CLASS_3_FB573D79216A03BA_METHOD_3_BADC81CF9C936EDA_OFFSET UNITYSDK_OFFSET(0x1329C870)
#define CLASS_3_FB573D79216A03BA_METHOD_3_C20FDB87D3E31092_OFFSET UNITYSDK_OFFSET(0x1329B660)
#define CLASS_3_FB573D79216A03BA_METHOD_3_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x1329DB10)
#define CLASS_3_FB573D79216A03BA_METHOD_3_D82FC9E1F7A9C16E_OFFSET UNITYSDK_OFFSET(0x1329C6D0)
#define CLASS_3_FB573D79216A03BA_METHOD_3_E1A7B013DFC34302_OFFSET UNITYSDK_OFFSET(0x1329D020)
#define CLASS_3_FB573D79216A03BA_METHOD_3_E712C48FF2FEC12C_OFFSET UNITYSDK_OFFSET(0x1329CE40)
#define CLASS_3_FB573D79216A03BA_METHOD_3_F0D1795A02BA59E4_OFFSET UNITYSDK_OFFSET(0x1329DC40)
#define CLASS_3_FB573D79216A03BA_POSTLATEUPDATE_OFFSET UNITYSDK_OFFSET(0x1329B5D0)
#define CLASS_3_FB573D79216A03BA__CCTOR_OFFSET UNITYSDK_OFFSET(0x1329BA50)
#define CLASS_3_FB573D79216A03BA__CTOR_OFFSET UNITYSDK_OFFSET(0x1329BA00)

inline static constexpr unsigned int Class_3_FB573D79216A03BA_TypeDefinitionIndex = 76427;

class Class_3_FB573D79216A03BA : public ::Class_2_40CD888D5D4FCB5B
{
public:
	static ::System::Boolean* StaticGet_Field_3_1()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_3_FB573D79216A03BA_TypeDefinitionIndex)->GetStaticField(0xEAB0);
	}
	static ::System::Boolean* StaticGet_Field_3_0()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_3_FB573D79216A03BA_TypeDefinitionIndex)->GetStaticField(0xEAB1);
	}
	static ::System::Int32* StaticGet_Field_3_2()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_3_FB573D79216A03BA_TypeDefinitionIndex)->GetStaticField(0xEAB4);
	}
	static ::System::Int32* StaticGet_Field_3_4()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_3_FB573D79216A03BA_TypeDefinitionIndex)->GetStaticField(0xEAB8);
	}
	static ::System::Int32* StaticGet_Field_3_3()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_3_FB573D79216A03BA_TypeDefinitionIndex)->GetStaticField(0xEABC);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_FB573D79216A03BA__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_3_FB573D79216A03BA__CCTOR_OFFSET))();
	}

	::System::Void CreateFilters(::Nap::NapECS::EcsWorld* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Nap::NapECS::EcsWorld*))((::PBYTE)hIl2Cpp + CLASS_3_FB573D79216A03BA_CREATEFILTERS_OFFSET))(this, a1);
	}

	::System::Void PostLateUpdate()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_FB573D79216A03BA_POSTLATEUPDATE_OFFSET))(this);
	}

	static ::System::Void Method_3_3DA827B93370F468(::Class_3_EA02B975BED3466B* a1)
	{
		return ((::System::Void(*)(::Class_3_EA02B975BED3466B*))((::PBYTE)hIl2Cpp + CLASS_3_FB573D79216A03BA_METHOD_3_3DA827B93370F468_OFFSET))(a1);
	}

	static ::System::Void Method_3_D82FC9E1F7A9C16E(::MoleMole::Battle::Entity* a1, ::Class_3_EA02B975BED3466B* a2)
	{
		return ((::System::Void(*)(::MoleMole::Battle::Entity*, ::Class_3_EA02B975BED3466B*))((::PBYTE)hIl2Cpp + CLASS_3_FB573D79216A03BA_METHOD_3_D82FC9E1F7A9C16E_OFFSET))(a1, a2);
	}

	::System::Void Method_3_BADC81CF9C936EDA(::Nap::NapECS::EcsWorld* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Nap::NapECS::EcsWorld*))((::PBYTE)hIl2Cpp + CLASS_3_FB573D79216A03BA_METHOD_3_BADC81CF9C936EDA_OFFSET))(this, a1);
	}

	static ::System::Void Method_3_24BB8FC4536BDA11(::Class_3_EA02B975BED3466B* a1)
	{
		return ((::System::Void(*)(::Class_3_EA02B975BED3466B*))((::PBYTE)hIl2Cpp + CLASS_3_FB573D79216A03BA_METHOD_3_24BB8FC4536BDA11_OFFSET))(a1);
	}

	static ::System::Boolean Method_3_E712C48FF2FEC12C(::MoleMole::Battle::Entity* a1)
	{
		return ((::System::Boolean(*)(::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_3_FB573D79216A03BA_METHOD_3_E712C48FF2FEC12C_OFFSET))(a1);
	}

	static ::System::Void Method_3_E1A7B013DFC34302(::Class_3_EA02B975BED3466B* a1)
	{
		return ((::System::Void(*)(::Class_3_EA02B975BED3466B*))((::PBYTE)hIl2Cpp + CLASS_3_FB573D79216A03BA_METHOD_3_E1A7B013DFC34302_OFFSET))(a1);
	}

	::System::Void Method_3_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_FB573D79216A03BA_METHOD_3_CA373AA1C7054598_OFFSET))(this);
	}

	static ::System::Void Method_3_9D6D482D0D66151C(::Nap::NapECS::EcsEntity* a1)
	{
		return ((::System::Void(*)(::Nap::NapECS::EcsEntity*))((::PBYTE)hIl2Cpp + CLASS_3_FB573D79216A03BA_METHOD_3_9D6D482D0D66151C_OFFSET))(a1);
	}

	static ::System::Boolean Method_3_9A91C2C4893DAC19(::System::Boolean a1, ::System::Int32 a2)
	{
		return ((::System::Boolean(*)(::System::Boolean, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_3_FB573D79216A03BA_METHOD_3_9A91C2C4893DAC19_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_1DA89DF9585853CF(::System::Boolean a1)
	{
		return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_3_FB573D79216A03BA_METHOD_3_1DA89DF9585853CF_OFFSET))(a1);
	}

	static ::System::Boolean Method_3_F0D1795A02BA59E4(::MoleMole::Battle::Entity* a1, ::Class_3_EA02B975BED3466B* a2)
	{
		return ((::System::Boolean(*)(::MoleMole::Battle::Entity*, ::Class_3_EA02B975BED3466B*))((::PBYTE)hIl2Cpp + CLASS_3_FB573D79216A03BA_METHOD_3_F0D1795A02BA59E4_OFFSET))(a1, a2);
	}

	static ::System::Boolean Method_3_86026B47A3027B67()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_3_FB573D79216A03BA_METHOD_3_86026B47A3027B67_OFFSET))();
	}

	static ::System::Void Method_3_C20FDB87D3E31092()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_3_FB573D79216A03BA_METHOD_3_C20FDB87D3E31092_OFFSET))();
	}

	static ::System::Void Method_3_1DA89DF9585853CF_1(::System::Boolean a1)
	{
		return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_3_FB573D79216A03BA_METHOD_3_1DA89DF9585853CF_1_OFFSET))(a1);
	}

	static ::System::Boolean Method_3_86026B47A3027B67_1()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_3_FB573D79216A03BA_METHOD_3_86026B47A3027B67_1_OFFSET))();
	}

	static ::System::Void Method_3_1C9328F9DDBDEBF2(::Class_3_EA02B975BED3466B* a1)
	{
		return ((::System::Void(*)(::Class_3_EA02B975BED3466B*))((::PBYTE)hIl2Cpp + CLASS_3_FB573D79216A03BA_METHOD_3_1C9328F9DDBDEBF2_OFFSET))(a1);
	}

	static ::System::Boolean Method_3_9143980FF691F7C6(::System::UInt32 a1, ::Class_3_EA02B975BED3466B* a2)
	{
		return ((::System::Boolean(*)(::System::UInt32, ::Class_3_EA02B975BED3466B*))((::PBYTE)hIl2Cpp + CLASS_3_FB573D79216A03BA_METHOD_3_9143980FF691F7C6_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_9D6D482D0D66151C_1(::Nap::NapECS::EcsEntity* a1)
	{
		return ((::System::Void(*)(::Nap::NapECS::EcsEntity*))((::PBYTE)hIl2Cpp + CLASS_3_FB573D79216A03BA_METHOD_3_9D6D482D0D66151C_1_OFFSET))(a1);
	}
};

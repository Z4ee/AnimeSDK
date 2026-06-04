#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/GamePlayLockTarget.h"
#include "unitysdk/RPG/GameCore/AliveState.h"
#include "unitysdk/RPG/GameCore/EntityClassifyType.h"
#include "unitysdk/RPG/GameCore/SummonUnitFetchType.h"
#include "unitysdk/RPG/MVector3.h"
#include "unitysdk/Struct_2_6EE00E0FDA2B5B41.h"
#include "unitysdk/Struct_2_889E0D38E74661B7.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_401;
class Class_1_1C30CE192ABE4C54;
class Class_1_75C90DAFEEA96564;
class Class_1_DB9575801298F699;
class Class_1_E73FD98BBCD019D9;
class Class_2_D905714C1E15C1C8;
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class GameEntityList; }
namespace RPG::GameCore { class GameWorld; }
namespace System { class Action; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::Collections::Generic { template <typename T> class Queue_1; }

#define CLASS_1_72FF3C03F0F06A80_DISPOSE_OFFSET UNITYSDK_OFFSET(0x13B27940)
#define CLASS_1_72FF3C03F0F06A80_METHOD_1_011527D8FB36A26F_OFFSET UNITYSDK_OFFSET(0x13B2A600)
#define CLASS_1_72FF3C03F0F06A80_METHOD_1_02A3D10A9D535169_OFFSET UNITYSDK_OFFSET(0x13B2BE10)
#define CLASS_1_72FF3C03F0F06A80_METHOD_1_0DF667B874E73355_OFFSET UNITYSDK_OFFSET(0x13B29D80)
#define CLASS_1_72FF3C03F0F06A80_METHOD_1_1482C077084DE50C_OFFSET UNITYSDK_OFFSET(0x13B2B680)
#define CLASS_1_72FF3C03F0F06A80_METHOD_1_33C7BED99B56B9DD_OFFSET UNITYSDK_OFFSET(0x13B27FC0)
#define CLASS_1_72FF3C03F0F06A80_METHOD_1_41A074549EF25F63_OFFSET UNITYSDK_OFFSET(0x13B27D60)
#define CLASS_1_72FF3C03F0F06A80_METHOD_1_42073E1316C51A78_OFFSET UNITYSDK_OFFSET(0x13B2A8E0)
#define CLASS_1_72FF3C03F0F06A80_METHOD_1_44785C9FC37219D1_OFFSET UNITYSDK_OFFSET(0x13B2B440)
#define CLASS_1_72FF3C03F0F06A80_METHOD_1_4EFDA72519A56365_OFFSET UNITYSDK_OFFSET(0x13B2B8E0)
#define CLASS_1_72FF3C03F0F06A80_METHOD_1_554208C84546EE8E_OFFSET UNITYSDK_OFFSET(0x13B29A70)
#define CLASS_1_72FF3C03F0F06A80_METHOD_1_57D80B372834C5D1_OFFSET UNITYSDK_OFFSET(0x13B2B3F0)
#define CLASS_1_72FF3C03F0F06A80_METHOD_1_5F0036ED5CF109B4_OFFSET UNITYSDK_OFFSET(0x13B2AB10)
#define CLASS_1_72FF3C03F0F06A80_METHOD_1_6E7A8D76E6B5F951_OFFSET UNITYSDK_OFFSET(0x13B2A3F0)
#define CLASS_1_72FF3C03F0F06A80_METHOD_1_6F7271C62F1FE776_OFFSET UNITYSDK_OFFSET(0x13B27D00)
#define CLASS_1_72FF3C03F0F06A80_METHOD_1_70ABAF7F0B6E54DF_OFFSET UNITYSDK_OFFSET(0x13B2BE00)
#define CLASS_1_72FF3C03F0F06A80_METHOD_1_769397122774C788_OFFSET UNITYSDK_OFFSET(0x13B29E80)
#define CLASS_1_72FF3C03F0F06A80_METHOD_1_8E22B572EA9F050D_OFFSET UNITYSDK_OFFSET(0x13B2B1D0)
#define CLASS_1_72FF3C03F0F06A80_METHOD_1_9DBD959D061F1728_OFFSET UNITYSDK_OFFSET(0x13B2AA00)
#define CLASS_1_72FF3C03F0F06A80_METHOD_1_A587F1E4C3762D5D_OFFSET UNITYSDK_OFFSET(0x13B295B0)
#define CLASS_1_72FF3C03F0F06A80_METHOD_1_B16FBB9D56303988_OFFSET UNITYSDK_OFFSET(0x13B28CF0)
#define CLASS_1_72FF3C03F0F06A80_METHOD_1_B7C427C510E7A2B8_OFFSET UNITYSDK_OFFSET(0x13B2AEB0)
#define CLASS_1_72FF3C03F0F06A80_METHOD_1_B8DD1B0B439A4612_OFFSET UNITYSDK_OFFSET(0x13B2AD70)
#define CLASS_1_72FF3C03F0F06A80_METHOD_1_BBAF264BCBE15041_OFFSET UNITYSDK_OFFSET(0x13B293D0)
#define CLASS_1_72FF3C03F0F06A80_METHOD_1_C53DCE734C5CA1D1_OFFSET UNITYSDK_OFFSET(0x13B2AC40)
#define CLASS_1_72FF3C03F0F06A80_METHOD_1_C638E91FC0D3A13A_OFFSET UNITYSDK_OFFSET(0x13B27E20)
#define CLASS_1_72FF3C03F0F06A80_METHOD_1_D42F57640A6BFEF8_OFFSET UNITYSDK_OFFSET(0x13B2A7C0)
#define CLASS_1_72FF3C03F0F06A80_METHOD_1_D9BF9B27FAC3AAD2_OFFSET UNITYSDK_OFFSET(0x13B2B5C0)
#define CLASS_1_72FF3C03F0F06A80_METHOD_1_DC59AEFB5515A284_OFFSET UNITYSDK_OFFSET(0x13B2BDF0)
#define CLASS_1_72FF3C03F0F06A80_METHOD_1_E83C86A203FAF2A6_OFFSET UNITYSDK_OFFSET(0x13B2B360)
#define CLASS_1_72FF3C03F0F06A80_METHOD_1_EEB7AD9AD74B5FBF_OFFSET UNITYSDK_OFFSET(0x13B2B070)
#define CLASS_1_72FF3C03F0F06A80_METHOD_1_FEAB37832CDA8227_OFFSET UNITYSDK_OFFSET(0x13B2AFE0)
#define CLASS_1_72FF3C03F0F06A80__CTOR_OFFSET UNITYSDK_OFFSET(0x13B27620)

inline static constexpr unsigned int Class_1_72FF3C03F0F06A80_TypeDefinitionIndex = 56797;

class Class_1_72FF3C03F0F06A80 : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* Field_1_0; // 0x10
	::System::Collections::Generic::Queue_1<::RPG::GameCore::GameEntity*>* Field_1_1; // 0x18
	::RPG::GameCore::GameWorld* Field_1_2; // 0x20
	::System::Collections::Generic::Dictionary_2<::RPG::GameCore::GameEntity*, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*>* Field_1_3; // 0x28
	::System::Collections::Generic::List_1<::Class_1_75C90DAFEEA96564*>* Field_1_4; // 0x30
	::Il2CppArray<::RPG::GameCore::GameEntity*>* Field_1_5; // 0x38
	::System::Collections::Generic::List_1<::Struct_2_889E0D38E74661B7>* Field_1_6; // 0x40
	::System::Collections::Generic::Dictionary_2<::RPG::GameCore::GameEntity*, ::Class_1_E73FD98BBCD019D9*>* Field_1_7; // 0x48
	::System::UInt32 Field_1_8; // 0x50
	::Struct_2_6EE00E0FDA2B5B41 Field_1_9; // 0x54

	::System::Void _ctor(::RPG::GameCore::GameWorld* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameWorld*))((::PBYTE)hIl2Cpp + CLASS_1_72FF3C03F0F06A80__CTOR_OFFSET))(this, a1);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_72FF3C03F0F06A80_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_1_6F7271C62F1FE776(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_72FF3C03F0F06A80_METHOD_1_6F7271C62F1FE776_OFFSET))(this, a1);
	}

	::RPG::GameCore::GameEntity* Method_1_33C7BED99B56B9DD(::System::UInt32 a1, ::RPG::GameCore::GameEntity* a2, ::RPG::GameCore::GameEntity* a3, ::System::String* a4, ::RPG::MVector3 a5, ::System::Single a6, ::System::Single a7, ::System::Single a8, ::RPG::MVector3 a9, ::Class_2_D905714C1E15C1C8* a10, ::System::Action_1<::RPG::GameCore::GameEntity*>* a11, ::RPG::GameCore::EntityClassifyType a12, ::System::Boolean a13, ::Class_1_1C30CE192ABE4C54* a14)
	{
		return ((::RPG::GameCore::GameEntity*(*)(::PVOID, ::System::UInt32, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::GameEntity*, ::System::String*, ::RPG::MVector3, ::System::Single, ::System::Single, ::System::Single, ::RPG::MVector3, ::Class_2_D905714C1E15C1C8*, ::System::Action_1<::RPG::GameCore::GameEntity*>*, ::RPG::GameCore::EntityClassifyType, ::System::Boolean, ::Class_1_1C30CE192ABE4C54*))((::PBYTE)hIl2Cpp + CLASS_1_72FF3C03F0F06A80_METHOD_1_33C7BED99B56B9DD_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14);
	}

	::System::Boolean Method_1_BBAF264BCBE15041(::Class_2_D905714C1E15C1C8* a1, ::RPG::GameCore::GameEntity*& a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_2_D905714C1E15C1C8*, ::RPG::GameCore::GameEntity*&))((::PBYTE)hIl2Cpp + CLASS_1_72FF3C03F0F06A80_METHOD_1_BBAF264BCBE15041_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_A587F1E4C3762D5D(::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* a1, ::System::Boolean a2, ::System::Boolean a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_72FF3C03F0F06A80_METHOD_1_A587F1E4C3762D5D_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_B16FBB9D56303988(::RPG::GameCore::GameEntity* a1, ::System::Boolean a2, ::System::Boolean a3, ::System::Boolean a4, ::System::String* a5)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::System::Boolean, ::System::Boolean, ::System::Boolean, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_72FF3C03F0F06A80_METHOD_1_B16FBB9D56303988_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::System::Void Method_1_554208C84546EE8E()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_72FF3C03F0F06A80_METHOD_1_554208C84546EE8E_OFFSET))(this);
	}

	::System::Void Method_1_0DF667B874E73355(::System::UInt32 a1, ::RPG::GameCore::GameEntity* a2, ::RPG::GameCore::SummonUnitFetchType a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::SummonUnitFetchType))((::PBYTE)hIl2Cpp + CLASS_1_72FF3C03F0F06A80_METHOD_1_0DF667B874E73355_OFFSET))(this, a1, a2, a3);
	}

	::Class_1_DB9575801298F699* Method_1_6E7A8D76E6B5F951(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::GameEntity* a2, ::System::Action* a3, ::System::Action* a4, ::System::Action* a5, ::System::Boolean a6)
	{
		return ((::Class_1_DB9575801298F699*(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::GameEntity*, ::System::Action*, ::System::Action*, ::System::Action*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_72FF3C03F0F06A80_METHOD_1_6E7A8D76E6B5F951_OFFSET))(this, a1, a2, a3, a4, a5, a6);
	}

	::System::Boolean Method_1_011527D8FB36A26F(::Class_1_DB9575801298F699* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_DB9575801298F699*))((::PBYTE)hIl2Cpp + CLASS_1_72FF3C03F0F06A80_METHOD_1_011527D8FB36A26F_OFFSET))(this, a1);
	}

	::Class_1_DB9575801298F699* Method_1_D42F57640A6BFEF8(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::GameEntity* a2)
	{
		return ((::Class_1_DB9575801298F699*(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_1_72FF3C03F0F06A80_METHOD_1_D42F57640A6BFEF8_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_1_42073E1316C51A78(::Class_1_DB9575801298F699* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_DB9575801298F699*))((::PBYTE)hIl2Cpp + CLASS_1_72FF3C03F0F06A80_METHOD_1_42073E1316C51A78_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_9DBD959D061F1728(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::GameEntity* a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_1_72FF3C03F0F06A80_METHOD_1_9DBD959D061F1728_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_5F0036ED5CF109B4(::Class_1_DB9575801298F699* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_DB9575801298F699*))((::PBYTE)hIl2Cpp + CLASS_1_72FF3C03F0F06A80_METHOD_1_5F0036ED5CF109B4_OFFSET))(this, a1);
	}

	::System::Void Method_1_C53DCE734C5CA1D1(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::GameEntity* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_1_72FF3C03F0F06A80_METHOD_1_C53DCE734C5CA1D1_OFFSET))(this, a1, a2);
	}

	::RPG::GameCore::GameEntity* Method_1_B8DD1B0B439A4612(::RPG::GameCore::GameEntity* a1)
	{
		return ((::RPG::GameCore::GameEntity*(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_1_72FF3C03F0F06A80_METHOD_1_B8DD1B0B439A4612_OFFSET))(this, a1);
	}

	::RPG::GameCore::GameEntityList* Method_1_769397122774C788(::System::UInt32 a1, ::RPG::GameCore::GameEntity* a2, ::RPG::GameCore::SummonUnitFetchType a3)
	{
		return ((::RPG::GameCore::GameEntityList*(*)(::PVOID, ::System::UInt32, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::SummonUnitFetchType))((::PBYTE)hIl2Cpp + CLASS_1_72FF3C03F0F06A80_METHOD_1_769397122774C788_OFFSET))(this, a1, a2, a3);
	}

	::RPG::GameCore::GameEntityList* Method_1_B7C427C510E7A2B8(::RPG::GameCore::GameEntity* a1)
	{
		return ((::RPG::GameCore::GameEntityList*(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_1_72FF3C03F0F06A80_METHOD_1_B7C427C510E7A2B8_OFFSET))(this, a1);
	}

	::RPG::GameCore::GameEntity* Method_1_FEAB37832CDA8227(::System::String* a1)
	{
		return ((::RPG::GameCore::GameEntity*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_72FF3C03F0F06A80_METHOD_1_FEAB37832CDA8227_OFFSET))(this, a1);
	}

	::System::Void Method_1_EEB7AD9AD74B5FBF(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_1_72FF3C03F0F06A80_METHOD_1_EEB7AD9AD74B5FBF_OFFSET))(this, a1);
	}

	::System::Void Method_1_8E22B572EA9F050D(::Class_1_75C90DAFEEA96564* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_75C90DAFEEA96564*))((::PBYTE)hIl2Cpp + CLASS_1_72FF3C03F0F06A80_METHOD_1_8E22B572EA9F050D_OFFSET))(this, a1);
	}

	::System::Void Method_1_E83C86A203FAF2A6(::Class_1_75C90DAFEEA96564* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_75C90DAFEEA96564*))((::PBYTE)hIl2Cpp + CLASS_1_72FF3C03F0F06A80_METHOD_1_E83C86A203FAF2A6_OFFSET))(this, a1);
	}

	::System::Void Method_1_57D80B372834C5D1(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_1_72FF3C03F0F06A80_METHOD_1_57D80B372834C5D1_OFFSET))(this, a1);
	}

	::System::Void Method_1_44785C9FC37219D1(::RPG::Client::GamePlayLockTarget a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::GamePlayLockTarget, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_72FF3C03F0F06A80_METHOD_1_44785C9FC37219D1_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_D9BF9B27FAC3AAD2()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_72FF3C03F0F06A80_METHOD_1_D9BF9B27FAC3AAD2_OFFSET))(this);
	}

	::System::Void Method_1_1482C077084DE50C(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::AliveState a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::AliveState))((::PBYTE)hIl2Cpp + CLASS_1_72FF3C03F0F06A80_METHOD_1_1482C077084DE50C_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_4EFDA72519A56365(::Class_0_16E4307DCC419505_401* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_401*))((::PBYTE)hIl2Cpp + CLASS_1_72FF3C03F0F06A80_METHOD_1_4EFDA72519A56365_OFFSET))(this, a1);
	}

	::System::Void Method_1_41A074549EF25F63()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_72FF3C03F0F06A80_METHOD_1_41A074549EF25F63_OFFSET))(this);
	}

	::System::Void Method_1_C638E91FC0D3A13A()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_72FF3C03F0F06A80_METHOD_1_C638E91FC0D3A13A_OFFSET))(this);
	}

	::RPG::GameCore::GameWorld* Method_1_DC59AEFB5515A284()
	{
		return ((::RPG::GameCore::GameWorld*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_72FF3C03F0F06A80_METHOD_1_DC59AEFB5515A284_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* Method_1_70ABAF7F0B6E54DF()
	{
		return ((::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_72FF3C03F0F06A80_METHOD_1_70ABAF7F0B6E54DF_OFFSET))(this);
	}

	::System::UInt32 Method_1_02A3D10A9D535169()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_72FF3C03F0F06A80_METHOD_1_02A3D10A9D535169_OFFSET))(this);
	}
};

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_33B50469231C7D95.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_0_16E4307DCC419505_687;
class Class_2_0D3E1861111CA25D_Class_1_DF6B2E3DF289B41A;
class Class_2_0D3E1861111CA25D_Class_1_FF0D933DEAE4BD01;
namespace MoleMole::Battle { class Entity; }
namespace MoleMole::MiniGame::BangbooPartyGame { class MonoMarcelBlock; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_0D3E1861111CA25D_METHOD_2_01B234D029194B7D_OFFSET UNITYSDK_OFFSET(0x1299F340)
#define CLASS_2_0D3E1861111CA25D_METHOD_2_10803FF4BCC119C2_OFFSET UNITYSDK_OFFSET(0x1299FE50)
#define CLASS_2_0D3E1861111CA25D_METHOD_2_2685B6183E614529_OFFSET UNITYSDK_OFFSET(0x129A05E0)
#define CLASS_2_0D3E1861111CA25D_METHOD_2_30D1209326FA87FC_OFFSET UNITYSDK_OFFSET(0x1299FDA0)
#define CLASS_2_0D3E1861111CA25D_METHOD_2_323A963656E34238_OFFSET UNITYSDK_OFFSET(0x1299E800)
#define CLASS_2_0D3E1861111CA25D_METHOD_2_696A0431D8187A24_OFFSET UNITYSDK_OFFSET(0x1299E4D0)
#define CLASS_2_0D3E1861111CA25D_METHOD_2_937F8473216A3162_OFFSET UNITYSDK_OFFSET(0x1299E240)
#define CLASS_2_0D3E1861111CA25D_METHOD_2_A9BC9A121065253B_OFFSET UNITYSDK_OFFSET(0x129A00A0)
#define CLASS_2_0D3E1861111CA25D_METHOD_2_AA6AC38756233BD0_1_OFFSET UNITYSDK_OFFSET(0x129A0680)
#define CLASS_2_0D3E1861111CA25D_METHOD_2_AA6AC38756233BD0_OFFSET UNITYSDK_OFFSET(0x129A0550)
#define CLASS_2_0D3E1861111CA25D_METHOD_2_BBA49FAB086F388D_OFFSET UNITYSDK_OFFSET(0x1299E1F0)
#define CLASS_2_0D3E1861111CA25D_METHOD_2_CA373AA1C7054598_1_OFFSET UNITYSDK_OFFSET(0x129A07A0)
#define CLASS_2_0D3E1861111CA25D_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x129A0710)
#define CLASS_2_0D3E1861111CA25D_METHOD_2_CA3F53E2C37A8B2D_OFFSET UNITYSDK_OFFSET(0x1299F430)
#define CLASS_2_0D3E1861111CA25D_METHOD_2_DFE2C6EB6F9F3612_OFFSET UNITYSDK_OFFSET(0x129A0190)
#define CLASS_2_0D3E1861111CA25D_METHOD_2_F0E5333B48B6C5FF_OFFSET UNITYSDK_OFFSET(0x1299E870)
#define CLASS_2_0D3E1861111CA25D__CCTOR_OFFSET UNITYSDK_OFFSET(0x1299FE40)
#define CLASS_2_0D3E1861111CA25D__CTOR_OFFSET UNITYSDK_OFFSET(0x1299E0A0)

inline static constexpr unsigned int Class_2_0D3E1861111CA25D_TypeDefinitionIndex = 68519;

class Class_2_0D3E1861111CA25D : public ::Class_1_33B50469231C7D95
{
public:
	static ::System::Single* StaticGet_Field_2_6()
	{
		return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(Class_2_0D3E1861111CA25D_TypeDefinitionIndex)->GetStaticField(0xF130);
	}
	static ::System::Single* StaticGet_Field_2_3()
	{
		return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(Class_2_0D3E1861111CA25D_TypeDefinitionIndex)->GetStaticField(0xF134);
	}
	static ::System::Single* StaticGet_Field_2_4()
	{
		return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(Class_2_0D3E1861111CA25D_TypeDefinitionIndex)->GetStaticField(0xF138);
	}
	static ::System::Single* StaticGet_Field_2_5()
	{
		return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(Class_2_0D3E1861111CA25D_TypeDefinitionIndex)->GetStaticField(0xF13C);
	}
	::System::Collections::Generic::List_1<::Class_2_0D3E1861111CA25D_Class_1_DF6B2E3DF289B41A*>* Field_2_0; // 0x10
	::Class_0_16E4307DCC419505_687* Field_2_2; // 0x18
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::Class_2_0D3E1861111CA25D_Class_1_FF0D933DEAE4BD01*>* Field_2_1; // 0x20

	::System::Void _ctor(::Class_0_16E4307DCC419505_687* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_687*))((::PBYTE)hIl2Cpp + CLASS_2_0D3E1861111CA25D__CTOR_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_0D3E1861111CA25D__CCTOR_OFFSET))();
	}

	::System::Void Method_2_BBA49FAB086F388D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0D3E1861111CA25D_METHOD_2_BBA49FAB086F388D_OFFSET))(this);
	}

	::System::Void Method_2_696A0431D8187A24(::MoleMole::Battle::Entity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_2_0D3E1861111CA25D_METHOD_2_696A0431D8187A24_OFFSET))(this, a1);
	}

	::System::Void Method_2_323A963656E34238(::MoleMole::Battle::Entity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_2_0D3E1861111CA25D_METHOD_2_323A963656E34238_OFFSET))(this, a1);
	}

	::System::Void Method_2_F0E5333B48B6C5FF(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_0D3E1861111CA25D_METHOD_2_F0E5333B48B6C5FF_OFFSET))(this, a1);
	}

	::System::Void Method_2_30D1209326FA87FC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0D3E1861111CA25D_METHOD_2_30D1209326FA87FC_OFFSET))(this);
	}

	::System::Void Method_2_937F8473216A3162()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0D3E1861111CA25D_METHOD_2_937F8473216A3162_OFFSET))(this);
	}

	::Class_2_0D3E1861111CA25D_Class_1_DF6B2E3DF289B41A* Method_2_10803FF4BCC119C2(::MoleMole::MiniGame::BangbooPartyGame::MonoMarcelBlock* a1)
	{
		return ((::Class_2_0D3E1861111CA25D_Class_1_DF6B2E3DF289B41A*(*)(::PVOID, ::MoleMole::MiniGame::BangbooPartyGame::MonoMarcelBlock*))((::PBYTE)hIl2Cpp + CLASS_2_0D3E1861111CA25D_METHOD_2_10803FF4BCC119C2_OFFSET))(this, a1);
	}

	::System::Void Method_2_CA3F53E2C37A8B2D(::Class_2_0D3E1861111CA25D_Class_1_FF0D933DEAE4BD01* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_0D3E1861111CA25D_Class_1_FF0D933DEAE4BD01*))((::PBYTE)hIl2Cpp + CLASS_2_0D3E1861111CA25D_METHOD_2_CA3F53E2C37A8B2D_OFFSET))(this, a1);
	}

	::System::Void Method_2_AA6AC38756233BD0(::MoleMole::Battle::Entity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_2_0D3E1861111CA25D_METHOD_2_AA6AC38756233BD0_OFFSET))(this, a1);
	}

	::System::Void Method_2_2685B6183E614529(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_0D3E1861111CA25D_METHOD_2_2685B6183E614529_OFFSET))(this, a1);
	}

	::Class_2_0D3E1861111CA25D_Class_1_DF6B2E3DF289B41A* Method_2_A9BC9A121065253B(::UnityEngine::Vector3 a1)
	{
		return ((::Class_2_0D3E1861111CA25D_Class_1_DF6B2E3DF289B41A*(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_2_0D3E1861111CA25D_METHOD_2_A9BC9A121065253B_OFFSET))(this, a1);
	}

	::System::Void Method_2_AA6AC38756233BD0_1(::MoleMole::Battle::Entity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_2_0D3E1861111CA25D_METHOD_2_AA6AC38756233BD0_1_OFFSET))(this, a1);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0D3E1861111CA25D_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Boolean Method_2_01B234D029194B7D(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_2_0D3E1861111CA25D_METHOD_2_01B234D029194B7D_OFFSET))(this, a1, a2);
	}

	::MoleMole::MiniGame::BangbooPartyGame::MonoMarcelBlock* Method_2_DFE2C6EB6F9F3612(::UnityEngine::Vector3 a1)
	{
		return ((::MoleMole::MiniGame::BangbooPartyGame::MonoMarcelBlock*(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_2_0D3E1861111CA25D_METHOD_2_DFE2C6EB6F9F3612_OFFSET))(this, a1);
	}

	::System::Void Method_2_CA373AA1C7054598_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0D3E1861111CA25D_METHOD_2_CA373AA1C7054598_1_OFFSET))(this);
	}
};

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_33B50469231C7D95.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_0_16E4307DCC419505_296;
class Class_2_7A13F49B9930F473_Class_1_6A90028D873A938C_1;
class Class_3_DFD5D1FDB9D2A4AC;
namespace MoleMole::Battle { class Entity; }
namespace MoleMole::MiniGame::BangbooPartyGame { class MonoBangbooPartyAIPathPoint; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_7A13F49B9930F473_METHOD_2_01B234D029194B7D_OFFSET UNITYSDK_OFFSET(0x18FD1F70)
#define CLASS_2_7A13F49B9930F473_METHOD_2_0A6357CF183B0175_OFFSET UNITYSDK_OFFSET(0x18FD02C0)
#define CLASS_2_7A13F49B9930F473_METHOD_2_2685B6183E614529_OFFSET UNITYSDK_OFFSET(0x18FD3480)
#define CLASS_2_7A13F49B9930F473_METHOD_2_30D1209326FA87FC_OFFSET UNITYSDK_OFFSET(0x18FD3210)
#define CLASS_2_7A13F49B9930F473_METHOD_2_323A963656E34238_OFFSET UNITYSDK_OFFSET(0x18FD0840)
#define CLASS_2_7A13F49B9930F473_METHOD_2_4FDBEEC5224183A8_OFFSET UNITYSDK_OFFSET(0x18FD08B0)
#define CLASS_2_7A13F49B9930F473_METHOD_2_5C83194C2CD683A1_OFFSET UNITYSDK_OFFSET(0x18FD1C40)
#define CLASS_2_7A13F49B9930F473_METHOD_2_696A0431D8187A24_OFFSET UNITYSDK_OFFSET(0x18FD0510)
#define CLASS_2_7A13F49B9930F473_METHOD_2_98BF051CDE988F10_OFFSET UNITYSDK_OFFSET(0x18FD2060)
#define CLASS_2_7A13F49B9930F473_METHOD_2_99C13D148EE6E6F1_OFFSET UNITYSDK_OFFSET(0x18FD3150)
#define CLASS_2_7A13F49B9930F473_METHOD_2_AA6AC38756233BD0_1_OFFSET UNITYSDK_OFFSET(0x18FD33F0)
#define CLASS_2_7A13F49B9930F473_METHOD_2_AA6AC38756233BD0_2_OFFSET UNITYSDK_OFFSET(0x18FD3520)
#define CLASS_2_7A13F49B9930F473_METHOD_2_AA6AC38756233BD0_OFFSET UNITYSDK_OFFSET(0x18FD32D0)
#define CLASS_2_7A13F49B9930F473_METHOD_2_BFF345B7E44FBDC3_OFFSET UNITYSDK_OFFSET(0x18FD22B0)
#define CLASS_2_7A13F49B9930F473_METHOD_2_CA373AA1C7054598_1_OFFSET UNITYSDK_OFFSET(0x18FD35B0)
#define CLASS_2_7A13F49B9930F473_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x18FD3360)
#define CLASS_2_7A13F49B9930F473_METHOD_2_D8A36DBC7AA335E0_OFFSET UNITYSDK_OFFSET(0x18FD28C0)
#define CLASS_2_7A13F49B9930F473_METHOD_2_E71223BEA8F7B88B_OFFSET UNITYSDK_OFFSET(0x18FD2F20)
#define CLASS_2_7A13F49B9930F473_METHOD_2_F16162DCA65E9A3F_OFFSET UNITYSDK_OFFSET(0x18FD09F0)
#define CLASS_2_7A13F49B9930F473_METHOD_2_FF63E816B4D956CD_OFFSET UNITYSDK_OFFSET(0x18FD0310)
#define CLASS_2_7A13F49B9930F473__CCTOR_OFFSET UNITYSDK_OFFSET(0x18FD32B0)
#define CLASS_2_7A13F49B9930F473__CTOR_OFFSET UNITYSDK_OFFSET(0x18FD01F0)

inline static constexpr unsigned int Class_2_7A13F49B9930F473_TypeDefinitionIndex = 70176;

class Class_2_7A13F49B9930F473 : public ::Class_1_33B50469231C7D95
{
public:
	static ::System::Single* StaticGet_Field_2_3()
	{
		return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(Class_2_7A13F49B9930F473_TypeDefinitionIndex)->GetStaticField(0x127C0);
	}
	static ::System::Single* StaticGet_Field_2_4()
	{
		return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(Class_2_7A13F49B9930F473_TypeDefinitionIndex)->GetStaticField(0x127C4);
	}
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::Class_2_7A13F49B9930F473_Class_1_6A90028D873A938C_1*>* Field_2_1; // 0x10
	::System::Collections::Generic::List_1<::MoleMole::MiniGame::BangbooPartyGame::MonoBangbooPartyAIPathPoint*>* Field_2_2; // 0x18
	::Class_0_16E4307DCC419505_296* Field_2_0; // 0x20

	::System::Void _ctor(::Class_0_16E4307DCC419505_296* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_296*))((::PBYTE)hIl2Cpp + CLASS_2_7A13F49B9930F473__CTOR_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_7A13F49B9930F473__CCTOR_OFFSET))();
	}

	::System::Void Method_2_0A6357CF183B0175()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7A13F49B9930F473_METHOD_2_0A6357CF183B0175_OFFSET))(this);
	}

	::System::Void Method_2_696A0431D8187A24(::MoleMole::Battle::Entity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_2_7A13F49B9930F473_METHOD_2_696A0431D8187A24_OFFSET))(this, a1);
	}

	::System::Void Method_2_323A963656E34238(::MoleMole::Battle::Entity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_2_7A13F49B9930F473_METHOD_2_323A963656E34238_OFFSET))(this, a1);
	}

	::System::Void Method_2_4FDBEEC5224183A8(::MoleMole::Battle::Entity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_2_7A13F49B9930F473_METHOD_2_4FDBEEC5224183A8_OFFSET))(this, a1);
	}

	::System::Void Method_2_F16162DCA65E9A3F(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_7A13F49B9930F473_METHOD_2_F16162DCA65E9A3F_OFFSET))(this, a1);
	}

	::System::Void Method_2_30D1209326FA87FC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7A13F49B9930F473_METHOD_2_30D1209326FA87FC_OFFSET))(this);
	}

	::System::Void Method_2_98BF051CDE988F10(::Class_2_7A13F49B9930F473_Class_1_6A90028D873A938C_1* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_7A13F49B9930F473_Class_1_6A90028D873A938C_1*))((::PBYTE)hIl2Cpp + CLASS_2_7A13F49B9930F473_METHOD_2_98BF051CDE988F10_OFFSET))(this, a1);
	}

	::System::Void Method_2_AA6AC38756233BD0(::MoleMole::Battle::Entity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_2_7A13F49B9930F473_METHOD_2_AA6AC38756233BD0_OFFSET))(this, a1);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7A13F49B9930F473_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_2_99C13D148EE6E6F1(::Class_3_DFD5D1FDB9D2A4AC* a1, ::Class_2_7A13F49B9930F473_Class_1_6A90028D873A938C_1* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_DFD5D1FDB9D2A4AC*, ::Class_2_7A13F49B9930F473_Class_1_6A90028D873A938C_1*))((::PBYTE)hIl2Cpp + CLASS_2_7A13F49B9930F473_METHOD_2_99C13D148EE6E6F1_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_5C83194C2CD683A1(::MoleMole::MiniGame::BangbooPartyGame::MonoBangbooPartyAIPathPoint* a1, ::System::Collections::Generic::List_1<::MoleMole::MiniGame::BangbooPartyGame::MonoBangbooPartyAIPathPoint*>*& a2)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::MiniGame::BangbooPartyGame::MonoBangbooPartyAIPathPoint*, ::System::Collections::Generic::List_1<::MoleMole::MiniGame::BangbooPartyGame::MonoBangbooPartyAIPathPoint*>*&))((::PBYTE)hIl2Cpp + CLASS_2_7A13F49B9930F473_METHOD_2_5C83194C2CD683A1_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_D8A36DBC7AA335E0(::Class_3_DFD5D1FDB9D2A4AC* a1, ::Class_2_7A13F49B9930F473_Class_1_6A90028D873A938C_1* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_DFD5D1FDB9D2A4AC*, ::Class_2_7A13F49B9930F473_Class_1_6A90028D873A938C_1*))((::PBYTE)hIl2Cpp + CLASS_2_7A13F49B9930F473_METHOD_2_D8A36DBC7AA335E0_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_AA6AC38756233BD0_1(::MoleMole::Battle::Entity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_2_7A13F49B9930F473_METHOD_2_AA6AC38756233BD0_1_OFFSET))(this, a1);
	}

	::System::Void Method_2_2685B6183E614529(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_7A13F49B9930F473_METHOD_2_2685B6183E614529_OFFSET))(this, a1);
	}

	::System::Void Method_2_E71223BEA8F7B88B(::Class_2_7A13F49B9930F473_Class_1_6A90028D873A938C_1* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_7A13F49B9930F473_Class_1_6A90028D873A938C_1*))((::PBYTE)hIl2Cpp + CLASS_2_7A13F49B9930F473_METHOD_2_E71223BEA8F7B88B_OFFSET))(this, a1);
	}

	::System::Void Method_2_AA6AC38756233BD0_2(::MoleMole::Battle::Entity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_2_7A13F49B9930F473_METHOD_2_AA6AC38756233BD0_2_OFFSET))(this, a1);
	}

	::System::Void Method_2_BFF345B7E44FBDC3(::Class_3_DFD5D1FDB9D2A4AC* a1, ::Class_2_7A13F49B9930F473_Class_1_6A90028D873A938C_1* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_DFD5D1FDB9D2A4AC*, ::Class_2_7A13F49B9930F473_Class_1_6A90028D873A938C_1*))((::PBYTE)hIl2Cpp + CLASS_2_7A13F49B9930F473_METHOD_2_BFF345B7E44FBDC3_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_FF63E816B4D956CD()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7A13F49B9930F473_METHOD_2_FF63E816B4D956CD_OFFSET))(this);
	}

	::System::Void Method_2_CA373AA1C7054598_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7A13F49B9930F473_METHOD_2_CA373AA1C7054598_1_OFFSET))(this);
	}

	::System::Boolean Method_2_01B234D029194B7D(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_2_7A13F49B9930F473_METHOD_2_01B234D029194B7D_OFFSET))(this, a1, a2);
	}
};

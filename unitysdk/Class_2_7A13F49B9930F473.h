#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_33B50469231C7D95.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_0_16E4307DCC419505_643;
class Class_2_7A13F49B9930F473_Class_1_6A90028D873A938C_1;
class Class_3_C93CC3D2C2AC4067;
namespace MoleMole::Battle { class Entity; }
namespace MoleMole::MiniGame::BangbooPartyGame { class MonoBangbooPartyAIPathPoint; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_7A13F49B9930F473_METHOD_2_01B234D029194B7D_OFFSET UNITYSDK_OFFSET(0x10690D30)
#define CLASS_2_7A13F49B9930F473_METHOD_2_0A6357CF183B0175_OFFSET UNITYSDK_OFFSET(0x1068F090)
#define CLASS_2_7A13F49B9930F473_METHOD_2_2685B6183E614529_OFFSET UNITYSDK_OFFSET(0x10692260)
#define CLASS_2_7A13F49B9930F473_METHOD_2_30D1209326FA87FC_OFFSET UNITYSDK_OFFSET(0x10691F60)
#define CLASS_2_7A13F49B9930F473_METHOD_2_323A963656E34238_OFFSET UNITYSDK_OFFSET(0x1068F570)
#define CLASS_2_7A13F49B9930F473_METHOD_2_4FDBEEC5224183A8_OFFSET UNITYSDK_OFFSET(0x1068F5E0)
#define CLASS_2_7A13F49B9930F473_METHOD_2_5C83194C2CD683A1_OFFSET UNITYSDK_OFFSET(0x10690A00)
#define CLASS_2_7A13F49B9930F473_METHOD_2_962EDE88CDFB66C7_OFFSET UNITYSDK_OFFSET(0x10691660)
#define CLASS_2_7A13F49B9930F473_METHOD_2_98BF051CDE988F10_OFFSET UNITYSDK_OFFSET(0x10690E10)
#define CLASS_2_7A13F49B9930F473_METHOD_2_99C13D148EE6E6F1_OFFSET UNITYSDK_OFFSET(0x10691EA0)
#define CLASS_2_7A13F49B9930F473_METHOD_2_AA6AC38756233BD0_1_OFFSET UNITYSDK_OFFSET(0x106920B0)
#define CLASS_2_7A13F49B9930F473_METHOD_2_AA6AC38756233BD0_2_OFFSET UNITYSDK_OFFSET(0x106921D0)
#define CLASS_2_7A13F49B9930F473_METHOD_2_AA6AC38756233BD0_OFFSET UNITYSDK_OFFSET(0x10692020)
#define CLASS_2_7A13F49B9930F473_METHOD_2_BFF345B7E44FBDC3_OFFSET UNITYSDK_OFFSET(0x10691060)
#define CLASS_2_7A13F49B9930F473_METHOD_2_CA373AA1C7054598_1_OFFSET UNITYSDK_OFFSET(0x10692300)
#define CLASS_2_7A13F49B9930F473_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x10692140)
#define CLASS_2_7A13F49B9930F473_METHOD_2_E71223BEA8F7B88B_OFFSET UNITYSDK_OFFSET(0x10691C80)
#define CLASS_2_7A13F49B9930F473_METHOD_2_F0E1935F87C80547_OFFSET UNITYSDK_OFFSET(0x1068F2E0)
#define CLASS_2_7A13F49B9930F473_METHOD_2_F16162DCA65E9A3F_OFFSET UNITYSDK_OFFSET(0x1068F720)
#define CLASS_2_7A13F49B9930F473_METHOD_2_FF63E816B4D956CD_OFFSET UNITYSDK_OFFSET(0x1068F0E0)
#define CLASS_2_7A13F49B9930F473__CCTOR_OFFSET UNITYSDK_OFFSET(0x10692000)
#define CLASS_2_7A13F49B9930F473__CTOR_OFFSET UNITYSDK_OFFSET(0x1068EFC0)

inline static constexpr unsigned int Class_2_7A13F49B9930F473_TypeDefinitionIndex = 72594;

class Class_2_7A13F49B9930F473 : public ::Class_1_33B50469231C7D95
{
public:
	static ::System::Single* StaticGet_Field_2_5()
	{
		return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(Class_2_7A13F49B9930F473_TypeDefinitionIndex)->GetStaticField(0x10E60);
	}
	static ::System::Single* StaticGet_Field_2_6()
	{
		return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(Class_2_7A13F49B9930F473_TypeDefinitionIndex)->GetStaticField(0x10E64);
	}
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::Class_2_7A13F49B9930F473_Class_1_6A90028D873A938C_1*>* Field_2_0; // 0x10
	::Class_0_16E4307DCC419505_643* Field_2_1; // 0x18
	::System::Collections::Generic::List_1<::MoleMole::MiniGame::BangbooPartyGame::MonoBangbooPartyAIPathPoint*>* Field_2_7; // 0x20

	::System::Void _ctor(::Class_0_16E4307DCC419505_643* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_643*))((::PBYTE)hIl2Cpp + CLASS_2_7A13F49B9930F473__CTOR_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_7A13F49B9930F473__CCTOR_OFFSET))();
	}

	::System::Void Method_2_0A6357CF183B0175()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7A13F49B9930F473_METHOD_2_0A6357CF183B0175_OFFSET))(this);
	}

	::System::Void Method_2_F0E1935F87C80547(::MoleMole::Battle::Entity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_2_7A13F49B9930F473_METHOD_2_F0E1935F87C80547_OFFSET))(this, a1);
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

	::System::Void Method_2_AA6AC38756233BD0(::MoleMole::Battle::Entity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_2_7A13F49B9930F473_METHOD_2_AA6AC38756233BD0_OFFSET))(this, a1);
	}

	::System::Void Method_2_5C83194C2CD683A1(::MoleMole::MiniGame::BangbooPartyGame::MonoBangbooPartyAIPathPoint* a1, ::System::Collections::Generic::List_1<::MoleMole::MiniGame::BangbooPartyGame::MonoBangbooPartyAIPathPoint*>*& a2)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::MiniGame::BangbooPartyGame::MonoBangbooPartyAIPathPoint*, ::System::Collections::Generic::List_1<::MoleMole::MiniGame::BangbooPartyGame::MonoBangbooPartyAIPathPoint*>*&))((::PBYTE)hIl2Cpp + CLASS_2_7A13F49B9930F473_METHOD_2_5C83194C2CD683A1_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_AA6AC38756233BD0_1(::MoleMole::Battle::Entity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_2_7A13F49B9930F473_METHOD_2_AA6AC38756233BD0_1_OFFSET))(this, a1);
	}

	::System::Void Method_2_98BF051CDE988F10(::Class_2_7A13F49B9930F473_Class_1_6A90028D873A938C_1* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_7A13F49B9930F473_Class_1_6A90028D873A938C_1*))((::PBYTE)hIl2Cpp + CLASS_2_7A13F49B9930F473_METHOD_2_98BF051CDE988F10_OFFSET))(this, a1);
	}

	::System::Void Method_2_E71223BEA8F7B88B(::Class_2_7A13F49B9930F473_Class_1_6A90028D873A938C_1* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_7A13F49B9930F473_Class_1_6A90028D873A938C_1*))((::PBYTE)hIl2Cpp + CLASS_2_7A13F49B9930F473_METHOD_2_E71223BEA8F7B88B_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_01B234D029194B7D(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_2_7A13F49B9930F473_METHOD_2_01B234D029194B7D_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7A13F49B9930F473_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_2_BFF345B7E44FBDC3(::Class_3_C93CC3D2C2AC4067* a1, ::Class_2_7A13F49B9930F473_Class_1_6A90028D873A938C_1* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_C93CC3D2C2AC4067*, ::Class_2_7A13F49B9930F473_Class_1_6A90028D873A938C_1*))((::PBYTE)hIl2Cpp + CLASS_2_7A13F49B9930F473_METHOD_2_BFF345B7E44FBDC3_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_AA6AC38756233BD0_2(::MoleMole::Battle::Entity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_2_7A13F49B9930F473_METHOD_2_AA6AC38756233BD0_2_OFFSET))(this, a1);
	}

	::System::Void Method_2_99C13D148EE6E6F1(::Class_3_C93CC3D2C2AC4067* a1, ::Class_2_7A13F49B9930F473_Class_1_6A90028D873A938C_1* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_C93CC3D2C2AC4067*, ::Class_2_7A13F49B9930F473_Class_1_6A90028D873A938C_1*))((::PBYTE)hIl2Cpp + CLASS_2_7A13F49B9930F473_METHOD_2_99C13D148EE6E6F1_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_962EDE88CDFB66C7(::Class_3_C93CC3D2C2AC4067* a1, ::Class_2_7A13F49B9930F473_Class_1_6A90028D873A938C_1* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_C93CC3D2C2AC4067*, ::Class_2_7A13F49B9930F473_Class_1_6A90028D873A938C_1*))((::PBYTE)hIl2Cpp + CLASS_2_7A13F49B9930F473_METHOD_2_962EDE88CDFB66C7_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_FF63E816B4D956CD()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7A13F49B9930F473_METHOD_2_FF63E816B4D956CD_OFFSET))(this);
	}

	::System::Void Method_2_2685B6183E614529(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_7A13F49B9930F473_METHOD_2_2685B6183E614529_OFFSET))(this, a1);
	}

	::System::Void Method_2_CA373AA1C7054598_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7A13F49B9930F473_METHOD_2_CA373AA1C7054598_1_OFFSET))(this);
	}
};

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_D5DA62FC7DE2D532.h"
#include "unitysdk/RPG/Client/WorldShiftingReason.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_64D890C466F37235;
class Class_2_127F2B7B6F67B1A0_Class_1_D2A5FF10ABB22F68;
class Class_2_127F2B7B6F67B1A0_Class_1_E245A68A367C9F00;
class Class_2_36C95D73718D07B1;
namespace RPG::Client { class AdventurePhase; }
namespace RPG::Client { class MapRotationInfo; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }

#define CLASS_2_127F2B7B6F67B1A0_DISPOSE_OFFSET UNITYSDK_OFFSET(0x11819760)
#define CLASS_2_127F2B7B6F67B1A0_METHOD_2_171A4D4799D0DC21_OFFSET UNITYSDK_OFFSET(0x1181CE20)
#define CLASS_2_127F2B7B6F67B1A0_METHOD_2_39403F1F919F447A_OFFSET UNITYSDK_OFFSET(0x1181D290)
#define CLASS_2_127F2B7B6F67B1A0_METHOD_2_409D10706EC80D89_OFFSET UNITYSDK_OFFSET(0x11819EC0)
#define CLASS_2_127F2B7B6F67B1A0_METHOD_2_426CA09704D34DB6_OFFSET UNITYSDK_OFFSET(0x1181BBB0)
#define CLASS_2_127F2B7B6F67B1A0_METHOD_2_42D74E8C949A6883_OFFSET UNITYSDK_OFFSET(0x1181B140)
#define CLASS_2_127F2B7B6F67B1A0_METHOD_2_6448FC1A0D5B69FF_OFFSET UNITYSDK_OFFSET(0x1181D160)
#define CLASS_2_127F2B7B6F67B1A0_METHOD_2_79830F666EE579C0_OFFSET UNITYSDK_OFFSET(0x11819AF0)
#define CLASS_2_127F2B7B6F67B1A0_METHOD_2_79BB1AD99FCC1A4F_OFFSET UNITYSDK_OFFSET(0x1181A3A0)
#define CLASS_2_127F2B7B6F67B1A0_METHOD_2_7F96D036B1631510_OFFSET UNITYSDK_OFFSET(0x1181AD40)
#define CLASS_2_127F2B7B6F67B1A0_METHOD_2_7FBAA229ED524F8E_OFFSET UNITYSDK_OFFSET(0x11819F40)
#define CLASS_2_127F2B7B6F67B1A0_METHOD_2_80A1D4EEAE413441_OFFSET UNITYSDK_OFFSET(0x1181A550)
#define CLASS_2_127F2B7B6F67B1A0_METHOD_2_867FEC4BB85307F1_OFFSET UNITYSDK_OFFSET(0x1181D1F0)
#define CLASS_2_127F2B7B6F67B1A0_METHOD_2_8B995E6B01D52061_OFFSET UNITYSDK_OFFSET(0x1181CF80)
#define CLASS_2_127F2B7B6F67B1A0_METHOD_2_90C08CCA033A7DE8_OFFSET UNITYSDK_OFFSET(0x1181C280)
#define CLASS_2_127F2B7B6F67B1A0_METHOD_2_A703BEBEEBA84608_OFFSET UNITYSDK_OFFSET(0x11819D10)
#define CLASS_2_127F2B7B6F67B1A0_METHOD_2_A8F6F688241E6DBC_OFFSET UNITYSDK_OFFSET(0x1181D010)
#define CLASS_2_127F2B7B6F67B1A0_METHOD_2_AB97216C395056F6_OFFSET UNITYSDK_OFFSET(0x1181A430)
#define CLASS_2_127F2B7B6F67B1A0_METHOD_2_BB28EEA006F6B197_OFFSET UNITYSDK_OFFSET(0x1181D300)
#define CLASS_2_127F2B7B6F67B1A0_METHOD_2_CB613A5EF970C11B_OFFSET UNITYSDK_OFFSET(0x1181CF10)
#define CLASS_2_127F2B7B6F67B1A0_METHOD_2_E2CDB6B22CCEBA97_OFFSET UNITYSDK_OFFSET(0x1181D0F0)
#define CLASS_2_127F2B7B6F67B1A0_METHOD_2_ED34DCC6F6541B09_OFFSET UNITYSDK_OFFSET(0x1181C1C0)
#define CLASS_2_127F2B7B6F67B1A0_METHOD_2_F0F3151B754D3D59_OFFSET UNITYSDK_OFFSET(0x1181BAD0)
#define CLASS_2_127F2B7B6F67B1A0_METHOD_2_F4A21CEE51B916EB_OFFSET UNITYSDK_OFFSET(0x1181A4E0)
#define CLASS_2_127F2B7B6F67B1A0__CTOR_OFFSET UNITYSDK_OFFSET(0x1181D080)
#define CLASS_2_127F2B7B6F67B1A0___IFIXBASEPROXY_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1181D090)

inline static constexpr unsigned int Class_2_127F2B7B6F67B1A0_TypeDefinitionIndex = 49102;

class Class_2_127F2B7B6F67B1A0 : public ::Class_1_D5DA62FC7DE2D532
{
public:
	::System::Collections::Generic::List_1<::Class_2_127F2B7B6F67B1A0_Class_1_D2A5FF10ABB22F68*>* Field_2_8; // 0x10
	::RPG::Client::AdventurePhase* Field_2_1; // 0x18
	::Class_1_64D890C466F37235* Field_2_0; // 0x20
	::Class_2_127F2B7B6F67B1A0_Class_1_E245A68A367C9F00* Field_2_2; // 0x28
	::System::Collections::Generic::List_1<::Class_2_127F2B7B6F67B1A0_Class_1_D2A5FF10ABB22F68*>* Field_2_7; // 0x30
	::Class_2_36C95D73718D07B1* Field_2_6; // 0x38
	::RPG::Client::MapRotationInfo* Field_2_5; // 0x40
	::Class_2_127F2B7B6F67B1A0_Class_1_E245A68A367C9F00* Field_2_3; // 0x48
	::UnityEngine::GameObject* Field_2_4; // 0x50

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_127F2B7B6F67B1A0__CTOR_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_127F2B7B6F67B1A0_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_2_A703BEBEEBA84608(::Class_1_64D890C466F37235* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_64D890C466F37235*))((::PBYTE)hIl2Cpp + CLASS_2_127F2B7B6F67B1A0_METHOD_2_A703BEBEEBA84608_OFFSET))(this, a1);
	}

	::System::Void Method_2_409D10706EC80D89(::UnityEngine::Vector3 a1, ::UnityEngine::Quaternion a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + CLASS_2_127F2B7B6F67B1A0_METHOD_2_409D10706EC80D89_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_79BB1AD99FCC1A4F(::UnityEngine::Vector3 a1, ::UnityEngine::Quaternion a2, ::UnityEngine::Quaternion a3)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Quaternion, ::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + CLASS_2_127F2B7B6F67B1A0_METHOD_2_79BB1AD99FCC1A4F_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_2_AB97216C395056F6(::System::UInt32 a1, ::System::UInt32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_2_127F2B7B6F67B1A0_METHOD_2_AB97216C395056F6_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_80A1D4EEAE413441(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2, ::UnityEngine::Quaternion a3, ::UnityEngine::Quaternion a4, ::RPG::Client::WorldShiftingReason a5)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Quaternion, ::UnityEngine::Quaternion, ::RPG::Client::WorldShiftingReason))((::PBYTE)hIl2Cpp + CLASS_2_127F2B7B6F67B1A0_METHOD_2_80A1D4EEAE413441_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::System::Void Method_2_7F96D036B1631510(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_127F2B7B6F67B1A0_METHOD_2_7F96D036B1631510_OFFSET))(this, a1);
	}

	::System::Void Method_2_F0F3151B754D3D59(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_127F2B7B6F67B1A0_METHOD_2_F0F3151B754D3D59_OFFSET))(this, a1);
	}

	::System::Void Method_2_ED34DCC6F6541B09(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_127F2B7B6F67B1A0_METHOD_2_ED34DCC6F6541B09_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_171A4D4799D0DC21(::System::Int32 a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_127F2B7B6F67B1A0_METHOD_2_171A4D4799D0DC21_OFFSET))(this, a1);
	}

	::System::Void Method_2_CB613A5EF970C11B(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_127F2B7B6F67B1A0_METHOD_2_CB613A5EF970C11B_OFFSET))(this, a1);
	}

	::System::Void Method_2_8B995E6B01D52061(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_127F2B7B6F67B1A0_METHOD_2_8B995E6B01D52061_OFFSET))(this, a1);
	}

	::System::Void Method_2_7FBAA229ED524F8E()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_127F2B7B6F67B1A0_METHOD_2_7FBAA229ED524F8E_OFFSET))(this);
	}

	::System::Void Method_2_F4A21CEE51B916EB(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_2_127F2B7B6F67B1A0_METHOD_2_F4A21CEE51B916EB_OFFSET))(this, a1);
	}

	::System::Void Method_2_426CA09704D34DB6(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_2_127F2B7B6F67B1A0_METHOD_2_426CA09704D34DB6_OFFSET))(this, a1);
	}

	::System::Void Method_2_79830F666EE579C0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_127F2B7B6F67B1A0_METHOD_2_79830F666EE579C0_OFFSET))(this);
	}

	::System::Void Method_2_90C08CCA033A7DE8(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_2_127F2B7B6F67B1A0_METHOD_2_90C08CCA033A7DE8_OFFSET))(this, a1);
	}

	::System::Void Method_2_42D74E8C949A6883(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_127F2B7B6F67B1A0_METHOD_2_42D74E8C949A6883_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_A8F6F688241E6DBC()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_127F2B7B6F67B1A0_METHOD_2_A8F6F688241E6DBC_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_127F2B7B6F67B1A0___IFIXBASEPROXY_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_2_E2CDB6B22CCEBA97(::Class_1_64D890C466F37235* P0)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_64D890C466F37235*))((::PBYTE)hIl2Cpp + CLASS_2_127F2B7B6F67B1A0_METHOD_2_E2CDB6B22CCEBA97_OFFSET))(this, P0);
	}

	::System::Void Method_2_6448FC1A0D5B69FF(::UnityEngine::Vector3 P0, ::UnityEngine::Quaternion P1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + CLASS_2_127F2B7B6F67B1A0_METHOD_2_6448FC1A0D5B69FF_OFFSET))(this, P0, P1);
	}

	::System::Void Method_2_867FEC4BB85307F1(::UnityEngine::Vector3 P0, ::UnityEngine::Quaternion P1, ::UnityEngine::Quaternion P2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Quaternion, ::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + CLASS_2_127F2B7B6F67B1A0_METHOD_2_867FEC4BB85307F1_OFFSET))(this, P0, P1, P2);
	}

	::System::Void Method_2_39403F1F919F447A(::System::UInt32 P0, ::System::UInt32 P1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_2_127F2B7B6F67B1A0_METHOD_2_39403F1F919F447A_OFFSET))(this, P0, P1);
	}

	::System::Void Method_2_BB28EEA006F6B197(::UnityEngine::Vector3 P0, ::UnityEngine::Vector3 P1, ::UnityEngine::Quaternion P2, ::UnityEngine::Quaternion P3, ::RPG::Client::WorldShiftingReason P4)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Quaternion, ::UnityEngine::Quaternion, ::RPG::Client::WorldShiftingReason))((::PBYTE)hIl2Cpp + CLASS_2_127F2B7B6F67B1A0_METHOD_2_BB28EEA006F6B197_OFFSET))(this, P0, P1, P2, P3, P4);
	}
};

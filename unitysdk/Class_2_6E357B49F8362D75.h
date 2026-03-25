#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_D5DA62FC7DE2D532.h"
#include "unitysdk/RPG/Client/WorldShiftingReason.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_64D890C466F37235;
class Class_1_E3CC6BC1F6AE3962;
namespace RPG::Client { class MonoMapPoseSwitcher; }
namespace RPG::GameCore { class GameEntity; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace UnityEngine { class Collider; }

#define CLASS_2_6E357B49F8362D75_DISPOSE_OFFSET UNITYSDK_OFFSET(0xFB71230)
#define CLASS_2_6E357B49F8362D75_METHOD_2_0DEC1A8F053BEBEC_OFFSET UNITYSDK_OFFSET(0xFB71E90)
#define CLASS_2_6E357B49F8362D75_METHOD_2_1A54E3DF1B02B1B9_OFFSET UNITYSDK_OFFSET(0xFB71280)
#define CLASS_2_6E357B49F8362D75_METHOD_2_2566AD459572DFC3_OFFSET UNITYSDK_OFFSET(0xFB71460)
#define CLASS_2_6E357B49F8362D75_METHOD_2_37F6A1213A869485_OFFSET UNITYSDK_OFFSET(0xFB71C50)
#define CLASS_2_6E357B49F8362D75_METHOD_2_6448FC1A0D5B69FF_OFFSET UNITYSDK_OFFSET(0xFB721E0)
#define CLASS_2_6E357B49F8362D75_METHOD_2_7653BF2DB0C55EEE_OFFSET UNITYSDK_OFFSET(0xFB71A90)
#define CLASS_2_6E357B49F8362D75_METHOD_2_813CA72F98D1C56D_OFFSET UNITYSDK_OFFSET(0xFB71F00)
#define CLASS_2_6E357B49F8362D75_METHOD_2_8426E7AF2C3D4392_OFFSET UNITYSDK_OFFSET(0xFB72030)
#define CLASS_2_6E357B49F8362D75_METHOD_2_867FEC4BB85307F1_OFFSET UNITYSDK_OFFSET(0xFB72270)
#define CLASS_2_6E357B49F8362D75_METHOD_2_BB28EEA006F6B197_OFFSET UNITYSDK_OFFSET(0xFB72310)
#define CLASS_2_6E357B49F8362D75_METHOD_2_D0EE4EBE39DCA55F_OFFSET UNITYSDK_OFFSET(0xFB71760)
#define CLASS_2_6E357B49F8362D75_METHOD_2_E2CDB6B22CCEBA97_OFFSET UNITYSDK_OFFSET(0xFB72170)
#define CLASS_2_6E357B49F8362D75_METHOD_2_EAD8527516D688B9_OFFSET UNITYSDK_OFFSET(0xFB713E0)
#define CLASS_2_6E357B49F8362D75_METHOD_2_FAADDAEF90CF8A0E_OFFSET UNITYSDK_OFFSET(0xFB716D0)
#define CLASS_2_6E357B49F8362D75__CTOR_OFFSET UNITYSDK_OFFSET(0xFB72100)
#define CLASS_2_6E357B49F8362D75___IFIXBASEPROXY_DISPOSE_OFFSET UNITYSDK_OFFSET(0xFB72110)

inline static constexpr unsigned int Class_2_6E357B49F8362D75_TypeDefinitionIndex = 49099;

class Class_2_6E357B49F8362D75 : public ::Class_1_D5DA62FC7DE2D532
{
public:
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::Class_1_E3CC6BC1F6AE3962*>* Field_2_2; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::Class_1_E3CC6BC1F6AE3962*>* Field_2_1; // 0x18
	::Class_1_64D890C466F37235* Field_2_0; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6E357B49F8362D75__CTOR_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6E357B49F8362D75_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_2_1A54E3DF1B02B1B9(::Class_1_64D890C466F37235* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_64D890C466F37235*))((::PBYTE)hIl2Cpp + CLASS_2_6E357B49F8362D75_METHOD_2_1A54E3DF1B02B1B9_OFFSET))(this, a1);
	}

	::System::Void Method_2_EAD8527516D688B9(::UnityEngine::Vector3 a1, ::UnityEngine::Quaternion a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + CLASS_2_6E357B49F8362D75_METHOD_2_EAD8527516D688B9_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_FAADDAEF90CF8A0E(::UnityEngine::Vector3 a1, ::UnityEngine::Quaternion a2, ::UnityEngine::Quaternion a3)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Quaternion, ::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + CLASS_2_6E357B49F8362D75_METHOD_2_FAADDAEF90CF8A0E_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_2_D0EE4EBE39DCA55F(::RPG::Client::MonoMapPoseSwitcher* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::MonoMapPoseSwitcher*))((::PBYTE)hIl2Cpp + CLASS_2_6E357B49F8362D75_METHOD_2_D0EE4EBE39DCA55F_OFFSET))(this, a1);
	}

	::System::Void Method_2_7653BF2DB0C55EEE(::RPG::Client::MonoMapPoseSwitcher* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::MonoMapPoseSwitcher*))((::PBYTE)hIl2Cpp + CLASS_2_6E357B49F8362D75_METHOD_2_7653BF2DB0C55EEE_OFFSET))(this, a1);
	}

	::System::Void Method_2_37F6A1213A869485(::RPG::GameCore::GameEntity* a1, ::System::UInt32 a2, ::System::UInt32 a3, ::System::UInt32 a4, ::System::UInt32 a5)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::System::UInt32, ::System::UInt32, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_2_6E357B49F8362D75_METHOD_2_37F6A1213A869485_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::System::Void Method_2_0DEC1A8F053BEBEC(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_2_6E357B49F8362D75_METHOD_2_0DEC1A8F053BEBEC_OFFSET))(this, a1);
	}

	::Class_1_E3CC6BC1F6AE3962* Method_2_813CA72F98D1C56D(::UnityEngine::Collider* a1)
	{
		return ((::Class_1_E3CC6BC1F6AE3962*(*)(::PVOID, ::UnityEngine::Collider*))((::PBYTE)hIl2Cpp + CLASS_2_6E357B49F8362D75_METHOD_2_813CA72F98D1C56D_OFFSET))(this, a1);
	}

	::System::Void Method_2_8426E7AF2C3D4392(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2, ::UnityEngine::Quaternion a3, ::UnityEngine::Quaternion a4, ::RPG::Client::WorldShiftingReason a5)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Quaternion, ::UnityEngine::Quaternion, ::RPG::Client::WorldShiftingReason))((::PBYTE)hIl2Cpp + CLASS_2_6E357B49F8362D75_METHOD_2_8426E7AF2C3D4392_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::System::Void Method_2_2566AD459572DFC3()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6E357B49F8362D75_METHOD_2_2566AD459572DFC3_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6E357B49F8362D75___IFIXBASEPROXY_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_2_E2CDB6B22CCEBA97(::Class_1_64D890C466F37235* P0)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_64D890C466F37235*))((::PBYTE)hIl2Cpp + CLASS_2_6E357B49F8362D75_METHOD_2_E2CDB6B22CCEBA97_OFFSET))(this, P0);
	}

	::System::Void Method_2_6448FC1A0D5B69FF(::UnityEngine::Vector3 P0, ::UnityEngine::Quaternion P1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + CLASS_2_6E357B49F8362D75_METHOD_2_6448FC1A0D5B69FF_OFFSET))(this, P0, P1);
	}

	::System::Void Method_2_867FEC4BB85307F1(::UnityEngine::Vector3 P0, ::UnityEngine::Quaternion P1, ::UnityEngine::Quaternion P2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Quaternion, ::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + CLASS_2_6E357B49F8362D75_METHOD_2_867FEC4BB85307F1_OFFSET))(this, P0, P1, P2);
	}

	::System::Void Method_2_BB28EEA006F6B197(::UnityEngine::Vector3 P0, ::UnityEngine::Vector3 P1, ::UnityEngine::Quaternion P2, ::UnityEngine::Quaternion P3, ::RPG::Client::WorldShiftingReason P4)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Quaternion, ::UnityEngine::Quaternion, ::RPG::Client::WorldShiftingReason))((::PBYTE)hIl2Cpp + CLASS_2_6E357B49F8362D75_METHOD_2_BB28EEA006F6B197_OFFSET))(this, P0, P1, P2, P3, P4);
	}
};

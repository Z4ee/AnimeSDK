#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_0698DCBDF48031C1_Struct_2_4EA4092989583B5B.h"
#include "unitysdk/Class_1_ABBBBB55F4062939_Struct_2_1A691A9B382B00BF.h"
#include "unitysdk/Class_1_ABBBBB55F4062939_Struct_2_6175284CFEF73564_1.h"
#include "unitysdk/Class_1_ABBBBB55F4062939_Struct_2_6175284CFEF73564_2.h"
#include "unitysdk/Class_1_ABBBBB55F4062939_Struct_2_DD7FFFE96F8BF2EB.h"
#include "unitysdk/Class_1_ABBBBB55F4062939_Struct_2_FD8E1D4014EE315F_2.h"
#include "unitysdk/Class_1_ABBBBB55F4062939_Struct_2_FD8E1D4014EE315F_3.h"
#include "unitysdk/Enum_3_211491648A927177.h"
#include "unitysdk/MoleMole/Vehicle/VehicleControlInput.h"
#include "unitysdk/MoleMole/Vehicle/VehicleSensorOutline.h"
#include "unitysdk/Struct_2_5C05B865B0E3235A_1.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_2.h"
#include "unitysdk/System/ValueTuple_3.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_0698DCBDF48031C1;
class Class_1_563051C0C7EF9F5C;
namespace MoleMole::Vehicle { class VehicleConfig; }
namespace UnityEngine { class Transform; }

#define CLASS_1_ABBBBB55F4062939_METHOD_1_131960C9963F73D7_1_OFFSET UNITYSDK_OFFSET(0x11D0D2B0)
#define CLASS_1_ABBBBB55F4062939_METHOD_1_131960C9963F73D7_OFFSET UNITYSDK_OFFSET(0x11D0C420)
#define CLASS_1_ABBBBB55F4062939_METHOD_1_143D5B3AE343F132_OFFSET UNITYSDK_OFFSET(0x11D0E600)
#define CLASS_1_ABBBBB55F4062939_METHOD_1_1795E29BFCA79A49_OFFSET UNITYSDK_OFFSET(0x11D0D550)
#define CLASS_1_ABBBBB55F4062939_METHOD_1_20F82114DE2B93CC_OFFSET UNITYSDK_OFFSET(0x11D0F330)
#define CLASS_1_ABBBBB55F4062939_METHOD_1_3816412B415E2D37_OFFSET UNITYSDK_OFFSET(0x11D0DE80)
#define CLASS_1_ABBBBB55F4062939_METHOD_1_5450D16E406C8FA9_OFFSET UNITYSDK_OFFSET(0x11D0C9D0)
#define CLASS_1_ABBBBB55F4062939_METHOD_1_570C5557A774C69E_OFFSET UNITYSDK_OFFSET(0x11D0D1C0)
#define CLASS_1_ABBBBB55F4062939_METHOD_1_647DE4E99AEA05B9_OFFSET UNITYSDK_OFFSET(0x11D0DF20)
#define CLASS_1_ABBBBB55F4062939_METHOD_1_6A304F77E1F68AE2_OFFSET UNITYSDK_OFFSET(0x11D0E080)
#define CLASS_1_ABBBBB55F4062939_METHOD_1_9F649811D593E1F7_OFFSET UNITYSDK_OFFSET(0x11D0CEC0)
#define CLASS_1_ABBBBB55F4062939_METHOD_1_A35038BDDE72D93B_OFFSET UNITYSDK_OFFSET(0x11D0E0B0)
#define CLASS_1_ABBBBB55F4062939_METHOD_1_AC2DF9A19CBF9ACC_OFFSET UNITYSDK_OFFSET(0x11D0F750)
#define CLASS_1_ABBBBB55F4062939_METHOD_1_B1739B37CAE03FD1_OFFSET UNITYSDK_OFFSET(0x11D0C6C0)
#define CLASS_1_ABBBBB55F4062939_METHOD_1_B1AC0460B55DBC71_OFFSET UNITYSDK_OFFSET(0x11D0DD50)
#define CLASS_1_ABBBBB55F4062939_METHOD_1_B50E8DD48ABB92AB_OFFSET UNITYSDK_OFFSET(0x11D0EF70)
#define CLASS_1_ABBBBB55F4062939_METHOD_1_D302514E0A5547CB_OFFSET UNITYSDK_OFFSET(0x11D0E670)
#define CLASS_1_ABBBBB55F4062939_METHOD_1_D46D098CD61507D9_OFFSET UNITYSDK_OFFSET(0x11D0D650)
#define CLASS_1_ABBBBB55F4062939_METHOD_1_DBA651C992AAB4DD_OFFSET UNITYSDK_OFFSET(0x11D0EA50)
#define CLASS_1_ABBBBB55F4062939_METHOD_1_FD1EFD5A6E481F5B_OFFSET UNITYSDK_OFFSET(0x11D0C930)
#define CLASS_1_ABBBBB55F4062939__CTOR_OFFSET UNITYSDK_OFFSET(0x11D0C3E0)

inline static constexpr unsigned int Class_1_ABBBBB55F4062939_TypeDefinitionIndex = 44181;

class Class_1_ABBBBB55F4062939 : public ::System::Object
{
public:
	// static const ::System::Single Field_1_1; // 0x0
	::MoleMole::Vehicle::VehicleConfig* Field_1_6; // 0x10
	::System::Int32 Field_1_3; // 0x18
	::System::Single Field_1_4; // 0x1C
	::System::Boolean Field_1_0; // 0x20
	::MoleMole::Vehicle::VehicleSensorOutline Field_1_7; // 0x24
	::Struct_2_5C05B865B0E3235A_1 Field_1_5; // 0x2C
	::Enum_3_211491648A927177 Field_1_2; // 0x48

	::System::Void _ctor(::Class_1_ABBBBB55F4062939* a1, ::MoleMole::Vehicle::VehicleConfig* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_ABBBBB55F4062939*, ::MoleMole::Vehicle::VehicleConfig*))((::PBYTE)hIl2Cpp + CLASS_1_ABBBBB55F4062939__CTOR_OFFSET))(this, a1, a2);
	}

	static ::System::Boolean Method_1_131960C9963F73D7(::Class_1_0698DCBDF48031C1_Struct_2_4EA4092989583B5B& a1, ::System::Boolean a2, ::Class_1_ABBBBB55F4062939_Struct_2_DD7FFFE96F8BF2EB& a3, ::Class_1_ABBBBB55F4062939_Struct_2_6175284CFEF73564_1& a4)
	{
		return ((::System::Boolean(*)(::Class_1_0698DCBDF48031C1_Struct_2_4EA4092989583B5B&, ::System::Boolean, ::Class_1_ABBBBB55F4062939_Struct_2_DD7FFFE96F8BF2EB&, ::Class_1_ABBBBB55F4062939_Struct_2_6175284CFEF73564_1&))((::PBYTE)hIl2Cpp + CLASS_1_ABBBBB55F4062939_METHOD_1_131960C9963F73D7_OFFSET))(a1, a2, a3, a4);
	}

	static ::System::Single Method_1_B1739B37CAE03FD1(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2, ::UnityEngine::Vector3 a3, ::UnityEngine::Vector3 a4, ::System::Single a5)
	{
		return ((::System::Single(*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_ABBBBB55F4062939_METHOD_1_B1739B37CAE03FD1_OFFSET))(a1, a2, a3, a4, a5);
	}

	static ::System::Single Method_1_FD1EFD5A6E481F5B(::System::Single a1, ::System::Single a2)
	{
		return ((::System::Single(*)(::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_ABBBBB55F4062939_METHOD_1_FD1EFD5A6E481F5B_OFFSET))(a1, a2);
	}

	::System::Void Method_1_5450D16E406C8FA9(::System::Single a1, ::UnityEngine::Transform* a2, ::MoleMole::Vehicle::VehicleControlInput& a3, ::System::Boolean a4, ::Class_1_0698DCBDF48031C1* a5, ::Class_1_563051C0C7EF9F5C* a6)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::UnityEngine::Transform*, ::MoleMole::Vehicle::VehicleControlInput&, ::System::Boolean, ::Class_1_0698DCBDF48031C1*, ::Class_1_563051C0C7EF9F5C*))((::PBYTE)hIl2Cpp + CLASS_1_ABBBBB55F4062939_METHOD_1_5450D16E406C8FA9_OFFSET))(this, a1, a2, a3, a4, a5, a6);
	}

	static ::System::Boolean Method_1_131960C9963F73D7_1(::Class_1_0698DCBDF48031C1_Struct_2_4EA4092989583B5B& a1, ::System::Boolean a2, ::Class_1_ABBBBB55F4062939_Struct_2_DD7FFFE96F8BF2EB& a3, ::Class_1_ABBBBB55F4062939_Struct_2_6175284CFEF73564_1& a4)
	{
		return ((::System::Boolean(*)(::Class_1_0698DCBDF48031C1_Struct_2_4EA4092989583B5B&, ::System::Boolean, ::Class_1_ABBBBB55F4062939_Struct_2_DD7FFFE96F8BF2EB&, ::Class_1_ABBBBB55F4062939_Struct_2_6175284CFEF73564_1&))((::PBYTE)hIl2Cpp + CLASS_1_ABBBBB55F4062939_METHOD_1_131960C9963F73D7_1_OFFSET))(a1, a2, a3, a4);
	}

	static ::System::Boolean Method_1_1795E29BFCA79A49(::UnityEngine::Vector3 a1, ::System::Single a2, ::Class_1_0698DCBDF48031C1_Struct_2_4EA4092989583B5B& a3)
	{
		return ((::System::Boolean(*)(::UnityEngine::Vector3, ::System::Single, ::Class_1_0698DCBDF48031C1_Struct_2_4EA4092989583B5B&))((::PBYTE)hIl2Cpp + CLASS_1_ABBBBB55F4062939_METHOD_1_1795E29BFCA79A49_OFFSET))(a1, a2, a3);
	}

	static ::System::ValueTuple_2<::System::Single, ::System::Single> Method_1_D46D098CD61507D9(::System::Single a1, ::System::Single a2, ::Class_1_0698DCBDF48031C1_Struct_2_4EA4092989583B5B& a3, ::Class_1_ABBBBB55F4062939_Struct_2_6175284CFEF73564_2& a4)
	{
		return ((::System::ValueTuple_2<::System::Single, ::System::Single>(*)(::System::Single, ::System::Single, ::Class_1_0698DCBDF48031C1_Struct_2_4EA4092989583B5B&, ::Class_1_ABBBBB55F4062939_Struct_2_6175284CFEF73564_2&))((::PBYTE)hIl2Cpp + CLASS_1_ABBBBB55F4062939_METHOD_1_D46D098CD61507D9_OFFSET))(a1, a2, a3, a4);
	}

	::Class_1_ABBBBB55F4062939_Struct_2_1A691A9B382B00BF Method_1_647DE4E99AEA05B9(::System::Single a1, ::Class_1_ABBBBB55F4062939_Struct_2_6175284CFEF73564_2& a2, ::Class_1_0698DCBDF48031C1* a3, ::Class_1_563051C0C7EF9F5C* a4)
	{
		return ((::Class_1_ABBBBB55F4062939_Struct_2_1A691A9B382B00BF(*)(::PVOID, ::System::Single, ::Class_1_ABBBBB55F4062939_Struct_2_6175284CFEF73564_2&, ::Class_1_0698DCBDF48031C1*, ::Class_1_563051C0C7EF9F5C*))((::PBYTE)hIl2Cpp + CLASS_1_ABBBBB55F4062939_METHOD_1_647DE4E99AEA05B9_OFFSET))(this, a1, a2, a3, a4);
	}

	static ::UnityEngine::Vector3 Method_1_6A304F77E1F68AE2(::System::Single a1, ::Class_1_ABBBBB55F4062939_Struct_2_DD7FFFE96F8BF2EB& a2)
	{
		return ((::UnityEngine::Vector3(*)(::System::Single, ::Class_1_ABBBBB55F4062939_Struct_2_DD7FFFE96F8BF2EB&))((::PBYTE)hIl2Cpp + CLASS_1_ABBBBB55F4062939_METHOD_1_6A304F77E1F68AE2_OFFSET))(a1, a2);
	}

	static ::System::ValueTuple_3<::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Boolean> Method_1_A35038BDDE72D93B(::Class_1_0698DCBDF48031C1* a1, ::System::Single a2, ::Class_1_ABBBBB55F4062939_Struct_2_6175284CFEF73564_2 a3)
	{
		return ((::System::ValueTuple_3<::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Boolean>(*)(::Class_1_0698DCBDF48031C1*, ::System::Single, ::Class_1_ABBBBB55F4062939_Struct_2_6175284CFEF73564_2))((::PBYTE)hIl2Cpp + CLASS_1_ABBBBB55F4062939_METHOD_1_A35038BDDE72D93B_OFFSET))(a1, a2, a3);
	}

	static ::System::Boolean Method_1_B1AC0460B55DBC71(::System::Single a1, ::Class_1_0698DCBDF48031C1_Struct_2_4EA4092989583B5B& a2, ::Class_1_ABBBBB55F4062939_Struct_2_6175284CFEF73564_2& a3, ::Class_1_ABBBBB55F4062939_Struct_2_FD8E1D4014EE315F_2& a4, ::Class_1_ABBBBB55F4062939_Struct_2_FD8E1D4014EE315F_3& a5)
	{
		return ((::System::Boolean(*)(::System::Single, ::Class_1_0698DCBDF48031C1_Struct_2_4EA4092989583B5B&, ::Class_1_ABBBBB55F4062939_Struct_2_6175284CFEF73564_2&, ::Class_1_ABBBBB55F4062939_Struct_2_FD8E1D4014EE315F_2&, ::Class_1_ABBBBB55F4062939_Struct_2_FD8E1D4014EE315F_3&))((::PBYTE)hIl2Cpp + CLASS_1_ABBBBB55F4062939_METHOD_1_B1AC0460B55DBC71_OFFSET))(a1, a2, a3, a4, a5);
	}

	static ::System::Single Method_1_D302514E0A5547CB(::Class_1_0698DCBDF48031C1* a1, ::System::Int32 a2, ::System::Int32 a3, ::UnityEngine::Vector3& a4, ::System::Boolean a5)
	{
		return ((::System::Single(*)(::Class_1_0698DCBDF48031C1*, ::System::Int32, ::System::Int32, ::UnityEngine::Vector3&, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_ABBBBB55F4062939_METHOD_1_D302514E0A5547CB_OFFSET))(a1, a2, a3, a4, a5);
	}

	::System::Single Method_1_9F649811D593E1F7(::UnityEngine::Transform* a1, ::Class_1_0698DCBDF48031C1* a2)
	{
		return ((::System::Single(*)(::PVOID, ::UnityEngine::Transform*, ::Class_1_0698DCBDF48031C1*))((::PBYTE)hIl2Cpp + CLASS_1_ABBBBB55F4062939_METHOD_1_9F649811D593E1F7_OFFSET))(this, a1, a2);
	}

	static ::System::Int32 Method_1_143D5B3AE343F132(::Class_1_0698DCBDF48031C1* a1)
	{
		return ((::System::Int32(*)(::Class_1_0698DCBDF48031C1*))((::PBYTE)hIl2Cpp + CLASS_1_ABBBBB55F4062939_METHOD_1_143D5B3AE343F132_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_DBA651C992AAB4DD(::UnityEngine::Vector3 a1, ::System::Single a2, ::Class_1_ABBBBB55F4062939_Struct_2_DD7FFFE96F8BF2EB& a3)
	{
		return ((::System::Boolean(*)(::UnityEngine::Vector3, ::System::Single, ::Class_1_ABBBBB55F4062939_Struct_2_DD7FFFE96F8BF2EB&))((::PBYTE)hIl2Cpp + CLASS_1_ABBBBB55F4062939_METHOD_1_DBA651C992AAB4DD_OFFSET))(a1, a2, a3);
	}

	static ::System::Single Method_1_B50E8DD48ABB92AB(::System::Single a1, ::Class_1_0698DCBDF48031C1* a2, ::System::Single a3, ::System::Single a4, ::System::Single a5, ::UnityEngine::Vector3 a6, ::UnityEngine::Vector3 a7, ::System::Int32 a8, ::System::Int32 a9)
	{
		return ((::System::Single(*)(::System::Single, ::Class_1_0698DCBDF48031C1*, ::System::Single, ::System::Single, ::System::Single, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_ABBBBB55F4062939_METHOD_1_B50E8DD48ABB92AB_OFFSET))(a1, a2, a3, a4, a5, a6, a7, a8, a9);
	}

	static ::System::Boolean Method_1_3816412B415E2D37(::System::Single a1, ::Class_1_0698DCBDF48031C1_Struct_2_4EA4092989583B5B& a2, ::Class_1_ABBBBB55F4062939_Struct_2_6175284CFEF73564_2& a3, ::Class_1_ABBBBB55F4062939_Struct_2_FD8E1D4014EE315F_2& a4)
	{
		return ((::System::Boolean(*)(::System::Single, ::Class_1_0698DCBDF48031C1_Struct_2_4EA4092989583B5B&, ::Class_1_ABBBBB55F4062939_Struct_2_6175284CFEF73564_2&, ::Class_1_ABBBBB55F4062939_Struct_2_FD8E1D4014EE315F_2&))((::PBYTE)hIl2Cpp + CLASS_1_ABBBBB55F4062939_METHOD_1_3816412B415E2D37_OFFSET))(a1, a2, a3, a4);
	}

	static ::System::ValueTuple_2<::System::Single, ::UnityEngine::Vector3> Method_1_20F82114DE2B93CC(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2, ::UnityEngine::Vector3 a3, ::System::Single a4)
	{
		return ((::System::ValueTuple_2<::System::Single, ::UnityEngine::Vector3>(*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_ABBBBB55F4062939_METHOD_1_20F82114DE2B93CC_OFFSET))(a1, a2, a3, a4);
	}

	::System::Single Method_1_570C5557A774C69E(::System::Single a1)
	{
		return ((::System::Single(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_ABBBBB55F4062939_METHOD_1_570C5557A774C69E_OFFSET))(this, a1);
	}

	static ::System::Single Method_1_AC2DF9A19CBF9ACC(::Class_1_0698DCBDF48031C1* a1, ::System::Single a2, ::Class_1_ABBBBB55F4062939_Struct_2_6175284CFEF73564_2 a3)
	{
		return ((::System::Single(*)(::Class_1_0698DCBDF48031C1*, ::System::Single, ::Class_1_ABBBBB55F4062939_Struct_2_6175284CFEF73564_2))((::PBYTE)hIl2Cpp + CLASS_1_ABBBBB55F4062939_METHOD_1_AC2DF9A19CBF9ACC_OFFSET))(a1, a2, a3);
	}
};

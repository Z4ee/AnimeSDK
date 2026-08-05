#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Vehicle/VehicleCollider_Enum_3_B92C1798682AC0E0.h"
#include "unitysdk/MoleMole/Vehicle/VehicleControlInput.h"
#include "unitysdk/MoleMole/Vehicle/VehicleMono_AnimLayerInfo.h"
#include "unitysdk/Struct_2_07154FD31BC71493.h"
#include "unitysdk/Struct_2_A0DCDC0C49E88627_Enum_3_6CD40AC38147E2AC.h"
#include "unitysdk/Struct_2_A5F3F97A94B01E4C.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_2.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_0698DCBDF48031C1;
class Class_1_29EA855B0A6114D6;
class Class_1_3DFAF92DF68271E7;
class Class_1_534BEA752C25039E;
class Class_1_563051C0C7EF9F5C;
class Class_1_8663075EB5BD170B;
class Class_1_8E9712F082359A51;
class Class_3_F33F9DC5F4112336;
namespace MoleMole::Battle { class Entity; }
namespace MoleMole::Vehicle { class VehicleConfig; }
namespace MoleMole::Vehicle { class VehicleMono; }
namespace System { class String; }
namespace UnityEngine { class Transform; }

#define CLASS_1_DFEB9A1A221CB8BE_METHOD_1_1A6867C974305608_OFFSET UNITYSDK_OFFSET(0x14EE49F0)
#define CLASS_1_DFEB9A1A221CB8BE_METHOD_1_24748FC20F375725_1_OFFSET UNITYSDK_OFFSET(0x14EE4510)
#define CLASS_1_DFEB9A1A221CB8BE_METHOD_1_24748FC20F375725_2_OFFSET UNITYSDK_OFFSET(0x14EE4650)
#define CLASS_1_DFEB9A1A221CB8BE_METHOD_1_24748FC20F375725_3_OFFSET UNITYSDK_OFFSET(0x14EE49E0)
#define CLASS_1_DFEB9A1A221CB8BE_METHOD_1_24748FC20F375725_4_OFFSET UNITYSDK_OFFSET(0x14EE5540)
#define CLASS_1_DFEB9A1A221CB8BE_METHOD_1_24748FC20F375725_OFFSET UNITYSDK_OFFSET(0x14EE3FF0)
#define CLASS_1_DFEB9A1A221CB8BE_METHOD_1_39486C62A993BD1E_OFFSET UNITYSDK_OFFSET(0x14EE4520)
#define CLASS_1_DFEB9A1A221CB8BE_METHOD_1_591ECA845B59C5C1_OFFSET UNITYSDK_OFFSET(0x14EE4BB0)
#define CLASS_1_DFEB9A1A221CB8BE_METHOD_1_6C412C734D4ABE8C_OFFSET UNITYSDK_OFFSET(0x14EE4EF0)
#define CLASS_1_DFEB9A1A221CB8BE_METHOD_1_9EFE71D72F7AABFD_OFFSET UNITYSDK_OFFSET(0x14EE3CC0)
#define CLASS_1_DFEB9A1A221CB8BE_METHOD_1_9FEA2424050E06FB_OFFSET UNITYSDK_OFFSET(0x14EE4000)
#define CLASS_1_DFEB9A1A221CB8BE_METHOD_1_A20289C47B93F07A_OFFSET UNITYSDK_OFFSET(0x14EE4950)
#define CLASS_1_DFEB9A1A221CB8BE_METHOD_1_C74CF020AA42ED85_OFFSET UNITYSDK_OFFSET(0x14EE5550)
#define CLASS_1_DFEB9A1A221CB8BE_METHOD_1_DC4B0BB98F8372E1_OFFSET UNITYSDK_OFFSET(0x14EE48F0)
#define CLASS_1_DFEB9A1A221CB8BE_METHOD_1_EBBC49A9109F0F2F_OFFSET UNITYSDK_OFFSET(0x14EE4660)
#define CLASS_1_DFEB9A1A221CB8BE__CTOR_OFFSET UNITYSDK_OFFSET(0x14EE3CB0)

inline static constexpr unsigned int Class_1_DFEB9A1A221CB8BE_TypeDefinitionIndex = 76354;

class Class_1_DFEB9A1A221CB8BE : public ::System::Object
{
public:
	::Class_1_563051C0C7EF9F5C* Field_1_3; // 0x10
	::Class_1_534BEA752C25039E* Field_1_2; // 0x18
	::Class_1_8663075EB5BD170B* Field_1_0; // 0x20
	::Class_1_3DFAF92DF68271E7* Field_1_1; // 0x28
	::MoleMole::Battle::Entity* Field_1_4; // 0x30
	::MoleMole::Vehicle::VehicleConfig* Field_1_14; // 0x38
	::Class_1_8E9712F082359A51* Field_1_6; // 0x40
	::Class_1_29EA855B0A6114D6* Field_1_5; // 0x48
	::Class_1_0698DCBDF48031C1* Field_1_7; // 0x50
	::System::Int32 Field_1_8; // 0x58
	::MoleMole::Vehicle::VehicleCollider_Enum_3_B92C1798682AC0E0 Field_1_10; // 0x5C
	::System::Boolean Field_1_9; // 0x60
	::Struct_2_A5F3F97A94B01E4C Field_1_15; // 0x64
	::Struct_2_A0DCDC0C49E88627_Enum_3_6CD40AC38147E2AC Field_1_11; // 0x90

	::System::Void _ctor(::Struct_2_07154FD31BC71493& a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_07154FD31BC71493&))((::PBYTE)hIl2Cpp + CLASS_1_DFEB9A1A221CB8BE__CTOR_OFFSET))(this, a1);
	}

	::Class_1_0698DCBDF48031C1* Method_1_24748FC20F375725()
	{
		return ((::Class_1_0698DCBDF48031C1*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_DFEB9A1A221CB8BE_METHOD_1_24748FC20F375725_OFFSET))(this);
	}

	::System::Void Method_1_9FEA2424050E06FB(::Class_3_F33F9DC5F4112336* a1, ::Il2CppArray<::MoleMole::Vehicle::VehicleMono_AnimLayerInfo>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_F33F9DC5F4112336*, ::Il2CppArray<::MoleMole::Vehicle::VehicleMono_AnimLayerInfo>*))((::PBYTE)hIl2Cpp + CLASS_1_DFEB9A1A221CB8BE_METHOD_1_9FEA2424050E06FB_OFFSET))(this, a1, a2);
	}

	::Class_1_534BEA752C25039E* Method_1_24748FC20F375725_1()
	{
		return ((::Class_1_534BEA752C25039E*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_DFEB9A1A221CB8BE_METHOD_1_24748FC20F375725_1_OFFSET))(this);
	}

	::System::Void Method_1_39486C62A993BD1E(::Struct_2_07154FD31BC71493& a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_07154FD31BC71493&))((::PBYTE)hIl2Cpp + CLASS_1_DFEB9A1A221CB8BE_METHOD_1_39486C62A993BD1E_OFFSET))(this, a1);
	}

	::Class_1_8E9712F082359A51* Method_1_24748FC20F375725_2()
	{
		return ((::Class_1_8E9712F082359A51*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_DFEB9A1A221CB8BE_METHOD_1_24748FC20F375725_2_OFFSET))(this);
	}

	::System::Void Method_1_EBBC49A9109F0F2F()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_DFEB9A1A221CB8BE_METHOD_1_EBBC49A9109F0F2F_OFFSET))(this);
	}

	::System::Boolean Method_1_DC4B0BB98F8372E1()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_DFEB9A1A221CB8BE_METHOD_1_DC4B0BB98F8372E1_OFFSET))(this);
	}

	::Class_1_563051C0C7EF9F5C* Method_1_24748FC20F375725_3()
	{
		return ((::Class_1_563051C0C7EF9F5C*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_DFEB9A1A221CB8BE_METHOD_1_24748FC20F375725_3_OFFSET))(this);
	}

	::System::Void Method_1_1A6867C974305608(::MoleMole::Battle::Entity* a1, ::MoleMole::Vehicle::VehicleConfig* a2, ::MoleMole::Vehicle::VehicleMono* a3)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*, ::MoleMole::Vehicle::VehicleConfig*, ::MoleMole::Vehicle::VehicleMono*))((::PBYTE)hIl2Cpp + CLASS_1_DFEB9A1A221CB8BE_METHOD_1_1A6867C974305608_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_9EFE71D72F7AABFD(::Struct_2_07154FD31BC71493& a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_07154FD31BC71493&))((::PBYTE)hIl2Cpp + CLASS_1_DFEB9A1A221CB8BE_METHOD_1_9EFE71D72F7AABFD_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_A20289C47B93F07A(::System::String* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_DFEB9A1A221CB8BE_METHOD_1_A20289C47B93F07A_OFFSET))(this, a1);
	}

	::System::ValueTuple_2<::UnityEngine::Vector3, ::UnityEngine::Quaternion> Method_1_591ECA845B59C5C1(::UnityEngine::Transform* a1, ::System::Single a2)
	{
		return ((::System::ValueTuple_2<::UnityEngine::Vector3, ::UnityEngine::Quaternion>(*)(::PVOID, ::UnityEngine::Transform*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_DFEB9A1A221CB8BE_METHOD_1_591ECA845B59C5C1_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_6C412C734D4ABE8C(::UnityEngine::Transform* a1, ::MoleMole::Vehicle::VehicleControlInput& a2, ::System::Boolean a3, ::System::Boolean a4, ::System::Boolean a5, ::System::Single a6)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*, ::MoleMole::Vehicle::VehicleControlInput&, ::System::Boolean, ::System::Boolean, ::System::Boolean, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_DFEB9A1A221CB8BE_METHOD_1_6C412C734D4ABE8C_OFFSET))(this, a1, a2, a3, a4, a5, a6);
	}

	::Class_1_29EA855B0A6114D6* Method_1_24748FC20F375725_4()
	{
		return ((::Class_1_29EA855B0A6114D6*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_DFEB9A1A221CB8BE_METHOD_1_24748FC20F375725_4_OFFSET))(this);
	}

	::System::Int32 Method_1_C74CF020AA42ED85()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_DFEB9A1A221CB8BE_METHOD_1_C74CF020AA42ED85_OFFSET))(this);
	}
};

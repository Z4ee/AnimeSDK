#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Vehicle/VehicleCollider_Enum_3_B92C1798682AC0E0.h"
#include "unitysdk/MoleMole/Vehicle/VehicleControlInput.h"
#include "unitysdk/MoleMole/Vehicle/VehicleMono_AnimLayerInfo.h"
#include "unitysdk/Struct_2_07154FD31BC71493.h"
#include "unitysdk/Struct_2_A0DCDC0C49E88627_Enum_3_6CD40AC38147E2AC.h"
#include "unitysdk/Struct_2_A5F3F97A94B01E4C_1.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_2.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_0698DCBDF48031C1;
class Class_1_0F8DF629665352EF;
class Class_1_29EA855B0A6114D6;
class Class_1_3DFAF92DF68271E7;
class Class_1_563051C0C7EF9F5C;
class Class_1_8663075EB5BD170B;
class Class_1_ABBBBB55F4062939;
class Class_3_F33F9DC5F4112336;
namespace MoleMole::Battle { class Entity; }
namespace MoleMole::Vehicle { class VehicleConfig; }
namespace MoleMole::Vehicle { class VehicleMono; }
namespace System { class String; }
namespace UnityEngine { class Transform; }

#define CLASS_1_DFEB9A1A221CB8BE_METHOD_1_15F4E4F86182D646_OFFSET UNITYSDK_OFFSET(0x13A91750)
#define CLASS_1_DFEB9A1A221CB8BE_METHOD_1_24748FC20F375725_1_OFFSET UNITYSDK_OFFSET(0x13A92960)
#define CLASS_1_DFEB9A1A221CB8BE_METHOD_1_24748FC20F375725_2_OFFSET UNITYSDK_OFFSET(0x13A92AA0)
#define CLASS_1_DFEB9A1A221CB8BE_METHOD_1_24748FC20F375725_3_OFFSET UNITYSDK_OFFSET(0x13A92AC0)
#define CLASS_1_DFEB9A1A221CB8BE_METHOD_1_24748FC20F375725_4_OFFSET UNITYSDK_OFFSET(0x13A92C90)
#define CLASS_1_DFEB9A1A221CB8BE_METHOD_1_24748FC20F375725_OFFSET UNITYSDK_OFFSET(0x13A91EE0)
#define CLASS_1_DFEB9A1A221CB8BE_METHOD_1_39486C62A993BD1E_OFFSET UNITYSDK_OFFSET(0x13A92970)
#define CLASS_1_DFEB9A1A221CB8BE_METHOD_1_591ECA845B59C5C1_OFFSET UNITYSDK_OFFSET(0x13A91FE0)
#define CLASS_1_DFEB9A1A221CB8BE_METHOD_1_622B2436D06839C1_OFFSET UNITYSDK_OFFSET(0x13A91EF0)
#define CLASS_1_DFEB9A1A221CB8BE_METHOD_1_6C412C734D4ABE8C_OFFSET UNITYSDK_OFFSET(0x13A92310)
#define CLASS_1_DFEB9A1A221CB8BE_METHOD_1_9EFE71D72F7AABFD_OFFSET UNITYSDK_OFFSET(0x13A91420)
#define CLASS_1_DFEB9A1A221CB8BE_METHOD_1_A20289C47B93F07A_OFFSET UNITYSDK_OFFSET(0x13A91F50)
#define CLASS_1_DFEB9A1A221CB8BE_METHOD_1_AAC62D2E340FE4B3_OFFSET UNITYSDK_OFFSET(0x13A92AD0)
#define CLASS_1_DFEB9A1A221CB8BE_METHOD_1_C74CF020AA42ED85_OFFSET UNITYSDK_OFFSET(0x13A92AB0)
#define CLASS_1_DFEB9A1A221CB8BE_METHOD_1_F00D9693CB323346_OFFSET UNITYSDK_OFFSET(0x13A919E0)
#define CLASS_1_DFEB9A1A221CB8BE__CTOR_OFFSET UNITYSDK_OFFSET(0x13A91410)

inline static constexpr unsigned int Class_1_DFEB9A1A221CB8BE_TypeDefinitionIndex = 71215;

class Class_1_DFEB9A1A221CB8BE : public ::System::Object
{
public:
	::Class_1_8663075EB5BD170B* Field_1_3; // 0x10
	::MoleMole::Battle::Entity* Field_1_7; // 0x18
	::Class_1_ABBBBB55F4062939* Field_1_5; // 0x20
	::Class_1_29EA855B0A6114D6* Field_1_6; // 0x28
	::Class_1_3DFAF92DF68271E7* Field_1_2; // 0x30
	::MoleMole::Vehicle::VehicleConfig* Field_1_13; // 0x38
	::Class_1_0F8DF629665352EF* Field_1_1; // 0x40
	::Class_1_563051C0C7EF9F5C* Field_1_0; // 0x48
	::Class_1_0698DCBDF48031C1* Field_1_4; // 0x50
	::MoleMole::Vehicle::VehicleCollider_Enum_3_B92C1798682AC0E0 Field_1_9; // 0x58
	::Struct_2_A0DCDC0C49E88627_Enum_3_6CD40AC38147E2AC Field_1_8; // 0x5C
	::Struct_2_A5F3F97A94B01E4C_1 Field_1_12; // 0x60
	::System::Int32 Field_1_11; // 0x8C
	::System::Boolean Field_1_10; // 0x90

	::System::Void _ctor(::Struct_2_07154FD31BC71493& a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_07154FD31BC71493&))((::PBYTE)hIl2Cpp + CLASS_1_DFEB9A1A221CB8BE__CTOR_OFFSET))(this, a1);
	}

	::System::Void Method_1_15F4E4F86182D646()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_DFEB9A1A221CB8BE_METHOD_1_15F4E4F86182D646_OFFSET))(this);
	}

	::System::Void Method_1_F00D9693CB323346(::Class_3_F33F9DC5F4112336* a1, ::Il2CppArray<::MoleMole::Vehicle::VehicleMono_AnimLayerInfo>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_F33F9DC5F4112336*, ::Il2CppArray<::MoleMole::Vehicle::VehicleMono_AnimLayerInfo>*))((::PBYTE)hIl2Cpp + CLASS_1_DFEB9A1A221CB8BE_METHOD_1_F00D9693CB323346_OFFSET))(this, a1, a2);
	}

	::Class_1_0F8DF629665352EF* Method_1_24748FC20F375725()
	{
		return ((::Class_1_0F8DF629665352EF*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_DFEB9A1A221CB8BE_METHOD_1_24748FC20F375725_OFFSET))(this);
	}

	::System::Boolean Method_1_622B2436D06839C1()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_DFEB9A1A221CB8BE_METHOD_1_622B2436D06839C1_OFFSET))(this);
	}

	::System::ValueTuple_2<::UnityEngine::Vector3, ::UnityEngine::Quaternion> Method_1_591ECA845B59C5C1(::UnityEngine::Transform* a1, ::System::Single a2)
	{
		return ((::System::ValueTuple_2<::UnityEngine::Vector3, ::UnityEngine::Quaternion>(*)(::PVOID, ::UnityEngine::Transform*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_DFEB9A1A221CB8BE_METHOD_1_591ECA845B59C5C1_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_6C412C734D4ABE8C(::UnityEngine::Transform* a1, ::MoleMole::Vehicle::VehicleControlInput& a2, ::System::Boolean a3, ::System::Boolean a4, ::System::Boolean a5, ::System::Single a6)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*, ::MoleMole::Vehicle::VehicleControlInput&, ::System::Boolean, ::System::Boolean, ::System::Boolean, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_DFEB9A1A221CB8BE_METHOD_1_6C412C734D4ABE8C_OFFSET))(this, a1, a2, a3, a4, a5, a6);
	}

	::System::Boolean Method_1_A20289C47B93F07A(::System::String* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_DFEB9A1A221CB8BE_METHOD_1_A20289C47B93F07A_OFFSET))(this, a1);
	}

	::Class_1_0698DCBDF48031C1* Method_1_24748FC20F375725_1()
	{
		return ((::Class_1_0698DCBDF48031C1*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_DFEB9A1A221CB8BE_METHOD_1_24748FC20F375725_1_OFFSET))(this);
	}

	::System::Void Method_1_9EFE71D72F7AABFD(::Struct_2_07154FD31BC71493& a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_07154FD31BC71493&))((::PBYTE)hIl2Cpp + CLASS_1_DFEB9A1A221CB8BE_METHOD_1_9EFE71D72F7AABFD_OFFSET))(this, a1);
	}

	::System::Void Method_1_39486C62A993BD1E(::Struct_2_07154FD31BC71493& a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_07154FD31BC71493&))((::PBYTE)hIl2Cpp + CLASS_1_DFEB9A1A221CB8BE_METHOD_1_39486C62A993BD1E_OFFSET))(this, a1);
	}

	::Class_1_29EA855B0A6114D6* Method_1_24748FC20F375725_2()
	{
		return ((::Class_1_29EA855B0A6114D6*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_DFEB9A1A221CB8BE_METHOD_1_24748FC20F375725_2_OFFSET))(this);
	}

	::System::Int32 Method_1_C74CF020AA42ED85()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_DFEB9A1A221CB8BE_METHOD_1_C74CF020AA42ED85_OFFSET))(this);
	}

	::Class_1_563051C0C7EF9F5C* Method_1_24748FC20F375725_3()
	{
		return ((::Class_1_563051C0C7EF9F5C*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_DFEB9A1A221CB8BE_METHOD_1_24748FC20F375725_3_OFFSET))(this);
	}

	::System::Void Method_1_AAC62D2E340FE4B3(::MoleMole::Battle::Entity* a1, ::MoleMole::Vehicle::VehicleConfig* a2, ::MoleMole::Vehicle::VehicleMono* a3)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*, ::MoleMole::Vehicle::VehicleConfig*, ::MoleMole::Vehicle::VehicleMono*))((::PBYTE)hIl2Cpp + CLASS_1_DFEB9A1A221CB8BE_METHOD_1_AAC62D2E340FE4B3_OFFSET))(this, a1, a2, a3);
	}

	::Class_1_ABBBBB55F4062939* Method_1_24748FC20F375725_4()
	{
		return ((::Class_1_ABBBBB55F4062939*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_DFEB9A1A221CB8BE_METHOD_1_24748FC20F375725_4_OFFSET))(this);
	}
};

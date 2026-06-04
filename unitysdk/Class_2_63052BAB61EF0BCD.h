#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_FD611945730E269E.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_2_38BE07B1D66262C2;
class Class_2_792B76992050D353;
namespace RPG::Client::Prop { class ChimeraDuelNpcModelView; }

#define CLASS_2_63052BAB61EF0BCD_METHOD_2_28EB11670A8E5A86_OFFSET UNITYSDK_OFFSET(0x134FFC60)
#define CLASS_2_63052BAB61EF0BCD_METHOD_2_3C927B51D2142A24_OFFSET UNITYSDK_OFFSET(0x13500560)
#define CLASS_2_63052BAB61EF0BCD_METHOD_2_5790A55946AA509D_OFFSET UNITYSDK_OFFSET(0x13500500)
#define CLASS_2_63052BAB61EF0BCD_METHOD_2_D43B99F9545128F5_OFFSET UNITYSDK_OFFSET(0x134FFE90)
#define CLASS_2_63052BAB61EF0BCD__CCTOR_OFFSET UNITYSDK_OFFSET(0x135004B0)
#define CLASS_2_63052BAB61EF0BCD__CTOR_OFFSET UNITYSDK_OFFSET(0x134FFC50)

inline static constexpr unsigned int Class_2_63052BAB61EF0BCD_TypeDefinitionIndex = 72773;

class Class_2_63052BAB61EF0BCD : public ::Class_1_FD611945730E269E
{
public:
	static ::System::Int32* StaticGet_Field_2_0()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_2_63052BAB61EF0BCD_TypeDefinitionIndex)->GetStaticField(0xB620);
	}
	static ::System::Int32* StaticGet_Field_2_1()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_2_63052BAB61EF0BCD_TypeDefinitionIndex)->GetStaticField(0xB624);
	}
	::Class_2_792B76992050D353* Field_2_2; // 0x18
	::Class_2_38BE07B1D66262C2* Field_2_3; // 0x20
	::RPG::Client::Prop::ChimeraDuelNpcModelView* Field_2_4; // 0x28
	::System::Single Field_2_5; // 0x30
	::System::Single Field_2_6; // 0x34
	::System::Boolean Field_2_7; // 0x38
	::UnityEngine::Quaternion Field_2_8; // 0x3C
	::UnityEngine::Vector3 Field_2_9; // 0x4C

	::System::Void _ctor(::Class_2_792B76992050D353* a1, ::Class_2_38BE07B1D66262C2* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_792B76992050D353*, ::Class_2_38BE07B1D66262C2*))((::PBYTE)hIl2Cpp + CLASS_2_63052BAB61EF0BCD__CTOR_OFFSET))(this, a1, a2);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_63052BAB61EF0BCD__CCTOR_OFFSET))();
	}

	::System::Void Method_2_28EB11670A8E5A86()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_63052BAB61EF0BCD_METHOD_2_28EB11670A8E5A86_OFFSET))(this);
	}

	::System::Void Method_2_D43B99F9545128F5(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_63052BAB61EF0BCD_METHOD_2_D43B99F9545128F5_OFFSET))(this, a1);
	}

	::System::Void Method_2_5790A55946AA509D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_63052BAB61EF0BCD_METHOD_2_5790A55946AA509D_OFFSET))(this);
	}

	::System::Void Method_2_3C927B51D2142A24(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_63052BAB61EF0BCD_METHOD_2_3C927B51D2142A24_OFFSET))(this, a1);
	}
};

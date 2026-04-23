#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_FD611945730E269E.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_2_51C91B76FE3F65C1;
class Class_2_C2931749A417D97F;
namespace RPG::Client::Prop { class ChimeraDuelNpcModelView; }

#define CLASS_2_63052BAB61EF0BCD_METHOD_2_28EB11670A8E5A86_OFFSET UNITYSDK_OFFSET(0xACE90B0)
#define CLASS_2_63052BAB61EF0BCD_METHOD_2_5790A55946AA509D_OFFSET UNITYSDK_OFFSET(0xACE9970)
#define CLASS_2_63052BAB61EF0BCD_METHOD_2_793FFA9A76FE6840_OFFSET UNITYSDK_OFFSET(0xACE99D0)
#define CLASS_2_63052BAB61EF0BCD_METHOD_2_D43B99F9545128F5_OFFSET UNITYSDK_OFFSET(0xACE92E0)
#define CLASS_2_63052BAB61EF0BCD__CCTOR_OFFSET UNITYSDK_OFFSET(0xACE9900)
#define CLASS_2_63052BAB61EF0BCD__CTOR_OFFSET UNITYSDK_OFFSET(0xACE90A0)

inline static constexpr unsigned int Class_2_63052BAB61EF0BCD_TypeDefinitionIndex = 71751;

class Class_2_63052BAB61EF0BCD : public ::Class_1_FD611945730E269E
{
public:
	static ::System::Int32* StaticGet_Field_2_1()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_2_63052BAB61EF0BCD_TypeDefinitionIndex)->GetStaticField(0x10450);
	}
	static ::System::Int32* StaticGet_Field_2_0()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_2_63052BAB61EF0BCD_TypeDefinitionIndex)->GetStaticField(0x10454);
	}
	::RPG::Client::Prop::ChimeraDuelNpcModelView* Field_2_4; // 0x18
	::Class_2_C2931749A417D97F* Field_2_3; // 0x20
	::Class_2_51C91B76FE3F65C1* Field_2_2; // 0x28
	::UnityEngine::Vector3 Field_2_5; // 0x30
	::UnityEngine::Quaternion Field_2_6; // 0x3C
	::System::Single Field_2_9; // 0x4C
	::System::Boolean Field_2_8; // 0x50
	::System::Single Field_2_7; // 0x54

	::System::Void _ctor(::Class_2_51C91B76FE3F65C1* a1, ::Class_2_C2931749A417D97F* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_51C91B76FE3F65C1*, ::Class_2_C2931749A417D97F*))((::PBYTE)hIl2Cpp + CLASS_2_63052BAB61EF0BCD__CTOR_OFFSET))(this, a1, a2);
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

	::System::Void Method_2_793FFA9A76FE6840(::System::Single P0)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_63052BAB61EF0BCD_METHOD_2_793FFA9A76FE6840_OFFSET))(this, P0);
	}
};

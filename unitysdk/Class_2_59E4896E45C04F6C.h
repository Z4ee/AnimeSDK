#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_3979F23DE6A08606.h"
#include "unitysdk/Foundation/Unreal/FTransform.h"
#include "unitysdk/MoleMole/FlowCanvas/Nodes/AnchorPointForwardAxis.h"
#include "unitysdk/Struct_2_8F1F8F30CBE74E21.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_0_16E4307DCC419505_396;
class Class_0_16E4307DCC419505_397;
class Class_0_16E4307DCC419505_413;
namespace System { class Action; }

#define CLASS_2_59E4896E45C04F6C_METHOD_2_104D85E68985B516_OFFSET UNITYSDK_OFFSET(0x10F223B0)
#define CLASS_2_59E4896E45C04F6C_METHOD_2_2D5EE8D5F52A5292_OFFSET UNITYSDK_OFFSET(0x10F22B20)
#define CLASS_2_59E4896E45C04F6C_METHOD_2_3F2DD0D9A22299D7_OFFSET UNITYSDK_OFFSET(0x10F21B50)
#define CLASS_2_59E4896E45C04F6C_METHOD_2_413F493333BF3391_OFFSET UNITYSDK_OFFSET(0x10F219A0)
#define CLASS_2_59E4896E45C04F6C_METHOD_2_7B7B5C32B34935AA_OFFSET UNITYSDK_OFFSET(0x10F219B0)
#define CLASS_2_59E4896E45C04F6C_METHOD_2_84199A3D72F7185B_OFFSET UNITYSDK_OFFSET(0x10F22650)
#define CLASS_2_59E4896E45C04F6C_METHOD_2_C50B93169B85DAEA_1_OFFSET UNITYSDK_OFFSET(0x10F22C40)
#define CLASS_2_59E4896E45C04F6C_METHOD_2_C50B93169B85DAEA_2_OFFSET UNITYSDK_OFFSET(0x10F22CD0)
#define CLASS_2_59E4896E45C04F6C_METHOD_2_C50B93169B85DAEA_3_OFFSET UNITYSDK_OFFSET(0x10F22D60)
#define CLASS_2_59E4896E45C04F6C_METHOD_2_C50B93169B85DAEA_OFFSET UNITYSDK_OFFSET(0x10F22330)
#define CLASS_2_59E4896E45C04F6C_METHOD_2_D37FAD0A6AA04B25_OFFSET UNITYSDK_OFFSET(0x10F21980)
#define CLASS_2_59E4896E45C04F6C__CTOR_OFFSET UNITYSDK_OFFSET(0x10F223A0)

inline static constexpr unsigned int Class_2_59E4896E45C04F6C_TypeDefinitionIndex = 63098;

class Class_2_59E4896E45C04F6C : public ::Class_1_3979F23DE6A08606
{
public:
	::System::Action* Field_2_4; // 0x10
	::Struct_2_8F1F8F30CBE74E21 Field_2_1; // 0x18
	::Foundation::Unreal::FTransform Field_2_7; // 0x50
	::System::Nullable_1<::UnityEngine::Vector3> Field_2_6; // 0x70
	::UnityEngine::Vector3 Field_2_5; // 0x80
	::System::Boolean Field_2_0; // 0x8C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_59E4896E45C04F6C__CTOR_OFFSET))(this);
	}

	::UnityEngine::Vector3 Method_2_D37FAD0A6AA04B25()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_59E4896E45C04F6C_METHOD_2_D37FAD0A6AA04B25_OFFSET))(this);
	}

	::UnityEngine::Quaternion Method_2_413F493333BF3391()
	{
		return ((::UnityEngine::Quaternion(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_59E4896E45C04F6C_METHOD_2_413F493333BF3391_OFFSET))(this);
	}

	::System::Void Method_2_7B7B5C32B34935AA(::Class_0_16E4307DCC419505_396* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_396*))((::PBYTE)hIl2Cpp + CLASS_2_59E4896E45C04F6C_METHOD_2_7B7B5C32B34935AA_OFFSET))(this, a1);
	}

	::System::Void Method_2_3F2DD0D9A22299D7(::Class_0_16E4307DCC419505_397* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_397*))((::PBYTE)hIl2Cpp + CLASS_2_59E4896E45C04F6C_METHOD_2_3F2DD0D9A22299D7_OFFSET))(this, a1);
	}

	::System::Void Method_2_C50B93169B85DAEA(::Class_0_16E4307DCC419505_413* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_413*))((::PBYTE)hIl2Cpp + CLASS_2_59E4896E45C04F6C_METHOD_2_C50B93169B85DAEA_OFFSET))(this, a1);
	}

	static ::UnityEngine::Quaternion Method_2_104D85E68985B516(::UnityEngine::Quaternion a1, ::System::Nullable_1<::UnityEngine::Vector3> a2)
	{
		return ((::UnityEngine::Quaternion(*)(::UnityEngine::Quaternion, ::System::Nullable_1<::UnityEngine::Vector3>))((::PBYTE)hIl2Cpp + CLASS_2_59E4896E45C04F6C_METHOD_2_104D85E68985B516_OFFSET))(a1, a2);
	}

	::Foundation::Unreal::FTransform Method_2_84199A3D72F7185B()
	{
		return ((::Foundation::Unreal::FTransform(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_59E4896E45C04F6C_METHOD_2_84199A3D72F7185B_OFFSET))(this);
	}

	static ::System::Nullable_1<::UnityEngine::Vector3> Method_2_2D5EE8D5F52A5292(::MoleMole::FlowCanvas::Nodes::AnchorPointForwardAxis a1)
	{
		return ((::System::Nullable_1<::UnityEngine::Vector3>(*)(::MoleMole::FlowCanvas::Nodes::AnchorPointForwardAxis))((::PBYTE)hIl2Cpp + CLASS_2_59E4896E45C04F6C_METHOD_2_2D5EE8D5F52A5292_OFFSET))(a1);
	}

	::System::Void Method_2_C50B93169B85DAEA_1(::Class_0_16E4307DCC419505_396* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_396*))((::PBYTE)hIl2Cpp + CLASS_2_59E4896E45C04F6C_METHOD_2_C50B93169B85DAEA_1_OFFSET))(this, a1);
	}

	::System::Void Method_2_C50B93169B85DAEA_2(::Class_0_16E4307DCC419505_397* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_397*))((::PBYTE)hIl2Cpp + CLASS_2_59E4896E45C04F6C_METHOD_2_C50B93169B85DAEA_2_OFFSET))(this, a1);
	}

	::System::Void Method_2_C50B93169B85DAEA_3(::Class_0_16E4307DCC419505_413* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_413*))((::PBYTE)hIl2Cpp + CLASS_2_59E4896E45C04F6C_METHOD_2_C50B93169B85DAEA_3_OFFSET))(this, a1);
	}
};

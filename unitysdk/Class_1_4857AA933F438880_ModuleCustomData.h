#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_4857AA933F438880_ItemData;

#define CLASS_1_4857AA933F438880_MODULECUSTOMDATA_GET_CUSTOMUVTILLING_OFFSET UNITYSDK_OFFSET(0x3AFE550)
#define CLASS_1_4857AA933F438880_MODULECUSTOMDATA_GET_ITEMDATA_OFFSET UNITYSDK_OFFSET(0x3AFE5C0)
#define CLASS_1_4857AA933F438880_MODULECUSTOMDATA__CCTOR_OFFSET UNITYSDK_OFFSET(0x19873900)

inline static constexpr unsigned int Class_1_4857AA933F438880_ModuleCustomData_TypeDefinitionIndex = 49312;

struct alignas(4) Class_1_4857AA933F438880_ModuleCustomData
{
	static ::Class_1_4857AA933F438880_ModuleCustomData* StaticGet_Default()
	{
		return (::Class_1_4857AA933F438880_ModuleCustomData*)Il2CppClass::FromTypeDefinitionIndex(Class_1_4857AA933F438880_ModuleCustomData_TypeDefinitionIndex)->GetStaticField(0x106D0);
	}
	::System::Boolean IfEnableDeform; // 0x10
	::System::Boolean IfEnableStretch; // 0x11
	::System::Boolean IfUseCustomScale; // 0x12
	::UnityEngine::Vector3 CustomScale; // 0x14
	::System::Boolean IfUseCustomTransform; // 0x20
	::UnityEngine::Vector3 CustomTransform; // 0x24
	::System::Boolean IfUseCustomColor; // 0x30
	::System::Boolean IfUseCustomAngle; // 0x31
	::System::Single CustomAngle; // 0x34
	::UnityEngine::Color CustomColor; // 0x38
	::System::Int32 CustomAtlasID; // 0x48
	::System::Int32 CustomWSBlendAtlasID; // 0x4C
	::System::Boolean IfShowDebugData; // 0x50
	::System::Single VertexOffsetXZ1; // 0x54
	::System::Single VertexOffsetXZ2; // 0x58
	::System::Single VertexOffsetYZ1; // 0x5C
	::System::Single VertexOffsetYZ2; // 0x60
	::System::Single VertexOffsetXY1; // 0x64
	::System::Single VertexOffsetYX1; // 0x68
	::System::Boolean IfSkipNormalFix; // 0x6C
	::System::Boolean IfForceUpNormal; // 0x6D
	::System::Single UVOffset; // 0x70
	::System::Single MainUVScale; // 0x74
	::System::Single LeftTopOffsetZ; // 0x78
	::System::Single RightTopOffsetZ; // 0x7C
	::System::Single RightTopOffsetX; // 0x80
	::System::Single RightTopOffsetY; // 0x84

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_4857AA933F438880_MODULECUSTOMDATA__CCTOR_OFFSET))();
	}

	/*
	::UnityEngine::Vector2 get_CustomUVTilling()
	{
		return ((::UnityEngine::Vector2(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4857AA933F438880_MODULECUSTOMDATA_GET_CUSTOMUVTILLING_OFFSET))(this);
	}
	*/

	::Class_1_4857AA933F438880_ItemData* get_ItemData()
	{
		return ((::Class_1_4857AA933F438880_ItemData*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4857AA933F438880_MODULECUSTOMDATA_GET_ITEMDATA_OFFSET))(this);
	}
};

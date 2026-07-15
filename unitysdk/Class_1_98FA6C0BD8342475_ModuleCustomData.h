#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_98FA6C0BD8342475_ItemData;

#define CLASS_1_98FA6C0BD8342475_MODULECUSTOMDATA_GET_CUSTOMUVTILLING_OFFSET UNITYSDK_OFFSET(0x397D740)
#define CLASS_1_98FA6C0BD8342475_MODULECUSTOMDATA_GET_ITEMDATA_OFFSET UNITYSDK_OFFSET(0x397D7B0)
#define CLASS_1_98FA6C0BD8342475_MODULECUSTOMDATA__CCTOR_OFFSET UNITYSDK_OFFSET(0x18389420)

inline static constexpr unsigned int Class_1_98FA6C0BD8342475_ModuleCustomData_TypeDefinitionIndex = 47049;

struct alignas(4) Class_1_98FA6C0BD8342475_ModuleCustomData
{
	static ::Class_1_98FA6C0BD8342475_ModuleCustomData* StaticGet_Default()
	{
		return (::Class_1_98FA6C0BD8342475_ModuleCustomData*)Il2CppClass::FromTypeDefinitionIndex(Class_1_98FA6C0BD8342475_ModuleCustomData_TypeDefinitionIndex)->GetStaticField(0x5D30);
	}
	::System::Boolean IfEnableDeform; // 0x10
	::System::Boolean IfEnableStretch; // 0x11
	::System::Boolean IfForceUpNormal; // 0x12
	::System::Boolean IfUseCustomScale; // 0x13
	::UnityEngine::Vector3 CustomScale; // 0x14
	::System::Boolean IfUseCustomTransform; // 0x20
	::UnityEngine::Vector3 CustomTransform; // 0x24
	::System::Boolean IfUseCustomColor; // 0x30
	::System::Boolean IfUseCustomAngle; // 0x31
	::System::Single CustomAngle; // 0x34
	::UnityEngine::Color CustomColor; // 0x38
	::System::Int32 CustomAtlasID; // 0x48
	::System::Int32 CustomWSBlendAtlasID; // 0x4C
	::System::Single VertexOffsetXZ1; // 0x50
	::System::Single VertexOffsetXZ2; // 0x54
	::System::Single VertexOffsetYZ1; // 0x58
	::System::Single VertexOffsetYZ2; // 0x5C
	::System::Single VertexOffsetXY1; // 0x60
	::System::Single VertexOffsetYX1; // 0x64
	::System::Single VertexOffsetZY2; // 0x68
	::System::Single UVOffset; // 0x6C
	::System::Single MainUVScale; // 0x70

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_98FA6C0BD8342475_MODULECUSTOMDATA__CCTOR_OFFSET))();
	}

	/*
	::UnityEngine::Vector2 get_CustomUVTilling()
	{
		return ((::UnityEngine::Vector2(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_98FA6C0BD8342475_MODULECUSTOMDATA_GET_CUSTOMUVTILLING_OFFSET))(this);
	}
	*/

	::Class_1_98FA6C0BD8342475_ItemData* get_ItemData()
	{
		return ((::Class_1_98FA6C0BD8342475_ItemData*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_98FA6C0BD8342475_MODULECUSTOMDATA_GET_ITEMDATA_OFFSET))(this);
	}
};

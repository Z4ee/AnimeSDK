#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"
#include "unitysdk/UnityEngine/Vector4.h"

#define CLASS_1_4857AA933F438880_ITEMDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x19872770)

inline static constexpr unsigned int Class_1_4857AA933F438880_ItemData_TypeDefinitionIndex = 49314;

class Class_1_4857AA933F438880_ItemData : public ::System::Object
{
public:
	::UnityEngine::Vector3 Pos; // 0x10
	::UnityEngine::Quaternion Rotation; // 0x1C
	::UnityEngine::Vector3 Scale; // 0x2C
	::System::Single VertexOffsetXZ1; // 0x38
	::System::Single VertexOffsetXZ2; // 0x3C
	::System::Single VertexOffsetYZ1; // 0x40
	::System::Single VertexOffsetYZ2; // 0x44
	::System::Single UVOffset; // 0x48
	::System::Single VertexOffsetXY1; // 0x4C
	::System::Single VertexOffsetYX1; // 0x50
	::UnityEngine::Vector4 CustomDataEncode; // 0x54
	::UnityEngine::Color CustomColor; // 0x64
	::System::Int32 CustomAtlasID; // 0x74
	::System::Int32 CustomWSBlendAtlasID; // 0x78
	::System::Boolean IfSkipNormalFix; // 0x7C
	::System::Boolean IfForceUpNormal; // 0x7D
	::System::Single MainUVScale; // 0x80
	::System::Single LeftTopOffsetZ; // 0x84
	::System::Single RightTopOffsetZ; // 0x88
	::System::Single RightTopOffsetX; // 0x8C
	::System::Single RightTopOffsetY; // 0x90

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4857AA933F438880_ITEMDATA__CTOR_OFFSET))(this);
	}
};

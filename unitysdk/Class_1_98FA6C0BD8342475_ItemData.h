#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"
#include "unitysdk/UnityEngine/Vector4.h"

#define CLASS_1_98FA6C0BD8342475_ITEMDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x18388760)

inline static constexpr unsigned int Class_1_98FA6C0BD8342475_ItemData_TypeDefinitionIndex = 47051;

class Class_1_98FA6C0BD8342475_ItemData : public ::System::Object
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
	::System::Single VertexOffsetZY2; // 0x54
	::UnityEngine::Vector4 CustomDataEncode; // 0x58
	::UnityEngine::Color CustomColor; // 0x68
	::System::Int32 CustomAtlasID; // 0x78
	::System::Int32 CustomWSBlendAtlasID; // 0x7C
	::System::Boolean IfForceUpNormal; // 0x80
	::System::Single MainUVScale; // 0x84

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_98FA6C0BD8342475_ITEMDATA__CTOR_OFFSET))(this);
	}
};

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"
#include "unitysdk/UnityEngine/Vector4.h"

#define RPG_EDITOR_BGCURVEPCG_LINEARMODULEGENERATOR_ITEMDATA__CTOR_OFFSET UNITYSDK_OFFSET(0xB500D90)

namespace RPG::Editor
{
	inline static constexpr unsigned int BGCurvePCG_LinearModuleGenerator_ItemData_TypeDefinitionIndex = 48024;

	class BGCurvePCG_LinearModuleGenerator_ItemData : public ::System::Object
	{
	public:
		::UnityEngine::Vector3 Pos; // 0x10
		::UnityEngine::Quaternion Rotation; // 0x1C
		::System::Single VertexOffsetXZ1; // 0x2C
		::System::Single VertexOffsetXZ2; // 0x30
		::System::Single VertexOffsetYZ1; // 0x34
		::System::Single VertexOffsetYZ2; // 0x38
		::System::Single Scale; // 0x3C
		::System::Single UVOffset; // 0x40
		::System::Single VertexOffsetXY1; // 0x44
		::System::Single VertexOffsetYX1; // 0x48
		::UnityEngine::Vector4 CustomDataEncode; // 0x4C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_EDITOR_BGCURVEPCG_LINEARMODULEGENERATOR_ITEMDATA__CTOR_OFFSET))(this);
		}
	};
}

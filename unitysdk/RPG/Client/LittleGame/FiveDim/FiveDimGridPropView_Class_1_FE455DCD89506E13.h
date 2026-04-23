#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGame/FiveDim/FiveDimGridPropView_CellWaterReflectionState.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace RPG::Client::LittleGame::FiveDim { class FiveDimGridPropView; }
namespace System { class String; }
namespace UnityEngine { class BoxCollider; }

#define RPG_CLIENT_LITTLEGAME_FIVEDIM_FIVEDIMGRIDPROPVIEW_CLASS_1_FE455DCD89506E13_CLEAR_OFFSET UNITYSDK_OFFSET(0xA6B5520)
#define RPG_CLIENT_LITTLEGAME_FIVEDIM_FIVEDIMGRIDPROPVIEW_CLASS_1_FE455DCD89506E13_METHOD_1_AF9F503C79D68F52_OFFSET UNITYSDK_OFFSET(0xA6B4C30)
#define RPG_CLIENT_LITTLEGAME_FIVEDIM_FIVEDIMGRIDPROPVIEW_CLASS_1_FE455DCD89506E13_METHOD_1_CF8551534BA217CC_OFFSET UNITYSDK_OFFSET(0xA6B4B50)
#define RPG_CLIENT_LITTLEGAME_FIVEDIM_FIVEDIMGRIDPROPVIEW_CLASS_1_FE455DCD89506E13__CTOR_OFFSET UNITYSDK_OFFSET(0xA6B5600)

namespace RPG::Client::LittleGame::FiveDim
{
	inline static constexpr unsigned int FiveDimGridPropView_Class_1_FE455DCD89506E13_TypeDefinitionIndex = 70888;

	class FiveDimGridPropView_Class_1_FE455DCD89506E13 : public ::System::Object
	{
	public:
		::System::String* Field_1_4; // 0x10
		::UnityEngine::BoxCollider* Field_1_0; // 0x18
		::RPG::Client::LittleGame::FiveDim::FiveDimGridPropView* Field_1_5; // 0x20
		::RPG::Client::LittleGame::FiveDim::FiveDimGridPropView_CellWaterReflectionState Field_1_6; // 0x28
		::UnityEngine::Vector3 Field_1_1; // 0x2C
		::System::Boolean Field_1_3; // 0x38
		::RPG::Client::LittleGame::FiveDim::FiveDimGridPropView_CellWaterReflectionState Field_1_7; // 0x3C
		::UnityEngine::Vector3 Field_1_2; // 0x40

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_FIVEDIM_FIVEDIMGRIDPROPVIEW_CLASS_1_FE455DCD89506E13__CTOR_OFFSET))(this);
		}

		::System::Void Method_1_CF8551534BA217CC(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_FIVEDIM_FIVEDIMGRIDPROPVIEW_CLASS_1_FE455DCD89506E13_METHOD_1_CF8551534BA217CC_OFFSET))(this, a1);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_FIVEDIM_FIVEDIMGRIDPROPVIEW_CLASS_1_FE455DCD89506E13_CLEAR_OFFSET))(this);
		}

		::System::Void Method_1_AF9F503C79D68F52(::RPG::Client::LittleGame::FiveDim::FiveDimGridPropView_CellWaterReflectionState a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::LittleGame::FiveDim::FiveDimGridPropView_CellWaterReflectionState))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_FIVEDIM_FIVEDIMGRIDPROPVIEW_CLASS_1_FE455DCD89506E13_METHOD_1_AF9F503C79D68F52_OFFSET))(this, a1);
		}
	};
}

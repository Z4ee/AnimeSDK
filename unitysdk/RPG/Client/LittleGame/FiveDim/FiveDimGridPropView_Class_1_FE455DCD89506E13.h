#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGame/FiveDim/FiveDimGridPropView_CellWaterReflectionState.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace RPG::Client::LittleGame::FiveDim { class FiveDimGridPropView; }
namespace System { class String; }
namespace UnityEngine { class BoxCollider; }

#define RPG_CLIENT_LITTLEGAME_FIVEDIM_FIVEDIMGRIDPROPVIEW_CLASS_1_FE455DCD89506E13_CLEAR_OFFSET UNITYSDK_OFFSET(0x1AC50140)
#define RPG_CLIENT_LITTLEGAME_FIVEDIM_FIVEDIMGRIDPROPVIEW_CLASS_1_FE455DCD89506E13_METHOD_1_AF9F503C79D68F52_OFFSET UNITYSDK_OFFSET(0x1AC4F410)
#define RPG_CLIENT_LITTLEGAME_FIVEDIM_FIVEDIMGRIDPROPVIEW_CLASS_1_FE455DCD89506E13_METHOD_1_B560799CAB48EE76_OFFSET UNITYSDK_OFFSET(0x1AC4F2E0)
#define RPG_CLIENT_LITTLEGAME_FIVEDIM_FIVEDIMGRIDPROPVIEW_CLASS_1_FE455DCD89506E13__CTOR_OFFSET UNITYSDK_OFFSET(0x1AC50220)

namespace RPG::Client::LittleGame::FiveDim
{
	inline static constexpr unsigned int FiveDimGridPropView_Class_1_FE455DCD89506E13_TypeDefinitionIndex = 76711;

	class FiveDimGridPropView_Class_1_FE455DCD89506E13 : public ::System::Object
	{
	public:
		::RPG::Client::LittleGame::FiveDim::FiveDimGridPropView* OMDIMJJIBED; // 0x10
		::System::String* GPKEJBHALNM; // 0x18
		::UnityEngine::BoxCollider* JBOHAAPLNBH; // 0x20
		::RPG::Client::LittleGame::FiveDim::FiveDimGridPropView_CellWaterReflectionState GEJJDBOFBCD; // 0x28
		::RPG::Client::LittleGame::FiveDim::FiveDimGridPropView_CellWaterReflectionState FLOIOGLNPFA; // 0x2C
		::UnityEngine::Vector3 MAMGMJMFGHC; // 0x30
		::UnityEngine::Vector3 DIEELHCCNFJ; // 0x3C
		::System::Boolean EILJFGNKOBD; // 0x48

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_FIVEDIM_FIVEDIMGRIDPROPVIEW_CLASS_1_FE455DCD89506E13__CTOR_OFFSET))(this);
		}

		::System::Void Method_1_B560799CAB48EE76(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_FIVEDIM_FIVEDIMGRIDPROPVIEW_CLASS_1_FE455DCD89506E13_METHOD_1_B560799CAB48EE76_OFFSET))(this, a1);
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

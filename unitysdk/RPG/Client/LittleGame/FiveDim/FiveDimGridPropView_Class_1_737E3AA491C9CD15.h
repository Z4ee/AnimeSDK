#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGame/FiveDim/FiveDimGridPropView_CellWaterReflectionState.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace RPG::Client::LittleGame::FiveDim { class FiveDimGridPropView; }
namespace System { class String; }
namespace UnityEngine { class BoxCollider; }
namespace UnityEngine { class Transform; }

#define RPG_CLIENT_LITTLEGAME_FIVEDIM_FIVEDIMGRIDPROPVIEW_CLASS_1_737E3AA491C9CD15_CLEAR_OFFSET UNITYSDK_OFFSET(0xBE060D0)
#define RPG_CLIENT_LITTLEGAME_FIVEDIM_FIVEDIMGRIDPROPVIEW_CLASS_1_737E3AA491C9CD15_METHOD_1_AF9F503C79D68F52_OFFSET UNITYSDK_OFFSET(0xBE051C0)
#define RPG_CLIENT_LITTLEGAME_FIVEDIM_FIVEDIMGRIDPROPVIEW_CLASS_1_737E3AA491C9CD15_METHOD_1_B560799CAB48EE76_OFFSET UNITYSDK_OFFSET(0xBE05090)
#define RPG_CLIENT_LITTLEGAME_FIVEDIM_FIVEDIMGRIDPROPVIEW_CLASS_1_737E3AA491C9CD15__CTOR_OFFSET UNITYSDK_OFFSET(0xBE061B0)

namespace RPG::Client::LittleGame::FiveDim
{
	inline static constexpr unsigned int FiveDimGridPropView_Class_1_737E3AA491C9CD15_TypeDefinitionIndex = 71709;

	class FiveDimGridPropView_Class_1_737E3AA491C9CD15 : public ::System::Object
	{
	public:
		::UnityEngine::BoxCollider* Field_1_0; // 0x10
		::UnityEngine::Transform* Field_1_1; // 0x18
		::System::String* Field_1_2; // 0x20
		::RPG::Client::LittleGame::FiveDim::FiveDimGridPropView* Field_1_3; // 0x28
		::RPG::Client::LittleGame::FiveDim::FiveDimGridPropView_CellWaterReflectionState Field_1_4; // 0x30
		::UnityEngine::Vector3 Field_1_5; // 0x34
		::System::Boolean Field_1_6; // 0x40
		::RPG::Client::LittleGame::FiveDim::FiveDimGridPropView_CellWaterReflectionState Field_1_7; // 0x44
		::UnityEngine::Vector3 Field_1_8; // 0x48

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_FIVEDIM_FIVEDIMGRIDPROPVIEW_CLASS_1_737E3AA491C9CD15__CTOR_OFFSET))(this);
		}

		::System::Void Method_1_B560799CAB48EE76(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_FIVEDIM_FIVEDIMGRIDPROPVIEW_CLASS_1_737E3AA491C9CD15_METHOD_1_B560799CAB48EE76_OFFSET))(this, a1);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_FIVEDIM_FIVEDIMGRIDPROPVIEW_CLASS_1_737E3AA491C9CD15_CLEAR_OFFSET))(this);
		}

		::System::Void Method_1_AF9F503C79D68F52(::RPG::Client::LittleGame::FiveDim::FiveDimGridPropView_CellWaterReflectionState a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::LittleGame::FiveDim::FiveDimGridPropView_CellWaterReflectionState))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_FIVEDIM_FIVEDIMGRIDPROPVIEW_CLASS_1_737E3AA491C9CD15_METHOD_1_AF9F503C79D68F52_OFFSET))(this, a1);
		}
	};
}

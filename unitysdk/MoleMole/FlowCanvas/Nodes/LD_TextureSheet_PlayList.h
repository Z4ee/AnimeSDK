#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/Flow.h"
#include "unitysdk/FlowCanvas/Nodes/FlowControlNode.h"
#include "unitysdk/MoleMole/Config/TextureSheetInterruptType.h"
#include "unitysdk/MoleMole/StaticSceneObjectListLoopType.h"

namespace FlowCanvas { class FlowOutput; }
namespace FlowCanvas { template <typename T> class ValueInput_1; }
namespace MoleMole::Battle { class Entity; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_FLOWCANVAS_NODES_LD_TEXTURESHEET_PLAYLIST_REGISTERPORTS_OFFSET UNITYSDK_OFFSET(0x18B2F0F0)
#define MOLEMOLE_FLOWCANVAS_NODES_LD_TEXTURESHEET_PLAYLIST__CTOR_OFFSET UNITYSDK_OFFSET(0x18B2F2D0)
#define MOLEMOLE_FLOWCANVAS_NODES_LD_TEXTURESHEET_PLAYLIST__REGISTERPORTS_B__9_0_OFFSET UNITYSDK_OFFSET(0x18B2F310)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int LD_TextureSheet_PlayList_TypeDefinitionIndex = 80026;

	class LD_TextureSheet_PlayList : public ::FlowCanvas::Nodes::FlowControlNode
	{
	public:
		::FlowCanvas::FlowOutput* _output; // 0xA8
		::FlowCanvas::ValueInput_1<::MoleMole::Config::TextureSheetInterruptType>* _interruptType; // 0xB0
		::FlowCanvas::ValueInput_1<::System::Boolean>* _isForceUpdate; // 0xB8
		::FlowCanvas::ValueInput_1<::MoleMole::StaticSceneObjectListLoopType>* _listLoopType; // 0xC0
		::FlowCanvas::ValueInput_1<::System::Collections::Generic::List_1<::System::String*>*>* _textureSheetKeyList; // 0xC8
		::FlowCanvas::ValueInput_1<::System::String*>* _meshPath; // 0xD0
		::FlowCanvas::ValueInput_1<::System::Boolean>* _isKeepLastFrame; // 0xD8
		::FlowCanvas::ValueInput_1<::System::Collections::Generic::List_1<::System::Boolean>*>* _textureSheetKeyListLoopSet; // 0xE0
		::FlowCanvas::ValueInput_1<::MoleMole::Battle::Entity*>* _targetEntity; // 0xE8

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_TEXTURESHEET_PLAYLIST__CTOR_OFFSET))(this);
		}

		::System::Void RegisterPorts()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_TEXTURESHEET_PLAYLIST_REGISTERPORTS_OFFSET))(this);
		}

		::System::Void _RegisterPorts_b__9_0(::FlowCanvas::Flow flow)
		{
			return ((::System::Void(*)(::PVOID, ::FlowCanvas::Flow))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_TEXTURESHEET_PLAYLIST__REGISTERPORTS_B__9_0_OFFSET))(this, flow);
		}
	};
}

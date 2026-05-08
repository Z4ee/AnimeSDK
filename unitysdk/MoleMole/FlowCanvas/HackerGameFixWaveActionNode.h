#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/Flow.h"
#include "unitysdk/FlowCanvas/FlowNode.h"
#include "unitysdk/MoleMole/HollowChessboard/HollowCell.h"

class Class_5_AF65C3A968E836D2;
namespace FlowCanvas { class FlowInput; }
namespace FlowCanvas { class FlowOutput; }
namespace FlowCanvas { template <typename T> class ValueInput_1; }
namespace FlowCanvas { template <typename T> class ValueOutput_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_FLOWCANVAS_HACKERGAMEFIXWAVEACTIONNODE_ADVANCE_OFFSET UNITYSDK_OFFSET(0x15402F30)
#define MOLEMOLE_FLOWCANVAS_HACKERGAMEFIXWAVEACTIONNODE_GET_CURRENTCHESSBOARD_OFFSET UNITYSDK_OFFSET(0x15402BD0)
#define MOLEMOLE_FLOWCANVAS_HACKERGAMEFIXWAVEACTIONNODE_GET_ISACTIVE_OFFSET UNITYSDK_OFFSET(0x15402BC0)
#define MOLEMOLE_FLOWCANVAS_HACKERGAMEFIXWAVEACTIONNODE_GET_ISPAUSED_OFFSET UNITYSDK_OFFSET(0x15402B40)
#define MOLEMOLE_FLOWCANVAS_HACKERGAMEFIXWAVEACTIONNODE_INITBOUND_OFFSET UNITYSDK_OFFSET(0x154036E0)
#define MOLEMOLE_FLOWCANVAS_HACKERGAMEFIXWAVEACTIONNODE_INVOKE_OFFSET UNITYSDK_OFFSET(0x15403220)
#define MOLEMOLE_FLOWCANVAS_HACKERGAMEFIXWAVEACTIONNODE_REGISTERPORTS_OFFSET UNITYSDK_OFFSET(0x15402CD0)
#define MOLEMOLE_FLOWCANVAS_HACKERGAMEFIXWAVEACTIONNODE_SETACTIVE_OFFSET UNITYSDK_OFFSET(0x15403610)
#define MOLEMOLE_FLOWCANVAS_HACKERGAMEFIXWAVEACTIONNODE_START_OFFSET UNITYSDK_OFFSET(0x15403490)
#define MOLEMOLE_FLOWCANVAS_HACKERGAMEFIXWAVEACTIONNODE_STOP_OFFSET UNITYSDK_OFFSET(0x15403350)
#define MOLEMOLE_FLOWCANVAS_HACKERGAMEFIXWAVEACTIONNODE_UPDATE_OFFSET UNITYSDK_OFFSET(0x15402FA0)
#define MOLEMOLE_FLOWCANVAS_HACKERGAMEFIXWAVEACTIONNODE__CTOR_OFFSET UNITYSDK_OFFSET(0x15403830)
#define MOLEMOLE_FLOWCANVAS_HACKERGAMEFIXWAVEACTIONNODE__REGISTERPORTS_B__26_0_OFFSET UNITYSDK_OFFSET(0x15403870)
#define MOLEMOLE_FLOWCANVAS_HACKERGAMEFIXWAVEACTIONNODE__REGISTERPORTS_B__26_1_OFFSET UNITYSDK_OFFSET(0x154038A0)
#define MOLEMOLE_FLOWCANVAS_HACKERGAMEFIXWAVEACTIONNODE__REGISTERPORTS_B__26_2_OFFSET UNITYSDK_OFFSET(0x15403930)
#define MOLEMOLE_FLOWCANVAS_HACKERGAMEFIXWAVEACTIONNODE__REGISTERPORTS_B__26_3_OFFSET UNITYSDK_OFFSET(0x15403950)

namespace MoleMole::FlowCanvas
{
	inline static constexpr unsigned int HackerGameFixWaveActionNode_TypeDefinitionIndex = 70889;

	class HackerGameFixWaveActionNode : public ::FlowCanvas::FlowNode
	{
	public:
		::FlowCanvas::ValueInput_1<::System::Collections::Generic::List_1<::MoleMole::HollowChessboard::HollowCell>*>* Bound; // 0xA8
		::FlowCanvas::FlowOutput* _then; // 0xB0
		::FlowCanvas::ValueInput_1<::System::Boolean>* _isPaused; // 0xB8
		::FlowCanvas::FlowOutput* _finish; // 0xC0
		::FlowCanvas::ValueInput_1<::System::Int32>* _delay; // 0xC8
		::FlowCanvas::FlowInput* _advance; // 0xD0
		::FlowCanvas::ValueOutput_1<::MoleMole::HollowChessboard::HollowCell>* _cellOutput; // 0xD8
		::FlowCanvas::FlowInput* _start; // 0xE0
		::FlowCanvas::FlowOutput* _invokeCell; // 0xE8
		::FlowCanvas::ValueOutput_1<::System::Int32>* _col; // 0xF0
		::FlowCanvas::FlowOutput* _invokeCol; // 0xF8
		::System::Int32 _indexCache; // 0x100
		::System::Int32 _minX; // 0x104
		::System::Int32 _minY; // 0x108
		::System::Int32 _timer; // 0x10C
		::System::Boolean _isActive; // 0x110
		::System::Int32 _colValue; // 0x114
		::System::Int32 _maxX; // 0x118
		::System::Int32 _maxY; // 0x11C
		::MoleMole::HollowChessboard::HollowCell _cell; // 0x120

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_HACKERGAMEFIXWAVEACTIONNODE__CTOR_OFFSET))(this);
		}

		::System::Boolean get_IsPaused()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_HACKERGAMEFIXWAVEACTIONNODE_GET_ISPAUSED_OFFSET))(this);
		}

		::System::Boolean get_IsActive()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_HACKERGAMEFIXWAVEACTIONNODE_GET_ISACTIVE_OFFSET))(this);
		}

		::Class_5_AF65C3A968E836D2* get_CurrentChessboard()
		{
			return ((::Class_5_AF65C3A968E836D2*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_HACKERGAMEFIXWAVEACTIONNODE_GET_CURRENTCHESSBOARD_OFFSET))(this);
		}

		::System::Void RegisterPorts()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_HACKERGAMEFIXWAVEACTIONNODE_REGISTERPORTS_OFFSET))(this);
		}

		::System::Void Advance(::FlowCanvas::Flow flow)
		{
			return ((::System::Void(*)(::PVOID, ::FlowCanvas::Flow))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_HACKERGAMEFIXWAVEACTIONNODE_ADVANCE_OFFSET))(this, flow);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_HACKERGAMEFIXWAVEACTIONNODE_UPDATE_OFFSET))(this);
		}

		::System::Void Invoke(::System::Int32 index)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_HACKERGAMEFIXWAVEACTIONNODE_INVOKE_OFFSET))(this, index);
		}

		::System::Void Start(::FlowCanvas::Flow flow)
		{
			return ((::System::Void(*)(::PVOID, ::FlowCanvas::Flow))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_HACKERGAMEFIXWAVEACTIONNODE_START_OFFSET))(this, flow);
		}

		::System::Void InitBound()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_HACKERGAMEFIXWAVEACTIONNODE_INITBOUND_OFFSET))(this);
		}

		::System::Void Stop(::FlowCanvas::Flow flow)
		{
			return ((::System::Void(*)(::PVOID, ::FlowCanvas::Flow))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_HACKERGAMEFIXWAVEACTIONNODE_STOP_OFFSET))(this, flow);
		}

		::System::Void SetActive(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_HACKERGAMEFIXWAVEACTIONNODE_SETACTIVE_OFFSET))(this, value);
		}

		::System::Void _RegisterPorts_b__26_0(::FlowCanvas::Flow f)
		{
			return ((::System::Void(*)(::PVOID, ::FlowCanvas::Flow))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_HACKERGAMEFIXWAVEACTIONNODE__REGISTERPORTS_B__26_0_OFFSET))(this, f);
		}

		::System::Void _RegisterPorts_b__26_1(::FlowCanvas::Flow f)
		{
			return ((::System::Void(*)(::PVOID, ::FlowCanvas::Flow))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_HACKERGAMEFIXWAVEACTIONNODE__REGISTERPORTS_B__26_1_OFFSET))(this, f);
		}

		::MoleMole::HollowChessboard::HollowCell _RegisterPorts_b__26_2()
		{
			return ((::MoleMole::HollowChessboard::HollowCell(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_HACKERGAMEFIXWAVEACTIONNODE__REGISTERPORTS_B__26_2_OFFSET))(this);
		}

		::System::Int32 _RegisterPorts_b__26_3()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_HACKERGAMEFIXWAVEACTIONNODE__REGISTERPORTS_B__26_3_OFFSET))(this);
		}
	};
}

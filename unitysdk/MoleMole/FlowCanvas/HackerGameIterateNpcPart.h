#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/Flow.h"
#include "unitysdk/FlowCanvas/FlowNode.h"
#include "unitysdk/MoleMole/HollowChessboard/HollowCell.h"

namespace FlowCanvas { class FlowInput; }
namespace FlowCanvas { class FlowOutput; }
namespace FlowCanvas { template <typename T> class ValueInput_1; }
namespace FlowCanvas { template <typename T> class ValueOutput_1; }
namespace MoleMole { class ChessEntityCollection; }
namespace System::Collections { class IEnumerator; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_FLOWCANVAS_HACKERGAMEITERATENPCPART_GETDELAYTIME_OFFSET UNITYSDK_OFFSET(0x142785A0)
#define MOLEMOLE_FLOWCANVAS_HACKERGAMEITERATENPCPART_ITERATENPC_OFFSET UNITYSDK_OFFSET(0x142784E0)
#define MOLEMOLE_FLOWCANVAS_HACKERGAMEITERATENPCPART_ONGRAPHSTOPED_OFFSET UNITYSDK_OFFSET(0x14277AF0)
#define MOLEMOLE_FLOWCANVAS_HACKERGAMEITERATENPCPART_REGISTERPORTS_OFFSET UNITYSDK_OFFSET(0x14277DF0)
#define MOLEMOLE_FLOWCANVAS_HACKERGAMEITERATENPCPART_START_OFFSET UNITYSDK_OFFSET(0x14278080)
#define MOLEMOLE_FLOWCANVAS_HACKERGAMEITERATENPCPART_UPDATE_OFFSET UNITYSDK_OFFSET(0x14277B60)
#define MOLEMOLE_FLOWCANVAS_HACKERGAMEITERATENPCPART__CTOR_OFFSET UNITYSDK_OFFSET(0x14278620)
#define MOLEMOLE_FLOWCANVAS_HACKERGAMEITERATENPCPART__REGISTERPORTS_B__18_0_OFFSET UNITYSDK_OFFSET(0x142786F0)
#define MOLEMOLE_FLOWCANVAS_HACKERGAMEITERATENPCPART__REGISTERPORTS_B__18_1_OFFSET UNITYSDK_OFFSET(0x14278720)
#define MOLEMOLE_FLOWCANVAS_HACKERGAMEITERATENPCPART__REGISTERPORTS_B__18_2_OFFSET UNITYSDK_OFFSET(0x14278740)
#define MOLEMOLE_FLOWCANVAS_HACKERGAMEITERATENPCPART__REGISTERPORTS_B__18_3_OFFSET UNITYSDK_OFFSET(0x14278750)
#define MOLEMOLE_FLOWCANVAS_HACKERGAMEITERATENPCPART___BASE_ONGRAPHSTOPED_OFFSET UNITYSDK_OFFSET(0x14278760)

namespace MoleMole::FlowCanvas
{
	inline static constexpr unsigned int HackerGameIterateNpcPart_TypeDefinitionIndex = 70802;

	class HackerGameIterateNpcPart : public ::FlowCanvas::FlowNode
	{
	public:
		::FlowCanvas::ValueInput_1<::System::Int32>* _runtimeID; // 0xA8
		::FlowCanvas::ValueOutput_1<::System::Int32>* _runtimeIDOutput; // 0xB0
		::FlowCanvas::FlowOutput* _invokeFinish; // 0xB8
		::FlowCanvas::ValueInput_1<::System::Boolean>* _discreteMode; // 0xC0
		::FlowCanvas::ValueInput_1<::System::Boolean>* _isPaused; // 0xC8
		::System::Collections::Generic::List_1<::System::Collections::IEnumerator*>* Data; // 0xD0
		::FlowCanvas::ValueInput_1<::MoleMole::ChessEntityCollection*>* _collection; // 0xD8
		::FlowCanvas::FlowInput* _start; // 0xE0
		::FlowCanvas::ValueOutput_1<::System::Int32>* _bodyIndexOutput; // 0xE8
		::FlowCanvas::FlowOutput* _output; // 0xF0
		::FlowCanvas::ValueOutput_1<::MoleMole::HollowChessboard::HollowCell>* _cellOutput; // 0xF8
		::FlowCanvas::ValueInput_1<::System::Collections::Generic::List_1<::System::Single>*>* _delay; // 0x100
		::FlowCanvas::FlowOutput* _invokeNpcPart; // 0x108
		::System::Int32 bodyIndex; // 0x110
		::System::Int32 runtimeID; // 0x114
		::MoleMole::HollowChessboard::HollowCell cell; // 0x118

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_HACKERGAMEITERATENPCPART__CTOR_OFFSET))(this);
		}

		::System::Void OnGraphStoped()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_HACKERGAMEITERATENPCPART_ONGRAPHSTOPED_OFFSET))(this);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_HACKERGAMEITERATENPCPART_UPDATE_OFFSET))(this);
		}

		::System::Void RegisterPorts()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_HACKERGAMEITERATENPCPART_REGISTERPORTS_OFFSET))(this);
		}

		::System::Void Start(::FlowCanvas::Flow flow)
		{
			return ((::System::Void(*)(::PVOID, ::FlowCanvas::Flow))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_HACKERGAMEITERATENPCPART_START_OFFSET))(this, flow);
		}

		::System::Collections::IEnumerator* IterateNpc(::System::Boolean discreteMode, ::System::Int32 runtimeID, ::MoleMole::ChessEntityCollection* collection, ::System::Collections::Generic::List_1<::System::Single>* delay)
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID, ::System::Boolean, ::System::Int32, ::MoleMole::ChessEntityCollection*, ::System::Collections::Generic::List_1<::System::Single>*))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_HACKERGAMEITERATENPCPART_ITERATENPC_OFFSET))(this, discreteMode, runtimeID, collection, delay);
		}

		static ::System::Single GetDelayTime(::System::Collections::Generic::List_1<::System::Single>* delay, ::System::Int32 index)
		{
			return ((::System::Single(*)(::System::Collections::Generic::List_1<::System::Single>*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_HACKERGAMEITERATENPCPART_GETDELAYTIME_OFFSET))(delay, index);
		}

		::System::Void _RegisterPorts_b__18_0(::FlowCanvas::Flow f)
		{
			return ((::System::Void(*)(::PVOID, ::FlowCanvas::Flow))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_HACKERGAMEITERATENPCPART__REGISTERPORTS_B__18_0_OFFSET))(this, f);
		}

		::MoleMole::HollowChessboard::HollowCell _RegisterPorts_b__18_1()
		{
			return ((::MoleMole::HollowChessboard::HollowCell(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_HACKERGAMEITERATENPCPART__REGISTERPORTS_B__18_1_OFFSET))(this);
		}

		::System::Int32 _RegisterPorts_b__18_2()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_HACKERGAMEITERATENPCPART__REGISTERPORTS_B__18_2_OFFSET))(this);
		}

		::System::Int32 _RegisterPorts_b__18_3()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_HACKERGAMEITERATENPCPART__REGISTERPORTS_B__18_3_OFFSET))(this);
		}

		::System::Void __base_OnGraphStoped()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_HACKERGAMEITERATENPCPART___BASE_ONGRAPHSTOPED_OFFSET))(this);
		}
	};
}

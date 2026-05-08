#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/Nodes/CallableFunctionNode_6.h"
#include "unitysdk/Foundation/Coroutine/CoroutineHandle.h"
#include "unitysdk/MoleMole/FlowCanvas/Nodes/LDLevelEndNode_LevelEndPerformType.h"

class Class_1_B7E341C5F1A6F199;
class Class_2_04E07F842ECC3B8E;
class Class_2_702D914FA95B6E36;
class Class_3_EA02B975BED3466B;
namespace System { class Action; }
namespace System { class String; }

#define MOLEMOLE_FLOWCANVAS_NODES_LDLEVELENDNODE_CLEARLAZYINSTANCE_OFFSET UNITYSDK_OFFSET(0x16D37A40)
#define MOLEMOLE_FLOWCANVAS_NODES_LDLEVELENDNODE_INVOKE_OFFSET UNITYSDK_OFFSET(0x16D37F30)
#define MOLEMOLE_FLOWCANVAS_NODES_LDLEVELENDNODE_ONEVENTFROMANYONE_OFFSET UNITYSDK_OFFSET(0x16D37E80)
#define MOLEMOLE_FLOWCANVAS_NODES_LDLEVELENDNODE_ONGRAPHSTARTED_OFFSET UNITYSDK_OFFSET(0x16D37A80)
#define MOLEMOLE_FLOWCANVAS_NODES_LDLEVELENDNODE_ONGRAPHSTOPED_OFFSET UNITYSDK_OFFSET(0x16D37C80)
#define MOLEMOLE_FLOWCANVAS_NODES_LDLEVELENDNODE__CCTOR_OFFSET UNITYSDK_OFFSET(0x16D39990)
#define MOLEMOLE_FLOWCANVAS_NODES_LDLEVELENDNODE__CTOR_OFFSET UNITYSDK_OFFSET(0x16D39970)
#define MOLEMOLE_FLOWCANVAS_NODES_LDLEVELENDNODE__ENDPERFORMCALL_OFFSET UNITYSDK_OFFSET(0x16D386B0)
#define MOLEMOLE_FLOWCANVAS_NODES_LDLEVELENDNODE__GMEXECUTED_OFFSET UNITYSDK_OFFSET(0x16D37EE0)
#define MOLEMOLE_FLOWCANVAS_NODES_LDLEVELENDNODE__JUMPTOLASTCURTAIN_OFFSET UNITYSDK_OFFSET(0x16D39790)
#define MOLEMOLE_FLOWCANVAS_NODES_LDLEVELENDNODE__PLAYCAMERASEQUENCEANDASCRIPT_OFFSET UNITYSDK_OFFSET(0x16D393C0)
#define MOLEMOLE_FLOWCANVAS_NODES_LDLEVELENDNODE__TRYINTERRUPTTYPELEVELEND_OFFSET UNITYSDK_OFFSET(0x16D38530)
#define MOLEMOLE_FLOWCANVAS_NODES_LDLEVELENDNODE__TRYPLAYDYNAMICENDPERFORMS_OFFSET UNITYSDK_OFFSET(0x16D390C0)
#define MOLEMOLE_FLOWCANVAS_NODES_LDLEVELENDNODE__TRYWAITCUTSCENEWHENLEVELEND_OFFSET UNITYSDK_OFFSET(0x16D38A20)
#define MOLEMOLE_FLOWCANVAS_NODES_LDLEVELENDNODE___BASE_ONGRAPHSTARTED_OFFSET UNITYSDK_OFFSET(0x16D399A0)
#define MOLEMOLE_FLOWCANVAS_NODES_LDLEVELENDNODE___BASE_ONGRAPHSTOPED_OFFSET UNITYSDK_OFFSET(0x16D399B0)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int LDLevelEndNode_TypeDefinitionIndex = 51718;

	class LDLevelEndNode : public ::FlowCanvas::Nodes::CallableFunctionNode_6<::System::Boolean, ::System::Boolean, ::MoleMole::FlowCanvas::Nodes::LDLevelEndNode_LevelEndPerformType, ::System::Boolean, ::System::Single, ::System::Boolean>
	{
	public:
		static ::System::Boolean* StaticGet__isGmInvoke()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(LDLevelEndNode_TypeDefinitionIndex)->GetStaticField(0xA9B0);
		}
		// static const ::System::String* TAG; // 0x0
		// static const ::System::Single MAX_WAIT_CS_SECONDS; // 0x0
		::Class_2_702D914FA95B6E36* roleModel; // 0x40
		::Class_3_EA02B975BED3466B* _levelDataComponent; // 0x48
		::Foundation::Coroutine::CoroutineHandle _coroutineHandle; // 0x50
		::System::Boolean _isExecuted; // 0x54

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDLEVELENDNODE__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDLEVELENDNODE__CCTOR_OFFSET))();
		}

		static ::System::Void ClearLazyInstance()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDLEVELENDNODE_CLEARLAZYINSTANCE_OFFSET))();
		}

		::System::Void OnGraphStarted()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDLEVELENDNODE_ONGRAPHSTARTED_OFFSET))(this);
		}

		::System::Void OnGraphStoped()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDLEVELENDNODE_ONGRAPHSTOPED_OFFSET))(this);
		}

		::System::Boolean OnEventFromAnyone(::Class_1_B7E341C5F1A6F199* evt)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_B7E341C5F1A6F199*))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDLEVELENDNODE_ONEVENTFROMANYONE_OFFSET))(this, evt);
		}

		::System::Void _GmExecuted(::Class_2_04E07F842ECC3B8E* levelGmEnd)
		{
			return ((::System::Void(*)(::PVOID, ::Class_2_04E07F842ECC3B8E*))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDLEVELENDNODE__GMEXECUTED_OFFSET))(this, levelGmEnd);
		}

		::System::Boolean Invoke(::System::Boolean success, ::MoleMole::FlowCanvas::Nodes::LDLevelEndNode_LevelEndPerformType performType, ::System::Boolean enableDelayExit, ::System::Single overrideDelayExitTime, ::System::Boolean onlySendServer)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Boolean, ::MoleMole::FlowCanvas::Nodes::LDLevelEndNode_LevelEndPerformType, ::System::Boolean, ::System::Single, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDLEVELENDNODE_INVOKE_OFFSET))(this, success, performType, enableDelayExit, overrideDelayExitTime, onlySendServer);
		}

		::System::Boolean _TryInterruptTypeLevelEnd(::System::Boolean success, ::MoleMole::FlowCanvas::Nodes::LDLevelEndNode_LevelEndPerformType performType, ::System::Boolean enableDelayExit, ::System::Single overrideDelayExitTime)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Boolean, ::MoleMole::FlowCanvas::Nodes::LDLevelEndNode_LevelEndPerformType, ::System::Boolean, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDLEVELENDNODE__TRYINTERRUPTTYPELEVELEND_OFFSET))(this, success, performType, enableDelayExit, overrideDelayExitTime);
		}

		::System::Void _EndPerformCall(::System::Boolean success, ::MoleMole::FlowCanvas::Nodes::LDLevelEndNode_LevelEndPerformType performType, ::System::Boolean enableDelayExit, ::System::Single overrideDelayExitTime)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::MoleMole::FlowCanvas::Nodes::LDLevelEndNode_LevelEndPerformType, ::System::Boolean, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDLEVELENDNODE__ENDPERFORMCALL_OFFSET))(this, success, performType, enableDelayExit, overrideDelayExitTime);
		}

		::System::Boolean _TryWaitCutSceneWhenLevelEnd(::System::Action* callback)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDLEVELENDNODE__TRYWAITCUTSCENEWHENLEVELEND_OFFSET))(this, callback);
		}

		::System::Void _PlayCameraSequenceAndAScript(::System::Boolean handlePlayLevelEndCameraPerformElseWhere, ::System::Single overrideDelayExitTime, ::System::Boolean enableDelayExit, ::System::Boolean success, ::MoleMole::FlowCanvas::Nodes::LDLevelEndNode_LevelEndPerformType performType)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Single, ::System::Boolean, ::System::Boolean, ::MoleMole::FlowCanvas::Nodes::LDLevelEndNode_LevelEndPerformType))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDLEVELENDNODE__PLAYCAMERASEQUENCEANDASCRIPT_OFFSET))(this, handlePlayLevelEndCameraPerformElseWhere, overrideDelayExitTime, enableDelayExit, success, performType);
		}

		::System::Boolean _TryPlayDynamicEndPerforms(::System::Action* onFinish)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDLEVELENDNODE__TRYPLAYDYNAMICENDPERFORMS_OFFSET))(this, onFinish);
		}

		::System::Void _JumpToLastCurtain()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDLEVELENDNODE__JUMPTOLASTCURTAIN_OFFSET))(this);
		}

		::System::Void __base_OnGraphStarted()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDLEVELENDNODE___BASE_ONGRAPHSTARTED_OFFSET))(this);
		}

		::System::Void __base_OnGraphStoped()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDLEVELENDNODE___BASE_ONGRAPHSTOPED_OFFSET))(this);
		}
	};
}

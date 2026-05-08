#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/SuperDebug_LogModule.h"
#include "unitysdk/MoleMole/SuperDebug___c__DisplayClass99_0.h"
#include "unitysdk/Struct_2_028911ED0AD7AF8F.h"
#include "unitysdk/System/DateTime.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/LogType.h"
#include "unitysdk/UnityEngine/Matrix4x4.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_22EF0C22B6FD8CD9;
class Class_1_A0197E0666BA1E42;
namespace System { class Exception; }
namespace System { class String; }
namespace System { template <typename T1, typename T2> class Action_2; }
namespace System { template <typename T> class Func_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace UnityEngine { class GUIStyle; }
namespace UnityEngine { class Object; }
namespace UnityEngine { class Transform; }

#define MOLEMOLE_SUPERDEBUG_ASSERTTHROW_OFFSET UNITYSDK_OFFSET(0x1B476CC0)
#define MOLEMOLE_SUPERDEBUG_ASSERT_OFFSET UNITYSDK_OFFSET(0x1B476C10)
#define MOLEMOLE_SUPERDEBUG_CLOSEALLDEBUGS_OFFSET UNITYSDK_OFFSET(0x1B477570)
#define MOLEMOLE_SUPERDEBUG_DEBUGLOCALCUBE_OFFSET UNITYSDK_OFFSET(0x1B47BBE0)
#define MOLEMOLE_SUPERDEBUG_DEBUGPOINT_OFFSET UNITYSDK_OFFSET(0x1B47BA50)
#define MOLEMOLE_SUPERDEBUG_DELETECATEGORYINWINDOW_OFFSET UNITYSDK_OFFSET(0x1B474520)
#define MOLEMOLE_SUPERDEBUG_DELETELOGINWINDOW_OFFSET UNITYSDK_OFFSET(0x1B474600)
#define MOLEMOLE_SUPERDEBUG_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1B478960)
#define MOLEMOLE_SUPERDEBUG_DRAWARROW_1_OFFSET UNITYSDK_OFFSET(0x1B47A530)
#define MOLEMOLE_SUPERDEBUG_DRAWARROW_OFFSET UNITYSDK_OFFSET(0x1B47A300)
#define MOLEMOLE_SUPERDEBUG_DRAWCIRCLE_OFFSET UNITYSDK_OFFSET(0x1B47AAA0)
#define MOLEMOLE_SUPERDEBUG_DRAWCYLINDER_OFFSET UNITYSDK_OFFSET(0x1B47B020)
#define MOLEMOLE_SUPERDEBUG_DRAWDEBUGCAPSULEFROMDETECT_OFFSET UNITYSDK_OFFSET(0x1B47AC00)
#define MOLEMOLE_SUPERDEBUG_DRAWDEBUGCAPSULE_1_OFFSET UNITYSDK_OFFSET(0x1B47B310)
#define MOLEMOLE_SUPERDEBUG_DRAWDEBUGCAPSULE_OFFSET UNITYSDK_OFFSET(0x1B47B140)
#define MOLEMOLE_SUPERDEBUG_DRAWDEBUGCUBEFROMDETECT_OFFSET UNITYSDK_OFFSET(0x1B47B410)
#define MOLEMOLE_SUPERDEBUG_DRAWDEBUGCUBE_1_OFFSET UNITYSDK_OFFSET(0x1B47B8E0)
#define MOLEMOLE_SUPERDEBUG_DRAWDEBUGCUBE_OFFSET UNITYSDK_OFFSET(0x1B47B6B0)
#define MOLEMOLE_SUPERDEBUG_DRAWDEBUGCYLINDERFROMDETECT_OFFSET UNITYSDK_OFFSET(0x1B47AE10)
#define MOLEMOLE_SUPERDEBUG_DRAWFAN_OFFSET UNITYSDK_OFFSET(0x1B47A670)
#define MOLEMOLE_SUPERDEBUG_DRAWLINEARROW_OFFSET UNITYSDK_OFFSET(0x1B479790)
#define MOLEMOLE_SUPERDEBUG_DRAWLINEFROMDETECT_OFFSET UNITYSDK_OFFSET(0x1B478DA0)
#define MOLEMOLE_SUPERDEBUG_DRAWLINE_1_OFFSET UNITYSDK_OFFSET(0x1B479480)
#define MOLEMOLE_SUPERDEBUG_DRAWLINE_OFFSET UNITYSDK_OFFSET(0x1B4790E0)
#define MOLEMOLE_SUPERDEBUG_DRAWSPHERE_1_OFFSET UNITYSDK_OFFSET(0x1B47A9D0)
#define MOLEMOLE_SUPERDEBUG_DRAWSPHERE_OFFSET UNITYSDK_OFFSET(0x1B47A830)
#define MOLEMOLE_SUPERDEBUG_DRAWTEXT_OFFSET UNITYSDK_OFFSET(0x1B47BDA0)
#define MOLEMOLE_SUPERDEBUG_ENABLEALLFLAG_OFFSET UNITYSDK_OFFSET(0x1B478650)
#define MOLEMOLE_SUPERDEBUG_FORMATLOGSTRING_1_OFFSET UNITYSDK_OFFSET(0x1B476AA0)
#define MOLEMOLE_SUPERDEBUG_FORMATLOGSTRING_OFFSET UNITYSDK_OFFSET(0x1B476A10)
#define MOLEMOLE_SUPERDEBUG_GETSWITCHFLAG_OFFSET UNITYSDK_OFFSET(0x1B4747A0)
#define MOLEMOLE_SUPERDEBUG_GET_DRAWDEBUGLINE_OFFSET UNITYSDK_OFFSET(0x1B474C70)
#define MOLEMOLE_SUPERDEBUG_GET_IMPL_OFFSET UNITYSDK_OFFSET(0x1B4778C0)
#define MOLEMOLE_SUPERDEBUG_INITDEBUGSWITCH_OFFSET UNITYSDK_OFFSET(0x1B477A70)
#define MOLEMOLE_SUPERDEBUG_INIT_OFFSET UNITYSDK_OFFSET(0x1B477970)
#define MOLEMOLE_SUPERDEBUG_ISERRORLOGGINGENABLED_OFFSET UNITYSDK_OFFSET(0x1B474DE0)
#define MOLEMOLE_SUPERDEBUG_ISSWITCHON_OFFSET UNITYSDK_OFFSET(0x1B4746E0)
#define MOLEMOLE_SUPERDEBUG_ISUSELOGWIN_OFFSET UNITYSDK_OFFSET(0x1B474E20)
#define MOLEMOLE_SUPERDEBUG_LINE_OFFSET UNITYSDK_OFFSET(0x1B478A00)
#define MOLEMOLE_SUPERDEBUG_LOGALLERROR_OFFSET UNITYSDK_OFFSET(0x1B475550)
#define MOLEMOLE_SUPERDEBUG_LOGASSERTION_OFFSET UNITYSDK_OFFSET(0x1B4767C0)
#define MOLEMOLE_SUPERDEBUG_LOGERRORFORMAT_OFFSET UNITYSDK_OFFSET(0x1B476230)
#define MOLEMOLE_SUPERDEBUG_LOGERRORINWINDOW_1_OFFSET UNITYSDK_OFFSET(0x1B474280)
#define MOLEMOLE_SUPERDEBUG_LOGERRORINWINDOW_OFFSET UNITYSDK_OFFSET(0x1B4740F0)
#define MOLEMOLE_SUPERDEBUG_LOGERRORWITHOBJECT_1_OFFSET UNITYSDK_OFFSET(0x1B4763A0)
#define MOLEMOLE_SUPERDEBUG_LOGERRORWITHOBJECT_2_OFFSET UNITYSDK_OFFSET(0x1B476450)
#define MOLEMOLE_SUPERDEBUG_LOGERRORWITHOBJECT_OFFSET UNITYSDK_OFFSET(0x1B4762E0)
#define MOLEMOLE_SUPERDEBUG_LOGERROR_1_OFFSET UNITYSDK_OFFSET(0x1B4760C0)
#define MOLEMOLE_SUPERDEBUG_LOGERROR_2_OFFSET UNITYSDK_OFFSET(0x1B476170)
#define MOLEMOLE_SUPERDEBUG_LOGERROR_OFFSET UNITYSDK_OFFSET(0x1B475F90)
#define MOLEMOLE_SUPERDEBUG_LOGEXCEPTIONINWINDOW_1_OFFSET UNITYSDK_OFFSET(0x1B474470)
#define MOLEMOLE_SUPERDEBUG_LOGEXCEPTIONINWINDOW_OFFSET UNITYSDK_OFFSET(0x1B4742E0)
#define MOLEMOLE_SUPERDEBUG_LOGEXCEPTION_1_OFFSET UNITYSDK_OFFSET(0x1B476720)
#define MOLEMOLE_SUPERDEBUG_LOGEXCEPTION_OFFSET UNITYSDK_OFFSET(0x1B476520)
#define MOLEMOLE_SUPERDEBUG_LOGFILE_OFFSET UNITYSDK_OFFSET(0x1B475600)
#define MOLEMOLE_SUPERDEBUG_LOGFORMAT_1_OFFSET UNITYSDK_OFFSET(0x1B475090)
#define MOLEMOLE_SUPERDEBUG_LOGFORMAT_OFFSET UNITYSDK_OFFSET(0x1B474FF0)
#define MOLEMOLE_SUPERDEBUG_LOGINFO_OFFSET UNITYSDK_OFFSET(0x1B4751D0)
#define MOLEMOLE_SUPERDEBUG_LOGINWINDOW_1_OFFSET UNITYSDK_OFFSET(0x1B473CA0)
#define MOLEMOLE_SUPERDEBUG_LOGINWINDOW_OFFSET UNITYSDK_OFFSET(0x1B473910)
#define MOLEMOLE_SUPERDEBUG_LOGNAVMESHASYNC_OFFSET UNITYSDK_OFFSET(0x1B475330)
#define MOLEMOLE_SUPERDEBUG_LOGPROTO_OFFSET UNITYSDK_OFFSET(0x1B4754C0)
#define MOLEMOLE_SUPERDEBUG_LOGWARNINGFILE_OFFSET UNITYSDK_OFFSET(0x1B475DA0)
#define MOLEMOLE_SUPERDEBUG_LOGWARNINGFORMAT_OFFSET UNITYSDK_OFFSET(0x1B475BB0)
#define MOLEMOLE_SUPERDEBUG_LOGWARNINGINWINDOW_1_OFFSET UNITYSDK_OFFSET(0x1B474090)
#define MOLEMOLE_SUPERDEBUG_LOGWARNINGINWINDOW_OFFSET UNITYSDK_OFFSET(0x1B473D00)
#define MOLEMOLE_SUPERDEBUG_LOGWARNINGWITHOBJECT_OFFSET UNITYSDK_OFFSET(0x1B475CE0)
#define MOLEMOLE_SUPERDEBUG_LOGWARNING_1_OFFSET UNITYSDK_OFFSET(0x1B475B00)
#define MOLEMOLE_SUPERDEBUG_LOGWARNING_2_OFFSET UNITYSDK_OFFSET(0x1B475C40)
#define MOLEMOLE_SUPERDEBUG_LOGWARNING_OFFSET UNITYSDK_OFFSET(0x1B475A70)
#define MOLEMOLE_SUPERDEBUG_LOGWITHOBJECT_1_OFFSET UNITYSDK_OFFSET(0x1B4758F0)
#define MOLEMOLE_SUPERDEBUG_LOGWITHOBJECT_2_OFFSET UNITYSDK_OFFSET(0x1B4759C0)
#define MOLEMOLE_SUPERDEBUG_LOGWITHOBJECT_OFFSET UNITYSDK_OFFSET(0x1B475830)
#define MOLEMOLE_SUPERDEBUG_LOG_1_OFFSET UNITYSDK_OFFSET(0x1B475120)
#define MOLEMOLE_SUPERDEBUG_LOG_2_OFFSET UNITYSDK_OFFSET(0x1B475290)
#define MOLEMOLE_SUPERDEBUG_LOG_OFFSET UNITYSDK_OFFSET(0x1B474F60)
#define MOLEMOLE_SUPERDEBUG_RESETLOGMODULEHELPER_OFFSET UNITYSDK_OFFSET(0x1B4749B0)
#define MOLEMOLE_SUPERDEBUG_SETDEBUGSWITCHFLAG_OFFSET UNITYSDK_OFFSET(0x1B478340)
#define MOLEMOLE_SUPERDEBUG_SETLOGENABLED_OFFSET UNITYSDK_OFFSET(0x1B4748F0)
#define MOLEMOLE_SUPERDEBUG_TIMEEND_OFFSET UNITYSDK_OFFSET(0x1B477740)
#define MOLEMOLE_SUPERDEBUG_TIMESTART_OFFSET UNITYSDK_OFFSET(0x1B4776A0)
#define MOLEMOLE_SUPERDEBUG_TRANSFORMBYPIXEL_1_OFFSET UNITYSDK_OFFSET(0x1B47C250)
#define MOLEMOLE_SUPERDEBUG_TRANSFORMBYPIXEL_OFFSET UNITYSDK_OFFSET(0x1B47C110)
#define MOLEMOLE_SUPERDEBUG_UPDATEFRAME_OFFSET UNITYSDK_OFFSET(0x1B474D60)
#define MOLEMOLE_SUPERDEBUG_VERYIMPORTANTASSERT_1_OFFSET UNITYSDK_OFFSET(0x1B4773B0)
#define MOLEMOLE_SUPERDEBUG_VERYIMPORTANTASSERT_OFFSET UNITYSDK_OFFSET(0x1B477220)
#define MOLEMOLE_SUPERDEBUG_VERYIMPORTANTERROR_1_OFFSET UNITYSDK_OFFSET(0x1B476FB0)
#define MOLEMOLE_SUPERDEBUG_VERYIMPORTANTERROR_OFFSET UNITYSDK_OFFSET(0x1B476E10)
#define MOLEMOLE_SUPERDEBUG_VERYIMPORTANTLOG_OFFSET UNITYSDK_OFFSET(0x1B476D70)
#define MOLEMOLE_SUPERDEBUG__CCTOR_OFFSET UNITYSDK_OFFSET(0x1B4749F0)
#define MOLEMOLE_SUPERDEBUG__INITDEBUGSWITCH_G__SETDEBUGSWITCH_98_0_OFFSET UNITYSDK_OFFSET(0x1B477BD0)
#define MOLEMOLE_SUPERDEBUG__LOGERROR_OFFSET UNITYSDK_OFFSET(0x1B476020)
#define MOLEMOLE_SUPERDEBUG__LOGEXCEPTION_OFFSET UNITYSDK_OFFSET(0x1B4765B0)
#define MOLEMOLE_SUPERDEBUG__LOGWARNING_OFFSET UNITYSDK_OFFSET(0x1B473F00)
#define MOLEMOLE_SUPERDEBUG__LOG_OFFSET UNITYSDK_OFFSET(0x1B473B10)
#define MOLEMOLE_SUPERDEBUG__PRINT_OFFSET UNITYSDK_OFFSET(0x1B476880)
#define MOLEMOLE_SUPERDEBUG__SETDEBUGSWITCHFLAG_G__SAVEPREFS_99_0_OFFSET UNITYSDK_OFFSET(0x1B4785C0)
#define MOLEMOLE_SUPERDEBUG___PRINT_G__DEBUGLOGWARNING_77_1_OFFSET UNITYSDK_OFFSET(0x1B47C3B0)
#define MOLEMOLE_SUPERDEBUG___PRINT_G__DEBUGLOG_77_0_OFFSET UNITYSDK_OFFSET(0x1B47C3A0)

namespace MoleMole
{
	inline static constexpr unsigned int SuperDebug_TypeDefinitionIndex = 7770;

	class SuperDebug : public ::System::Object
	{
	public:
		static ::Il2CppArray<::System::Boolean>** StaticGet_LogFile_Switch()
		{
			return (::Il2CppArray<::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(SuperDebug_TypeDefinitionIndex)->GetStaticField(0x67C0);
		}
		static ::Il2CppArray<::System::Boolean>** StaticGet_DEBUG_SWITCH()
		{
			return (::Il2CppArray<::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(SuperDebug_TypeDefinitionIndex)->GetStaticField(0x67C8);
		}
		static ::System::Action_2<::System::String*, ::System::String*>** StaticGet_sendToServerAction()
		{
			return (::System::Action_2<::System::String*, ::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(SuperDebug_TypeDefinitionIndex)->GetStaticField(0x67D0);
		}
		static ::Class_1_A0197E0666BA1E42** StaticGet__impl()
		{
			return (::Class_1_A0197E0666BA1E42**)Il2CppClass::FromTypeDefinitionIndex(SuperDebug_TypeDefinitionIndex)->GetStaticField(0x67D8);
		}
		static ::System::String** StaticGet_debugLabel()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(SuperDebug_TypeDefinitionIndex)->GetStaticField(0x67E0);
		}
		static ::System::Collections::Generic::HashSet_1<::System::UInt32>** StaticGet_FillEntityAttachPattern()
		{
			return (::System::Collections::Generic::HashSet_1<::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(SuperDebug_TypeDefinitionIndex)->GetStaticField(0x67E8);
		}
		static ::Il2CppArray<::UnityEngine::Color>** StaticGet__Colors()
		{
			return (::Il2CppArray<::UnityEngine::Color>**)Il2CppClass::FromTypeDefinitionIndex(SuperDebug_TypeDefinitionIndex)->GetStaticField(0x67F0);
		}
		static ::UnityEngine::GUIStyle** StaticGet__guiStyle()
		{
			return (::UnityEngine::GUIStyle**)Il2CppClass::FromTypeDefinitionIndex(SuperDebug_TypeDefinitionIndex)->GetStaticField(0x67F8);
		}
		static ::UnityEngine::Color* StaticGet_detectBoundsWinkLineColorPre()
		{
			return (::UnityEngine::Color*)Il2CppClass::FromTypeDefinitionIndex(SuperDebug_TypeDefinitionIndex)->GetStaticField(0x3540);
		}
		static ::UnityEngine::Color* StaticGet_detectBoundsContinueLineColorPre()
		{
			return (::UnityEngine::Color*)Il2CppClass::FromTypeDefinitionIndex(SuperDebug_TypeDefinitionIndex)->GetStaticField(0x3550);
		}
		static ::System::Int32* StaticGet_CurFrameCount()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(SuperDebug_TypeDefinitionIndex)->GetStaticField(0x3560);
		}
		static ::System::Single* StaticGet_detectBoundsWinkLineDuration()
		{
			return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(SuperDebug_TypeDefinitionIndex)->GetStaticField(0x3564);
		}
		static ::System::Boolean* StaticGet_showCheckLine()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(SuperDebug_TypeDefinitionIndex)->GetStaticField(0x3568);
		}
		static ::System::Boolean* StaticGet_enablePredicateDebugDraw()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(SuperDebug_TypeDefinitionIndex)->GetStaticField(0x3569);
		}
		static ::System::Boolean* StaticGet_enableZoneDebugDraw()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(SuperDebug_TypeDefinitionIndex)->GetStaticField(0x356A);
		}
		static ::System::Boolean* StaticGet__isInit()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(SuperDebug_TypeDefinitionIndex)->GetStaticField(0x356B);
		}
		static ::System::Boolean* StaticGet_showHitWallLine()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(SuperDebug_TypeDefinitionIndex)->GetStaticField(0x356C);
		}
		static ::System::Boolean* StaticGet_showDebugLine()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(SuperDebug_TypeDefinitionIndex)->GetStaticField(0x356D);
		}
		static ::System::Boolean* StaticGet_showDebugFinalVelocity()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(SuperDebug_TypeDefinitionIndex)->GetStaticField(0x356E);
		}
		static ::System::Boolean* StaticGet_showTextureDetectRange()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(SuperDebug_TypeDefinitionIndex)->GetStaticField(0x356F);
		}
		static ::System::DateTime* StaticGet_startTime()
		{
			return (::System::DateTime*)Il2CppClass::FromTypeDefinitionIndex(SuperDebug_TypeDefinitionIndex)->GetStaticField(0x3570);
		}
		static ::UnityEngine::Color* StaticGet_detectBoundsContinueLineColor()
		{
			return (::UnityEngine::Color*)Il2CppClass::FromTypeDefinitionIndex(SuperDebug_TypeDefinitionIndex)->GetStaticField(0x3578);
		}
		static ::System::Single* StaticGet_detectBoundsContinueDuration()
		{
			return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(SuperDebug_TypeDefinitionIndex)->GetStaticField(0x3588);
		}
		static ::UnityEngine::Color* StaticGet_detectBoundsWinkLineColor()
		{
			return (::UnityEngine::Color*)Il2CppClass::FromTypeDefinitionIndex(SuperDebug_TypeDefinitionIndex)->GetStaticField(0x358C);
		}
		// static const ::System::String* NavMeshAsyncLogPrefix; // 0x0

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_SUPERDEBUG__CCTOR_OFFSET))();
		}

		static ::System::Void LogInWindow(::MoleMole::SuperDebug_LogModule module, ::System::String* key, ::System::Object* value, ::UnityEngine::Object* go, ::Il2CppArray<::Class_1_22EF0C22B6FD8CD9*>* options)
		{
			return ((::System::Void(*)(::MoleMole::SuperDebug_LogModule, ::System::String*, ::System::Object*, ::UnityEngine::Object*, ::Il2CppArray<::Class_1_22EF0C22B6FD8CD9*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_SUPERDEBUG_LOGINWINDOW_OFFSET))(module, key, value, go, options);
		}

		static ::System::Void LogInWindow_1(::System::String* key, ::System::Object* value, ::UnityEngine::Object* go, ::Il2CppArray<::Class_1_22EF0C22B6FD8CD9*>* options)
		{
			return ((::System::Void(*)(::System::String*, ::System::Object*, ::UnityEngine::Object*, ::Il2CppArray<::Class_1_22EF0C22B6FD8CD9*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_SUPERDEBUG_LOGINWINDOW_1_OFFSET))(key, value, go, options);
		}

		static ::System::Void LogWarningInWindow(::MoleMole::SuperDebug_LogModule module, ::System::String* key, ::System::Object* value, ::UnityEngine::Object* go, ::Il2CppArray<::Class_1_22EF0C22B6FD8CD9*>* options)
		{
			return ((::System::Void(*)(::MoleMole::SuperDebug_LogModule, ::System::String*, ::System::Object*, ::UnityEngine::Object*, ::Il2CppArray<::Class_1_22EF0C22B6FD8CD9*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_SUPERDEBUG_LOGWARNINGINWINDOW_OFFSET))(module, key, value, go, options);
		}

		static ::System::Void LogWarningInWindow_1(::System::String* key, ::System::Object* value, ::UnityEngine::Object* go, ::Il2CppArray<::Class_1_22EF0C22B6FD8CD9*>* options)
		{
			return ((::System::Void(*)(::System::String*, ::System::Object*, ::UnityEngine::Object*, ::Il2CppArray<::Class_1_22EF0C22B6FD8CD9*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_SUPERDEBUG_LOGWARNINGINWINDOW_1_OFFSET))(key, value, go, options);
		}

		static ::System::Void LogErrorInWindow(::MoleMole::SuperDebug_LogModule module, ::System::String* key, ::System::Object* value, ::UnityEngine::Object* go, ::Il2CppArray<::Class_1_22EF0C22B6FD8CD9*>* options)
		{
			return ((::System::Void(*)(::MoleMole::SuperDebug_LogModule, ::System::String*, ::System::Object*, ::UnityEngine::Object*, ::Il2CppArray<::Class_1_22EF0C22B6FD8CD9*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_SUPERDEBUG_LOGERRORINWINDOW_OFFSET))(module, key, value, go, options);
		}

		static ::System::Void LogErrorInWindow_1(::System::String* key, ::System::Object* value, ::UnityEngine::Object* go, ::Il2CppArray<::Class_1_22EF0C22B6FD8CD9*>* options)
		{
			return ((::System::Void(*)(::System::String*, ::System::Object*, ::UnityEngine::Object*, ::Il2CppArray<::Class_1_22EF0C22B6FD8CD9*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_SUPERDEBUG_LOGERRORINWINDOW_1_OFFSET))(key, value, go, options);
		}

		static ::System::Void LogExceptionInWindow(::MoleMole::SuperDebug_LogModule module, ::System::String* key, ::System::Object* value, ::UnityEngine::Object* go, ::Il2CppArray<::Class_1_22EF0C22B6FD8CD9*>* options)
		{
			return ((::System::Void(*)(::MoleMole::SuperDebug_LogModule, ::System::String*, ::System::Object*, ::UnityEngine::Object*, ::Il2CppArray<::Class_1_22EF0C22B6FD8CD9*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_SUPERDEBUG_LOGEXCEPTIONINWINDOW_OFFSET))(module, key, value, go, options);
		}

		static ::System::Void LogExceptionInWindow_1(::System::String* key, ::System::Object* value, ::UnityEngine::Object* go, ::Il2CppArray<::Class_1_22EF0C22B6FD8CD9*>* options)
		{
			return ((::System::Void(*)(::System::String*, ::System::Object*, ::UnityEngine::Object*, ::Il2CppArray<::Class_1_22EF0C22B6FD8CD9*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_SUPERDEBUG_LOGEXCEPTIONINWINDOW_1_OFFSET))(key, value, go, options);
		}

		static ::System::Void DeleteCategoryInWindow(::MoleMole::SuperDebug_LogModule categoryKey)
		{
			return ((::System::Void(*)(::MoleMole::SuperDebug_LogModule))((::PBYTE)hIl2Cpp + MOLEMOLE_SUPERDEBUG_DELETECATEGORYINWINDOW_OFFSET))(categoryKey);
		}

		static ::System::Void DeleteLogInWindow(::MoleMole::SuperDebug_LogModule categoryKey, ::System::String* logKey)
		{
			return ((::System::Void(*)(::MoleMole::SuperDebug_LogModule, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_SUPERDEBUG_DELETELOGINWINDOW_OFFSET))(categoryKey, logKey);
		}

		static ::System::Boolean IsSwitchOn(::MoleMole::SuperDebug_LogModule module)
		{
			return ((::System::Boolean(*)(::MoleMole::SuperDebug_LogModule))((::PBYTE)hIl2Cpp + MOLEMOLE_SUPERDEBUG_ISSWITCHON_OFFSET))(module);
		}

		static ::System::Int32 GetSwitchFlag(::MoleMole::SuperDebug_LogModule module)
		{
			return ((::System::Int32(*)(::MoleMole::SuperDebug_LogModule))((::PBYTE)hIl2Cpp + MOLEMOLE_SUPERDEBUG_GETSWITCHFLAG_OFFSET))(module);
		}

		static ::System::Void SetLogEnabled(::MoleMole::SuperDebug_LogModule module, ::System::Boolean enabled)
		{
			return ((::System::Void(*)(::MoleMole::SuperDebug_LogModule, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_SUPERDEBUG_SETLOGENABLED_OFFSET))(module, enabled);
		}

		static ::System::Void ResetLogModuleHelper()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_SUPERDEBUG_RESETLOGMODULEHELPER_OFFSET))();
		}

		static ::System::Boolean get_drawDebugLine()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_SUPERDEBUG_GET_DRAWDEBUGLINE_OFFSET))();
		}

		static ::System::Void UpdateFrame()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_SUPERDEBUG_UPDATEFRAME_OFFSET))();
		}

		static ::System::Boolean IsErrorLoggingEnabled()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_SUPERDEBUG_ISERRORLOGGINGENABLED_OFFSET))();
		}

		static ::System::Boolean IsUseLogWin()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_SUPERDEBUG_ISUSELOGWIN_OFFSET))();
		}

		static ::System::Void Log(::System::String* log)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_SUPERDEBUG_LOG_OFFSET))(log);
		}

		static ::System::Void LogFormat(::MoleMole::SuperDebug_LogModule type, ::System::String* message, ::Il2CppArray<::System::Object*>* param)
		{
			return ((::System::Void(*)(::MoleMole::SuperDebug_LogModule, ::System::String*, ::Il2CppArray<::System::Object*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_SUPERDEBUG_LOGFORMAT_OFFSET))(type, message, param);
		}

		static ::System::Void LogFormat_1(::System::String* message, ::Il2CppArray<::System::Object*>* param)
		{
			return ((::System::Void(*)(::System::String*, ::Il2CppArray<::System::Object*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_SUPERDEBUG_LOGFORMAT_1_OFFSET))(message, param);
		}

		static ::System::Void Log_1(::Il2CppArray<::System::Object*>* param)
		{
			return ((::System::Void(*)(::Il2CppArray<::System::Object*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_SUPERDEBUG_LOG_1_OFFSET))(param);
		}

		static ::System::Void LogInfo(::MoleMole::SuperDebug_LogModule type, ::Il2CppArray<::System::Object*>* param)
		{
			return ((::System::Void(*)(::MoleMole::SuperDebug_LogModule, ::Il2CppArray<::System::Object*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_SUPERDEBUG_LOGINFO_OFFSET))(type, param);
		}

		static ::System::Void Log_2(::MoleMole::SuperDebug_LogModule type, ::System::String* message, ::Il2CppArray<::System::Object*>* param)
		{
			return ((::System::Void(*)(::MoleMole::SuperDebug_LogModule, ::System::String*, ::Il2CppArray<::System::Object*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_SUPERDEBUG_LOG_2_OFFSET))(type, message, param);
		}

		static ::System::Void LogNavMeshAsync(::System::String* msg, ::Il2CppArray<::System::Object*>* param)
		{
			return ((::System::Void(*)(::System::String*, ::Il2CppArray<::System::Object*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_SUPERDEBUG_LOGNAVMESHASYNC_OFFSET))(msg, param);
		}

		static ::System::Void LogProto(::System::String* log)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_SUPERDEBUG_LOGPROTO_OFFSET))(log);
		}

		static ::System::Void LogAllError(::System::String* log)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_SUPERDEBUG_LOGALLERROR_OFFSET))(log);
		}

		static ::System::Void LogFile(::MoleMole::SuperDebug_LogModule module, ::System::String* message, ::Il2CppArray<::System::Object*>* param)
		{
			return ((::System::Void(*)(::MoleMole::SuperDebug_LogModule, ::System::String*, ::Il2CppArray<::System::Object*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_SUPERDEBUG_LOGFILE_OFFSET))(module, message, param);
		}

		static ::System::Void LogWithObject(::UnityEngine::Object* go, ::Il2CppArray<::System::Object*>* param)
		{
			return ((::System::Void(*)(::UnityEngine::Object*, ::Il2CppArray<::System::Object*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_SUPERDEBUG_LOGWITHOBJECT_OFFSET))(go, param);
		}

		static ::System::Void LogWithObject_1(::MoleMole::SuperDebug_LogModule module, ::UnityEngine::Object* go, ::Il2CppArray<::System::Object*>* param)
		{
			return ((::System::Void(*)(::MoleMole::SuperDebug_LogModule, ::UnityEngine::Object*, ::Il2CppArray<::System::Object*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_SUPERDEBUG_LOGWITHOBJECT_1_OFFSET))(module, go, param);
		}

		static ::System::Void LogWithObject_2(::MoleMole::SuperDebug_LogModule module, ::System::String* str, ::UnityEngine::Object* go, ::Il2CppArray<::System::Object*>* param)
		{
			return ((::System::Void(*)(::MoleMole::SuperDebug_LogModule, ::System::String*, ::UnityEngine::Object*, ::Il2CppArray<::System::Object*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_SUPERDEBUG_LOGWITHOBJECT_2_OFFSET))(module, str, go, param);
		}

		static ::System::Void LogWarning(::System::String* log)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_SUPERDEBUG_LOGWARNING_OFFSET))(log);
		}

		static ::System::Void LogWarning_1(::Il2CppArray<::System::Object*>* param)
		{
			return ((::System::Void(*)(::Il2CppArray<::System::Object*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_SUPERDEBUG_LOGWARNING_1_OFFSET))(param);
		}

		static ::System::Void LogWarningFormat(::System::String* message, ::Il2CppArray<::System::Object*>* param)
		{
			return ((::System::Void(*)(::System::String*, ::Il2CppArray<::System::Object*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_SUPERDEBUG_LOGWARNINGFORMAT_OFFSET))(message, param);
		}

		static ::System::Void LogWarning_2(::MoleMole::SuperDebug_LogModule module, ::System::String* message, ::Il2CppArray<::System::Object*>* param)
		{
			return ((::System::Void(*)(::MoleMole::SuperDebug_LogModule, ::System::String*, ::Il2CppArray<::System::Object*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_SUPERDEBUG_LOGWARNING_2_OFFSET))(module, message, param);
		}

		static ::System::Void LogWarningWithObject(::UnityEngine::Object* go, ::Il2CppArray<::System::Object*>* param)
		{
			return ((::System::Void(*)(::UnityEngine::Object*, ::Il2CppArray<::System::Object*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_SUPERDEBUG_LOGWARNINGWITHOBJECT_OFFSET))(go, param);
		}

		static ::System::Void LogWarningFile(::MoleMole::SuperDebug_LogModule module, ::System::String* message, ::Il2CppArray<::System::Object*>* param)
		{
			return ((::System::Void(*)(::MoleMole::SuperDebug_LogModule, ::System::String*, ::Il2CppArray<::System::Object*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_SUPERDEBUG_LOGWARNINGFILE_OFFSET))(module, message, param);
		}

		static ::System::Void LogError(::System::String* log)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_SUPERDEBUG_LOGERROR_OFFSET))(log);
		}

		static ::System::Void LogError_1(::Il2CppArray<::System::Object*>* param)
		{
			return ((::System::Void(*)(::Il2CppArray<::System::Object*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_SUPERDEBUG_LOGERROR_1_OFFSET))(param);
		}

		static ::System::Void LogError_2(::MoleMole::SuperDebug_LogModule module, ::System::String* message, ::Il2CppArray<::System::Object*>* param)
		{
			return ((::System::Void(*)(::MoleMole::SuperDebug_LogModule, ::System::String*, ::Il2CppArray<::System::Object*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_SUPERDEBUG_LOGERROR_2_OFFSET))(module, message, param);
		}

		static ::System::Void LogErrorFormat(::System::String* message, ::Il2CppArray<::System::Object*>* param)
		{
			return ((::System::Void(*)(::System::String*, ::Il2CppArray<::System::Object*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_SUPERDEBUG_LOGERRORFORMAT_OFFSET))(message, param);
		}

		static ::System::Void LogErrorWithObject(::UnityEngine::Object* go, ::System::String* message, ::Il2CppArray<::System::Object*>* param)
		{
			return ((::System::Void(*)(::UnityEngine::Object*, ::System::String*, ::Il2CppArray<::System::Object*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_SUPERDEBUG_LOGERRORWITHOBJECT_OFFSET))(go, message, param);
		}

		static ::System::Void LogErrorWithObject_1(::UnityEngine::Object* obj, ::Il2CppArray<::System::Object*>* param)
		{
			return ((::System::Void(*)(::UnityEngine::Object*, ::Il2CppArray<::System::Object*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_SUPERDEBUG_LOGERRORWITHOBJECT_1_OFFSET))(obj, param);
		}

		static ::System::Void LogErrorWithObject_2(::MoleMole::SuperDebug_LogModule module, ::UnityEngine::Object* go, ::System::String* log, ::Il2CppArray<::System::Object*>* param)
		{
			return ((::System::Void(*)(::MoleMole::SuperDebug_LogModule, ::UnityEngine::Object*, ::System::String*, ::Il2CppArray<::System::Object*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_SUPERDEBUG_LOGERRORWITHOBJECT_2_OFFSET))(module, go, log, param);
		}

		static ::System::Void LogException(::System::Exception* exception, ::UnityEngine::Object* go)
		{
			return ((::System::Void(*)(::System::Exception*, ::UnityEngine::Object*))((::PBYTE)hIl2Cpp + MOLEMOLE_SUPERDEBUG_LOGEXCEPTION_OFFSET))(exception, go);
		}

		static ::System::Void LogException_1(::MoleMole::SuperDebug_LogModule module, ::System::Exception* exception, ::UnityEngine::Object* go)
		{
			return ((::System::Void(*)(::MoleMole::SuperDebug_LogModule, ::System::Exception*, ::UnityEngine::Object*))((::PBYTE)hIl2Cpp + MOLEMOLE_SUPERDEBUG_LOGEXCEPTION_1_OFFSET))(module, exception, go);
		}

		static ::System::Void LogAssertion(::System::String* message, ::Il2CppArray<::System::Object*>* param)
		{
			return ((::System::Void(*)(::System::String*, ::Il2CppArray<::System::Object*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_SUPERDEBUG_LOGASSERTION_OFFSET))(message, param);
		}

		static ::System::Void _Log(::MoleMole::SuperDebug_LogModule module, ::UnityEngine::Object* go, ::System::String* str, ::Il2CppArray<::System::Object*>* param)
		{
			return ((::System::Void(*)(::MoleMole::SuperDebug_LogModule, ::UnityEngine::Object*, ::System::String*, ::Il2CppArray<::System::Object*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_SUPERDEBUG__LOG_OFFSET))(module, go, str, param);
		}

		static ::System::Void _LogWarning(::MoleMole::SuperDebug_LogModule module, ::UnityEngine::Object* go, ::System::String* str, ::Il2CppArray<::System::Object*>* param)
		{
			return ((::System::Void(*)(::MoleMole::SuperDebug_LogModule, ::UnityEngine::Object*, ::System::String*, ::Il2CppArray<::System::Object*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_SUPERDEBUG__LOGWARNING_OFFSET))(module, go, str, param);
		}

		static ::System::Void _LogError(::MoleMole::SuperDebug_LogModule module, ::System::String* log, ::UnityEngine::Object* go)
		{
			return ((::System::Void(*)(::MoleMole::SuperDebug_LogModule, ::System::String*, ::UnityEngine::Object*))((::PBYTE)hIl2Cpp + MOLEMOLE_SUPERDEBUG__LOGERROR_OFFSET))(module, log, go);
		}

		static ::System::Void _LogException(::MoleMole::SuperDebug_LogModule module, ::System::Exception* exception, ::UnityEngine::Object* go)
		{
			return ((::System::Void(*)(::MoleMole::SuperDebug_LogModule, ::System::Exception*, ::UnityEngine::Object*))((::PBYTE)hIl2Cpp + MOLEMOLE_SUPERDEBUG__LOGEXCEPTION_OFFSET))(module, exception, go);
		}

		static ::System::Void _Print(::MoleMole::SuperDebug_LogModule module, ::UnityEngine::LogType type, ::System::String* log, ::UnityEngine::Object* go)
		{
			return ((::System::Void(*)(::MoleMole::SuperDebug_LogModule, ::UnityEngine::LogType, ::System::String*, ::UnityEngine::Object*))((::PBYTE)hIl2Cpp + MOLEMOLE_SUPERDEBUG__PRINT_OFFSET))(module, type, log, go);
		}

		static ::System::String* FormatLogString(::MoleMole::SuperDebug_LogModule module, ::UnityEngine::LogType type, ::System::String* content)
		{
			return ((::System::String*(*)(::MoleMole::SuperDebug_LogModule, ::UnityEngine::LogType, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_SUPERDEBUG_FORMATLOGSTRING_OFFSET))(module, type, content);
		}

		static ::System::String* FormatLogString_1(::MoleMole::SuperDebug_LogModule module, ::System::String* content)
		{
			return ((::System::String*(*)(::MoleMole::SuperDebug_LogModule, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_SUPERDEBUG_FORMATLOGSTRING_1_OFFSET))(module, content);
		}

		static ::System::Void Assert(::System::Boolean cond, ::System::String* msg, ::UnityEngine::Object* context)
		{
			return ((::System::Void(*)(::System::Boolean, ::System::String*, ::UnityEngine::Object*))((::PBYTE)hIl2Cpp + MOLEMOLE_SUPERDEBUG_ASSERT_OFFSET))(cond, msg, context);
		}

		static ::System::Void AssertThrow(::System::Boolean cond, ::System::String* msg, ::UnityEngine::Object* context)
		{
			return ((::System::Void(*)(::System::Boolean, ::System::String*, ::UnityEngine::Object*))((::PBYTE)hIl2Cpp + MOLEMOLE_SUPERDEBUG_ASSERTTHROW_OFFSET))(cond, msg, context);
		}

		static ::System::Void VeryImportantLog(::MoleMole::SuperDebug_LogModule module, ::System::String* message, ::Il2CppArray<::System::Object*>* param)
		{
			return ((::System::Void(*)(::MoleMole::SuperDebug_LogModule, ::System::String*, ::Il2CppArray<::System::Object*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_SUPERDEBUG_VERYIMPORTANTLOG_OFFSET))(module, message, param);
		}

		static ::System::Void VeryImportantError(::MoleMole::SuperDebug_LogModule module, ::System::String* message, ::Il2CppArray<::System::Object*>* param)
		{
			return ((::System::Void(*)(::MoleMole::SuperDebug_LogModule, ::System::String*, ::Il2CppArray<::System::Object*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_SUPERDEBUG_VERYIMPORTANTERROR_OFFSET))(module, message, param);
		}

		static ::System::Void VeryImportantError_1(::System::String* msg, ::System::Boolean throwException)
		{
			return ((::System::Void(*)(::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_SUPERDEBUG_VERYIMPORTANTERROR_1_OFFSET))(msg, throwException);
		}

		static ::System::Void VeryImportantAssert(::System::Boolean cond, ::System::String* msg)
		{
			return ((::System::Void(*)(::System::Boolean, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_SUPERDEBUG_VERYIMPORTANTASSERT_OFFSET))(cond, msg);
		}

		static ::System::Void VeryImportantAssert_1(::System::Boolean cond, ::System::Func_1<::System::String*>* callback)
		{
			return ((::System::Void(*)(::System::Boolean, ::System::Func_1<::System::String*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_SUPERDEBUG_VERYIMPORTANTASSERT_1_OFFSET))(cond, callback);
		}

		static ::System::Void CloseAllDebugs()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_SUPERDEBUG_CLOSEALLDEBUGS_OFFSET))();
		}

		static ::System::Void TimeStart(::System::String* tdebugLabel)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_SUPERDEBUG_TIMESTART_OFFSET))(tdebugLabel);
		}

		static ::System::Void TimeEnd()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_SUPERDEBUG_TIMEEND_OFFSET))();
		}

		static ::Class_1_A0197E0666BA1E42* get_Impl()
		{
			return ((::Class_1_A0197E0666BA1E42*(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_SUPERDEBUG_GET_IMPL_OFFSET))();
		}

		static ::System::Void Init()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_SUPERDEBUG_INIT_OFFSET))();
		}

		static ::System::Void InitDebugSwitch()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_SUPERDEBUG_INITDEBUGSWITCH_OFFSET))();
		}

		static ::System::Void SetDebugSwitchFlag(::System::Int32 bit, ::System::Boolean value)
		{
			return ((::System::Void(*)(::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_SUPERDEBUG_SETDEBUGSWITCHFLAG_OFFSET))(bit, value);
		}

		static ::System::Void EnableAllFlag(::System::Boolean enable)
		{
			return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_SUPERDEBUG_ENABLEALLFLAG_OFFSET))(enable);
		}

		static ::System::Void Dispose()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_SUPERDEBUG_DISPOSE_OFFSET))();
		}

		static ::System::Void Line(::System::Int32 type, ::UnityEngine::Vector3 start, ::UnityEngine::Vector3 end, ::System::Nullable_1<::UnityEngine::Color> color, ::System::Single duration, ::System::Boolean depthTest)
		{
			return ((::System::Void(*)(::System::Int32, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Nullable_1<::UnityEngine::Color>, ::System::Single, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_SUPERDEBUG_LINE_OFFSET))(type, start, end, color, duration, depthTest);
		}

		static ::System::Void DrawLineFromDetect(::MoleMole::SuperDebug_LogModule type, ::UnityEngine::Vector3 start, ::UnityEngine::Vector3 end, ::Struct_2_028911ED0AD7AF8F debugInfo, ::System::Nullable_1<::UnityEngine::Color> color, ::System::Single duration, ::System::Boolean depthTest)
		{
			return ((::System::Void(*)(::MoleMole::SuperDebug_LogModule, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::Struct_2_028911ED0AD7AF8F, ::System::Nullable_1<::UnityEngine::Color>, ::System::Single, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_SUPERDEBUG_DRAWLINEFROMDETECT_OFFSET))(type, start, end, debugInfo, color, duration, depthTest);
		}

		static ::System::Void DrawLine(::MoleMole::SuperDebug_LogModule type, ::UnityEngine::Vector3 start, ::UnityEngine::Vector3 end, ::System::Nullable_1<::UnityEngine::Color> color, ::System::Single duration, ::System::Boolean depthTest)
		{
			return ((::System::Void(*)(::MoleMole::SuperDebug_LogModule, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Nullable_1<::UnityEngine::Color>, ::System::Single, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_SUPERDEBUG_DRAWLINE_OFFSET))(type, start, end, color, duration, depthTest);
		}

		static ::System::Void DrawLine_1(::UnityEngine::Vector3 start, ::UnityEngine::Vector3 end, ::System::Nullable_1<::UnityEngine::Color> color, ::System::Single duration, ::System::Boolean depthTest)
		{
			return ((::System::Void(*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Nullable_1<::UnityEngine::Color>, ::System::Single, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_SUPERDEBUG_DRAWLINE_1_OFFSET))(start, end, color, duration, depthTest);
		}

		static ::System::Void DrawLineArrow(::MoleMole::SuperDebug_LogModule type, ::UnityEngine::Vector3 start, ::UnityEngine::Vector3 end, ::System::Nullable_1<::UnityEngine::Color> color, ::System::Single duration, ::System::Boolean depthTest)
		{
			return ((::System::Void(*)(::MoleMole::SuperDebug_LogModule, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Nullable_1<::UnityEngine::Color>, ::System::Single, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_SUPERDEBUG_DRAWLINEARROW_OFFSET))(type, start, end, color, duration, depthTest);
		}

		static ::System::Void DrawArrow(::MoleMole::SuperDebug_LogModule type, ::UnityEngine::Vector3 start, ::UnityEngine::Vector3 end, ::System::Nullable_1<::UnityEngine::Color> color, ::System::Single duration, ::System::Boolean depthTest)
		{
			return ((::System::Void(*)(::MoleMole::SuperDebug_LogModule, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Nullable_1<::UnityEngine::Color>, ::System::Single, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_SUPERDEBUG_DRAWARROW_OFFSET))(type, start, end, color, duration, depthTest);
		}

		static ::System::Void DrawArrow_1(::UnityEngine::Vector3 start, ::UnityEngine::Vector3 dir, ::UnityEngine::Color color)
		{
			return ((::System::Void(*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Color))((::PBYTE)hIl2Cpp + MOLEMOLE_SUPERDEBUG_DRAWARROW_1_OFFSET))(start, dir, color);
		}

		static ::System::Void DrawFan(::MoleMole::SuperDebug_LogModule type, ::UnityEngine::Vector3 centerPoint, ::UnityEngine::Vector3 forward, ::System::Single fanAngle, ::System::Single radius, ::System::Nullable_1<::UnityEngine::Color> color, ::System::Single duration, ::System::Boolean depthTest)
		{
			return ((::System::Void(*)(::MoleMole::SuperDebug_LogModule, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Single, ::System::Single, ::System::Nullable_1<::UnityEngine::Color>, ::System::Single, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_SUPERDEBUG_DRAWFAN_OFFSET))(type, centerPoint, forward, fanAngle, radius, color, duration, depthTest);
		}

		static ::System::Void DrawSphere(::MoleMole::SuperDebug_LogModule type, ::UnityEngine::Vector3 centerPoint, ::System::Single size, ::UnityEngine::Color color, ::System::Single duration, ::System::Boolean depthTest)
		{
			return ((::System::Void(*)(::MoleMole::SuperDebug_LogModule, ::UnityEngine::Vector3, ::System::Single, ::UnityEngine::Color, ::System::Single, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_SUPERDEBUG_DRAWSPHERE_OFFSET))(type, centerPoint, size, color, duration, depthTest);
		}

		static ::System::Void DrawSphere_1(::UnityEngine::Vector3 centerPoint, ::System::Single size, ::UnityEngine::Color color, ::System::Single duration, ::System::Boolean depthTest)
		{
			return ((::System::Void(*)(::UnityEngine::Vector3, ::System::Single, ::UnityEngine::Color, ::System::Single, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_SUPERDEBUG_DRAWSPHERE_1_OFFSET))(centerPoint, size, color, duration, depthTest);
		}

		static ::System::Void DrawCircle(::UnityEngine::Vector3 centerPoint, ::System::Single size, ::UnityEngine::Color color, ::System::Single duration, ::System::Boolean depthTest)
		{
			return ((::System::Void(*)(::UnityEngine::Vector3, ::System::Single, ::UnityEngine::Color, ::System::Single, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_SUPERDEBUG_DRAWCIRCLE_OFFSET))(centerPoint, size, color, duration, depthTest);
		}

		static ::System::Void DrawDebugCapsuleFromDetect(::System::Int32 type, ::UnityEngine::Vector3 startpoint, ::UnityEngine::Vector3 endpoint, ::System::Single radius)
		{
			return ((::System::Void(*)(::System::Int32, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_SUPERDEBUG_DRAWDEBUGCAPSULEFROMDETECT_OFFSET))(type, startpoint, endpoint, radius);
		}

		static ::System::Void DrawDebugCylinderFromDetect(::System::Int32 type, ::UnityEngine::Vector3 startpoint, ::UnityEngine::Vector3 endpoint, ::System::Single radius)
		{
			return ((::System::Void(*)(::System::Int32, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_SUPERDEBUG_DRAWDEBUGCYLINDERFROMDETECT_OFFSET))(type, startpoint, endpoint, radius);
		}

		static ::System::Void DrawCylinder(::System::Int32 type, ::UnityEngine::Vector3 startpoint, ::UnityEngine::Vector3 endpoint, ::System::Single radius, ::UnityEngine::Color color, ::System::Single duration)
		{
			return ((::System::Void(*)(::System::Int32, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Single, ::UnityEngine::Color, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_SUPERDEBUG_DRAWCYLINDER_OFFSET))(type, startpoint, endpoint, radius, color, duration);
		}

		static ::System::Void DrawDebugCapsule(::MoleMole::SuperDebug_LogModule type, ::UnityEngine::Vector3 startpoint, ::UnityEngine::Vector3 endpoint, ::System::Single radius, ::UnityEngine::Color color, ::System::Single duration)
		{
			return ((::System::Void(*)(::MoleMole::SuperDebug_LogModule, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Single, ::UnityEngine::Color, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_SUPERDEBUG_DRAWDEBUGCAPSULE_OFFSET))(type, startpoint, endpoint, radius, color, duration);
		}

		static ::System::Void DrawDebugCapsule_1(::UnityEngine::Vector3 startpoint, ::UnityEngine::Vector3 endpoint, ::System::Single radius, ::UnityEngine::Color color, ::System::Single duration)
		{
			return ((::System::Void(*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Single, ::UnityEngine::Color, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_SUPERDEBUG_DRAWDEBUGCAPSULE_1_OFFSET))(startpoint, endpoint, radius, color, duration);
		}

		static ::System::Void DrawDebugCubeFromDetect(::MoleMole::SuperDebug_LogModule type, ::UnityEngine::Matrix4x4 matri, ::UnityEngine::Vector3 centerpos, ::UnityEngine::Vector3 extend)
		{
			return ((::System::Void(*)(::MoleMole::SuperDebug_LogModule, ::UnityEngine::Matrix4x4, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + MOLEMOLE_SUPERDEBUG_DRAWDEBUGCUBEFROMDETECT_OFFSET))(type, matri, centerpos, extend);
		}

		static ::System::Void DrawDebugCube(::MoleMole::SuperDebug_LogModule type, ::UnityEngine::Matrix4x4 matri, ::UnityEngine::Vector3 centerpos, ::UnityEngine::Vector3 extend, ::UnityEngine::Color color, ::System::Single duration)
		{
			return ((::System::Void(*)(::MoleMole::SuperDebug_LogModule, ::UnityEngine::Matrix4x4, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Color, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_SUPERDEBUG_DRAWDEBUGCUBE_OFFSET))(type, matri, centerpos, extend, color, duration);
		}

		static ::System::Void DrawDebugCube_1(::UnityEngine::Matrix4x4 matri, ::UnityEngine::Vector3 centerpos, ::UnityEngine::Vector3 extend, ::UnityEngine::Color color, ::System::Single duration)
		{
			return ((::System::Void(*)(::UnityEngine::Matrix4x4, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Color, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_SUPERDEBUG_DRAWDEBUGCUBE_1_OFFSET))(matri, centerpos, extend, color, duration);
		}

		static ::System::Void DebugPoint(::MoleMole::SuperDebug_LogModule type, ::UnityEngine::Vector3 position, ::UnityEngine::Color color, ::System::Single scale, ::System::Single duration, ::System::Boolean depthTest)
		{
			return ((::System::Void(*)(::MoleMole::SuperDebug_LogModule, ::UnityEngine::Vector3, ::UnityEngine::Color, ::System::Single, ::System::Single, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_SUPERDEBUG_DEBUGPOINT_OFFSET))(type, position, color, scale, duration, depthTest);
		}

		static ::System::Void DebugLocalCube(::MoleMole::SuperDebug_LogModule type, ::UnityEngine::Transform* transform, ::UnityEngine::Vector3 size, ::UnityEngine::Color color, ::UnityEngine::Vector3 center, ::System::Single duration, ::System::Boolean depthTest)
		{
			return ((::System::Void(*)(::MoleMole::SuperDebug_LogModule, ::UnityEngine::Transform*, ::UnityEngine::Vector3, ::UnityEngine::Color, ::UnityEngine::Vector3, ::System::Single, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_SUPERDEBUG_DEBUGLOCALCUBE_OFFSET))(type, transform, size, color, center, duration, depthTest);
		}

		static ::System::Void DrawText(::MoleMole::SuperDebug_LogModule type, ::UnityEngine::Vector3 position, ::System::String* text, ::System::Nullable_1<::UnityEngine::Color> color, ::System::Nullable_1<::System::Int32> fontSize)
		{
			return ((::System::Void(*)(::MoleMole::SuperDebug_LogModule, ::UnityEngine::Vector3, ::System::String*, ::System::Nullable_1<::UnityEngine::Color>, ::System::Nullable_1<::System::Int32>))((::PBYTE)hIl2Cpp + MOLEMOLE_SUPERDEBUG_DRAWTEXT_OFFSET))(type, position, text, color, fontSize);
		}

		static ::UnityEngine::Vector3 TransformByPixel(::UnityEngine::Vector3 position, ::System::Single x, ::System::Single y)
		{
			return ((::UnityEngine::Vector3(*)(::UnityEngine::Vector3, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_SUPERDEBUG_TRANSFORMBYPIXEL_OFFSET))(position, x, y);
		}

		static ::UnityEngine::Vector3 TransformByPixel_1(::UnityEngine::Vector3 position, ::UnityEngine::Vector3 translateBy)
		{
			return ((::UnityEngine::Vector3(*)(::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + MOLEMOLE_SUPERDEBUG_TRANSFORMBYPIXEL_1_OFFSET))(position, translateBy);
		}

		static ::System::Void __Print_g__DebugLog_77_0()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_SUPERDEBUG___PRINT_G__DEBUGLOG_77_0_OFFSET))();
		}

		static ::System::Void __Print_g__DebugLogWarning_77_1()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_SUPERDEBUG___PRINT_G__DEBUGLOGWARNING_77_1_OFFSET))();
		}

		static ::System::Void _InitDebugSwitch_g__SetDebugSwitch_98_0(::System::Int32 startIndex, ::System::String* switchKey)
		{
			return ((::System::Void(*)(::System::Int32, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_SUPERDEBUG__INITDEBUGSWITCH_G__SETDEBUGSWITCH_98_0_OFFSET))(startIndex, switchKey);
		}

		static ::System::Void _SetDebugSwitchFlag_g__SavePrefs_99_0(::System::String* switchKey, ::MoleMole::SuperDebug___c__DisplayClass99_0& a2)
		{
			return ((::System::Void(*)(::System::String*, ::MoleMole::SuperDebug___c__DisplayClass99_0&))((::PBYTE)hIl2Cpp + MOLEMOLE_SUPERDEBUG__SETDEBUGSWITCHFLAG_G__SAVEPREFS_99_0_OFFSET))(switchKey, a2);
		}
	};
}

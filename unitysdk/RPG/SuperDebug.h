#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/LogTag.h"
#include "unitysdk/Struct_2_E88BE0C6C262BD53.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_0_16E4307DCC419505;
class Class_0_16E4307DCC419505_1;
namespace System { class Exception; }
namespace System { class String; }
namespace System { template <typename T1, typename T2, typename T3> class Action_3; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::Diagnostics { class StackTrace; }
namespace System::Text { class StringBuilder; }

#define RPG_SUPERDEBUG_ASSERTFORMAT_1_OFFSET UNITYSDK_OFFSET(0x1EF4E910)
#define RPG_SUPERDEBUG_ASSERTFORMAT_OFFSET UNITYSDK_OFFSET(0x1EF4E7B0)
#define RPG_SUPERDEBUG_ASSERT_1_OFFSET UNITYSDK_OFFSET(0x1EF4E590)
#define RPG_SUPERDEBUG_ASSERT_2_OFFSET UNITYSDK_OFFSET(0x1EF4E6F0)
#define RPG_SUPERDEBUG_ASSERT_OFFSET UNITYSDK_OFFSET(0x1EF4E4E0)
#define RPG_SUPERDEBUG_DISABLEALLTAGSWITCHES_OFFSET UNITYSDK_OFFSET(0x1EF4EB70)
#define RPG_SUPERDEBUG_DRAWARROW_OFFSET UNITYSDK_OFFSET(0x1EF4B720)
#define RPG_SUPERDEBUG_DRAWBOX_OFFSET UNITYSDK_OFFSET(0x1EF4B970)
#define RPG_SUPERDEBUG_DRAWCIRCLE_1_OFFSET UNITYSDK_OFFSET(0x1EF4A360)
#define RPG_SUPERDEBUG_DRAWCIRCLE_2_OFFSET UNITYSDK_OFFSET(0x1EF4A390)
#define RPG_SUPERDEBUG_DRAWCIRCLE_OFFSET UNITYSDK_OFFSET(0x1EF4A330)
#define RPG_SUPERDEBUG_DRAWFANSHAPED_OFFSET UNITYSDK_OFFSET(0x1EF4A950)
#define RPG_SUPERDEBUG_DRAWGRID_OFFSET UNITYSDK_OFFSET(0x1EF4B1B0)
#define RPG_SUPERDEBUG_DRAWLINE_1_OFFSET UNITYSDK_OFFSET(0x1EF49F00)
#define RPG_SUPERDEBUG_DRAWLINE_OFFSET UNITYSDK_OFFSET(0x1EF49E10)
#define RPG_SUPERDEBUG_DRAWMINMAXBOX_OFFSET UNITYSDK_OFFSET(0x1EF4B980)
#define RPG_SUPERDEBUG_DRAWPOINT_OFFSET UNITYSDK_OFFSET(0x1EF4B110)
#define RPG_SUPERDEBUG_DRAWRAY_1_OFFSET UNITYSDK_OFFSET(0x1EF4A190)
#define RPG_SUPERDEBUG_DRAWRAY_OFFSET UNITYSDK_OFFSET(0x1EF4A040)
#define RPG_SUPERDEBUG_DRAWRECTANGLE_OFFSET UNITYSDK_OFFSET(0x1EF4B990)
#define RPG_SUPERDEBUG_DRAWSPHERE_OFFSET UNITYSDK_OFFSET(0x1EF4B1A0)
#define RPG_SUPERDEBUG_ENABLEALLTAGSWITCHES_OFFSET UNITYSDK_OFFSET(0x1EF4EA30)
#define RPG_SUPERDEBUG_EXTRACTFORMATTEDSTACKTRACE_OFFSET UNITYSDK_OFFSET(0x1EF4D7F0)
#define RPG_SUPERDEBUG_EXTRACTSTACKTRACE_OFFSET UNITYSDK_OFFSET(0x1EF4D780)
#define RPG_SUPERDEBUG_GETTIMESTAMPSTRING_OFFSET UNITYSDK_OFFSET(0x1EF4C5B0)
#define RPG_SUPERDEBUG_GET_TAGSWITCHES_OFFSET UNITYSDK_OFFSET(0x1EF4EE70)
#define RPG_SUPERDEBUG_GET_TAGTEXTS_OFFSET UNITYSDK_OFFSET(0x1EF4F780)
#define RPG_SUPERDEBUG_LOGBLUE_OFFSET UNITYSDK_OFFSET(0x1EF4D680)
#define RPG_SUPERDEBUG_LOGCOLOR_1_OFFSET UNITYSDK_OFFSET(0x1EF4D620)
#define RPG_SUPERDEBUG_LOGCOLOR_OFFSET UNITYSDK_OFFSET(0x1EF4D610)
#define RPG_SUPERDEBUG_LOGERRORFORMAT_1_OFFSET UNITYSDK_OFFSET(0x1EF4E3A0)
#define RPG_SUPERDEBUG_LOGERRORFORMAT_OFFSET UNITYSDK_OFFSET(0x1EF4E300)
#define RPG_SUPERDEBUG_LOGERROR_1_OFFSET UNITYSDK_OFFSET(0x1EF4E260)
#define RPG_SUPERDEBUG_LOGERROR_OFFSET UNITYSDK_OFFSET(0x1EF4E1C0)
#define RPG_SUPERDEBUG_LOGEXCEPTION_OFFSET UNITYSDK_OFFSET(0x1EF4C360)
#define RPG_SUPERDEBUG_LOGFATAL_OFFSET UNITYSDK_OFFSET(0x1EF4E440)
#define RPG_SUPERDEBUG_LOGFORMAT_1_OFFSET UNITYSDK_OFFSET(0x1EF4C050)
#define RPG_SUPERDEBUG_LOGFORMAT_2_OFFSET UNITYSDK_OFFSET(0x1EF4C170)
#define RPG_SUPERDEBUG_LOGFORMAT_3_OFFSET UNITYSDK_OFFSET(0x1EF4C240)
#define RPG_SUPERDEBUG_LOGFORMAT_OFFSET UNITYSDK_OFFSET(0x1EF4BF80)
#define RPG_SUPERDEBUG_LOGGREEN_OFFSET UNITYSDK_OFFSET(0x1EF4D670)
#define RPG_SUPERDEBUG_LOGPROFILEFORMAT_1_OFFSET UNITYSDK_OFFSET(0x1EF4D020)
#define RPG_SUPERDEBUG_LOGPROFILEFORMAT_2_OFFSET UNITYSDK_OFFSET(0x1EF4D230)
#define RPG_SUPERDEBUG_LOGPROFILEFORMAT_3_OFFSET UNITYSDK_OFFSET(0x1EF4D400)
#define RPG_SUPERDEBUG_LOGPROFILEFORMAT_OFFSET UNITYSDK_OFFSET(0x1EF4CE50)
#define RPG_SUPERDEBUG_LOGPROFILE_1_OFFSET UNITYSDK_OFFSET(0x1EF4C860)
#define RPG_SUPERDEBUG_LOGPROFILE_2_OFFSET UNITYSDK_OFFSET(0x1EF4CA70)
#define RPG_SUPERDEBUG_LOGPROFILE_3_OFFSET UNITYSDK_OFFSET(0x1EF4CC40)
#define RPG_SUPERDEBUG_LOGPROFILE_OFFSET UNITYSDK_OFFSET(0x1EF4C6A0)
#define RPG_SUPERDEBUG_LOGRED_OFFSET UNITYSDK_OFFSET(0x1EF4D650)
#define RPG_SUPERDEBUG_LOGTOAPMDEBUG_OFFSET UNITYSDK_OFFSET(0x1EF4D7E0)
#define RPG_SUPERDEBUG_LOGTOAPM_OFFSET UNITYSDK_OFFSET(0x1EF4D690)
#define RPG_SUPERDEBUG_LOGVERYIMPORTANTFORMAT_1_OFFSET UNITYSDK_OFFSET(0x1EF49BF0)
#define RPG_SUPERDEBUG_LOGVERYIMPORTANTFORMAT_OFFSET UNITYSDK_OFFSET(0x1EF499D0)
#define RPG_SUPERDEBUG_LOGVERYIMPORTANT_1_OFFSET UNITYSDK_OFFSET(0x1EF49850)
#define RPG_SUPERDEBUG_LOGVERYIMPORTANT_OFFSET UNITYSDK_OFFSET(0x1EF496D0)
#define RPG_SUPERDEBUG_LOGWARNINGCOLOR_1_OFFSET UNITYSDK_OFFSET(0x1EF4D640)
#define RPG_SUPERDEBUG_LOGWARNINGCOLOR_OFFSET UNITYSDK_OFFSET(0x1EF4D630)
#define RPG_SUPERDEBUG_LOGWARNINGFORMAT_1_OFFSET UNITYSDK_OFFSET(0x1EF4C520)
#define RPG_SUPERDEBUG_LOGWARNINGFORMAT_OFFSET UNITYSDK_OFFSET(0x1EF4C490)
#define RPG_SUPERDEBUG_LOGWARNINGRED_OFFSET UNITYSDK_OFFSET(0x1EF4C5A0)
#define RPG_SUPERDEBUG_LOGWARNING_1_OFFSET UNITYSDK_OFFSET(0x1EF4C410)
#define RPG_SUPERDEBUG_LOGWARNING_OFFSET UNITYSDK_OFFSET(0x1EF4C390)
#define RPG_SUPERDEBUG_LOGYELLOW_OFFSET UNITYSDK_OFFSET(0x1EF4D660)
#define RPG_SUPERDEBUG_LOG_1_OFFSET UNITYSDK_OFFSET(0x1EF4BC80)
#define RPG_SUPERDEBUG_LOG_2_OFFSET UNITYSDK_OFFSET(0x1EF4BDA0)
#define RPG_SUPERDEBUG_LOG_3_OFFSET UNITYSDK_OFFSET(0x1EF4BE60)
#define RPG_SUPERDEBUG_LOG_OFFSET UNITYSDK_OFFSET(0x1EF4BBC0)
#define RPG_SUPERDEBUG_SETLOGINFOSENDER_OFFSET UNITYSDK_OFFSET(0x1EF496C0)
#define RPG_SUPERDEBUG_SETLUASTACKTRACEPROVIDER_OFFSET UNITYSDK_OFFSET(0x1EF4E9A0)
#define RPG_SUPERDEBUG_SET_TAGSWITCHES_OFFSET UNITYSDK_OFFSET(0x1EF4EE80)
#define RPG_SUPERDEBUG_SET_TAGTEXTS_OFFSET UNITYSDK_OFFSET(0x1EF4F790)
#define RPG_SUPERDEBUG__CCTOR_OFFSET UNITYSDK_OFFSET(0x1EF4EE90)
#define RPG_SUPERDEBUG__FORMATLOGMESSAGE_1_OFFSET UNITYSDK_OFFSET(0x1EF4BA60)
#define RPG_SUPERDEBUG__FORMATLOGMESSAGE_OFFSET UNITYSDK_OFFSET(0x1EF4B9A0)
#define RPG_SUPERDEBUG__GETLUASTACKTRACE_OFFSET UNITYSDK_OFFSET(0x1EF4E9B0)
#define RPG_SUPERDEBUG__INITDEFAULTENABLETAGSWITCHES_OFFSET UNITYSDK_OFFSET(0x1EF4EE60)
#define RPG_SUPERDEBUG__INITTAGSWITCHES_OFFSET UNITYSDK_OFFSET(0x1EF4ECB0)
#define RPG_SUPERDEBUG__INITTAGTEXTS_OFFSET UNITYSDK_OFFSET(0x1EF4F4B0)
#define RPG_SUPERDEBUG__INITTAGVALUES_OFFSET UNITYSDK_OFFSET(0x1EF4EEB0)

namespace RPG
{
	inline static constexpr unsigned int SuperDebug_TypeDefinitionIndex = 6395;

	class SuperDebug : public ::System::Object
	{
	public:
		static ::Class_0_16E4307DCC419505** StaticGet__LogInfoSender()
		{
			return (::Class_0_16E4307DCC419505**)Il2CppClass::FromTypeDefinitionIndex(SuperDebug_TypeDefinitionIndex)->GetStaticField(0x460);
		}
		static ::System::Collections::Generic::Dictionary_2<::RPG::LogTag, ::System::Boolean>** StaticGet__TagSwitches_k__BackingField()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::LogTag, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(SuperDebug_TypeDefinitionIndex)->GetStaticField(0x468);
		}
		static ::Class_0_16E4307DCC419505_1** StaticGet__LuaStackTraceProvider()
		{
			return (::Class_0_16E4307DCC419505_1**)Il2CppClass::FromTypeDefinitionIndex(SuperDebug_TypeDefinitionIndex)->GetStaticField(0x470);
		}
		static ::System::Collections::Generic::List_1<::RPG::LogTag>** StaticGet__TagValues()
		{
			return (::System::Collections::Generic::List_1<::RPG::LogTag>**)Il2CppClass::FromTypeDefinitionIndex(SuperDebug_TypeDefinitionIndex)->GetStaticField(0x478);
		}
		static ::System::Text::StringBuilder** StaticGet__tmpSbForStackTrace()
		{
			return (::System::Text::StringBuilder**)Il2CppClass::FromTypeDefinitionIndex(SuperDebug_TypeDefinitionIndex)->GetStaticField(0x480);
		}
		static ::System::Action_1<::System::String*>** StaticGet_GameCoreLogSamplerErrorHandler()
		{
			return (::System::Action_1<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(SuperDebug_TypeDefinitionIndex)->GetStaticField(0x488);
		}
		static ::System::Action_3<::System::String*, ::System::String*, ::System::String*>** StaticGet_SendMessageDelg()
		{
			return (::System::Action_3<::System::String*, ::System::String*, ::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(SuperDebug_TypeDefinitionIndex)->GetStaticField(0x490);
		}
		static ::System::Collections::Generic::Dictionary_2<::RPG::LogTag, ::System::String*>** StaticGet__TagTexts_k__BackingField()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::LogTag, ::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(SuperDebug_TypeDefinitionIndex)->GetStaticField(0x498);
		}
		static ::System::Boolean* StaticGet_ForbidLogFlag()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(SuperDebug_TypeDefinitionIndex)->GetStaticField(0x3C0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_SUPERDEBUG__CCTOR_OFFSET))();
		}

		static ::System::Void SetLogInfoSender(::Class_0_16E4307DCC419505* a1)
		{
			return ((::System::Void(*)(::Class_0_16E4307DCC419505*))((::PBYTE)hIl2Cpp + RPG_SUPERDEBUG_SETLOGINFOSENDER_OFFSET))(a1);
		}

		static ::System::Void LogVeryImportant(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_SUPERDEBUG_LOGVERYIMPORTANT_OFFSET))(a1);
		}

		static ::System::Void LogVeryImportant_1(::RPG::LogTag a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::RPG::LogTag, ::System::String*))((::PBYTE)hIl2Cpp + RPG_SUPERDEBUG_LOGVERYIMPORTANT_1_OFFSET))(a1, a2);
		}

		static ::System::Void LogVeryImportantFormat(::System::String* a1, ::Il2CppArray<::System::Object*>* a2)
		{
			return ((::System::Void(*)(::System::String*, ::Il2CppArray<::System::Object*>*))((::PBYTE)hIl2Cpp + RPG_SUPERDEBUG_LOGVERYIMPORTANTFORMAT_OFFSET))(a1, a2);
		}

		static ::System::Void LogVeryImportantFormat_1(::RPG::LogTag a1, ::System::String* a2, ::Il2CppArray<::System::Object*>* a3)
		{
			return ((::System::Void(*)(::RPG::LogTag, ::System::String*, ::Il2CppArray<::System::Object*>*))((::PBYTE)hIl2Cpp + RPG_SUPERDEBUG_LOGVERYIMPORTANTFORMAT_1_OFFSET))(a1, a2, a3);
		}

		static ::System::Void DrawLine(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2, ::System::Nullable_1<::UnityEngine::Color> a3, ::System::Single a4, ::System::Boolean a5)
		{
			return ((::System::Void(*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Nullable_1<::UnityEngine::Color>, ::System::Single, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_SUPERDEBUG_DRAWLINE_OFFSET))(a1, a2, a3, a4, a5);
		}

		static ::System::Void DrawLine_1(::RPG::LogTag a1, ::UnityEngine::Vector3 a2, ::UnityEngine::Vector3 a3, ::System::Nullable_1<::UnityEngine::Color> a4, ::System::Single a5, ::System::Boolean a6)
		{
			return ((::System::Void(*)(::RPG::LogTag, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Nullable_1<::UnityEngine::Color>, ::System::Single, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_SUPERDEBUG_DRAWLINE_1_OFFSET))(a1, a2, a3, a4, a5, a6);
		}

		static ::System::Void DrawRay(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2, ::System::Nullable_1<::UnityEngine::Color> a3, ::System::Single a4, ::System::Boolean a5)
		{
			return ((::System::Void(*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Nullable_1<::UnityEngine::Color>, ::System::Single, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_SUPERDEBUG_DRAWRAY_OFFSET))(a1, a2, a3, a4, a5);
		}

		static ::System::Void DrawRay_1(::RPG::LogTag a1, ::UnityEngine::Vector3 a2, ::UnityEngine::Vector3 a3, ::System::Nullable_1<::UnityEngine::Color> a4, ::System::Single a5, ::System::Boolean a6)
		{
			return ((::System::Void(*)(::RPG::LogTag, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Nullable_1<::UnityEngine::Color>, ::System::Single, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_SUPERDEBUG_DRAWRAY_1_OFFSET))(a1, a2, a3, a4, a5, a6);
		}

		static ::System::Void DrawCircle(::UnityEngine::Vector3 a1, ::System::Single a2, ::System::Nullable_1<::UnityEngine::Vector3> a3, ::System::Int32 a4, ::System::Nullable_1<::UnityEngine::Color> a5, ::System::Single a6, ::System::Boolean a7)
		{
			return ((::System::Void(*)(::UnityEngine::Vector3, ::System::Single, ::System::Nullable_1<::UnityEngine::Vector3>, ::System::Int32, ::System::Nullable_1<::UnityEngine::Color>, ::System::Single, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_SUPERDEBUG_DRAWCIRCLE_OFFSET))(a1, a2, a3, a4, a5, a6, a7);
		}

		static ::System::Void DrawCircle_1(::RPG::LogTag a1, ::UnityEngine::Vector3 a2, ::System::Single a3, ::System::Nullable_1<::UnityEngine::Vector3> a4, ::System::Int32 a5, ::System::Nullable_1<::UnityEngine::Color> a6, ::System::Single a7, ::System::Boolean a8)
		{
			return ((::System::Void(*)(::RPG::LogTag, ::UnityEngine::Vector3, ::System::Single, ::System::Nullable_1<::UnityEngine::Vector3>, ::System::Int32, ::System::Nullable_1<::UnityEngine::Color>, ::System::Single, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_SUPERDEBUG_DRAWCIRCLE_1_OFFSET))(a1, a2, a3, a4, a5, a6, a7, a8);
		}

		static ::System::Void DrawCircle_2(::UnityEngine::Vector3 a1, ::System::Single a2, ::UnityEngine::Vector3 a3, ::System::Int32 a4, ::UnityEngine::Color a5, ::System::Single a6, ::System::Boolean a7)
		{
			return ((::System::Void(*)(::UnityEngine::Vector3, ::System::Single, ::UnityEngine::Vector3, ::System::Int32, ::UnityEngine::Color, ::System::Single, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_SUPERDEBUG_DRAWCIRCLE_2_OFFSET))(a1, a2, a3, a4, a5, a6, a7);
		}

		static ::System::Void DrawFanShaped(::UnityEngine::Vector3 a1, ::System::Single a2, ::System::Single a3, ::UnityEngine::Vector3 a4, ::UnityEngine::Vector3 a5, ::UnityEngine::Color a6, ::System::Int32 a7, ::System::Single a8, ::System::Boolean a9)
		{
			return ((::System::Void(*)(::UnityEngine::Vector3, ::System::Single, ::System::Single, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Color, ::System::Int32, ::System::Single, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_SUPERDEBUG_DRAWFANSHAPED_OFFSET))(a1, a2, a3, a4, a5, a6, a7, a8, a9);
		}

		static ::System::Void DrawPoint(::UnityEngine::Vector3 a1, ::UnityEngine::Color a2, ::System::Single a3)
		{
			return ((::System::Void(*)(::UnityEngine::Vector3, ::UnityEngine::Color, ::System::Single))((::PBYTE)hIl2Cpp + RPG_SUPERDEBUG_DRAWPOINT_OFFSET))(a1, a2, a3);
		}

		static ::System::Void DrawSphere(::UnityEngine::Vector3 a1, ::UnityEngine::Color a2, ::System::Single a3, ::System::Single a4, ::System::Int32 a5, ::System::Boolean a6)
		{
			return ((::System::Void(*)(::UnityEngine::Vector3, ::UnityEngine::Color, ::System::Single, ::System::Single, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_SUPERDEBUG_DRAWSPHERE_OFFSET))(a1, a2, a3, a4, a5, a6);
		}

		static ::System::Void DrawGrid(::UnityEngine::Vector3 a1, ::UnityEngine::Quaternion a2, ::UnityEngine::Vector3 a3, ::System::Single a4)
		{
			return ((::System::Void(*)(::UnityEngine::Vector3, ::UnityEngine::Quaternion, ::UnityEngine::Vector3, ::System::Single))((::PBYTE)hIl2Cpp + RPG_SUPERDEBUG_DRAWGRID_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::Void DrawArrow(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2, ::UnityEngine::Vector3 a3, ::System::Single a4, ::System::Single a5, ::System::Nullable_1<::UnityEngine::Color> a6, ::System::Single a7, ::System::Boolean a8)
		{
			return ((::System::Void(*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Single, ::System::Single, ::System::Nullable_1<::UnityEngine::Color>, ::System::Single, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_SUPERDEBUG_DRAWARROW_OFFSET))(a1, a2, a3, a4, a5, a6, a7, a8);
		}

		static ::System::Void DrawBox(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2, ::UnityEngine::Quaternion a3, ::System::Nullable_1<::UnityEngine::Color> a4, ::System::Single a5, ::System::Boolean a6)
		{
			return ((::System::Void(*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Quaternion, ::System::Nullable_1<::UnityEngine::Color>, ::System::Single, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_SUPERDEBUG_DRAWBOX_OFFSET))(a1, a2, a3, a4, a5, a6);
		}

		static ::System::Void DrawMinMaxBox(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2, ::UnityEngine::Quaternion a3, ::System::Nullable_1<::UnityEngine::Color> a4, ::System::Single a5, ::System::Boolean a6)
		{
			return ((::System::Void(*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Quaternion, ::System::Nullable_1<::UnityEngine::Color>, ::System::Single, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_SUPERDEBUG_DRAWMINMAXBOX_OFFSET))(a1, a2, a3, a4, a5, a6);
		}

		static ::System::Void DrawRectangle(::UnityEngine::Vector3 a1, ::UnityEngine::Vector2 a2, ::UnityEngine::Quaternion a3, ::System::Nullable_1<::UnityEngine::Color> a4, ::System::Single a5, ::System::Boolean a6)
		{
			return ((::System::Void(*)(::UnityEngine::Vector3, ::UnityEngine::Vector2, ::UnityEngine::Quaternion, ::System::Nullable_1<::UnityEngine::Color>, ::System::Single, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_SUPERDEBUG_DRAWRECTANGLE_OFFSET))(a1, a2, a3, a4, a5, a6);
		}

		static ::System::String* _FormatLogMessage(::RPG::LogTag a1, ::System::String* a2)
		{
			return ((::System::String*(*)(::RPG::LogTag, ::System::String*))((::PBYTE)hIl2Cpp + RPG_SUPERDEBUG__FORMATLOGMESSAGE_OFFSET))(a1, a2);
		}

		static ::System::String* _FormatLogMessage_1(::RPG::LogTag a1, ::System::String* a2, ::Il2CppArray<::System::Object*>* a3)
		{
			return ((::System::String*(*)(::RPG::LogTag, ::System::String*, ::Il2CppArray<::System::Object*>*))((::PBYTE)hIl2Cpp + RPG_SUPERDEBUG__FORMATLOGMESSAGE_1_OFFSET))(a1, a2, a3);
		}

		static ::System::Void Log(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_SUPERDEBUG_LOG_OFFSET))(a1);
		}

		static ::System::Void Log_1(::Struct_2_E88BE0C6C262BD53& a1)
		{
			return ((::System::Void(*)(::Struct_2_E88BE0C6C262BD53&))((::PBYTE)hIl2Cpp + RPG_SUPERDEBUG_LOG_1_OFFSET))(a1);
		}

		static ::System::Void Log_2(::RPG::LogTag a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::RPG::LogTag, ::System::String*))((::PBYTE)hIl2Cpp + RPG_SUPERDEBUG_LOG_2_OFFSET))(a1, a2);
		}

		static ::System::Void Log_3(::RPG::LogTag a1, ::Struct_2_E88BE0C6C262BD53& a2)
		{
			return ((::System::Void(*)(::RPG::LogTag, ::Struct_2_E88BE0C6C262BD53&))((::PBYTE)hIl2Cpp + RPG_SUPERDEBUG_LOG_3_OFFSET))(a1, a2);
		}

		static ::System::Void LogFormat(::System::String* a1, ::Il2CppArray<::System::Object*>* a2)
		{
			return ((::System::Void(*)(::System::String*, ::Il2CppArray<::System::Object*>*))((::PBYTE)hIl2Cpp + RPG_SUPERDEBUG_LOGFORMAT_OFFSET))(a1, a2);
		}

		static ::System::Void LogFormat_1(::Struct_2_E88BE0C6C262BD53& a1)
		{
			return ((::System::Void(*)(::Struct_2_E88BE0C6C262BD53&))((::PBYTE)hIl2Cpp + RPG_SUPERDEBUG_LOGFORMAT_1_OFFSET))(a1);
		}

		static ::System::Void LogFormat_2(::RPG::LogTag a1, ::System::String* a2, ::Il2CppArray<::System::Object*>* a3)
		{
			return ((::System::Void(*)(::RPG::LogTag, ::System::String*, ::Il2CppArray<::System::Object*>*))((::PBYTE)hIl2Cpp + RPG_SUPERDEBUG_LOGFORMAT_2_OFFSET))(a1, a2, a3);
		}

		static ::System::Void LogFormat_3(::RPG::LogTag a1, ::Struct_2_E88BE0C6C262BD53& a2)
		{
			return ((::System::Void(*)(::RPG::LogTag, ::Struct_2_E88BE0C6C262BD53&))((::PBYTE)hIl2Cpp + RPG_SUPERDEBUG_LOGFORMAT_3_OFFSET))(a1, a2);
		}

		static ::System::Void LogException(::System::Exception* a1)
		{
			return ((::System::Void(*)(::System::Exception*))((::PBYTE)hIl2Cpp + RPG_SUPERDEBUG_LOGEXCEPTION_OFFSET))(a1);
		}

		static ::System::Void LogWarning(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_SUPERDEBUG_LOGWARNING_OFFSET))(a1);
		}

		static ::System::Void LogWarning_1(::RPG::LogTag a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::RPG::LogTag, ::System::String*))((::PBYTE)hIl2Cpp + RPG_SUPERDEBUG_LOGWARNING_1_OFFSET))(a1, a2);
		}

		static ::System::Void LogWarningFormat(::System::String* a1, ::Il2CppArray<::System::Object*>* a2)
		{
			return ((::System::Void(*)(::System::String*, ::Il2CppArray<::System::Object*>*))((::PBYTE)hIl2Cpp + RPG_SUPERDEBUG_LOGWARNINGFORMAT_OFFSET))(a1, a2);
		}

		static ::System::Void LogWarningFormat_1(::RPG::LogTag a1, ::System::String* a2, ::Il2CppArray<::System::Object*>* a3)
		{
			return ((::System::Void(*)(::RPG::LogTag, ::System::String*, ::Il2CppArray<::System::Object*>*))((::PBYTE)hIl2Cpp + RPG_SUPERDEBUG_LOGWARNINGFORMAT_1_OFFSET))(a1, a2, a3);
		}

		static ::System::Void LogWarningRed(::RPG::LogTag a1, ::System::String* a2, ::Il2CppArray<::System::Object*>* a3)
		{
			return ((::System::Void(*)(::RPG::LogTag, ::System::String*, ::Il2CppArray<::System::Object*>*))((::PBYTE)hIl2Cpp + RPG_SUPERDEBUG_LOGWARNINGRED_OFFSET))(a1, a2, a3);
		}

		static ::System::String* GetTimestampString()
		{
			return ((::System::String*(*)())((::PBYTE)hIl2Cpp + RPG_SUPERDEBUG_GETTIMESTAMPSTRING_OFFSET))();
		}

		static ::System::Void LogProfile(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_SUPERDEBUG_LOGPROFILE_OFFSET))(a1);
		}

		static ::System::Void LogProfile_1(::Struct_2_E88BE0C6C262BD53& a1)
		{
			return ((::System::Void(*)(::Struct_2_E88BE0C6C262BD53&))((::PBYTE)hIl2Cpp + RPG_SUPERDEBUG_LOGPROFILE_1_OFFSET))(a1);
		}

		static ::System::Void LogProfile_2(::RPG::LogTag a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::RPG::LogTag, ::System::String*))((::PBYTE)hIl2Cpp + RPG_SUPERDEBUG_LOGPROFILE_2_OFFSET))(a1, a2);
		}

		static ::System::Void LogProfile_3(::RPG::LogTag a1, ::Struct_2_E88BE0C6C262BD53& a2)
		{
			return ((::System::Void(*)(::RPG::LogTag, ::Struct_2_E88BE0C6C262BD53&))((::PBYTE)hIl2Cpp + RPG_SUPERDEBUG_LOGPROFILE_3_OFFSET))(a1, a2);
		}

		static ::System::Void LogProfileFormat(::System::String* a1, ::Il2CppArray<::System::Object*>* a2)
		{
			return ((::System::Void(*)(::System::String*, ::Il2CppArray<::System::Object*>*))((::PBYTE)hIl2Cpp + RPG_SUPERDEBUG_LOGPROFILEFORMAT_OFFSET))(a1, a2);
		}

		static ::System::Void LogProfileFormat_1(::Struct_2_E88BE0C6C262BD53& a1)
		{
			return ((::System::Void(*)(::Struct_2_E88BE0C6C262BD53&))((::PBYTE)hIl2Cpp + RPG_SUPERDEBUG_LOGPROFILEFORMAT_1_OFFSET))(a1);
		}

		static ::System::Void LogProfileFormat_2(::RPG::LogTag a1, ::System::String* a2, ::Il2CppArray<::System::Object*>* a3)
		{
			return ((::System::Void(*)(::RPG::LogTag, ::System::String*, ::Il2CppArray<::System::Object*>*))((::PBYTE)hIl2Cpp + RPG_SUPERDEBUG_LOGPROFILEFORMAT_2_OFFSET))(a1, a2, a3);
		}

		static ::System::Void LogProfileFormat_3(::RPG::LogTag a1, ::Struct_2_E88BE0C6C262BD53& a2)
		{
			return ((::System::Void(*)(::RPG::LogTag, ::Struct_2_E88BE0C6C262BD53&))((::PBYTE)hIl2Cpp + RPG_SUPERDEBUG_LOGPROFILEFORMAT_3_OFFSET))(a1, a2);
		}

		static ::System::Void LogColor(::System::String* a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + RPG_SUPERDEBUG_LOGCOLOR_OFFSET))(a1, a2);
		}

		static ::System::Void LogColor_1(::System::String* a1, ::System::String* a2, ::Il2CppArray<::System::Object*>* a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::String*, ::Il2CppArray<::System::Object*>*))((::PBYTE)hIl2Cpp + RPG_SUPERDEBUG_LOGCOLOR_1_OFFSET))(a1, a2, a3);
		}

		static ::System::Void LogWarningColor(::System::String* a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + RPG_SUPERDEBUG_LOGWARNINGCOLOR_OFFSET))(a1, a2);
		}

		static ::System::Void LogWarningColor_1(::System::String* a1, ::System::String* a2, ::Il2CppArray<::System::Object*>* a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::String*, ::Il2CppArray<::System::Object*>*))((::PBYTE)hIl2Cpp + RPG_SUPERDEBUG_LOGWARNINGCOLOR_1_OFFSET))(a1, a2, a3);
		}

		static ::System::Void LogRed(::System::String* a1, ::Il2CppArray<::System::Object*>* a2)
		{
			return ((::System::Void(*)(::System::String*, ::Il2CppArray<::System::Object*>*))((::PBYTE)hIl2Cpp + RPG_SUPERDEBUG_LOGRED_OFFSET))(a1, a2);
		}

		static ::System::Void LogYellow(::System::String* a1, ::Il2CppArray<::System::Object*>* a2)
		{
			return ((::System::Void(*)(::System::String*, ::Il2CppArray<::System::Object*>*))((::PBYTE)hIl2Cpp + RPG_SUPERDEBUG_LOGYELLOW_OFFSET))(a1, a2);
		}

		static ::System::Void LogGreen(::System::String* a1, ::Il2CppArray<::System::Object*>* a2)
		{
			return ((::System::Void(*)(::System::String*, ::Il2CppArray<::System::Object*>*))((::PBYTE)hIl2Cpp + RPG_SUPERDEBUG_LOGGREEN_OFFSET))(a1, a2);
		}

		static ::System::Void LogBlue(::System::String* a1, ::Il2CppArray<::System::Object*>* a2)
		{
			return ((::System::Void(*)(::System::String*, ::Il2CppArray<::System::Object*>*))((::PBYTE)hIl2Cpp + RPG_SUPERDEBUG_LOGBLUE_OFFSET))(a1, a2);
		}

		static ::System::Void LogToApm(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_SUPERDEBUG_LOGTOAPM_OFFSET))(a1);
		}

		static ::System::Void LogToApmDebug(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_SUPERDEBUG_LOGTOAPMDEBUG_OFFSET))(a1);
		}

		static ::System::String* ExtractStackTrace(::System::Int32 a1)
		{
			return ((::System::String*(*)(::System::Int32))((::PBYTE)hIl2Cpp + RPG_SUPERDEBUG_EXTRACTSTACKTRACE_OFFSET))(a1);
		}

		static ::System::String* ExtractFormattedStackTrace(::System::Diagnostics::StackTrace* a1)
		{
			return ((::System::String*(*)(::System::Diagnostics::StackTrace*))((::PBYTE)hIl2Cpp + RPG_SUPERDEBUG_EXTRACTFORMATTEDSTACKTRACE_OFFSET))(a1);
		}

		static ::System::Void LogError(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_SUPERDEBUG_LOGERROR_OFFSET))(a1);
		}

		static ::System::Void LogError_1(::RPG::LogTag a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::RPG::LogTag, ::System::String*))((::PBYTE)hIl2Cpp + RPG_SUPERDEBUG_LOGERROR_1_OFFSET))(a1, a2);
		}

		static ::System::Void LogErrorFormat(::System::String* a1, ::Il2CppArray<::System::Object*>* a2)
		{
			return ((::System::Void(*)(::System::String*, ::Il2CppArray<::System::Object*>*))((::PBYTE)hIl2Cpp + RPG_SUPERDEBUG_LOGERRORFORMAT_OFFSET))(a1, a2);
		}

		static ::System::Void LogErrorFormat_1(::RPG::LogTag a1, ::System::String* a2, ::Il2CppArray<::System::Object*>* a3)
		{
			return ((::System::Void(*)(::RPG::LogTag, ::System::String*, ::Il2CppArray<::System::Object*>*))((::PBYTE)hIl2Cpp + RPG_SUPERDEBUG_LOGERRORFORMAT_1_OFFSET))(a1, a2, a3);
		}

		static ::System::Void LogFatal(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_SUPERDEBUG_LOGFATAL_OFFSET))(a1);
		}

		static ::System::Void Assert(::System::Boolean a1)
		{
			return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + RPG_SUPERDEBUG_ASSERT_OFFSET))(a1);
		}

		static ::System::Void Assert_1(::System::Boolean a1, ::Struct_2_E88BE0C6C262BD53& a2)
		{
			return ((::System::Void(*)(::System::Boolean, ::Struct_2_E88BE0C6C262BD53&))((::PBYTE)hIl2Cpp + RPG_SUPERDEBUG_ASSERT_1_OFFSET))(a1, a2);
		}

		static ::System::Void Assert_2(::System::Boolean a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::System::Boolean, ::System::String*))((::PBYTE)hIl2Cpp + RPG_SUPERDEBUG_ASSERT_2_OFFSET))(a1, a2);
		}

		static ::System::Void AssertFormat(::System::Boolean a1, ::Struct_2_E88BE0C6C262BD53& a2)
		{
			return ((::System::Void(*)(::System::Boolean, ::Struct_2_E88BE0C6C262BD53&))((::PBYTE)hIl2Cpp + RPG_SUPERDEBUG_ASSERTFORMAT_OFFSET))(a1, a2);
		}

		static ::System::Void AssertFormat_1(::System::Boolean a1, ::System::String* a2, ::Il2CppArray<::System::Object*>* a3)
		{
			return ((::System::Void(*)(::System::Boolean, ::System::String*, ::Il2CppArray<::System::Object*>*))((::PBYTE)hIl2Cpp + RPG_SUPERDEBUG_ASSERTFORMAT_1_OFFSET))(a1, a2, a3);
		}

		static ::System::Void SetLuaStackTraceProvider(::Class_0_16E4307DCC419505_1* a1)
		{
			return ((::System::Void(*)(::Class_0_16E4307DCC419505_1*))((::PBYTE)hIl2Cpp + RPG_SUPERDEBUG_SETLUASTACKTRACEPROVIDER_OFFSET))(a1);
		}

		static ::System::String* _GetLuaStackTrace()
		{
			return ((::System::String*(*)())((::PBYTE)hIl2Cpp + RPG_SUPERDEBUG__GETLUASTACKTRACE_OFFSET))();
		}

		static ::System::Void EnableAllTagSwitches()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_SUPERDEBUG_ENABLEALLTAGSWITCHES_OFFSET))();
		}

		static ::System::Void DisableAllTagSwitches()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_SUPERDEBUG_DISABLEALLTAGSWITCHES_OFFSET))();
		}

		static ::System::Void _InitTagSwitches()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_SUPERDEBUG__INITTAGSWITCHES_OFFSET))();
		}

		static ::System::Void _InitDefaultEnableTagSwitches()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_SUPERDEBUG__INITDEFAULTENABLETAGSWITCHES_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::LogTag, ::System::Boolean>* get_TagSwitches()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::LogTag, ::System::Boolean>*(*)())((::PBYTE)hIl2Cpp + RPG_SUPERDEBUG_GET_TAGSWITCHES_OFFSET))();
		}

		static ::System::Void set_TagSwitches(::System::Collections::Generic::Dictionary_2<::RPG::LogTag, ::System::Boolean>* a1)
		{
			return ((::System::Void(*)(::System::Collections::Generic::Dictionary_2<::RPG::LogTag, ::System::Boolean>*))((::PBYTE)hIl2Cpp + RPG_SUPERDEBUG_SET_TAGSWITCHES_OFFSET))(a1);
		}

		static ::System::Void _InitTagValues()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_SUPERDEBUG__INITTAGVALUES_OFFSET))();
		}

		static ::System::Void _InitTagTexts()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_SUPERDEBUG__INITTAGTEXTS_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::LogTag, ::System::String*>* get_TagTexts()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::LogTag, ::System::String*>*(*)())((::PBYTE)hIl2Cpp + RPG_SUPERDEBUG_GET_TAGTEXTS_OFFSET))();
		}

		static ::System::Void set_TagTexts(::System::Collections::Generic::Dictionary_2<::RPG::LogTag, ::System::String*>* a1)
		{
			return ((::System::Void(*)(::System::Collections::Generic::Dictionary_2<::RPG::LogTag, ::System::String*>*))((::PBYTE)hIl2Cpp + RPG_SUPERDEBUG_SET_TAGTEXTS_OFFSET))(a1);
		}
	};
}

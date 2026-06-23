#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/MyLogger_GeometryType.h"
#include "unitysdk/Foundation/MyLogger_ValueType.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Bounds.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace Foundation { template <typename T1, typename T2, typename T3> class TwoDimensionalTable_3; }
namespace System { class Exception; }
namespace System { class String; }
namespace System { class Type; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace UnityEngine { class Transform; }

#define FOUNDATION_MYLOGGER_DODRAWARROW_OFFSET UNITYSDK_OFFSET(0x1D8F8350)
#define FOUNDATION_MYLOGGER_DRAWARROW_1_OFFSET UNITYSDK_OFFSET(0x1D8F84A0)
#define FOUNDATION_MYLOGGER_DRAWARROW_OFFSET UNITYSDK_OFFSET(0x1D8F8270)
#define FOUNDATION_MYLOGGER_DRAWBONE_OFFSET UNITYSDK_OFFSET(0x1D8F7030)
#define FOUNDATION_MYLOGGER_DRAWBOUNDS_OFFSET UNITYSDK_OFFSET(0x1D8F85F0)
#define FOUNDATION_MYLOGGER_DRAWCAPSULE_OFFSET UNITYSDK_OFFSET(0x1D8F6E30)
#define FOUNDATION_MYLOGGER_DRAWCONE_OFFSET UNITYSDK_OFFSET(0x1D8F77E0)
#define FOUNDATION_MYLOGGER_DRAWCUBE_OFFSET UNITYSDK_OFFSET(0x1D8F69F0)
#define FOUNDATION_MYLOGGER_DRAWCUBOID_OFFSET UNITYSDK_OFFSET(0x1D8F79E0)
#define FOUNDATION_MYLOGGER_DRAWCYLINDER_OFFSET UNITYSDK_OFFSET(0x1D8F73E0)
#define FOUNDATION_MYLOGGER_DRAWELLIPSOID_OFFSET UNITYSDK_OFFSET(0x1D8F7BC0)
#define FOUNDATION_MYLOGGER_DRAWGIZMOPOSITION_OFFSET UNITYSDK_OFFSET(0x1D8F8A90)
#define FOUNDATION_MYLOGGER_DRAWGIZMOROTATE_OFFSET UNITYSDK_OFFSET(0x1D8F8BE0)
#define FOUNDATION_MYLOGGER_DRAWGIZMOSCALE_OFFSET UNITYSDK_OFFSET(0x1D8F8D30)
#define FOUNDATION_MYLOGGER_DRAWGUIFUNCTION_OFFSET UNITYSDK_OFFSET(0x1D8F88D0)
#define FOUNDATION_MYLOGGER_DRAWLINE_1_OFFSET UNITYSDK_OFFSET(0x1D8F7F20)
#define FOUNDATION_MYLOGGER_DRAWLINE_2_OFFSET UNITYSDK_OFFSET(0x1D8F80E0)
#define FOUNDATION_MYLOGGER_DRAWLINE_OFFSET UNITYSDK_OFFSET(0x1D8F7DC0)
#define FOUNDATION_MYLOGGER_DRAWPOINT_OFFSET UNITYSDK_OFFSET(0x1D8F8750)
#define FOUNDATION_MYLOGGER_DRAWPYRAMIDR_OFFSET UNITYSDK_OFFSET(0x1D8F75E0)
#define FOUNDATION_MYLOGGER_DRAWSKELETON_OFFSET UNITYSDK_OFFSET(0x1D8F8E80)
#define FOUNDATION_MYLOGGER_DRAWSPHERE_OFFSET UNITYSDK_OFFSET(0x1D8F6C60)
#define FOUNDATION_MYLOGGER_DRAWSQUARE_1_OFFSET UNITYSDK_OFFSET(0x1D8F72A0)
#define FOUNDATION_MYLOGGER_DRAWSQUARE_2_OFFSET UNITYSDK_OFFSET(0x1D8F7320)
#define FOUNDATION_MYLOGGER_DRAWSQUARE_OFFSET UNITYSDK_OFFSET(0x1D8F7230)
#define FOUNDATION_MYLOGGER_GET_ISENABLE_OFFSET UNITYSDK_OFFSET(0x1D8F9940)
#define FOUNDATION_MYLOGGER_GET_TOLOGGABLESTRING_OFFSET UNITYSDK_OFFSET(0x1D8F9A70)
#define FOUNDATION_MYLOGGER_GET_WATCHVARS_OFFSET UNITYSDK_OFFSET(0x1D8F99D0)
#define FOUNDATION_MYLOGGER_LOGDEBUG_OFFSET UNITYSDK_OFFSET(0x1D8F9E40)
#define FOUNDATION_MYLOGGER_LOGERROR_OFFSET UNITYSDK_OFFSET(0x1D8FA020)
#define FOUNDATION_MYLOGGER_LOGEXCEPTION_OFFSET UNITYSDK_OFFSET(0x1D8FA1D0)
#define FOUNDATION_MYLOGGER_LOGFATAL_OFFSET UNITYSDK_OFFSET(0x1D8FA110)
#define FOUNDATION_MYLOGGER_LOGINFO_OFFSET UNITYSDK_OFFSET(0x1D8F9A90)
#define FOUNDATION_MYLOGGER_LOGWARNING_OFFSET UNITYSDK_OFFSET(0x1D8F9F30)
#define FOUNDATION_MYLOGGER_SET_ISENABLE_OFFSET UNITYSDK_OFFSET(0x1D8F9A80)
#define FOUNDATION_MYLOGGER_WATCHASSERT_OFFSET UNITYSDK_OFFSET(0x1D8FA5A0)
#define FOUNDATION_MYLOGGER_WATCHBYFILTER_OFFSET UNITYSDK_OFFSET(0x1D8FA8B0)
#define FOUNDATION_MYLOGGER_WATCH_OFFSET UNITYSDK_OFFSET(0x1D8FA300)
#define FOUNDATION_MYLOGGER__CCTOR_OFFSET UNITYSDK_OFFSET(0x1D8FAD90)
#define FOUNDATION_MYLOGGER__CONCAT__OFFSET UNITYSDK_OFFSET(0x1D8F9B80)
#define FOUNDATION_MYLOGGER__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1D8F9A40)
#define FOUNDATION_MYLOGGER__CTOR_OFFSET UNITYSDK_OFFSET(0x1D8F9A30)
#define FOUNDATION_MYLOGGER__DRAWTRANSFORMS_OFFSET UNITYSDK_OFFSET(0x1D8F8F90)
#define FOUNDATION_MYLOGGER__ISDRAWENABLE_OFFSET UNITYSDK_OFFSET(0x1D8F6BC0)
#define FOUNDATION_MYLOGGER__RECURSION_OFFSET UNITYSDK_OFFSET(0x1D8F9100)

namespace Foundation
{
	inline static constexpr unsigned int MyLogger_TypeDefinitionIndex = 7914;

	class MyLogger : public ::System::Object
	{
	public:
		static ::Foundation::MyLogger** StaticGet_Log()
		{
			return (::Foundation::MyLogger**)Il2CppClass::FromTypeDefinitionIndex(MyLogger_TypeDefinitionIndex)->GetStaticField(0x6700);
		}
		static ::Foundation::TwoDimensionalTable_3<::System::String*, ::System::String*, ::Foundation::MyLogger_ValueType>** StaticGet__WatchVars_k__BackingField()
		{
			return (::Foundation::TwoDimensionalTable_3<::System::String*, ::System::String*, ::Foundation::MyLogger_ValueType>**)Il2CppClass::FromTypeDefinitionIndex(MyLogger_TypeDefinitionIndex)->GetStaticField(0x6708);
		}
		static ::UnityEngine::Color* StaticGet_JointColor()
		{
			return (::UnityEngine::Color*)Il2CppClass::FromTypeDefinitionIndex(MyLogger_TypeDefinitionIndex)->GetStaticField(0x3380);
		}
		static ::System::Single* StaticGet_BoneSize()
		{
			return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(MyLogger_TypeDefinitionIndex)->GetStaticField(0x3390);
		}
		static ::UnityEngine::Color* StaticGet_BoneColor()
		{
			return (::UnityEngine::Color*)Il2CppClass::FromTypeDefinitionIndex(MyLogger_TypeDefinitionIndex)->GetStaticField(0x3394);
		}
		static ::System::Boolean* StaticGet_IsDrawEnable()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(MyLogger_TypeDefinitionIndex)->GetStaticField(0x33A4);
		}
		static ::System::Boolean* StaticGet_IsWarningEnable()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(MyLogger_TypeDefinitionIndex)->GetStaticField(0x33A5);
		}
		static ::System::Boolean* StaticGet_IsErrorEnable()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(MyLogger_TypeDefinitionIndex)->GetStaticField(0x33A6);
		}
		static ::System::Boolean* StaticGet_IsFatalEnable()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(MyLogger_TypeDefinitionIndex)->GetStaticField(0x33A7);
		}
		static ::System::Boolean* StaticGet_IsWatchEnable()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(MyLogger_TypeDefinitionIndex)->GetStaticField(0x33A8);
		}
		static ::System::Boolean* StaticGet_IsDebugEnable()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(MyLogger_TypeDefinitionIndex)->GetStaticField(0x33A9);
		}
		static ::System::Boolean* StaticGet_IsInfoEnable()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(MyLogger_TypeDefinitionIndex)->GetStaticField(0x33AA);
		}
		::System::String* _loggableString; // 0x10
		::System::Nullable_1<::UnityEngine::Color> _colorTitle; // 0x18
		::System::Boolean _isEnable; // 0x2C
		::System::Nullable_1<::UnityEngine::Color> _colorContent; // 0x30

		::System::Void _ctor(::System::Type* type, ::System::Nullable_1<::UnityEngine::Color> colorTitle, ::System::Nullable_1<::UnityEngine::Color> colorContent)
		{
			return ((::System::Void(*)(::PVOID, ::System::Type*, ::System::Nullable_1<::UnityEngine::Color>, ::System::Nullable_1<::UnityEngine::Color>))((::PBYTE)hIl2Cpp + FOUNDATION_MYLOGGER__CTOR_OFFSET))(this, type, colorTitle, colorContent);
		}

		::System::Void _ctor_1(::System::String* loggableString, ::System::Nullable_1<::UnityEngine::Color> colorTitle, ::System::Nullable_1<::UnityEngine::Color> colorContent)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Nullable_1<::UnityEngine::Color>, ::System::Nullable_1<::UnityEngine::Color>))((::PBYTE)hIl2Cpp + FOUNDATION_MYLOGGER__CTOR_1_OFFSET))(this, loggableString, colorTitle, colorContent);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FOUNDATION_MYLOGGER__CCTOR_OFFSET))();
		}

		::System::Void DrawCube(::UnityEngine::Vector3 position, ::UnityEngine::Quaternion rotation, ::System::Single size, ::UnityEngine::Color color, ::Foundation::MyLogger_GeometryType type, ::UnityEngine::Color wiredColor)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Quaternion, ::System::Single, ::UnityEngine::Color, ::Foundation::MyLogger_GeometryType, ::UnityEngine::Color))((::PBYTE)hIl2Cpp + FOUNDATION_MYLOGGER_DRAWCUBE_OFFSET))(this, position, rotation, size, color, type, wiredColor);
		}

		::System::Void DrawSphere(::UnityEngine::Vector3 position, ::UnityEngine::Quaternion rotation, ::System::Single size, ::UnityEngine::Color color, ::Foundation::MyLogger_GeometryType type, ::UnityEngine::Color wiredColor)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Quaternion, ::System::Single, ::UnityEngine::Color, ::Foundation::MyLogger_GeometryType, ::UnityEngine::Color))((::PBYTE)hIl2Cpp + FOUNDATION_MYLOGGER_DRAWSPHERE_OFFSET))(this, position, rotation, size, color, type, wiredColor);
		}

		::System::Void DrawCapsule(::UnityEngine::Vector3 position, ::UnityEngine::Quaternion rotation, ::System::Single width, ::System::Single height, ::UnityEngine::Color color, ::Foundation::MyLogger_GeometryType type, ::UnityEngine::Color wiredColor)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Quaternion, ::System::Single, ::System::Single, ::UnityEngine::Color, ::Foundation::MyLogger_GeometryType, ::UnityEngine::Color))((::PBYTE)hIl2Cpp + FOUNDATION_MYLOGGER_DRAWCAPSULE_OFFSET))(this, position, rotation, width, height, color, type, wiredColor);
		}

		::System::Void DrawBone(::UnityEngine::Vector3 position, ::UnityEngine::Quaternion rotation, ::System::Single width, ::System::Single length, ::UnityEngine::Color color, ::Foundation::MyLogger_GeometryType type, ::UnityEngine::Color wiredColor)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Quaternion, ::System::Single, ::System::Single, ::UnityEngine::Color, ::Foundation::MyLogger_GeometryType, ::UnityEngine::Color))((::PBYTE)hIl2Cpp + FOUNDATION_MYLOGGER_DRAWBONE_OFFSET))(this, position, rotation, width, length, color, type, wiredColor);
		}

		::System::Void DrawSquare(::UnityEngine::Vector2 min, ::UnityEngine::Color color, ::System::Single duration)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2, ::UnityEngine::Color, ::System::Single))((::PBYTE)hIl2Cpp + FOUNDATION_MYLOGGER_DRAWSQUARE_OFFSET))(this, min, color, duration);
		}

		::System::Void DrawSquare_1(::UnityEngine::Vector2 min, ::UnityEngine::Vector2 max, ::UnityEngine::Color color, ::System::Single duration)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2, ::UnityEngine::Vector2, ::UnityEngine::Color, ::System::Single))((::PBYTE)hIl2Cpp + FOUNDATION_MYLOGGER_DRAWSQUARE_1_OFFSET))(this, min, max, color, duration);
		}

		::System::Void DrawSquare_2(::System::Single minX, ::System::Single maxX, ::System::Single minY, ::System::Single maxY, ::UnityEngine::Color color, ::System::Single duration)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single, ::System::Single, ::System::Single, ::UnityEngine::Color, ::System::Single))((::PBYTE)hIl2Cpp + FOUNDATION_MYLOGGER_DRAWSQUARE_2_OFFSET))(this, minX, maxX, minY, maxY, color, duration);
		}

		::System::Void DrawCylinder(::UnityEngine::Vector3 position, ::UnityEngine::Quaternion rotation, ::System::Single width, ::System::Single height, ::UnityEngine::Color color, ::Foundation::MyLogger_GeometryType type, ::UnityEngine::Color wiredColor)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Quaternion, ::System::Single, ::System::Single, ::UnityEngine::Color, ::Foundation::MyLogger_GeometryType, ::UnityEngine::Color))((::PBYTE)hIl2Cpp + FOUNDATION_MYLOGGER_DRAWCYLINDER_OFFSET))(this, position, rotation, width, height, color, type, wiredColor);
		}

		::System::Void DrawPyramidr(::UnityEngine::Vector3 position, ::UnityEngine::Quaternion rotation, ::System::Single width, ::System::Single height, ::UnityEngine::Color color, ::Foundation::MyLogger_GeometryType type, ::UnityEngine::Color wiredColor)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Quaternion, ::System::Single, ::System::Single, ::UnityEngine::Color, ::Foundation::MyLogger_GeometryType, ::UnityEngine::Color))((::PBYTE)hIl2Cpp + FOUNDATION_MYLOGGER_DRAWPYRAMIDR_OFFSET))(this, position, rotation, width, height, color, type, wiredColor);
		}

		::System::Void DrawCone(::UnityEngine::Vector3 position, ::UnityEngine::Quaternion rotation, ::System::Single width, ::System::Single height, ::UnityEngine::Color color, ::Foundation::MyLogger_GeometryType type, ::UnityEngine::Color wiredColor)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Quaternion, ::System::Single, ::System::Single, ::UnityEngine::Color, ::Foundation::MyLogger_GeometryType, ::UnityEngine::Color))((::PBYTE)hIl2Cpp + FOUNDATION_MYLOGGER_DRAWCONE_OFFSET))(this, position, rotation, width, height, color, type, wiredColor);
		}

		::System::Void DrawCuboid(::UnityEngine::Vector3 position, ::UnityEngine::Quaternion rotation, ::UnityEngine::Vector3 size, ::UnityEngine::Color color, ::Foundation::MyLogger_GeometryType type, ::UnityEngine::Color wiredColor)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Quaternion, ::UnityEngine::Vector3, ::UnityEngine::Color, ::Foundation::MyLogger_GeometryType, ::UnityEngine::Color))((::PBYTE)hIl2Cpp + FOUNDATION_MYLOGGER_DRAWCUBOID_OFFSET))(this, position, rotation, size, color, type, wiredColor);
		}

		::System::Void DrawEllipsoid(::UnityEngine::Vector3 position, ::UnityEngine::Quaternion rotation, ::System::Single width, ::System::Single height, ::UnityEngine::Color color, ::Foundation::MyLogger_GeometryType type, ::UnityEngine::Color wiredColor)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Quaternion, ::System::Single, ::System::Single, ::UnityEngine::Color, ::Foundation::MyLogger_GeometryType, ::UnityEngine::Color))((::PBYTE)hIl2Cpp + FOUNDATION_MYLOGGER_DRAWELLIPSOID_OFFSET))(this, position, rotation, width, height, color, type, wiredColor);
		}

		::System::Void DrawLine(::UnityEngine::Vector3 startPos, ::UnityEngine::Vector3 endPos, ::UnityEngine::Color color)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Color))((::PBYTE)hIl2Cpp + FOUNDATION_MYLOGGER_DRAWLINE_OFFSET))(this, startPos, endPos, color);
		}

		::System::Void DrawLine_1(::UnityEngine::Vector3 startPos, ::UnityEngine::Vector3 endPos, ::UnityEngine::Color color, ::System::Single startThickness, ::System::Single endThickness)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Color, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + FOUNDATION_MYLOGGER_DRAWLINE_1_OFFSET))(this, startPos, endPos, color, startThickness, endThickness);
		}

		::System::Void DrawLine_2(::UnityEngine::Vector3 startPos, ::UnityEngine::Vector3 endPos, ::UnityEngine::Color color, ::System::Single duration)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Color, ::System::Single))((::PBYTE)hIl2Cpp + FOUNDATION_MYLOGGER_DRAWLINE_2_OFFSET))(this, startPos, endPos, color, duration);
		}

		::System::Void DrawArrow(::UnityEngine::Vector3 position, ::UnityEngine::Vector3 direction, ::UnityEngine::Color color)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Color))((::PBYTE)hIl2Cpp + FOUNDATION_MYLOGGER_DRAWARROW_OFFSET))(this, position, direction, color);
		}

		::System::Void DoDrawArrow(::UnityEngine::Vector3 position, ::UnityEngine::Vector3 direction, ::UnityEngine::Color color)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Color))((::PBYTE)hIl2Cpp + FOUNDATION_MYLOGGER_DODRAWARROW_OFFSET))(this, position, direction, color);
		}

		::System::Void DrawArrow_1(::UnityEngine::Vector3 target, ::UnityEngine::Color color, ::System::Single duration, ::System::Boolean depthTest)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Color, ::System::Single, ::System::Boolean))((::PBYTE)hIl2Cpp + FOUNDATION_MYLOGGER_DRAWARROW_1_OFFSET))(this, target, color, duration, depthTest);
		}

		::System::Void DrawBounds(::UnityEngine::Bounds bounds, ::UnityEngine::Color color, ::System::Single duration, ::System::Boolean depthTest)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Bounds, ::UnityEngine::Color, ::System::Single, ::System::Boolean))((::PBYTE)hIl2Cpp + FOUNDATION_MYLOGGER_DRAWBOUNDS_OFFSET))(this, bounds, color, duration, depthTest);
		}

		::System::Void DrawPoint(::UnityEngine::Vector3 position, ::UnityEngine::Color color, ::System::Single scale, ::System::Single duration, ::System::Boolean depthTest)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Color, ::System::Single, ::System::Single, ::System::Boolean))((::PBYTE)hIl2Cpp + FOUNDATION_MYLOGGER_DRAWPOINT_OFFSET))(this, position, color, scale, duration, depthTest);
		}

		::System::Void DrawGUIFunction(::UnityEngine::Vector2 center, ::UnityEngine::Vector2 size, ::Il2CppArray<::System::Single>* values, ::System::Single yMin, ::System::Single yMax, ::UnityEngine::Color background, ::UnityEngine::Color line)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2, ::UnityEngine::Vector2, ::Il2CppArray<::System::Single>*, ::System::Single, ::System::Single, ::UnityEngine::Color, ::UnityEngine::Color))((::PBYTE)hIl2Cpp + FOUNDATION_MYLOGGER_DRAWGUIFUNCTION_OFFSET))(this, center, size, values, yMin, yMax, background, line);
		}

		::System::Void DrawGizmoPosition(::UnityEngine::Vector3 pos, ::UnityEngine::Quaternion rotate, ::System::Single size)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Quaternion, ::System::Single))((::PBYTE)hIl2Cpp + FOUNDATION_MYLOGGER_DRAWGIZMOPOSITION_OFFSET))(this, pos, rotate, size);
		}

		::System::Void DrawGizmoRotate(::UnityEngine::Vector3 pos, ::UnityEngine::Quaternion rotate, ::System::Single size)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Quaternion, ::System::Single))((::PBYTE)hIl2Cpp + FOUNDATION_MYLOGGER_DRAWGIZMOROTATE_OFFSET))(this, pos, rotate, size);
		}

		::System::Void DrawGizmoScale(::UnityEngine::Vector3 pos, ::UnityEngine::Quaternion rotate, ::System::Single size)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Quaternion, ::System::Single))((::PBYTE)hIl2Cpp + FOUNDATION_MYLOGGER_DRAWGIZMOSCALE_OFFSET))(this, pos, rotate, size);
		}

		::System::Void DrawSkeleton(::UnityEngine::Transform* transform, ::System::Boolean drawTransforms)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*, ::System::Boolean))((::PBYTE)hIl2Cpp + FOUNDATION_MYLOGGER_DRAWSKELETON_OFFSET))(this, transform, drawTransforms);
		}

		::System::Void _drawTransforms(::UnityEngine::Transform* segment)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + FOUNDATION_MYLOGGER__DRAWTRANSFORMS_OFFSET))(this, segment);
		}

		::System::Void _recursion(::UnityEngine::Transform* segment, ::UnityEngine::Transform* parent)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + FOUNDATION_MYLOGGER__RECURSION_OFFSET))(this, segment, parent);
		}

		::System::Boolean _IsDrawEnable()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_MYLOGGER__ISDRAWENABLE_OFFSET))(this);
		}

		static ::Foundation::TwoDimensionalTable_3<::System::String*, ::System::String*, ::Foundation::MyLogger_ValueType>* get_WatchVars()
		{
			return ((::Foundation::TwoDimensionalTable_3<::System::String*, ::System::String*, ::Foundation::MyLogger_ValueType>*(*)())((::PBYTE)hIl2Cpp + FOUNDATION_MYLOGGER_GET_WATCHVARS_OFFSET))();
		}

		::System::String* get_ToLoggableString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_MYLOGGER_GET_TOLOGGABLESTRING_OFFSET))(this);
		}

		::System::Boolean get_IsEnable()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_MYLOGGER_GET_ISENABLE_OFFSET))(this);
		}

		::System::Void set_IsEnable(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + FOUNDATION_MYLOGGER_SET_ISENABLE_OFFSET))(this, value);
		}

		::System::Void LogInfo(::System::String* message, ::Il2CppArray<::System::Object*>* param)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::Il2CppArray<::System::Object*>*))((::PBYTE)hIl2Cpp + FOUNDATION_MYLOGGER_LOGINFO_OFFSET))(this, message, param);
		}

		::System::Void LogDebug(::System::String* message, ::Il2CppArray<::System::Object*>* param)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::Il2CppArray<::System::Object*>*))((::PBYTE)hIl2Cpp + FOUNDATION_MYLOGGER_LOGDEBUG_OFFSET))(this, message, param);
		}

		::System::Void LogWarning(::System::String* message, ::Il2CppArray<::System::Object*>* param)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::Il2CppArray<::System::Object*>*))((::PBYTE)hIl2Cpp + FOUNDATION_MYLOGGER_LOGWARNING_OFFSET))(this, message, param);
		}

		::System::Void LogError(::System::String* message, ::Il2CppArray<::System::Object*>* param)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::Il2CppArray<::System::Object*>*))((::PBYTE)hIl2Cpp + FOUNDATION_MYLOGGER_LOGERROR_OFFSET))(this, message, param);
		}

		::System::Void LogFatal(::System::String* message, ::Il2CppArray<::System::Object*>* param)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::Il2CppArray<::System::Object*>*))((::PBYTE)hIl2Cpp + FOUNDATION_MYLOGGER_LOGFATAL_OFFSET))(this, message, param);
		}

		::System::Void LogException(::System::Exception* e, ::Il2CppArray<::System::Object*>* param)
		{
			return ((::System::Void(*)(::PVOID, ::System::Exception*, ::Il2CppArray<::System::Object*>*))((::PBYTE)hIl2Cpp + FOUNDATION_MYLOGGER_LOGEXCEPTION_OFFSET))(this, e, param);
		}

		::System::Void Watch(::System::String* key, ::System::Object* val)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Object*))((::PBYTE)hIl2Cpp + FOUNDATION_MYLOGGER_WATCH_OFFSET))(this, key, val);
		}

		::System::Void WatchAssert(::System::String* key, ::System::Object* val, ::System::Boolean assert)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Object*, ::System::Boolean))((::PBYTE)hIl2Cpp + FOUNDATION_MYLOGGER_WATCHASSERT_OFFSET))(this, key, val, assert);
		}

		::System::Void WatchByFilter(::System::String* key, ::System::Object* val, ::System::Func_2<::System::Object*, ::System::Boolean>* filterFunc)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Object*, ::System::Func_2<::System::Object*, ::System::Boolean>*))((::PBYTE)hIl2Cpp + FOUNDATION_MYLOGGER_WATCHBYFILTER_OFFSET))(this, key, val, filterFunc);
		}

		::System::String* _concat_(::System::String* loggableString, ::System::String* message, ::Il2CppArray<::System::Object*>* param)
		{
			return ((::System::String*(*)(::PVOID, ::System::String*, ::System::String*, ::Il2CppArray<::System::Object*>*))((::PBYTE)hIl2Cpp + FOUNDATION_MYLOGGER__CONCAT__OFFSET))(this, loggableString, message, param);
		}
	};
}

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

#define FOUNDATION_MYLOGGER_DODRAWARROW_OFFSET UNITYSDK_OFFSET(0x1E9BD910)
#define FOUNDATION_MYLOGGER_DRAWARROW_1_OFFSET UNITYSDK_OFFSET(0x1E9BDA60)
#define FOUNDATION_MYLOGGER_DRAWARROW_OFFSET UNITYSDK_OFFSET(0x1E9BD830)
#define FOUNDATION_MYLOGGER_DRAWBONE_OFFSET UNITYSDK_OFFSET(0x1E9BC5F0)
#define FOUNDATION_MYLOGGER_DRAWBOUNDS_OFFSET UNITYSDK_OFFSET(0x1E9BDBC0)
#define FOUNDATION_MYLOGGER_DRAWCAPSULE_OFFSET UNITYSDK_OFFSET(0x1E9BC3F0)
#define FOUNDATION_MYLOGGER_DRAWCONE_OFFSET UNITYSDK_OFFSET(0x1E9BCDA0)
#define FOUNDATION_MYLOGGER_DRAWCUBE_OFFSET UNITYSDK_OFFSET(0x1E9BBFB0)
#define FOUNDATION_MYLOGGER_DRAWCUBOID_OFFSET UNITYSDK_OFFSET(0x1E9BCFA0)
#define FOUNDATION_MYLOGGER_DRAWCYLINDER_OFFSET UNITYSDK_OFFSET(0x1E9BC9A0)
#define FOUNDATION_MYLOGGER_DRAWELLIPSOID_OFFSET UNITYSDK_OFFSET(0x1E9BD180)
#define FOUNDATION_MYLOGGER_DRAWGIZMOPOSITION_OFFSET UNITYSDK_OFFSET(0x1E9BE080)
#define FOUNDATION_MYLOGGER_DRAWGIZMOROTATE_OFFSET UNITYSDK_OFFSET(0x1E9BE1D0)
#define FOUNDATION_MYLOGGER_DRAWGIZMOSCALE_OFFSET UNITYSDK_OFFSET(0x1E9BE320)
#define FOUNDATION_MYLOGGER_DRAWGUIFUNCTION_OFFSET UNITYSDK_OFFSET(0x1E9BDEB0)
#define FOUNDATION_MYLOGGER_DRAWLINE_1_OFFSET UNITYSDK_OFFSET(0x1E9BD4E0)
#define FOUNDATION_MYLOGGER_DRAWLINE_2_OFFSET UNITYSDK_OFFSET(0x1E9BD6A0)
#define FOUNDATION_MYLOGGER_DRAWLINE_OFFSET UNITYSDK_OFFSET(0x1E9BD380)
#define FOUNDATION_MYLOGGER_DRAWPOINT_OFFSET UNITYSDK_OFFSET(0x1E9BDD20)
#define FOUNDATION_MYLOGGER_DRAWPYRAMIDR_OFFSET UNITYSDK_OFFSET(0x1E9BCBA0)
#define FOUNDATION_MYLOGGER_DRAWSKELETON_OFFSET UNITYSDK_OFFSET(0x1E9BE470)
#define FOUNDATION_MYLOGGER_DRAWSPHERE_OFFSET UNITYSDK_OFFSET(0x1E9BC220)
#define FOUNDATION_MYLOGGER_DRAWSQUARE_1_OFFSET UNITYSDK_OFFSET(0x1E9BC860)
#define FOUNDATION_MYLOGGER_DRAWSQUARE_2_OFFSET UNITYSDK_OFFSET(0x1E9BC8E0)
#define FOUNDATION_MYLOGGER_DRAWSQUARE_OFFSET UNITYSDK_OFFSET(0x1E9BC7F0)
#define FOUNDATION_MYLOGGER_GET_ISENABLE_OFFSET UNITYSDK_OFFSET(0x1E9BEF10)
#define FOUNDATION_MYLOGGER_GET_TOLOGGABLESTRING_OFFSET UNITYSDK_OFFSET(0x1E9BF040)
#define FOUNDATION_MYLOGGER_GET_WATCHVARS_OFFSET UNITYSDK_OFFSET(0x1E9BEFA0)
#define FOUNDATION_MYLOGGER_LOGDEBUG_OFFSET UNITYSDK_OFFSET(0x1E9BF420)
#define FOUNDATION_MYLOGGER_LOGERROR_OFFSET UNITYSDK_OFFSET(0x1E9BF600)
#define FOUNDATION_MYLOGGER_LOGEXCEPTION_OFFSET UNITYSDK_OFFSET(0x1E9BF7B0)
#define FOUNDATION_MYLOGGER_LOGFATAL_OFFSET UNITYSDK_OFFSET(0x1E9BF6F0)
#define FOUNDATION_MYLOGGER_LOGINFO_OFFSET UNITYSDK_OFFSET(0x1E9BF060)
#define FOUNDATION_MYLOGGER_LOGWARNING_OFFSET UNITYSDK_OFFSET(0x1E9BF510)
#define FOUNDATION_MYLOGGER_SET_ISENABLE_OFFSET UNITYSDK_OFFSET(0x1E9BF050)
#define FOUNDATION_MYLOGGER_WATCHASSERT_OFFSET UNITYSDK_OFFSET(0x1E9BFB80)
#define FOUNDATION_MYLOGGER_WATCHBYFILTER_OFFSET UNITYSDK_OFFSET(0x1E9BFE90)
#define FOUNDATION_MYLOGGER_WATCH_OFFSET UNITYSDK_OFFSET(0x1E9BF8E0)
#define FOUNDATION_MYLOGGER__CCTOR_OFFSET UNITYSDK_OFFSET(0x1E9C0380)
#define FOUNDATION_MYLOGGER__CONCAT__OFFSET UNITYSDK_OFFSET(0x1E9BF150)
#define FOUNDATION_MYLOGGER__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E9BF010)
#define FOUNDATION_MYLOGGER__CTOR_OFFSET UNITYSDK_OFFSET(0x1E9BF000)
#define FOUNDATION_MYLOGGER__DRAWTRANSFORMS_OFFSET UNITYSDK_OFFSET(0x1E9BE580)
#define FOUNDATION_MYLOGGER__ISDRAWENABLE_OFFSET UNITYSDK_OFFSET(0x1E9BC180)
#define FOUNDATION_MYLOGGER__RECURSION_OFFSET UNITYSDK_OFFSET(0x1E9BE6F0)

namespace Foundation
{
	inline static constexpr unsigned int MyLogger_TypeDefinitionIndex = 8373;

	class MyLogger : public ::System::Object
	{
	public:
		static ::Foundation::MyLogger** StaticGet_Log()
		{
			return (::Foundation::MyLogger**)Il2CppClass::FromTypeDefinitionIndex(MyLogger_TypeDefinitionIndex)->GetStaticField(0x6740);
		}
		static ::Foundation::TwoDimensionalTable_3<::System::String*, ::System::String*, ::Foundation::MyLogger_ValueType>** StaticGet__WatchVars_k__BackingField()
		{
			return (::Foundation::TwoDimensionalTable_3<::System::String*, ::System::String*, ::Foundation::MyLogger_ValueType>**)Il2CppClass::FromTypeDefinitionIndex(MyLogger_TypeDefinitionIndex)->GetStaticField(0x6748);
		}
		static ::UnityEngine::Color* StaticGet_JointColor()
		{
			return (::UnityEngine::Color*)Il2CppClass::FromTypeDefinitionIndex(MyLogger_TypeDefinitionIndex)->GetStaticField(0x3390);
		}
		static ::UnityEngine::Color* StaticGet_BoneColor()
		{
			return (::UnityEngine::Color*)Il2CppClass::FromTypeDefinitionIndex(MyLogger_TypeDefinitionIndex)->GetStaticField(0x33A0);
		}
		static ::System::Boolean* StaticGet_IsWatchEnable()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(MyLogger_TypeDefinitionIndex)->GetStaticField(0x33B0);
		}
		static ::System::Boolean* StaticGet_IsInfoEnable()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(MyLogger_TypeDefinitionIndex)->GetStaticField(0x33B1);
		}
		static ::System::Boolean* StaticGet_IsDebugEnable()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(MyLogger_TypeDefinitionIndex)->GetStaticField(0x33B2);
		}
		static ::System::Single* StaticGet_BoneSize()
		{
			return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(MyLogger_TypeDefinitionIndex)->GetStaticField(0x33B4);
		}
		static ::System::Boolean* StaticGet_IsErrorEnable()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(MyLogger_TypeDefinitionIndex)->GetStaticField(0x33B8);
		}
		static ::System::Boolean* StaticGet_IsDrawEnable()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(MyLogger_TypeDefinitionIndex)->GetStaticField(0x33B9);
		}
		static ::System::Boolean* StaticGet_IsFatalEnable()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(MyLogger_TypeDefinitionIndex)->GetStaticField(0x33BA);
		}
		static ::System::Boolean* StaticGet_IsWarningEnable()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(MyLogger_TypeDefinitionIndex)->GetStaticField(0x33BB);
		}
		::System::String* _loggableString; // 0x10
		::System::Boolean _isEnable; // 0x18
		::System::Nullable_1<::UnityEngine::Color> _colorTitle; // 0x1C
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

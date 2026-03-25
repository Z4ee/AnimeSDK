#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/InControl/InputControlType.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/Rect.h"
#include "unitysdk/UnityEngine/Vector2.h"

namespace System { class String; }
namespace UnityEngine { class GameObject; }

#define INCONTROL_UTILITY_ABSOLUTEISOVERTHRESHOLD_OFFSET UNITYSDK_OFFSET(0x15D19940)
#define INCONTROL_UTILITY_ABS_OFFSET UNITYSDK_OFFSET(0x15D19820)
#define INCONTROL_UTILITY_APPLYDEADZONE_OFFSET UNITYSDK_OFFSET(0x15D19520)
#define INCONTROL_UTILITY_APPLYSMOOTHING_OFFSET UNITYSDK_OFFSET(0x15D19580)
#define INCONTROL_UTILITY_APPLYSNAPPING_OFFSET UNITYSDK_OFFSET(0x15D19660)
#define INCONTROL_UTILITY_APPROXIMATELY_1_OFFSET UNITYSDK_OFFSET(0x15D19870)
#define INCONTROL_UTILITY_APPROXIMATELY_OFFSET UNITYSDK_OFFSET(0x15D19840)
#define INCONTROL_UTILITY_DRAWCIRCLEGIZMO_1_OFFSET UNITYSDK_OFFSET(0x15D18C70)
#define INCONTROL_UTILITY_DRAWCIRCLEGIZMO_OFFSET UNITYSDK_OFFSET(0x15D18AF0)
#define INCONTROL_UTILITY_DRAWOVALGIZMO_1_OFFSET UNITYSDK_OFFSET(0x15D18E60)
#define INCONTROL_UTILITY_DRAWOVALGIZMO_OFFSET UNITYSDK_OFFSET(0x15D18CB0)
#define INCONTROL_UTILITY_DRAWRECTGIZMO_1_OFFSET UNITYSDK_OFFSET(0x15D18FD0)
#define INCONTROL_UTILITY_DRAWRECTGIZMO_2_OFFSET UNITYSDK_OFFSET(0x15D19120)
#define INCONTROL_UTILITY_DRAWRECTGIZMO_3_OFFSET UNITYSDK_OFFSET(0x15D192C0)
#define INCONTROL_UTILITY_DRAWRECTGIZMO_OFFSET UNITYSDK_OFFSET(0x15D18EA0)
#define INCONTROL_UTILITY_GAMEOBJECTISCULLEDONCURRENTCAMERA_OFFSET UNITYSDK_OFFSET(0x15D19480)
#define INCONTROL_UTILITY_GETHUMANUNDERSTANDABLEWINDOWSVERSION_OFFSET UNITYSDK_OFFSET(0x15D19CF0)
#define INCONTROL_UTILITY_GETPLATFORMNAME_OFFSET UNITYSDK_OFFSET(0x15D19C50)
#define INCONTROL_UTILITY_GETSYSTEMBUILDNUMBER_OFFSET UNITYSDK_OFFSET(0x15D1A0E0)
#define INCONTROL_UTILITY_GETWINDOWSVERSION_OFFSET UNITYSDK_OFFSET(0x15D19DE0)
#define INCONTROL_UTILITY_GET_IS32BIT_OFFSET UNITYSDK_OFFSET(0x15D19C30)
#define INCONTROL_UTILITY_GET_IS64BIT_OFFSET UNITYSDK_OFFSET(0x15D19C40)
#define INCONTROL_UTILITY_ISNOTZERO_OFFSET UNITYSDK_OFFSET(0x15D198D0)
#define INCONTROL_UTILITY_ISZERO_OFFSET UNITYSDK_OFFSET(0x15D19900)
#define INCONTROL_UTILITY_LOADSCENE_OFFSET UNITYSDK_OFFSET(0x15D1A160)
#define INCONTROL_UTILITY_MAX_1_OFFSET UNITYSDK_OFFSET(0x15D19AD0)
#define INCONTROL_UTILITY_MAX_OFFSET UNITYSDK_OFFSET(0x15D19A70)
#define INCONTROL_UTILITY_MIN_1_OFFSET UNITYSDK_OFFSET(0x15D19A90)
#define INCONTROL_UTILITY_MIN_OFFSET UNITYSDK_OFFSET(0x15D19A50)
#define INCONTROL_UTILITY_MOVECOLORTOWARDS_OFFSET UNITYSDK_OFFSET(0x15D194D0)
#define INCONTROL_UTILITY_NEXTPOWEROFTWO_OFFSET UNITYSDK_OFFSET(0x15D19C00)
#define INCONTROL_UTILITY_NORMALIZEANGLE_OFFSET UNITYSDK_OFFSET(0x15D19960)
#define INCONTROL_UTILITY_PLUGINFILEEXTENSION_OFFSET UNITYSDK_OFFSET(0x15D1A190)
#define INCONTROL_UTILITY_READFROMFILE_OFFSET UNITYSDK_OFFSET(0x15D196F0)
#define INCONTROL_UTILITY_SIGN_OFFSET UNITYSDK_OFFSET(0x15D19930)
#define INCONTROL_UTILITY_TARGETISALIAS_OFFSET UNITYSDK_OFFSET(0x15D196E0)
#define INCONTROL_UTILITY_TARGETISBUTTON_OFFSET UNITYSDK_OFFSET(0x15D196A0)
#define INCONTROL_UTILITY_TARGETISSTANDARD_OFFSET UNITYSDK_OFFSET(0x15D196C0)
#define INCONTROL_UTILITY_VALUEFROMSIDES_1_OFFSET UNITYSDK_OFFSET(0x15D19B60)
#define INCONTROL_UTILITY_VALUEFROMSIDES_OFFSET UNITYSDK_OFFSET(0x15D19B10)
#define INCONTROL_UTILITY_VECTORTOANGLE_OFFSET UNITYSDK_OFFSET(0x15D199B0)
#define INCONTROL_UTILITY_WRITETOFILE_OFFSET UNITYSDK_OFFSET(0x15D19750)
#define INCONTROL_UTILITY__CCTOR_OFFSET UNITYSDK_OFFSET(0x15D1A1D0)

namespace InControl
{
	inline static constexpr unsigned int Utility_TypeDefinitionIndex = 31501;

	class Utility : public ::System::Object
	{
	public:
		static ::Il2CppArray<::UnityEngine::Vector2>** StaticGet_circleVertexList()
		{
			return (::Il2CppArray<::UnityEngine::Vector2>**)Il2CppClass::FromTypeDefinitionIndex(Utility_TypeDefinitionIndex)->GetStaticField(0x372B0);
		}
		// static const ::System::Single Epsilon; // 0x0

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + INCONTROL_UTILITY__CCTOR_OFFSET))();
		}

		static ::System::Void DrawCircleGizmo(::UnityEngine::Vector2 center, ::System::Single radius)
		{
			return ((::System::Void(*)(::UnityEngine::Vector2, ::System::Single))((::PBYTE)hIl2Cpp + INCONTROL_UTILITY_DRAWCIRCLEGIZMO_OFFSET))(center, radius);
		}

		static ::System::Void DrawCircleGizmo_1(::UnityEngine::Vector2 center, ::System::Single radius, ::UnityEngine::Color color)
		{
			return ((::System::Void(*)(::UnityEngine::Vector2, ::System::Single, ::UnityEngine::Color))((::PBYTE)hIl2Cpp + INCONTROL_UTILITY_DRAWCIRCLEGIZMO_1_OFFSET))(center, radius, color);
		}

		static ::System::Void DrawOvalGizmo(::UnityEngine::Vector2 center, ::UnityEngine::Vector2 size)
		{
			return ((::System::Void(*)(::UnityEngine::Vector2, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + INCONTROL_UTILITY_DRAWOVALGIZMO_OFFSET))(center, size);
		}

		static ::System::Void DrawOvalGizmo_1(::UnityEngine::Vector2 center, ::UnityEngine::Vector2 size, ::UnityEngine::Color color)
		{
			return ((::System::Void(*)(::UnityEngine::Vector2, ::UnityEngine::Vector2, ::UnityEngine::Color))((::PBYTE)hIl2Cpp + INCONTROL_UTILITY_DRAWOVALGIZMO_1_OFFSET))(center, size, color);
		}

		static ::System::Void DrawRectGizmo(::UnityEngine::Rect rect)
		{
			return ((::System::Void(*)(::UnityEngine::Rect))((::PBYTE)hIl2Cpp + INCONTROL_UTILITY_DRAWRECTGIZMO_OFFSET))(rect);
		}

		static ::System::Void DrawRectGizmo_1(::UnityEngine::Rect rect, ::UnityEngine::Color color)
		{
			return ((::System::Void(*)(::UnityEngine::Rect, ::UnityEngine::Color))((::PBYTE)hIl2Cpp + INCONTROL_UTILITY_DRAWRECTGIZMO_1_OFFSET))(rect, color);
		}

		static ::System::Void DrawRectGizmo_2(::UnityEngine::Vector2 center, ::UnityEngine::Vector2 size)
		{
			return ((::System::Void(*)(::UnityEngine::Vector2, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + INCONTROL_UTILITY_DRAWRECTGIZMO_2_OFFSET))(center, size);
		}

		static ::System::Void DrawRectGizmo_3(::UnityEngine::Vector2 center, ::UnityEngine::Vector2 size, ::UnityEngine::Color color)
		{
			return ((::System::Void(*)(::UnityEngine::Vector2, ::UnityEngine::Vector2, ::UnityEngine::Color))((::PBYTE)hIl2Cpp + INCONTROL_UTILITY_DRAWRECTGIZMO_3_OFFSET))(center, size, color);
		}

		static ::System::Boolean GameObjectIsCulledOnCurrentCamera(::UnityEngine::GameObject* gameObject)
		{
			return ((::System::Boolean(*)(::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + INCONTROL_UTILITY_GAMEOBJECTISCULLEDONCURRENTCAMERA_OFFSET))(gameObject);
		}

		static ::UnityEngine::Color MoveColorTowards(::UnityEngine::Color color0, ::UnityEngine::Color color1, ::System::Single maxDelta)
		{
			return ((::UnityEngine::Color(*)(::UnityEngine::Color, ::UnityEngine::Color, ::System::Single))((::PBYTE)hIl2Cpp + INCONTROL_UTILITY_MOVECOLORTOWARDS_OFFSET))(color0, color1, maxDelta);
		}

		static ::System::Single ApplyDeadZone(::System::Single value, ::System::Single lowerDeadZone, ::System::Single upperDeadZone)
		{
			return ((::System::Single(*)(::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + INCONTROL_UTILITY_APPLYDEADZONE_OFFSET))(value, lowerDeadZone, upperDeadZone);
		}

		static ::System::Single ApplySmoothing(::System::Single thisValue, ::System::Single lastValue, ::System::Single deltaTime, ::System::Single sensitivity)
		{
			return ((::System::Single(*)(::System::Single, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + INCONTROL_UTILITY_APPLYSMOOTHING_OFFSET))(thisValue, lastValue, deltaTime, sensitivity);
		}

		static ::System::Single ApplySnapping(::System::Single value, ::System::Single threshold)
		{
			return ((::System::Single(*)(::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + INCONTROL_UTILITY_APPLYSNAPPING_OFFSET))(value, threshold);
		}

		static ::System::Boolean TargetIsButton(::InControl::InputControlType target)
		{
			return ((::System::Boolean(*)(::InControl::InputControlType))((::PBYTE)hIl2Cpp + INCONTROL_UTILITY_TARGETISBUTTON_OFFSET))(target);
		}

		static ::System::Boolean TargetIsStandard(::InControl::InputControlType target)
		{
			return ((::System::Boolean(*)(::InControl::InputControlType))((::PBYTE)hIl2Cpp + INCONTROL_UTILITY_TARGETISSTANDARD_OFFSET))(target);
		}

		static ::System::Boolean TargetIsAlias(::InControl::InputControlType target)
		{
			return ((::System::Boolean(*)(::InControl::InputControlType))((::PBYTE)hIl2Cpp + INCONTROL_UTILITY_TARGETISALIAS_OFFSET))(target);
		}

		static ::System::String* ReadFromFile(::System::String* path)
		{
			return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + INCONTROL_UTILITY_READFROMFILE_OFFSET))(path);
		}

		static ::System::Void WriteToFile(::System::String* path, ::System::String* data)
		{
			return ((::System::Void(*)(::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + INCONTROL_UTILITY_WRITETOFILE_OFFSET))(path, data);
		}

		static ::System::Single Abs(::System::Single value)
		{
			return ((::System::Single(*)(::System::Single))((::PBYTE)hIl2Cpp + INCONTROL_UTILITY_ABS_OFFSET))(value);
		}

		static ::System::Boolean Approximately(::System::Single v1, ::System::Single v2)
		{
			return ((::System::Boolean(*)(::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + INCONTROL_UTILITY_APPROXIMATELY_OFFSET))(v1, v2);
		}

		static ::System::Boolean Approximately_1(::UnityEngine::Vector2 v1, ::UnityEngine::Vector2 v2)
		{
			return ((::System::Boolean(*)(::UnityEngine::Vector2, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + INCONTROL_UTILITY_APPROXIMATELY_1_OFFSET))(v1, v2);
		}

		static ::System::Boolean IsNotZero(::System::Single value)
		{
			return ((::System::Boolean(*)(::System::Single))((::PBYTE)hIl2Cpp + INCONTROL_UTILITY_ISNOTZERO_OFFSET))(value);
		}

		static ::System::Boolean IsZero(::System::Single value)
		{
			return ((::System::Boolean(*)(::System::Single))((::PBYTE)hIl2Cpp + INCONTROL_UTILITY_ISZERO_OFFSET))(value);
		}

		static ::System::Int32 Sign(::System::Single f)
		{
			return ((::System::Int32(*)(::System::Single))((::PBYTE)hIl2Cpp + INCONTROL_UTILITY_SIGN_OFFSET))(f);
		}

		static ::System::Boolean AbsoluteIsOverThreshold(::System::Single value, ::System::Single threshold)
		{
			return ((::System::Boolean(*)(::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + INCONTROL_UTILITY_ABSOLUTEISOVERTHRESHOLD_OFFSET))(value, threshold);
		}

		static ::System::Single NormalizeAngle(::System::Single angle)
		{
			return ((::System::Single(*)(::System::Single))((::PBYTE)hIl2Cpp + INCONTROL_UTILITY_NORMALIZEANGLE_OFFSET))(angle);
		}

		static ::System::Single VectorToAngle(::UnityEngine::Vector2 vector)
		{
			return ((::System::Single(*)(::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + INCONTROL_UTILITY_VECTORTOANGLE_OFFSET))(vector);
		}

		static ::System::Single Min(::System::Single v0, ::System::Single v1)
		{
			return ((::System::Single(*)(::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + INCONTROL_UTILITY_MIN_OFFSET))(v0, v1);
		}

		static ::System::Single Max(::System::Single v0, ::System::Single v1)
		{
			return ((::System::Single(*)(::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + INCONTROL_UTILITY_MAX_OFFSET))(v0, v1);
		}

		static ::System::Single Min_1(::System::Single v0, ::System::Single v1, ::System::Single v2, ::System::Single v3)
		{
			return ((::System::Single(*)(::System::Single, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + INCONTROL_UTILITY_MIN_1_OFFSET))(v0, v1, v2, v3);
		}

		static ::System::Single Max_1(::System::Single v0, ::System::Single v1, ::System::Single v2, ::System::Single v3)
		{
			return ((::System::Single(*)(::System::Single, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + INCONTROL_UTILITY_MAX_1_OFFSET))(v0, v1, v2, v3);
		}

		static ::System::Single ValueFromSides(::System::Single negativeSide, ::System::Single positiveSide)
		{
			return ((::System::Single(*)(::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + INCONTROL_UTILITY_VALUEFROMSIDES_OFFSET))(negativeSide, positiveSide);
		}

		static ::System::Single ValueFromSides_1(::System::Single negativeSide, ::System::Single positiveSide, ::System::Boolean invertSides)
		{
			return ((::System::Single(*)(::System::Single, ::System::Single, ::System::Boolean))((::PBYTE)hIl2Cpp + INCONTROL_UTILITY_VALUEFROMSIDES_1_OFFSET))(negativeSide, positiveSide, invertSides);
		}

		static ::System::Int32 NextPowerOfTwo(::System::Int32 value)
		{
			return ((::System::Int32(*)(::System::Int32))((::PBYTE)hIl2Cpp + INCONTROL_UTILITY_NEXTPOWEROFTWO_OFFSET))(value);
		}

		static ::System::Boolean get_Is32Bit()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + INCONTROL_UTILITY_GET_IS32BIT_OFFSET))();
		}

		static ::System::Boolean get_Is64Bit()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + INCONTROL_UTILITY_GET_IS64BIT_OFFSET))();
		}

		static ::System::String* GetPlatformName(::System::Boolean uppercase)
		{
			return ((::System::String*(*)(::System::Boolean))((::PBYTE)hIl2Cpp + INCONTROL_UTILITY_GETPLATFORMNAME_OFFSET))(uppercase);
		}

		static ::System::String* GetHumanUnderstandableWindowsVersion()
		{
			return ((::System::String*(*)())((::PBYTE)hIl2Cpp + INCONTROL_UTILITY_GETHUMANUNDERSTANDABLEWINDOWSVERSION_OFFSET))();
		}

		static ::System::String* GetWindowsVersion()
		{
			return ((::System::String*(*)())((::PBYTE)hIl2Cpp + INCONTROL_UTILITY_GETWINDOWSVERSION_OFFSET))();
		}

		static ::System::Int32 GetSystemBuildNumber()
		{
			return ((::System::Int32(*)())((::PBYTE)hIl2Cpp + INCONTROL_UTILITY_GETSYSTEMBUILDNUMBER_OFFSET))();
		}

		static ::System::Void LoadScene(::System::String* sceneName)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + INCONTROL_UTILITY_LOADSCENE_OFFSET))(sceneName);
		}

		static ::System::String* PluginFileExtension()
		{
			return ((::System::String*(*)())((::PBYTE)hIl2Cpp + INCONTROL_UTILITY_PLUGINFILEEXTENSION_OFFSET))();
		}
	};
}

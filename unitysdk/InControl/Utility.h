#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/InControl/InputControlType.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/Rect.h"
#include "unitysdk/UnityEngine/Vector2.h"

namespace System { class String; }
namespace UnityEngine { class GameObject; }

#define INCONTROL_UTILITY_ABSOLUTEISOVERTHRESHOLD_OFFSET UNITYSDK_OFFSET(0x181261C0)
#define INCONTROL_UTILITY_ABS_OFFSET UNITYSDK_OFFSET(0x181260A0)
#define INCONTROL_UTILITY_APPLYDEADZONE_OFFSET UNITYSDK_OFFSET(0x18125D70)
#define INCONTROL_UTILITY_APPLYSMOOTHING_OFFSET UNITYSDK_OFFSET(0x18125DD0)
#define INCONTROL_UTILITY_APPLYSNAPPING_OFFSET UNITYSDK_OFFSET(0x18125EB0)
#define INCONTROL_UTILITY_APPROXIMATELY_1_OFFSET UNITYSDK_OFFSET(0x181260F0)
#define INCONTROL_UTILITY_APPROXIMATELY_OFFSET UNITYSDK_OFFSET(0x181260C0)
#define INCONTROL_UTILITY_DRAWCIRCLEGIZMO_1_OFFSET UNITYSDK_OFFSET(0x181254D0)
#define INCONTROL_UTILITY_DRAWCIRCLEGIZMO_OFFSET UNITYSDK_OFFSET(0x18125360)
#define INCONTROL_UTILITY_DRAWOVALGIZMO_1_OFFSET UNITYSDK_OFFSET(0x181256B0)
#define INCONTROL_UTILITY_DRAWOVALGIZMO_OFFSET UNITYSDK_OFFSET(0x18125510)
#define INCONTROL_UTILITY_DRAWRECTGIZMO_1_OFFSET UNITYSDK_OFFSET(0x18125820)
#define INCONTROL_UTILITY_DRAWRECTGIZMO_2_OFFSET UNITYSDK_OFFSET(0x18125970)
#define INCONTROL_UTILITY_DRAWRECTGIZMO_3_OFFSET UNITYSDK_OFFSET(0x18125B10)
#define INCONTROL_UTILITY_DRAWRECTGIZMO_OFFSET UNITYSDK_OFFSET(0x181256F0)
#define INCONTROL_UTILITY_GAMEOBJECTISCULLEDONCURRENTCAMERA_OFFSET UNITYSDK_OFFSET(0x18125CD0)
#define INCONTROL_UTILITY_GETHUMANUNDERSTANDABLEWINDOWSVERSION_OFFSET UNITYSDK_OFFSET(0x18126570)
#define INCONTROL_UTILITY_GETPLATFORMNAME_OFFSET UNITYSDK_OFFSET(0x181264D0)
#define INCONTROL_UTILITY_GETSYSTEMBUILDNUMBER_OFFSET UNITYSDK_OFFSET(0x18126900)
#define INCONTROL_UTILITY_GETWINDOWSVERSION_OFFSET UNITYSDK_OFFSET(0x18126660)
#define INCONTROL_UTILITY_GET_IS32BIT_OFFSET UNITYSDK_OFFSET(0x181264B0)
#define INCONTROL_UTILITY_GET_IS64BIT_OFFSET UNITYSDK_OFFSET(0x181264C0)
#define INCONTROL_UTILITY_ISNOTZERO_OFFSET UNITYSDK_OFFSET(0x18126150)
#define INCONTROL_UTILITY_ISZERO_OFFSET UNITYSDK_OFFSET(0x18126180)
#define INCONTROL_UTILITY_LOADSCENE_OFFSET UNITYSDK_OFFSET(0x18126980)
#define INCONTROL_UTILITY_MAX_1_OFFSET UNITYSDK_OFFSET(0x18126350)
#define INCONTROL_UTILITY_MAX_OFFSET UNITYSDK_OFFSET(0x181262F0)
#define INCONTROL_UTILITY_MIN_1_OFFSET UNITYSDK_OFFSET(0x18126310)
#define INCONTROL_UTILITY_MIN_OFFSET UNITYSDK_OFFSET(0x181262D0)
#define INCONTROL_UTILITY_MOVECOLORTOWARDS_OFFSET UNITYSDK_OFFSET(0x18125D20)
#define INCONTROL_UTILITY_NEXTPOWEROFTWO_OFFSET UNITYSDK_OFFSET(0x18126480)
#define INCONTROL_UTILITY_NORMALIZEANGLE_OFFSET UNITYSDK_OFFSET(0x181261E0)
#define INCONTROL_UTILITY_PLUGINFILEEXTENSION_OFFSET UNITYSDK_OFFSET(0x181269B0)
#define INCONTROL_UTILITY_READFROMFILE_OFFSET UNITYSDK_OFFSET(0x18125F40)
#define INCONTROL_UTILITY_SIGN_OFFSET UNITYSDK_OFFSET(0x181261B0)
#define INCONTROL_UTILITY_TARGETISALIAS_OFFSET UNITYSDK_OFFSET(0x18125F30)
#define INCONTROL_UTILITY_TARGETISBUTTON_OFFSET UNITYSDK_OFFSET(0x18125EF0)
#define INCONTROL_UTILITY_TARGETISSTANDARD_OFFSET UNITYSDK_OFFSET(0x18125F10)
#define INCONTROL_UTILITY_VALUEFROMSIDES_1_OFFSET UNITYSDK_OFFSET(0x181263E0)
#define INCONTROL_UTILITY_VALUEFROMSIDES_OFFSET UNITYSDK_OFFSET(0x18126390)
#define INCONTROL_UTILITY_VECTORTOANGLE_OFFSET UNITYSDK_OFFSET(0x18126230)
#define INCONTROL_UTILITY_WRITETOFILE_OFFSET UNITYSDK_OFFSET(0x18125FA0)
#define INCONTROL_UTILITY__CCTOR_OFFSET UNITYSDK_OFFSET(0x181269F0)

namespace InControl
{
	inline static constexpr unsigned int Utility_TypeDefinitionIndex = 37953;

	class Utility : public ::System::Object
	{
	public:
		static ::Il2CppArray<::UnityEngine::Vector2>** StaticGet_circleVertexList()
		{
			return (::Il2CppArray<::UnityEngine::Vector2>**)Il2CppClass::FromTypeDefinitionIndex(Utility_TypeDefinitionIndex)->GetStaticField(0x15D80);
		}
		// static const ::System::Single Epsilon; // 0x0

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + INCONTROL_UTILITY__CCTOR_OFFSET))();
		}

		static ::System::Void DrawCircleGizmo(::UnityEngine::Vector2 a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::UnityEngine::Vector2, ::System::Single))((::PBYTE)hIl2Cpp + INCONTROL_UTILITY_DRAWCIRCLEGIZMO_OFFSET))(a1, a2);
		}

		static ::System::Void DrawCircleGizmo_1(::UnityEngine::Vector2 a1, ::System::Single a2, ::UnityEngine::Color a3)
		{
			return ((::System::Void(*)(::UnityEngine::Vector2, ::System::Single, ::UnityEngine::Color))((::PBYTE)hIl2Cpp + INCONTROL_UTILITY_DRAWCIRCLEGIZMO_1_OFFSET))(a1, a2, a3);
		}

		static ::System::Void DrawOvalGizmo(::UnityEngine::Vector2 a1, ::UnityEngine::Vector2 a2)
		{
			return ((::System::Void(*)(::UnityEngine::Vector2, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + INCONTROL_UTILITY_DRAWOVALGIZMO_OFFSET))(a1, a2);
		}

		static ::System::Void DrawOvalGizmo_1(::UnityEngine::Vector2 a1, ::UnityEngine::Vector2 a2, ::UnityEngine::Color a3)
		{
			return ((::System::Void(*)(::UnityEngine::Vector2, ::UnityEngine::Vector2, ::UnityEngine::Color))((::PBYTE)hIl2Cpp + INCONTROL_UTILITY_DRAWOVALGIZMO_1_OFFSET))(a1, a2, a3);
		}

		static ::System::Void DrawRectGizmo(::UnityEngine::Rect a1)
		{
			return ((::System::Void(*)(::UnityEngine::Rect))((::PBYTE)hIl2Cpp + INCONTROL_UTILITY_DRAWRECTGIZMO_OFFSET))(a1);
		}

		static ::System::Void DrawRectGizmo_1(::UnityEngine::Rect a1, ::UnityEngine::Color a2)
		{
			return ((::System::Void(*)(::UnityEngine::Rect, ::UnityEngine::Color))((::PBYTE)hIl2Cpp + INCONTROL_UTILITY_DRAWRECTGIZMO_1_OFFSET))(a1, a2);
		}

		static ::System::Void DrawRectGizmo_2(::UnityEngine::Vector2 a1, ::UnityEngine::Vector2 a2)
		{
			return ((::System::Void(*)(::UnityEngine::Vector2, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + INCONTROL_UTILITY_DRAWRECTGIZMO_2_OFFSET))(a1, a2);
		}

		static ::System::Void DrawRectGizmo_3(::UnityEngine::Vector2 a1, ::UnityEngine::Vector2 a2, ::UnityEngine::Color a3)
		{
			return ((::System::Void(*)(::UnityEngine::Vector2, ::UnityEngine::Vector2, ::UnityEngine::Color))((::PBYTE)hIl2Cpp + INCONTROL_UTILITY_DRAWRECTGIZMO_3_OFFSET))(a1, a2, a3);
		}

		static ::System::Boolean GameObjectIsCulledOnCurrentCamera(::UnityEngine::GameObject* a1)
		{
			return ((::System::Boolean(*)(::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + INCONTROL_UTILITY_GAMEOBJECTISCULLEDONCURRENTCAMERA_OFFSET))(a1);
		}

		static ::UnityEngine::Color MoveColorTowards(::UnityEngine::Color a1, ::UnityEngine::Color a2, ::System::Single a3)
		{
			return ((::UnityEngine::Color(*)(::UnityEngine::Color, ::UnityEngine::Color, ::System::Single))((::PBYTE)hIl2Cpp + INCONTROL_UTILITY_MOVECOLORTOWARDS_OFFSET))(a1, a2, a3);
		}

		static ::System::Single ApplyDeadZone(::System::Single a1, ::System::Single a2, ::System::Single a3)
		{
			return ((::System::Single(*)(::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + INCONTROL_UTILITY_APPLYDEADZONE_OFFSET))(a1, a2, a3);
		}

		static ::System::Single ApplySmoothing(::System::Single a1, ::System::Single a2, ::System::Single a3, ::System::Single a4)
		{
			return ((::System::Single(*)(::System::Single, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + INCONTROL_UTILITY_APPLYSMOOTHING_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::Single ApplySnapping(::System::Single a1, ::System::Single a2)
		{
			return ((::System::Single(*)(::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + INCONTROL_UTILITY_APPLYSNAPPING_OFFSET))(a1, a2);
		}

		static ::System::Boolean TargetIsButton(::InControl::InputControlType a1)
		{
			return ((::System::Boolean(*)(::InControl::InputControlType))((::PBYTE)hIl2Cpp + INCONTROL_UTILITY_TARGETISBUTTON_OFFSET))(a1);
		}

		static ::System::Boolean TargetIsStandard(::InControl::InputControlType a1)
		{
			return ((::System::Boolean(*)(::InControl::InputControlType))((::PBYTE)hIl2Cpp + INCONTROL_UTILITY_TARGETISSTANDARD_OFFSET))(a1);
		}

		static ::System::Boolean TargetIsAlias(::InControl::InputControlType a1)
		{
			return ((::System::Boolean(*)(::InControl::InputControlType))((::PBYTE)hIl2Cpp + INCONTROL_UTILITY_TARGETISALIAS_OFFSET))(a1);
		}

		static ::System::String* ReadFromFile(::System::String* a1)
		{
			return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + INCONTROL_UTILITY_READFROMFILE_OFFSET))(a1);
		}

		static ::System::Void WriteToFile(::System::String* a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + INCONTROL_UTILITY_WRITETOFILE_OFFSET))(a1, a2);
		}

		static ::System::Single Abs(::System::Single a1)
		{
			return ((::System::Single(*)(::System::Single))((::PBYTE)hIl2Cpp + INCONTROL_UTILITY_ABS_OFFSET))(a1);
		}

		static ::System::Boolean Approximately(::System::Single a1, ::System::Single a2)
		{
			return ((::System::Boolean(*)(::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + INCONTROL_UTILITY_APPROXIMATELY_OFFSET))(a1, a2);
		}

		static ::System::Boolean Approximately_1(::UnityEngine::Vector2 a1, ::UnityEngine::Vector2 a2)
		{
			return ((::System::Boolean(*)(::UnityEngine::Vector2, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + INCONTROL_UTILITY_APPROXIMATELY_1_OFFSET))(a1, a2);
		}

		static ::System::Boolean IsNotZero(::System::Single a1)
		{
			return ((::System::Boolean(*)(::System::Single))((::PBYTE)hIl2Cpp + INCONTROL_UTILITY_ISNOTZERO_OFFSET))(a1);
		}

		static ::System::Boolean IsZero(::System::Single a1)
		{
			return ((::System::Boolean(*)(::System::Single))((::PBYTE)hIl2Cpp + INCONTROL_UTILITY_ISZERO_OFFSET))(a1);
		}

		static ::System::Int32 Sign(::System::Single a1)
		{
			return ((::System::Int32(*)(::System::Single))((::PBYTE)hIl2Cpp + INCONTROL_UTILITY_SIGN_OFFSET))(a1);
		}

		static ::System::Boolean AbsoluteIsOverThreshold(::System::Single a1, ::System::Single a2)
		{
			return ((::System::Boolean(*)(::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + INCONTROL_UTILITY_ABSOLUTEISOVERTHRESHOLD_OFFSET))(a1, a2);
		}

		static ::System::Single NormalizeAngle(::System::Single a1)
		{
			return ((::System::Single(*)(::System::Single))((::PBYTE)hIl2Cpp + INCONTROL_UTILITY_NORMALIZEANGLE_OFFSET))(a1);
		}

		static ::System::Single VectorToAngle(::UnityEngine::Vector2 a1)
		{
			return ((::System::Single(*)(::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + INCONTROL_UTILITY_VECTORTOANGLE_OFFSET))(a1);
		}

		static ::System::Single Min(::System::Single a1, ::System::Single a2)
		{
			return ((::System::Single(*)(::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + INCONTROL_UTILITY_MIN_OFFSET))(a1, a2);
		}

		static ::System::Single Max(::System::Single a1, ::System::Single a2)
		{
			return ((::System::Single(*)(::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + INCONTROL_UTILITY_MAX_OFFSET))(a1, a2);
		}

		static ::System::Single Min_1(::System::Single a1, ::System::Single a2, ::System::Single a3, ::System::Single a4)
		{
			return ((::System::Single(*)(::System::Single, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + INCONTROL_UTILITY_MIN_1_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::Single Max_1(::System::Single a1, ::System::Single a2, ::System::Single a3, ::System::Single a4)
		{
			return ((::System::Single(*)(::System::Single, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + INCONTROL_UTILITY_MAX_1_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::Single ValueFromSides(::System::Single a1, ::System::Single a2)
		{
			return ((::System::Single(*)(::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + INCONTROL_UTILITY_VALUEFROMSIDES_OFFSET))(a1, a2);
		}

		static ::System::Single ValueFromSides_1(::System::Single a1, ::System::Single a2, ::System::Boolean a3)
		{
			return ((::System::Single(*)(::System::Single, ::System::Single, ::System::Boolean))((::PBYTE)hIl2Cpp + INCONTROL_UTILITY_VALUEFROMSIDES_1_OFFSET))(a1, a2, a3);
		}

		static ::System::Int32 NextPowerOfTwo(::System::Int32 a1)
		{
			return ((::System::Int32(*)(::System::Int32))((::PBYTE)hIl2Cpp + INCONTROL_UTILITY_NEXTPOWEROFTWO_OFFSET))(a1);
		}

		static ::System::Boolean get_Is32Bit()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + INCONTROL_UTILITY_GET_IS32BIT_OFFSET))();
		}

		static ::System::Boolean get_Is64Bit()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + INCONTROL_UTILITY_GET_IS64BIT_OFFSET))();
		}

		static ::System::String* GetPlatformName(::System::Boolean a1)
		{
			return ((::System::String*(*)(::System::Boolean))((::PBYTE)hIl2Cpp + INCONTROL_UTILITY_GETPLATFORMNAME_OFFSET))(a1);
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

		static ::System::Void LoadScene(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + INCONTROL_UTILITY_LOADSCENE_OFFSET))(a1);
		}

		static ::System::String* PluginFileExtension()
		{
			return ((::System::String*(*)())((::PBYTE)hIl2Cpp + INCONTROL_UTILITY_PLUGINFILEEXTENSION_OFFSET))();
		}
	};
}

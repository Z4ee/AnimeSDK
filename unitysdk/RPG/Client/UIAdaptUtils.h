#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_7A3194024C7D2DEC;
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine { class Transform; }

#define RPG_CLIENT_UIADAPTUTILS_ADJUSTRECTINDENT_OFFSET UNITYSDK_OFFSET(0xCB1ACC0)
#define RPG_CLIENT_UIADAPTUTILS_ADJUSTRECTOFFSETLEFT_OFFSET UNITYSDK_OFFSET(0xCB1AF20)
#define RPG_CLIENT_UIADAPTUTILS_ADJUSTRECTOFFSETRIGHT_OFFSET UNITYSDK_OFFSET(0xCB1AFF0)
#define RPG_CLIENT_UIADAPTUTILS_ADJUSTRECTSCALE_OFFSET UNITYSDK_OFFSET(0xCB1B0C0)
#define RPG_CLIENT_UIADAPTUTILS_ADJUSTRECTVERTICALINDENT_OFFSET UNITYSDK_OFFSET(0xCB1ADF0)
#define RPG_CLIENT_UIADAPTUTILS_CLEARCUSTOMIZEDSAFEAREAINDENT_OFFSET UNITYSDK_OFFSET(0xCB1B580)
#define RPG_CLIENT_UIADAPTUTILS_GETDEFAULTCUSTOMHORIZONTALINDENTVALUE_OFFSET UNITYSDK_OFFSET(0xCB1B9C0)
#define RPG_CLIENT_UIADAPTUTILS_GETDEVICESAFEAREAINDENT_OFFSET UNITYSDK_OFFSET(0xCB1BA60)
#define RPG_CLIENT_UIADAPTUTILS_GETMAXCUSTOMHORIZONTALINDENTVALUE_OFFSET UNITYSDK_OFFSET(0xCB1B3A0)
#define RPG_CLIENT_UIADAPTUTILS_GETSAFEAREAINDENT_OFFSET UNITYSDK_OFFSET(0xCB1B190)
#define RPG_CLIENT_UIADAPTUTILS_GETSCREENADJUSTINDENT_OFFSET UNITYSDK_OFFSET(0xCB1BBA0)
#define RPG_CLIENT_UIADAPTUTILS_GETSCREENSPACESAFEAREAINDENT_OFFSET UNITYSDK_OFFSET(0xCB1B290)
#define RPG_CLIENT_UIADAPTUTILS_GET_ISADJUSTASCLOUDPHONE_OFFSET UNITYSDK_OFFSET(0xCB1BE40)
#define RPG_CLIENT_UIADAPTUTILS_GET_SCREENASPECT_OFFSET UNITYSDK_OFFSET(0xCB1BB10)
#define RPG_CLIENT_UIADAPTUTILS_PERFORMUIADAPTIONOPERATION_OFFSET UNITYSDK_OFFSET(0xCB1B7E0)
#define RPG_CLIENT_UIADAPTUTILS_RESETUIADAPTIONOPERATION_OFFSET UNITYSDK_OFFSET(0xCB1B890)
#define RPG_CLIENT_UIADAPTUTILS_TRYADJUSTINDENT_OFFSET UNITYSDK_OFFSET(0xCB1B730)
#define RPG_CLIENT_UIADAPTUTILS__CCTOR_OFFSET UNITYSDK_OFFSET(0xCB1BFD0)

namespace RPG::Client
{
	inline static constexpr unsigned int UIAdaptUtils_TypeDefinitionIndex = 56168;

	class UIAdaptUtils : public ::System::Object
	{
	public:
		static ::System::Single* StaticGet_IOSSafeAreaIndentFactor()
		{
			return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(UIAdaptUtils_TypeDefinitionIndex)->GetStaticField(0x9870);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_UIADAPTUTILS__CCTOR_OFFSET))();
		}

		static ::System::Void AdjustRectIndent(::UnityEngine::RectTransform* a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::UnityEngine::RectTransform*, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIADAPTUTILS_ADJUSTRECTINDENT_OFFSET))(a1, a2);
		}

		static ::System::Void AdjustRectVerticalIndent(::UnityEngine::RectTransform* a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::UnityEngine::RectTransform*, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIADAPTUTILS_ADJUSTRECTVERTICALINDENT_OFFSET))(a1, a2);
		}

		static ::System::Void AdjustRectOffsetLeft(::UnityEngine::RectTransform* a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::UnityEngine::RectTransform*, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIADAPTUTILS_ADJUSTRECTOFFSETLEFT_OFFSET))(a1, a2);
		}

		static ::System::Void AdjustRectOffsetRight(::UnityEngine::RectTransform* a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::UnityEngine::RectTransform*, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIADAPTUTILS_ADJUSTRECTOFFSETRIGHT_OFFSET))(a1, a2);
		}

		static ::System::Void AdjustRectScale(::UnityEngine::RectTransform* a1, ::System::Single a2, ::System::Single a3, ::System::Single a4)
		{
			return ((::System::Void(*)(::UnityEngine::RectTransform*, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIADAPTUTILS_ADJUSTRECTSCALE_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::Single GetSafeAreaIndent()
		{
			return ((::System::Single(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_UIADAPTUTILS_GETSAFEAREAINDENT_OFFSET))();
		}

		static ::System::Single GetScreenSpaceSafeAreaIndent()
		{
			return ((::System::Single(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_UIADAPTUTILS_GETSCREENSPACESAFEAREAINDENT_OFFSET))();
		}

		static ::System::Void ClearCustomizedSafeAreaIndent()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_UIADAPTUTILS_CLEARCUSTOMIZEDSAFEAREAINDENT_OFFSET))();
		}

		static ::System::Void TryAdjustIndent(::UnityEngine::Transform* a1)
		{
			return ((::System::Void(*)(::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIADAPTUTILS_TRYADJUSTINDENT_OFFSET))(a1);
		}

		static ::System::Void PerformUIAdaptionOperation(::UnityEngine::Transform* a1, ::System::Collections::Generic::List_1<::Class_1_7A3194024C7D2DEC*>* a2)
		{
			return ((::System::Void(*)(::UnityEngine::Transform*, ::System::Collections::Generic::List_1<::Class_1_7A3194024C7D2DEC*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIADAPTUTILS_PERFORMUIADAPTIONOPERATION_OFFSET))(a1, a2);
		}

		static ::System::Void ResetUIAdaptionOperation(::UnityEngine::Transform* a1, ::System::Collections::Generic::List_1<::Class_1_7A3194024C7D2DEC*>* a2)
		{
			return ((::System::Void(*)(::UnityEngine::Transform*, ::System::Collections::Generic::List_1<::Class_1_7A3194024C7D2DEC*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIADAPTUTILS_RESETUIADAPTIONOPERATION_OFFSET))(a1, a2);
		}

		static ::System::Single GetDefaultCustomHorizontalIndentValue()
		{
			return ((::System::Single(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_UIADAPTUTILS_GETDEFAULTCUSTOMHORIZONTALINDENTVALUE_OFFSET))();
		}

		static ::System::Single GetMaxCustomHorizontalIndentValue()
		{
			return ((::System::Single(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_UIADAPTUTILS_GETMAXCUSTOMHORIZONTALINDENTVALUE_OFFSET))();
		}

		static ::System::Single GetDeviceSafeAreaIndent()
		{
			return ((::System::Single(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_UIADAPTUTILS_GETDEVICESAFEAREAINDENT_OFFSET))();
		}

		static ::System::Single GetScreenAdjustIndent()
		{
			return ((::System::Single(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_UIADAPTUTILS_GETSCREENADJUSTINDENT_OFFSET))();
		}

		static ::System::Single get_ScreenAspect()
		{
			return ((::System::Single(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_UIADAPTUTILS_GET_SCREENASPECT_OFFSET))();
		}

		static ::System::Boolean get_IsAdjustAsCloudPhone()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_UIADAPTUTILS_GET_ISADJUSTASCLOUDPHONE_OFFSET))();
		}
	};
}

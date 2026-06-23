#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace System { template <typename T1, typename T2, typename T3> class Func_3; }
namespace System::Collections { class IEnumerator; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine::UI { class ScrollRect; }

#define MOLEMOLE_MONOSCROLLERFADEMANAGER_FASTFORWARDTOANIMEND_OFFSET UNITYSDK_OFFSET(0x1303A880)
#define MOLEMOLE_MONOSCROLLERFADEMANAGER_GET_ISPLAYING_OFFSET UNITYSDK_OFFSET(0x13039BB0)
#define MOLEMOLE_MONOSCROLLERFADEMANAGER_INIT_OFFSET UNITYSDK_OFFSET(0x13039BC0)
#define MOLEMOLE_MONOSCROLLERFADEMANAGER_METHOD_5_06330CD58CB602B6_OFFSET UNITYSDK_OFFSET(0x1303A6A0)
#define MOLEMOLE_MONOSCROLLERFADEMANAGER_METHOD_5_1F130271093617A5_OFFSET UNITYSDK_OFFSET(0x1303ABE0)
#define MOLEMOLE_MONOSCROLLERFADEMANAGER_METHOD_5_627C7524E98F4AC5_OFFSET UNITYSDK_OFFSET(0x1303A2B0)
#define MOLEMOLE_MONOSCROLLERFADEMANAGER_METHOD_5_E01AB12B6F23773D_OFFSET UNITYSDK_OFFSET(0x1303ADF0)
#define MOLEMOLE_MONOSCROLLERFADEMANAGER_PLAYWHENSTOP_OFFSET UNITYSDK_OFFSET(0x1303A330)
#define MOLEMOLE_MONOSCROLLERFADEMANAGER_PLAY_OFFSET UNITYSDK_OFFSET(0x1303A1D0)
#define MOLEMOLE_MONOSCROLLERFADEMANAGER_RESET_OFFSET UNITYSDK_OFFSET(0x1303A380)
#define MOLEMOLE_MONOSCROLLERFADEMANAGER__CTOR_OFFSET UNITYSDK_OFFSET(0x1303AB80)

namespace MoleMole
{
	inline static constexpr unsigned int MonoScrollerFadeManager_TypeDefinitionIndex = 42961;

	class MonoScrollerFadeManager : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::Collections::Generic::List_1<::UnityEngine::RectTransform*>* Field_5_0; // 0x18
		::UnityEngine::UI::ScrollRect* Field_5_1; // 0x20
		::System::Single FadeInDuration; // 0x28
		::System::Single NextItemFadeInDelay; // 0x2C
		::System::Single FirstDelay; // 0x30
		::System::Boolean Field_5_5; // 0x34

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOSCROLLERFADEMANAGER__CTOR_OFFSET))(this);
		}

		::System::Boolean get_IsPlaying()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOSCROLLERFADEMANAGER_GET_ISPLAYING_OFFSET))(this);
		}

		::System::Void Init(::System::Collections::Generic::Dictionary_2<::System::Int32, ::UnityEngine::RectTransform*>* a1, ::System::Collections::Generic::Dictionary_2<::System::Int32, ::UnityEngine::RectTransform*>* a2, ::System::Func_3<::UnityEngine::RectTransform*, ::UnityEngine::RectTransform*, ::System::Boolean>* a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::Int32, ::UnityEngine::RectTransform*>*, ::System::Collections::Generic::Dictionary_2<::System::Int32, ::UnityEngine::RectTransform*>*, ::System::Func_3<::UnityEngine::RectTransform*, ::UnityEngine::RectTransform*, ::System::Boolean>*))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOSCROLLERFADEMANAGER_INIT_OFFSET))(this, a1, a2, a3);
		}

		::System::Void Play()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOSCROLLERFADEMANAGER_PLAY_OFFSET))(this);
		}

		::System::Void PlayWhenStop()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOSCROLLERFADEMANAGER_PLAYWHENSTOP_OFFSET))(this);
		}

		::System::Void Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOSCROLLERFADEMANAGER_RESET_OFFSET))(this);
		}

		::System::Void FastForwardToAnimEnd()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOSCROLLERFADEMANAGER_FASTFORWARDTOANIMEND_OFFSET))(this);
		}

		::System::Collections::IEnumerator* Method_5_627C7524E98F4AC5()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOSCROLLERFADEMANAGER_METHOD_5_627C7524E98F4AC5_OFFSET))(this);
		}

		::System::Void Method_5_06330CD58CB602B6()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOSCROLLERFADEMANAGER_METHOD_5_06330CD58CB602B6_OFFSET))(this);
		}

		::System::Void Method_5_1F130271093617A5()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOSCROLLERFADEMANAGER_METHOD_5_1F130271093617A5_OFFSET))(this);
		}

		::System::Collections::IEnumerator* Method_5_E01AB12B6F23773D(::System::Collections::Generic::List_1<::UnityEngine::RectTransform*>* a1, ::System::Int32 a2, ::System::Int32 a3)
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID, ::System::Collections::Generic::List_1<::UnityEngine::RectTransform*>*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOSCROLLERFADEMANAGER_METHOD_5_E01AB12B6F23773D_OFFSET))(this, a1, a2, a3);
		}
	};
}

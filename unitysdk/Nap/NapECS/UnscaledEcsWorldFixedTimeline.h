#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Nap/NapECS/EcsWorldTimeline.h"

#define NAP_NAPECS_UNSCALEDECSWORLDFIXEDTIMELINE_CREATE_OFFSET UNITYSDK_OFFSET(0x1B30AAE0)
#define NAP_NAPECS_UNSCALEDECSWORLDFIXEDTIMELINE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1B30ACC0)
#define NAP_NAPECS_UNSCALEDECSWORLDFIXEDTIMELINE_GET_FIXEDTICKCOUNTINFRAME_OFFSET UNITYSDK_OFFSET(0x1B30C340)
#define NAP_NAPECS_UNSCALEDECSWORLDFIXEDTIMELINE_GET_LASTFIXEDTICKCOUNTINFRAME_OFFSET UNITYSDK_OFFSET(0x1B30C2E0)
#define NAP_NAPECS_UNSCALEDECSWORLDFIXEDTIMELINE_ONECSWORLDFIXEDUPDATE_OFFSET UNITYSDK_OFFSET(0x1B30B4B0)
#define NAP_NAPECS_UNSCALEDECSWORLDFIXEDTIMELINE_SET_TOTALFIXEDTICKCOUNTINFRAME_OFFSET UNITYSDK_OFFSET(0x1B30C360)
#define NAP_NAPECS_UNSCALEDECSWORLDFIXEDTIMELINE__CCTOR_OFFSET UNITYSDK_OFFSET(0x1B30C380)
#define NAP_NAPECS_UNSCALEDECSWORLDFIXEDTIMELINE__CTOR_OFFSET UNITYSDK_OFFSET(0x1B30C370)

namespace Nap::NapECS
{
	inline static constexpr unsigned int UnscaledEcsWorldFixedTimeline_TypeDefinitionIndex = 37270;

	class UnscaledEcsWorldFixedTimeline : public ::Nap::NapECS::EcsWorldTimeline
	{
	public:
		static ::System::Int32* StaticGet_s_LastFixedTickCountInFrame()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(UnscaledEcsWorldFixedTimeline_TypeDefinitionIndex)->GetStaticField(0x89D0);
		}
		::System::Int32 _TotalFixedTickCountInFrame_k__BackingField; // 0x48

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NAP_NAPECS_UNSCALEDECSWORLDFIXEDTIMELINE__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NAP_NAPECS_UNSCALEDECSWORLDFIXEDTIMELINE__CCTOR_OFFSET))();
		}

		::System::Boolean get_LastFixedTickCountInFrame()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NAP_NAPECS_UNSCALEDECSWORLDFIXEDTIMELINE_GET_LASTFIXEDTICKCOUNTINFRAME_OFFSET))(this);
		}

		::System::Void set_TotalFixedTickCountInFrame(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + NAP_NAPECS_UNSCALEDECSWORLDFIXEDTIMELINE_SET_TOTALFIXEDTICKCOUNTINFRAME_OFFSET))(this, value);
		}

		::System::Int32 get_FixedTickCountInFrame()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NAP_NAPECS_UNSCALEDECSWORLDFIXEDTIMELINE_GET_FIXEDTICKCOUNTINFRAME_OFFSET))(this);
		}

		::System::Void OnEcsWorldFixedUpdate(::System::Int32 prvFrameCount, ::System::Int32 curFrameCount)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + NAP_NAPECS_UNSCALEDECSWORLDFIXEDTIMELINE_ONECSWORLDFIXEDUPDATE_OFFSET))(this, prvFrameCount, curFrameCount);
		}

		static ::Nap::NapECS::UnscaledEcsWorldFixedTimeline* Create()
		{
			return ((::Nap::NapECS::UnscaledEcsWorldFixedTimeline*(*)())((::PBYTE)hIl2Cpp + NAP_NAPECS_UNSCALEDECSWORLDFIXEDTIMELINE_CREATE_OFFSET))();
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NAP_NAPECS_UNSCALEDECSWORLDFIXEDTIMELINE_DISPOSE_OFFSET))(this);
		}
	};
}

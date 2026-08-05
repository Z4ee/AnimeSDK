#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Nap/NapECS/EcsWorldTimeline.h"

#define NAP_NAPECS_UNSCALEDECSWORLDFIXEDTIMELINE_CREATE_OFFSET UNITYSDK_OFFSET(0x1C859970)
#define NAP_NAPECS_UNSCALEDECSWORLDFIXEDTIMELINE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1C859B60)
#define NAP_NAPECS_UNSCALEDECSWORLDFIXEDTIMELINE_GET_FIXEDTICKCOUNTINFRAME_OFFSET UNITYSDK_OFFSET(0x1C85B1F0)
#define NAP_NAPECS_UNSCALEDECSWORLDFIXEDTIMELINE_GET_LASTFIXEDTICKCOUNTINFRAME_OFFSET UNITYSDK_OFFSET(0x1C85B190)
#define NAP_NAPECS_UNSCALEDECSWORLDFIXEDTIMELINE_ONECSWORLDFIXEDUPDATE_OFFSET UNITYSDK_OFFSET(0x1C85A380)
#define NAP_NAPECS_UNSCALEDECSWORLDFIXEDTIMELINE_SET_TOTALFIXEDTICKCOUNTINFRAME_OFFSET UNITYSDK_OFFSET(0x1C85B210)
#define NAP_NAPECS_UNSCALEDECSWORLDFIXEDTIMELINE__CCTOR_OFFSET UNITYSDK_OFFSET(0x1C85B230)
#define NAP_NAPECS_UNSCALEDECSWORLDFIXEDTIMELINE__CTOR_OFFSET UNITYSDK_OFFSET(0x1C85B220)

namespace Nap::NapECS
{
	inline static constexpr unsigned int UnscaledEcsWorldFixedTimeline_TypeDefinitionIndex = 38003;

	class UnscaledEcsWorldFixedTimeline : public ::Nap::NapECS::EcsWorldTimeline
	{
	public:
		static ::System::Int32* StaticGet_s_LastFixedTickCountInFrame()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(UnscaledEcsWorldFixedTimeline_TypeDefinitionIndex)->GetStaticField(0x8AC0);
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

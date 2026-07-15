#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_A200C09FD729958A.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"

namespace RPG::Client { class EnvironmentSystem; }
namespace RPGTools::Timeline { class ActiveVirtualCameraBehaviour; }
namespace RPGTools::Timeline { class CustomEventBehaviour; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace UnityEngine::Timeline { class TimelineClip; }

#define CLASS_3_38A5FBEFB2431333_METHOD_3_0EAB633F54C44808_OFFSET UNITYSDK_OFFSET(0x1760DC30)
#define CLASS_3_38A5FBEFB2431333_METHOD_3_305FA61C22DF94A3_OFFSET UNITYSDK_OFFSET(0x1760D4B0)
#define CLASS_3_38A5FBEFB2431333_METHOD_3_36726F9E10ADB55F_OFFSET UNITYSDK_OFFSET(0x1760D710)
#define CLASS_3_38A5FBEFB2431333_METHOD_3_455A0C30CAE9D1B9_OFFSET UNITYSDK_OFFSET(0x1760D8C0)
#define CLASS_3_38A5FBEFB2431333_METHOD_3_7FBAA229ED524F8E_OFFSET UNITYSDK_OFFSET(0x1760DAA0)
#define CLASS_3_38A5FBEFB2431333_METHOD_3_8BD8BEB30989812E_OFFSET UNITYSDK_OFFSET(0x1760D9A0)
#define CLASS_3_38A5FBEFB2431333_METHOD_3_A85D55A148DB6ACE_OFFSET UNITYSDK_OFFSET(0x1760D3F0)
#define CLASS_3_38A5FBEFB2431333_METHOD_3_A8F132B7D33EC9D3_OFFSET UNITYSDK_OFFSET(0x1760DA20)
#define CLASS_3_38A5FBEFB2431333_METHOD_3_EB897E503D8FEB67_OFFSET UNITYSDK_OFFSET(0x1760D350)
#define CLASS_3_38A5FBEFB2431333_ONGRAPHSTOP_OFFSET UNITYSDK_OFFSET(0x1760D6B0)
#define CLASS_3_38A5FBEFB2431333__CTOR_OFFSET UNITYSDK_OFFSET(0x1760DDE0)

inline static constexpr unsigned int Class_3_38A5FBEFB2431333_TypeDefinitionIndex = 46052;

class Class_3_38A5FBEFB2431333 : public ::Class_2_A200C09FD729958A
{
public:
	::System::Single Field_3_0; // 0x20
	::System::Single Field_3_1; // 0x24
	::System::Double Field_3_2; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_38A5FBEFB2431333__CTOR_OFFSET))(this);
	}

	::System::Void Method_3_EB897E503D8FEB67(::RPGTools::Timeline::CustomEventBehaviour* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPGTools::Timeline::CustomEventBehaviour*))((::PBYTE)hIl2Cpp + CLASS_3_38A5FBEFB2431333_METHOD_3_EB897E503D8FEB67_OFFSET))(this, a1);
	}

	::System::Void OnGraphStop(::UnityEngine::Playables::Playable a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + CLASS_3_38A5FBEFB2431333_ONGRAPHSTOP_OFFSET))(this, a1);
	}

	::System::Void Method_3_455A0C30CAE9D1B9(::UnityEngine::Playables::Playable a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + CLASS_3_38A5FBEFB2431333_METHOD_3_455A0C30CAE9D1B9_OFFSET))(this, a1);
	}

	::RPG::Client::EnvironmentSystem* Method_3_A8F132B7D33EC9D3()
	{
		return ((::RPG::Client::EnvironmentSystem*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_38A5FBEFB2431333_METHOD_3_A8F132B7D33EC9D3_OFFSET))(this);
	}

	::System::Void Method_3_A85D55A148DB6ACE(::RPGTools::Timeline::ActiveVirtualCameraBehaviour* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPGTools::Timeline::ActiveVirtualCameraBehaviour*))((::PBYTE)hIl2Cpp + CLASS_3_38A5FBEFB2431333_METHOD_3_A85D55A148DB6ACE_OFFSET))(this, a1);
	}

	::System::Void Method_3_8BD8BEB30989812E(::System::Double a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Double))((::PBYTE)hIl2Cpp + CLASS_3_38A5FBEFB2431333_METHOD_3_8BD8BEB30989812E_OFFSET))(this, a1);
	}

	::System::Void Method_3_7FBAA229ED524F8E()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_38A5FBEFB2431333_METHOD_3_7FBAA229ED524F8E_OFFSET))(this);
	}

	::System::Void Method_3_0EAB633F54C44808(::System::Collections::Generic::IEnumerable_1<::UnityEngine::Timeline::TimelineClip*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IEnumerable_1<::UnityEngine::Timeline::TimelineClip*>*))((::PBYTE)hIl2Cpp + CLASS_3_38A5FBEFB2431333_METHOD_3_0EAB633F54C44808_OFFSET))(this, a1);
	}

	::System::Void Method_3_305FA61C22DF94A3(::RPGTools::Timeline::ActiveVirtualCameraBehaviour* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPGTools::Timeline::ActiveVirtualCameraBehaviour*))((::PBYTE)hIl2Cpp + CLASS_3_38A5FBEFB2431333_METHOD_3_305FA61C22DF94A3_OFFSET))(this, a1);
	}

	::System::Void Method_3_36726F9E10ADB55F()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_38A5FBEFB2431333_METHOD_3_36726F9E10ADB55F_OFFSET))(this);
	}
};

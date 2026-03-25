#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/StageHarmonyBaseLinkSlot.h"

class StageHarmonyDemodulator;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Material; }
namespace UnityEngine { class Renderer; }

#define STAGEHARMONYMATLINKSLOT_GET_ISSINGLERENDERER_OFFSET UNITYSDK_OFFSET(0xABDE4C0)
#define STAGEHARMONYMATLINKSLOT_METHOD_2_03BFDB1C3240A55A_OFFSET UNITYSDK_OFFSET(0xABDE4D0)
#define STAGEHARMONYMATLINKSLOT_METHOD_2_2C2DA449C864943D_OFFSET UNITYSDK_OFFSET(0xABDE9C0)
#define STAGEHARMONYMATLINKSLOT_METHOD_2_83C2685161B408B7_OFFSET UNITYSDK_OFFSET(0xABDECD0)
#define STAGEHARMONYMATLINKSLOT_METHOD_2_937F8473216A3162_OFFSET UNITYSDK_OFFSET(0xABDE6F0)
#define STAGEHARMONYMATLINKSLOT_METHOD_2_CA373AA1C7054598_1_OFFSET UNITYSDK_OFFSET(0xABDE6B0)
#define STAGEHARMONYMATLINKSLOT_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0xABDE660)
#define STAGEHARMONYMATLINKSLOT_METHOD_2_E879A6F7021E230E_OFFSET UNITYSDK_OFFSET(0xABDEA90)
#define STAGEHARMONYMATLINKSLOT_METHOD_2_FF1156DD6F26F6DC_OFFSET UNITYSDK_OFFSET(0xABDE850)
#define STAGEHARMONYMATLINKSLOT__CTOR_OFFSET UNITYSDK_OFFSET(0xABDF0B0)

inline static constexpr unsigned int StageHarmonyMatLinkSlot_TypeDefinitionIndex = 38408;

class StageHarmonyMatLinkSlot : public ::StageHarmonyBaseLinkSlot
{
public:
	::System::Boolean isRendererGroup; // 0x28
	::UnityEngine::Renderer* TargetRenderer; // 0x30
	::System::Int32 MatID; // 0x38
	::System::String* PropertyName; // 0x40
	::System::Int32 _PropertyID; // 0x48
	::System::Collections::Generic::List_1<::UnityEngine::Renderer*>* TargetRenderers; // 0x50
	::System::Boolean useInstanceMode; // 0x58
	::UnityEngine::Material* OriginalMat; // 0x60
	::UnityEngine::Material* InstancedMat; // 0x68

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + STAGEHARMONYMATLINKSLOT__CTOR_OFFSET))(this);
	}

	::System::Boolean get_isSingleRenderer()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + STAGEHARMONYMATLINKSLOT_GET_ISSINGLERENDERER_OFFSET))(this);
	}

	::System::Void Method_2_03BFDB1C3240A55A()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + STAGEHARMONYMATLINKSLOT_METHOD_2_03BFDB1C3240A55A_OFFSET))(this);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + STAGEHARMONYMATLINKSLOT_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_2_CA373AA1C7054598_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + STAGEHARMONYMATLINKSLOT_METHOD_2_CA373AA1C7054598_1_OFFSET))(this);
	}

	::System::Void Method_2_937F8473216A3162()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + STAGEHARMONYMATLINKSLOT_METHOD_2_937F8473216A3162_OFFSET))(this);
	}

	::System::Void Method_2_FF1156DD6F26F6DC(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + STAGEHARMONYMATLINKSLOT_METHOD_2_FF1156DD6F26F6DC_OFFSET))(this, a1);
	}

	::System::Void Method_2_2C2DA449C864943D(::UnityEngine::Renderer* a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Renderer*, ::System::Single))((::PBYTE)hIl2Cpp + STAGEHARMONYMATLINKSLOT_METHOD_2_2C2DA449C864943D_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_83C2685161B408B7(::StageHarmonyDemodulator* a1, ::UnityEngine::Renderer* a2, ::System::Single a3)
	{
		return ((::System::Void(*)(::PVOID, ::StageHarmonyDemodulator*, ::UnityEngine::Renderer*, ::System::Single))((::PBYTE)hIl2Cpp + STAGEHARMONYMATLINKSLOT_METHOD_2_83C2685161B408B7_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_2_E879A6F7021E230E(::StageHarmonyDemodulator* a1, ::UnityEngine::Material* a2, ::System::Single a3)
	{
		return ((::System::Void(*)(::PVOID, ::StageHarmonyDemodulator*, ::UnityEngine::Material*, ::System::Single))((::PBYTE)hIl2Cpp + STAGEHARMONYMATLINKSLOT_METHOD_2_E879A6F7021E230E_OFFSET))(this, a1, a2, a3);
	}
};

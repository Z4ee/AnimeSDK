#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/StageHarmonyBaseLinkSlot.h"

class StageHarmonyDemodulator;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Material; }
namespace UnityEngine { class Renderer; }

#define STAGEHARMONYMATLINKSLOT_GET_ISSINGLERENDERER_OFFSET UNITYSDK_OFFSET(0x197EFA80)
#define STAGEHARMONYMATLINKSLOT_METHOD_2_03BFDB1C3240A55A_OFFSET UNITYSDK_OFFSET(0x197EFA90)
#define STAGEHARMONYMATLINKSLOT_METHOD_2_04A4B365E89A7C7D_OFFSET UNITYSDK_OFFSET(0x197EFE40)
#define STAGEHARMONYMATLINKSLOT_METHOD_2_3D2B77EBCAE390AB_OFFSET UNITYSDK_OFFSET(0x197EFCE0)
#define STAGEHARMONYMATLINKSLOT_METHOD_2_482601AC39388AEF_OFFSET UNITYSDK_OFFSET(0x197EFFD0)
#define STAGEHARMONYMATLINKSLOT_METHOD_2_51120F267FCE261F_OFFSET UNITYSDK_OFFSET(0x197F0580)
#define STAGEHARMONYMATLINKSLOT_METHOD_2_CA373AA1C7054598_1_OFFSET UNITYSDK_OFFSET(0x197EFCA0)
#define STAGEHARMONYMATLINKSLOT_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x197EFC50)
#define STAGEHARMONYMATLINKSLOT_METHOD_2_D7A3826BE77D1015_OFFSET UNITYSDK_OFFSET(0x197F00B0)
#define STAGEHARMONYMATLINKSLOT__CTOR_OFFSET UNITYSDK_OFFSET(0x197F0BE0)

inline static constexpr unsigned int StageHarmonyMatLinkSlot_TypeDefinitionIndex = 48007;

class StageHarmonyMatLinkSlot : public ::StageHarmonyBaseLinkSlot
{
public:
	::System::Boolean isRendererGroup; // 0x40
	::UnityEngine::Renderer* TargetRenderer; // 0x48
	::System::Int32 MatID; // 0x50
	::System::String* PropertyName; // 0x58
	::System::Int32 _PropertyID; // 0x60
	::System::Collections::Generic::List_1<::UnityEngine::Renderer*>* TargetRenderers; // 0x68
	::System::Boolean useInstanceMode; // 0x70
	::UnityEngine::Material* OriginalMat; // 0x78
	::UnityEngine::Material* InstancedMat; // 0x80

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

	::System::Void Method_2_3D2B77EBCAE390AB()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + STAGEHARMONYMATLINKSLOT_METHOD_2_3D2B77EBCAE390AB_OFFSET))(this);
	}

	::System::Void Method_2_04A4B365E89A7C7D(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + STAGEHARMONYMATLINKSLOT_METHOD_2_04A4B365E89A7C7D_OFFSET))(this, a1);
	}

	::System::Void Method_2_482601AC39388AEF(::UnityEngine::Renderer* a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Renderer*, ::System::Single))((::PBYTE)hIl2Cpp + STAGEHARMONYMATLINKSLOT_METHOD_2_482601AC39388AEF_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_51120F267FCE261F(::StageHarmonyDemodulator* a1, ::UnityEngine::Renderer* a2, ::System::Single a3)
	{
		return ((::System::Void(*)(::PVOID, ::StageHarmonyDemodulator*, ::UnityEngine::Renderer*, ::System::Single))((::PBYTE)hIl2Cpp + STAGEHARMONYMATLINKSLOT_METHOD_2_51120F267FCE261F_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_2_D7A3826BE77D1015(::StageHarmonyDemodulator* a1, ::UnityEngine::Material* a2, ::System::Single a3)
	{
		return ((::System::Void(*)(::PVOID, ::StageHarmonyDemodulator*, ::UnityEngine::Material*, ::System::Single))((::PBYTE)hIl2Cpp + STAGEHARMONYMATLINKSLOT_METHOD_2_D7A3826BE77D1015_OFFSET))(this, a1, a2, a3);
	}
};

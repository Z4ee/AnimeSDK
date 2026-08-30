#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace UnityEngine { class AnimationCurve; }

#define STRUCT_2_6AEDA351F1A331D3_GET_ISINITIALIZED_OFFSET UNITYSDK_OFFSET(0x2FC10)
#define STRUCT_2_6AEDA351F1A331D3_METHOD_2_1D4018D4200358D0_OFFSET UNITYSDK_OFFSET(0x2125980)
#define STRUCT_2_6AEDA351F1A331D3_METHOD_2_2685B6183E614529_OFFSET UNITYSDK_OFFSET(0x2125850)
#define STRUCT_2_6AEDA351F1A331D3_METHOD_2_31AB6B492A2A5F56_OFFSET UNITYSDK_OFFSET(0x21257B0)
#define STRUCT_2_6AEDA351F1A331D3_METHOD_2_5323F2DF46A044DA_OFFSET UNITYSDK_OFFSET(0xD4D0)
#define STRUCT_2_6AEDA351F1A331D3_METHOD_2_8E51D9ED71E4930C_OFFSET UNITYSDK_OFFSET(0x21258C0)
#define STRUCT_2_6AEDA351F1A331D3_METHOD_2_D437D090E63BE8A7_OFFSET UNITYSDK_OFFSET(0x21258F0)
#define STRUCT_2_6AEDA351F1A331D3_METHOD_2_FCE1223196C0D92C_OFFSET UNITYSDK_OFFSET(0x21257C0)
#define STRUCT_2_6AEDA351F1A331D3_SET_ISINITIALIZED_OFFSET UNITYSDK_OFFSET(0x14E860)

inline static constexpr unsigned int Struct_2_6AEDA351F1A331D3_TypeDefinitionIndex = 68439;

struct alignas(8) Struct_2_6AEDA351F1A331D3
{
	::System::Boolean _IsInitialized_k__BackingField; // 0x10
	::System::Single HBDJCFFDGDD; // 0x14
	::UnityEngine::AnimationCurve* PNOHBBMHGLB; // 0x18
	::System::Single NCFGEFEFDFA; // 0x20
	::System::Single BJBOBFEIKJM; // 0x24
	::UnityEngine::Vector3 OIKIGJKPDBO; // 0x28

	::System::Void Method_2_31AB6B492A2A5F56(::System::Single a1, ::UnityEngine::AnimationCurve* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::UnityEngine::AnimationCurve*))((::PBYTE)hIl2Cpp + STRUCT_2_6AEDA351F1A331D3_METHOD_2_31AB6B492A2A5F56_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_FCE1223196C0D92C(::UnityEngine::Vector3 a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::System::Single))((::PBYTE)hIl2Cpp + STRUCT_2_6AEDA351F1A331D3_METHOD_2_FCE1223196C0D92C_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_2685B6183E614529(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + STRUCT_2_6AEDA351F1A331D3_METHOD_2_2685B6183E614529_OFFSET))(this, a1);
	}

	::UnityEngine::Vector3 Method_2_8E51D9ED71E4930C(::UnityEngine::Vector3 a1)
	{
		return ((::UnityEngine::Vector3(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + STRUCT_2_6AEDA351F1A331D3_METHOD_2_8E51D9ED71E4930C_OFFSET))(this, a1);
	}

	::System::Single Method_2_D437D090E63BE8A7(::System::Single a1)
	{
		return ((::System::Single(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + STRUCT_2_6AEDA351F1A331D3_METHOD_2_D437D090E63BE8A7_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_1D4018D4200358D0()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_6AEDA351F1A331D3_METHOD_2_1D4018D4200358D0_OFFSET))(this);
	}

	::System::Boolean get_IsInitialized()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_6AEDA351F1A331D3_GET_ISINITIALIZED_OFFSET))(this);
	}

	::System::Void set_IsInitialized(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + STRUCT_2_6AEDA351F1A331D3_SET_ISINITIALIZED_OFFSET))(this, a1);
	}

	::System::Single Method_2_5323F2DF46A044DA()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_6AEDA351F1A331D3_METHOD_2_5323F2DF46A044DA_OFFSET))(this);
	}
};

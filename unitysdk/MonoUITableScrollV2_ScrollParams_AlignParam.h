#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MonoUITableScrollV2_ScrollParams_SelectAlignType.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector2.h"

namespace System { class String; }

#define MONOUITABLESCROLLV2_SCROLLPARAMS_ALIGNPARAM_TOSTRING_OFFSET UNITYSDK_OFFSET(0x11347D00)
#define MONOUITABLESCROLLV2_SCROLLPARAMS_ALIGNPARAM__CTOR_1_OFFSET UNITYSDK_OFFSET(0x11347CF0)
#define MONOUITABLESCROLLV2_SCROLLPARAMS_ALIGNPARAM__CTOR_OFFSET UNITYSDK_OFFSET(0x11347CE0)
#define MONOUITABLESCROLLV2_SCROLLPARAMS_ALIGNPARAM___BASE_TOSTRING_OFFSET UNITYSDK_OFFSET(0x11347E70)

inline static constexpr unsigned int MonoUITableScrollV2_ScrollParams_AlignParam_TypeDefinitionIndex = 54154;

class MonoUITableScrollV2_ScrollParams_AlignParam : public ::System::Object
{
public:
	::MonoUITableScrollV2_ScrollParams_SelectAlignType alignType; // 0x10
	::UnityEngine::Vector2 alignCustomRange; // 0x14
	::System::Int32 alignDataIndexOffset; // 0x1C

	::System::Void _ctor(::MonoUITableScrollV2_ScrollParams_SelectAlignType alignType, ::UnityEngine::Vector2 alignCustomRange, ::System::Int32 alignDataIndexOffset)
	{
		return ((::System::Void(*)(::PVOID, ::MonoUITableScrollV2_ScrollParams_SelectAlignType, ::UnityEngine::Vector2, ::System::Int32))((::PBYTE)hIl2Cpp + MONOUITABLESCROLLV2_SCROLLPARAMS_ALIGNPARAM__CTOR_OFFSET))(this, alignType, alignCustomRange, alignDataIndexOffset);
	}

	::System::Void _ctor_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONOUITABLESCROLLV2_SCROLLPARAMS_ALIGNPARAM__CTOR_1_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MONOUITABLESCROLLV2_SCROLLPARAMS_ALIGNPARAM_TOSTRING_OFFSET))(this);
	}

	::System::String* __base_ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MONOUITABLESCROLLV2_SCROLLPARAMS_ALIGNPARAM___BASE_TOSTRING_OFFSET))(this);
	}
};

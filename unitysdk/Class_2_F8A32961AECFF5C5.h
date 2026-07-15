#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_3713064DEE761936.h"

namespace System { class String; }
namespace UnityEngine { class RectTransform; }

#define CLASS_2_F8A32961AECFF5C5_METHOD_2_201F56A9F246A225_OFFSET UNITYSDK_OFFSET(0x16397BD0)
#define CLASS_2_F8A32961AECFF5C5_METHOD_2_4343F372F34C05BF_OFFSET UNITYSDK_OFFSET(0x16398030)
#define CLASS_2_F8A32961AECFF5C5_METHOD_2_4C288C0C3DC7B4CA_OFFSET UNITYSDK_OFFSET(0x16397F80)
#define CLASS_2_F8A32961AECFF5C5_ONCLEAR_OFFSET UNITYSDK_OFFSET(0x16397FE0)
#define CLASS_2_F8A32961AECFF5C5_ONEXECUTE_OFFSET UNITYSDK_OFFSET(0x16397C80)
#define CLASS_2_F8A32961AECFF5C5__CTOR_OFFSET UNITYSDK_OFFSET(0x16398090)

inline static constexpr unsigned int Class_2_F8A32961AECFF5C5_TypeDefinitionIndex = 75894;

class Class_2_F8A32961AECFF5C5 : public ::Class_1_3713064DEE761936
{
public:
	::UnityEngine::RectTransform* Field_2_0; // 0x20
	::System::String* Field_2_1; // 0x28
	::UnityEngine::RectTransform* Field_2_2; // 0x30
	::System::Single Field_2_3; // 0x38
	::System::Boolean Field_2_4; // 0x3C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F8A32961AECFF5C5__CTOR_OFFSET))(this);
	}

	static ::Class_2_F8A32961AECFF5C5* Method_2_201F56A9F246A225(::UnityEngine::RectTransform* a1, ::UnityEngine::RectTransform* a2, ::System::Single a3, ::System::String* a4)
	{
		return ((::Class_2_F8A32961AECFF5C5*(*)(::UnityEngine::RectTransform*, ::UnityEngine::RectTransform*, ::System::Single, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_F8A32961AECFF5C5_METHOD_2_201F56A9F246A225_OFFSET))(a1, a2, a3, a4);
	}

	::System::Void OnExecute()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F8A32961AECFF5C5_ONEXECUTE_OFFSET))(this);
	}

	::System::Void Method_2_4C288C0C3DC7B4CA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F8A32961AECFF5C5_METHOD_2_4C288C0C3DC7B4CA_OFFSET))(this);
	}

	::System::Void OnClear()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F8A32961AECFF5C5_ONCLEAR_OFFSET))(this);
	}

	::System::Void Method_2_4343F372F34C05BF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F8A32961AECFF5C5_METHOD_2_4343F372F34C05BF_OFFSET))(this);
	}
};

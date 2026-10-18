#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_3713064DEE761936.h"

namespace System { class String; }
namespace UnityEngine { class RectTransform; }

#define CLASS_2_F8A32961AECFF5C5_METHOD_2_201F56A9F246A225_OFFSET UNITYSDK_OFFSET(0x15825280)
#define CLASS_2_F8A32961AECFF5C5_METHOD_2_4343F372F34C05BF_OFFSET UNITYSDK_OFFSET(0x158256E0)
#define CLASS_2_F8A32961AECFF5C5_METHOD_2_4C288C0C3DC7B4CA_OFFSET UNITYSDK_OFFSET(0x15825630)
#define CLASS_2_F8A32961AECFF5C5_ONCLEAR_OFFSET UNITYSDK_OFFSET(0x15825690)
#define CLASS_2_F8A32961AECFF5C5_ONEXECUTE_OFFSET UNITYSDK_OFFSET(0x15825330)
#define CLASS_2_F8A32961AECFF5C5__CTOR_OFFSET UNITYSDK_OFFSET(0x15825740)

inline static constexpr unsigned int Class_2_F8A32961AECFF5C5_TypeDefinitionIndex = 80851;

class Class_2_F8A32961AECFF5C5 : public ::Class_1_3713064DEE761936
{
public:
	::UnityEngine::RectTransform* PJDFEJNBAJH; // 0x20
	::System::String* LDNLKDCNEBJ; // 0x28
	::UnityEngine::RectTransform* GKNBCPMJHMN; // 0x30
	::System::Boolean BEMMCKLJICI; // 0x38
	::System::Single HBDJCFFDGDD; // 0x3C

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

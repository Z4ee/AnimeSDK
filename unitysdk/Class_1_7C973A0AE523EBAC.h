#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace R3 { template <typename T> class ReactiveProperty_1; }
namespace System { class String; }

#define CLASS_1_7C973A0AE523EBAC_GET_CAPTION_OFFSET UNITYSDK_OFFSET(0x184FE190)
#define CLASS_1_7C973A0AE523EBAC_GET_VISIBLE_OFFSET UNITYSDK_OFFSET(0x184FE1A0)
#define CLASS_1_7C973A0AE523EBAC__CTOR_OFFSET UNITYSDK_OFFSET(0x184FE1B0)

inline static constexpr unsigned int Class_1_7C973A0AE523EBAC_TypeDefinitionIndex = 50349;

class Class_1_7C973A0AE523EBAC : public ::System::Object
{
public:
	::R3::ReactiveProperty_1<::System::String*>* _Caption_k__BackingField; // 0x10
	::R3::ReactiveProperty_1<::System::Boolean>* _Visible_k__BackingField; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7C973A0AE523EBAC__CTOR_OFFSET))(this);
	}

	::R3::ReactiveProperty_1<::System::String*>* get_Caption()
	{
		return ((::R3::ReactiveProperty_1<::System::String*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7C973A0AE523EBAC_GET_CAPTION_OFFSET))(this);
	}

	::R3::ReactiveProperty_1<::System::Boolean>* get_Visible()
	{
		return ((::R3::ReactiveProperty_1<::System::Boolean>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7C973A0AE523EBAC_GET_VISIBLE_OFFSET))(this);
	}
};

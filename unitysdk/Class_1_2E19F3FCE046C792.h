#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace R3 { template <typename T> class Observable_1; }
namespace System { class String; }

#define CLASS_1_2E19F3FCE046C792_GET_DESC_OFFSET UNITYSDK_OFFSET(0x15CD4360)
#define CLASS_1_2E19F3FCE046C792_GET_ICON_OFFSET UNITYSDK_OFFSET(0x15CD4350)
#define CLASS_1_2E19F3FCE046C792__CTOR_OFFSET UNITYSDK_OFFSET(0x15CD4370)

inline static constexpr unsigned int Class_1_2E19F3FCE046C792_TypeDefinitionIndex = 79591;

class Class_1_2E19F3FCE046C792 : public ::System::Object
{
public:
	::R3::Observable_1<::System::String*>* _Desc_k__BackingField; // 0x10
	::R3::Observable_1<::System::String*>* _Icon_k__BackingField; // 0x18

	::System::Void _ctor(::System::String* a1, ::System::String* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_2E19F3FCE046C792__CTOR_OFFSET))(this, a1, a2);
	}

	::R3::Observable_1<::System::String*>* get_Icon()
	{
		return ((::R3::Observable_1<::System::String*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2E19F3FCE046C792_GET_ICON_OFFSET))(this);
	}

	::R3::Observable_1<::System::String*>* get_Desc()
	{
		return ((::R3::Observable_1<::System::String*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2E19F3FCE046C792_GET_DESC_OFFSET))(this);
	}
};

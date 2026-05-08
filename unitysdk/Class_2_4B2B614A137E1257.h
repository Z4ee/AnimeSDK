#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/ViewObject/BaseViewObjectComponent_1.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_2_4B2B614A137E1257__CTOR_OFFSET UNITYSDK_OFFSET(0x11236FD0)

inline static constexpr unsigned int Class_2_4B2B614A137E1257_TypeDefinitionIndex = 57003;

class Class_2_4B2B614A137E1257 : public ::Foundation::ViewObject::BaseViewObjectComponent_1<::Class_2_4B2B614A137E1257*>
{
public:
	::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>* Field_2_0; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4B2B614A137E1257__CTOR_OFFSET))(this);
	}
};

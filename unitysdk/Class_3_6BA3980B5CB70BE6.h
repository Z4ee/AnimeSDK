#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/ViewObject/BaseViewObjectComponent_1.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_3_6BA3980B5CB70BE6__CTOR_OFFSET UNITYSDK_OFFSET(0x14EAE090)

inline static constexpr unsigned int Class_3_6BA3980B5CB70BE6_TypeDefinitionIndex = 65722;

class Class_3_6BA3980B5CB70BE6 : public ::Foundation::ViewObject::BaseViewObjectComponent_1<::Class_3_6BA3980B5CB70BE6*>
{
public:
	::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>* Field_3_0; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_6BA3980B5CB70BE6__CTOR_OFFSET))(this);
	}
};

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/ViewObject/BaseViewObjectComponent_1.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_3_633956D00799206F__CTOR_OFFSET UNITYSDK_OFFSET(0x13B71C70)

inline static constexpr unsigned int Class_3_633956D00799206F_TypeDefinitionIndex = 60107;

class Class_3_633956D00799206F : public ::Foundation::ViewObject::BaseViewObjectComponent_1<::Class_3_633956D00799206F*>
{
public:
	::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>* Field_3_0; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_633956D00799206F__CTOR_OFFSET))(this);
	}
};

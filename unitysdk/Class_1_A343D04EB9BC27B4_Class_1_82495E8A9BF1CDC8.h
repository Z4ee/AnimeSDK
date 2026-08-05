#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class HollowEntityLayerMaskConfig; }
namespace System { class Action; }

#define CLASS_1_A343D04EB9BC27B4_CLASS_1_82495E8A9BF1CDC8_METHOD_1_C5938710FD5BF257_OFFSET UNITYSDK_OFFSET(0xF63EE70)
#define CLASS_1_A343D04EB9BC27B4_CLASS_1_82495E8A9BF1CDC8__CTOR_OFFSET UNITYSDK_OFFSET(0xF63ED70)

inline static constexpr unsigned int Class_1_A343D04EB9BC27B4_Class_1_82495E8A9BF1CDC8_TypeDefinitionIndex = 49500;

class Class_1_A343D04EB9BC27B4_Class_1_82495E8A9BF1CDC8 : public ::System::Object
{
public:
	::System::Action* Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A343D04EB9BC27B4_CLASS_1_82495E8A9BF1CDC8__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_C5938710FD5BF257(::MoleMole::HollowEntityLayerMaskConfig* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::HollowEntityLayerMaskConfig*))((::PBYTE)hIl2Cpp + CLASS_1_A343D04EB9BC27B4_CLASS_1_82495E8A9BF1CDC8_METHOD_1_C5938710FD5BF257_OFFSET))(this, a1);
	}
};

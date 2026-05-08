#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/BaseProperty.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Battle { class Entity; }
namespace System { class String; }

#define CLASS_3_E20366D1301D6555_CLASS_1_B4502E64D73D0527_METHOD_1_3A09307A57C0FDEC_OFFSET UNITYSDK_OFFSET(0x12F13170)
#define CLASS_3_E20366D1301D6555_CLASS_1_B4502E64D73D0527_METHOD_1_83BE0299944D0F77_OFFSET UNITYSDK_OFFSET(0x12F13210)
#define CLASS_3_E20366D1301D6555_CLASS_1_B4502E64D73D0527__CTOR_OFFSET UNITYSDK_OFFSET(0x12F13160)

inline static constexpr unsigned int Class_3_E20366D1301D6555_Class_1_B4502E64D73D0527_TypeDefinitionIndex = 57552;

class Class_3_E20366D1301D6555_Class_1_B4502E64D73D0527 : public ::System::Object
{
public:
	::MoleMole::Battle::Entity* Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_E20366D1301D6555_CLASS_1_B4502E64D73D0527__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_3A09307A57C0FDEC(::System::UInt32 a1, ::MoleMole::Config::BaseProperty a2, ::System::String* a3, ::System::Double a4, ::System::Double a5)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::MoleMole::Config::BaseProperty, ::System::String*, ::System::Double, ::System::Double))((::PBYTE)hIl2Cpp + CLASS_3_E20366D1301D6555_CLASS_1_B4502E64D73D0527_METHOD_1_3A09307A57C0FDEC_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::System::Void Method_1_83BE0299944D0F77()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_E20366D1301D6555_CLASS_1_B4502E64D73D0527_METHOD_1_83BE0299944D0F77_OFFSET))(this);
	}
};

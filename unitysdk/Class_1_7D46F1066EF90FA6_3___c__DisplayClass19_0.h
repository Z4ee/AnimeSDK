#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_D645B4E0B73852B6.h"
#include "unitysdk/System/Object.h"

namespace RPG::AvatarSystem { class IAvatar; }
namespace System { template <typename T> class Predicate_1; }

#define CLASS_1_7D46F1066EF90FA6_3___C__DISPLAYCLASS19_0__CTOR_OFFSET UNITYSDK_OFFSET(0xB6E6590)
#define CLASS_1_7D46F1066EF90FA6_3___C__DISPLAYCLASS19_0__FILLSPECIFICPATHAVATARSBYROLETO_B__0_OFFSET UNITYSDK_OFFSET(0xB6E66B0)

inline static constexpr unsigned int Class_1_7D46F1066EF90FA6_3___c__DisplayClass19_0_TypeDefinitionIndex = 62756;

class Class_1_7D46F1066EF90FA6_3___c__DisplayClass19_0 : public ::System::Object
{
public:
	::System::Predicate_1<::RPG::AvatarSystem::IAvatar*>* __9__0; // 0x10
	::Struct_2_D645B4E0B73852B6 roleIdentifier; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7D46F1066EF90FA6_3___C__DISPLAYCLASS19_0__CTOR_OFFSET))(this);
	}

	::System::Boolean _FillSpecificPathAvatarsByRoleTo_b__0(::RPG::AvatarSystem::IAvatar* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::AvatarSystem::IAvatar*))((::PBYTE)hIl2Cpp + CLASS_1_7D46F1066EF90FA6_3___C__DISPLAYCLASS19_0__FILLSPECIFICPATHAVATARSBYROLETO_B__0_OFFSET))(this, a1);
	}
};

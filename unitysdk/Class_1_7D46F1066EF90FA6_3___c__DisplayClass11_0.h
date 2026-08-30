#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_D645B4E0B73852B6.h"
#include "unitysdk/System/Object.h"

namespace RPG::AvatarSystem { class IAvatar; }

#define CLASS_1_7D46F1066EF90FA6_3___C__DISPLAYCLASS11_0__CTOR_OFFSET UNITYSDK_OFFSET(0xB6E5B80)
#define CLASS_1_7D46F1066EF90FA6_3___C__DISPLAYCLASS11_0__ENUMERATESPECIFICPATHAVATARSBYROLE_B__0_OFFSET UNITYSDK_OFFSET(0xB6E65A0)

inline static constexpr unsigned int Class_1_7D46F1066EF90FA6_3___c__DisplayClass11_0_TypeDefinitionIndex = 62755;

class Class_1_7D46F1066EF90FA6_3___c__DisplayClass11_0 : public ::System::Object
{
public:
	::Struct_2_D645B4E0B73852B6 roleIdentifier; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7D46F1066EF90FA6_3___C__DISPLAYCLASS11_0__CTOR_OFFSET))(this);
	}

	::System::Boolean _EnumerateSpecificPathAvatarsByRole_b__0(::RPG::AvatarSystem::IAvatar* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::AvatarSystem::IAvatar*))((::PBYTE)hIl2Cpp + CLASS_1_7D46F1066EF90FA6_3___C__DISPLAYCLASS11_0__ENUMERATESPECIFICPATHAVATARSBYROLE_B__0_OFFSET))(this, a1);
	}
};

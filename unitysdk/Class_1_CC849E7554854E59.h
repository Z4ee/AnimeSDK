#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_7F60825540B482DD;
namespace RPG::AvatarSystem { class AvatarSkin; }

#define CLASS_1_CC849E7554854E59_METHOD_1_9674158AA7159AD8_OFFSET UNITYSDK_OFFSET(0x16161090)
#define CLASS_1_CC849E7554854E59__CTOR_OFFSET UNITYSDK_OFFSET(0x16161190)

inline static constexpr unsigned int Class_1_CC849E7554854E59_TypeDefinitionIndex = 62698;

class Class_1_CC849E7554854E59 : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_CC849E7554854E59__CTOR_OFFSET))(this);
	}

	::Class_1_7F60825540B482DD* Method_1_9674158AA7159AD8(::RPG::AvatarSystem::AvatarSkin* a1)
	{
		return ((::Class_1_7F60825540B482DD*(*)(::PVOID, ::RPG::AvatarSystem::AvatarSkin*))((::PBYTE)hIl2Cpp + CLASS_1_CC849E7554854E59_METHOD_1_9674158AA7159AD8_OFFSET))(this, a1);
	}
};

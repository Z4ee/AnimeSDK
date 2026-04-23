#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_0158E2E99AA204F4.h"
#include "unitysdk/System/Object.h"

class Class_1_781AEDA45A069C28;
namespace RPG::AvatarSystem { class AvatarSkin; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_72F33CD8E9664C54_GET_FACTORY_OFFSET UNITYSDK_OFFSET(0xA074760)
#define CLASS_1_72F33CD8E9664C54_METHOD_1_9E39163767A3AD1B_OFFSET UNITYSDK_OFFSET(0xA074780)
#define CLASS_1_72F33CD8E9664C54_METHOD_1_E43755DE6304F58F_OFFSET UNITYSDK_OFFSET(0xA0749F0)
#define CLASS_1_72F33CD8E9664C54_SET_FACTORY_OFFSET UNITYSDK_OFFSET(0xA074770)
#define CLASS_1_72F33CD8E9664C54__CTOR_OFFSET UNITYSDK_OFFSET(0xA074970)

inline static constexpr unsigned int Class_1_72F33CD8E9664C54_TypeDefinitionIndex = 57836;

class Class_1_72F33CD8E9664C54 : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::Struct_2_0158E2E99AA204F4, ::RPG::AvatarSystem::AvatarSkin*>* Field_1_0; // 0x10
	::Class_1_781AEDA45A069C28* _Factory_k__BackingField; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_72F33CD8E9664C54__CTOR_OFFSET))(this);
	}

	::Class_1_781AEDA45A069C28* get_Factory()
	{
		return ((::Class_1_781AEDA45A069C28*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_72F33CD8E9664C54_GET_FACTORY_OFFSET))(this);
	}

	::System::Void set_Factory(::Class_1_781AEDA45A069C28* value)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_781AEDA45A069C28*))((::PBYTE)hIl2Cpp + CLASS_1_72F33CD8E9664C54_SET_FACTORY_OFFSET))(this, value);
	}

	::RPG::AvatarSystem::AvatarSkin* Method_1_9E39163767A3AD1B(::Struct_2_0158E2E99AA204F4& a1)
	{
		return ((::RPG::AvatarSystem::AvatarSkin*(*)(::PVOID, ::Struct_2_0158E2E99AA204F4&))((::PBYTE)hIl2Cpp + CLASS_1_72F33CD8E9664C54_METHOD_1_9E39163767A3AD1B_OFFSET))(this, a1);
	}

	::RPG::AvatarSystem::AvatarSkin* Method_1_E43755DE6304F58F(::Struct_2_0158E2E99AA204F4& a1)
	{
		return ((::RPG::AvatarSystem::AvatarSkin*(*)(::PVOID, ::Struct_2_0158E2E99AA204F4&))((::PBYTE)hIl2Cpp + CLASS_1_72F33CD8E9664C54_METHOD_1_E43755DE6304F58F_OFFSET))(this, a1);
	}
};

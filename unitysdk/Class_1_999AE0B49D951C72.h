#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_6F1A105107B2BC27;
namespace RPG::GameCore { class AvatarOutfitModelConfig; }
namespace RPG::GameCore { class PlayerOutfitDetailRow; }

#define CLASS_1_999AE0B49D951C72_GET_CONFIG_OFFSET UNITYSDK_OFFSET(0x9C5BEE0)
#define CLASS_1_999AE0B49D951C72_GET_ID_OFFSET UNITYSDK_OFFSET(0x9C5BED0)
#define CLASS_1_999AE0B49D951C72_METHOD_1_BCD1E469DC98ED41_OFFSET UNITYSDK_OFFSET(0x9C5C020)
#define CLASS_1_999AE0B49D951C72_METHOD_1_F5ED99163B68DD63_OFFSET UNITYSDK_OFFSET(0x9C5BEF0)
#define CLASS_1_999AE0B49D951C72__CTOR_OFFSET UNITYSDK_OFFSET(0x9C5C010)

inline static constexpr unsigned int Class_1_999AE0B49D951C72_TypeDefinitionIndex = 50798;

class Class_1_999AE0B49D951C72 : public ::System::Object
{
public:
	::RPG::GameCore::PlayerOutfitDetailRow* Field_1_0; // 0x10
	::RPG::GameCore::AvatarOutfitModelConfig* _Config_k__BackingField; // 0x18
	::System::UInt32 _ID_k__BackingField; // 0x20

	::System::Void _ctor(::System::UInt32 a1, ::RPG::GameCore::AvatarOutfitModelConfig* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::RPG::GameCore::AvatarOutfitModelConfig*))((::PBYTE)hIl2Cpp + CLASS_1_999AE0B49D951C72__CTOR_OFFSET))(this, a1, a2);
	}

	::System::UInt32 get_ID()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_999AE0B49D951C72_GET_ID_OFFSET))(this);
	}

	::RPG::GameCore::AvatarOutfitModelConfig* get_Config()
	{
		return ((::RPG::GameCore::AvatarOutfitModelConfig*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_999AE0B49D951C72_GET_CONFIG_OFFSET))(this);
	}

	static ::Class_1_999AE0B49D951C72* Method_1_F5ED99163B68DD63(::RPG::GameCore::PlayerOutfitDetailRow* a1)
	{
		return ((::Class_1_999AE0B49D951C72*(*)(::RPG::GameCore::PlayerOutfitDetailRow*))((::PBYTE)hIl2Cpp + CLASS_1_999AE0B49D951C72_METHOD_1_F5ED99163B68DD63_OFFSET))(a1);
	}

	static ::Class_1_999AE0B49D951C72* Method_1_BCD1E469DC98ED41(::System::UInt32 a1, ::Class_1_6F1A105107B2BC27* a2)
	{
		return ((::Class_1_999AE0B49D951C72*(*)(::System::UInt32, ::Class_1_6F1A105107B2BC27*))((::PBYTE)hIl2Cpp + CLASS_1_999AE0B49D951C72_METHOD_1_BCD1E469DC98ED41_OFFSET))(a1, a2);
	}
};

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/BodySize.h"
#include "unitysdk/RPG/GameCore/GameComponentBase.h"

namespace RPG::AvatarSystem { class IAvatar; }
namespace RPG::Client { class IAvatarSkinData; }
namespace RPG::GameCore { class AdventureCharacterConfig; }
namespace System { class String; }

#define CLASS_2_A586D0C837F5D16D_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1892ABD0)
#define CLASS_2_A586D0C837F5D16D_METHOD_2_128774387667156B_OFFSET UNITYSDK_OFFSET(0x1892ABB0)
#define CLASS_2_A586D0C837F5D16D_METHOD_2_20B34875EFF4EB0F_OFFSET UNITYSDK_OFFSET(0x1892AA20)
#define CLASS_2_A586D0C837F5D16D_METHOD_2_20B88645258E9357_OFFSET UNITYSDK_OFFSET(0x1892AA90)
#define CLASS_2_A586D0C837F5D16D_METHOD_2_88B60F3B95FAA4F1_OFFSET UNITYSDK_OFFSET(0x1892AB00)
#define CLASS_2_A586D0C837F5D16D_METHOD_2_B5D7508463F26E87_OFFSET UNITYSDK_OFFSET(0x1892A9B0)
#define CLASS_2_A586D0C837F5D16D_METHOD_2_D578E705DC1B8121_OFFSET UNITYSDK_OFFSET(0x1892AB60)
#define CLASS_2_A586D0C837F5D16D__CTOR_OFFSET UNITYSDK_OFFSET(0x1892AC20)

inline static constexpr unsigned int Class_2_A586D0C837F5D16D_TypeDefinitionIndex = 57690;

class Class_2_A586D0C837F5D16D : public ::RPG::GameCore::GameComponentBase
{
public:
	::RPG::GameCore::AdventureCharacterConfig* CKJJCNCOCKB; // 0x18
	::RPG::AvatarSystem::IAvatar* BBBMGEAKHEB; // 0x20
	::System::UInt32 GHBANBOFIOH; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A586D0C837F5D16D__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_B5D7508463F26E87(::RPG::AvatarSystem::IAvatar* a1, ::System::UInt32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::AvatarSystem::IAvatar*, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_2_A586D0C837F5D16D_METHOD_2_B5D7508463F26E87_OFFSET))(this, a1, a2);
	}

	::System::UInt32 Method_2_20B34875EFF4EB0F()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A586D0C837F5D16D_METHOD_2_20B34875EFF4EB0F_OFFSET))(this);
	}

	::RPG::Client::IAvatarSkinData* Method_2_20B88645258E9357()
	{
		return ((::RPG::Client::IAvatarSkinData*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A586D0C837F5D16D_METHOD_2_20B88645258E9357_OFFSET))(this);
	}

	::System::String* Method_2_88B60F3B95FAA4F1()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A586D0C837F5D16D_METHOD_2_88B60F3B95FAA4F1_OFFSET))(this);
	}

	::RPG::GameCore::BodySize Method_2_D578E705DC1B8121()
	{
		return ((::RPG::GameCore::BodySize(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A586D0C837F5D16D_METHOD_2_D578E705DC1B8121_OFFSET))(this);
	}

	::System::String* Method_2_128774387667156B()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A586D0C837F5D16D_METHOD_2_128774387667156B_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A586D0C837F5D16D_DISPOSE_OFFSET))(this);
	}
};

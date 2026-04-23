#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/BodySize.h"
#include "unitysdk/RPG/GameCore/GameComponentBase.h"

namespace RPG::Client { class IAvatarInfoProvider; }
namespace RPG::Client { class IAvatarSkinData; }
namespace RPG::GameCore { class AdventureCharacterConfig; }
namespace System { class String; }

#define CLASS_2_62BAA9636A163B2C_DISPOSE_OFFSET UNITYSDK_OFFSET(0x994E310)
#define CLASS_2_62BAA9636A163B2C_METHOD_2_0E4E6E6A8439C80D_OFFSET UNITYSDK_OFFSET(0x994E0F0)
#define CLASS_2_62BAA9636A163B2C_METHOD_2_128774387667156B_OFFSET UNITYSDK_OFFSET(0x994E2F0)
#define CLASS_2_62BAA9636A163B2C_METHOD_2_1BBA05A43E4FAE95_OFFSET UNITYSDK_OFFSET(0x994E1D0)
#define CLASS_2_62BAA9636A163B2C_METHOD_2_20B34875EFF4EB0F_OFFSET UNITYSDK_OFFSET(0x994E160)
#define CLASS_2_62BAA9636A163B2C_METHOD_2_88B60F3B95FAA4F1_OFFSET UNITYSDK_OFFSET(0x994E240)
#define CLASS_2_62BAA9636A163B2C_METHOD_2_D578E705DC1B8121_OFFSET UNITYSDK_OFFSET(0x994E2A0)
#define CLASS_2_62BAA9636A163B2C__CTOR_OFFSET UNITYSDK_OFFSET(0x994E360)

inline static constexpr unsigned int Class_2_62BAA9636A163B2C_TypeDefinitionIndex = 53037;

class Class_2_62BAA9636A163B2C : public ::RPG::GameCore::GameComponentBase
{
public:
	::RPG::Client::IAvatarInfoProvider* Field_2_0; // 0x18
	::RPG::GameCore::AdventureCharacterConfig* Field_2_2; // 0x20
	::System::UInt32 Field_2_1; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_62BAA9636A163B2C__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_0E4E6E6A8439C80D(::RPG::Client::IAvatarInfoProvider* a1, ::System::UInt32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::IAvatarInfoProvider*, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_2_62BAA9636A163B2C_METHOD_2_0E4E6E6A8439C80D_OFFSET))(this, a1, a2);
	}

	::System::UInt32 Method_2_20B34875EFF4EB0F()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_62BAA9636A163B2C_METHOD_2_20B34875EFF4EB0F_OFFSET))(this);
	}

	::RPG::Client::IAvatarSkinData* Method_2_1BBA05A43E4FAE95()
	{
		return ((::RPG::Client::IAvatarSkinData*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_62BAA9636A163B2C_METHOD_2_1BBA05A43E4FAE95_OFFSET))(this);
	}

	::System::String* Method_2_88B60F3B95FAA4F1()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_62BAA9636A163B2C_METHOD_2_88B60F3B95FAA4F1_OFFSET))(this);
	}

	::RPG::GameCore::BodySize Method_2_D578E705DC1B8121()
	{
		return ((::RPG::GameCore::BodySize(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_62BAA9636A163B2C_METHOD_2_D578E705DC1B8121_OFFSET))(this);
	}

	::System::String* Method_2_128774387667156B()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_62BAA9636A163B2C_METHOD_2_128774387667156B_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_62BAA9636A163B2C_DISPOSE_OFFSET))(this);
	}
};

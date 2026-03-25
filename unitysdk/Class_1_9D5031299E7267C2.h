#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::AvatarSystem { class IAvatar; }
namespace RPG::GameCore { class AvatarRowData; }

#define CLASS_1_9D5031299E7267C2_METHOD_1_5F43FDF46CCBFAAA_OFFSET UNITYSDK_OFFSET(0xA448220)
#define CLASS_1_9D5031299E7267C2_METHOD_1_A09387834EE4A072_OFFSET UNITYSDK_OFFSET(0xA448290)
#define CLASS_1_9D5031299E7267C2__CTOR_OFFSET UNITYSDK_OFFSET(0xA448320)

inline static constexpr unsigned int Class_1_9D5031299E7267C2_TypeDefinitionIndex = 50904;

class Class_1_9D5031299E7267C2 : public ::System::Object
{
public:
	::RPG::AvatarSystem::IAvatar* Field_1_0; // 0x10
	::RPG::GameCore::AvatarRowData* Field_1_1; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9D5031299E7267C2__CTOR_OFFSET))(this);
	}

	::RPG::GameCore::AvatarRowData* Method_1_5F43FDF46CCBFAAA()
	{
		return ((::RPG::GameCore::AvatarRowData*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9D5031299E7267C2_METHOD_1_5F43FDF46CCBFAAA_OFFSET))(this);
	}

	::System::Void Method_1_A09387834EE4A072(::RPG::AvatarSystem::IAvatar* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::AvatarSystem::IAvatar*))((::PBYTE)hIl2Cpp + CLASS_1_9D5031299E7267C2_METHOD_1_A09387834EE4A072_OFFSET))(this, a1);
	}
};

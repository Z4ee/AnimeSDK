#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GameComponentBase.h"

class Class_1_D0A436E9F905F36D;
namespace RPG::AvatarSystem { class IAvatar; }
namespace RPG::GameCore { class CharacterModelComponent; }
namespace RPG::GameCore { class GameEntity; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_2_B904A96E82E9689A_DISPOSE_OFFSET UNITYSDK_OFFSET(0x13A4A3D0)
#define CLASS_2_B904A96E82E9689A_METHOD_2_2ADDC85169A509AB_OFFSET UNITYSDK_OFFSET(0x13A4A5A0)
#define CLASS_2_B904A96E82E9689A_METHOD_2_7F7D1DCD32591DB8_OFFSET UNITYSDK_OFFSET(0x13A49F40)
#define CLASS_2_B904A96E82E9689A_METHOD_2_89EF21CA0414B145_OFFSET UNITYSDK_OFFSET(0x13A49FE0)
#define CLASS_2_B904A96E82E9689A_METHOD_2_8A05DE1403363D53_OFFSET UNITYSDK_OFFSET(0x13A4A380)
#define CLASS_2_B904A96E82E9689A_METHOD_2_9A97C8307BC91C83_OFFSET UNITYSDK_OFFSET(0x13A4A710)
#define CLASS_2_B904A96E82E9689A_METHOD_2_E4782AED5DFF01B2_OFFSET UNITYSDK_OFFSET(0x13A4A500)
#define CLASS_2_B904A96E82E9689A_METHOD_2_F4ADC37B63F4E9EF_OFFSET UNITYSDK_OFFSET(0x13A4A2A0)
#define CLASS_2_B904A96E82E9689A__CTOR_OFFSET UNITYSDK_OFFSET(0x13A4A910)

inline static constexpr unsigned int Class_2_B904A96E82E9689A_TypeDefinitionIndex = 54620;

class Class_2_B904A96E82E9689A : public ::RPG::GameCore::GameComponentBase
{
public:
	::System::String* Field_2_0; // 0x18
	::Class_1_D0A436E9F905F36D* Field_2_1; // 0x20
	::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>* Field_2_2; // 0x28
	::RPG::AvatarSystem::IAvatar* Field_2_3; // 0x30
	::System::UInt32 Field_2_4; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B904A96E82E9689A__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_7F7D1DCD32591DB8(::RPG::AvatarSystem::IAvatar* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::AvatarSystem::IAvatar*))((::PBYTE)hIl2Cpp + CLASS_2_B904A96E82E9689A_METHOD_2_7F7D1DCD32591DB8_OFFSET))(this, a1);
	}

	::System::Void Method_2_F4ADC37B63F4E9EF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B904A96E82E9689A_METHOD_2_F4ADC37B63F4E9EF_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B904A96E82E9689A_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_2_89EF21CA0414B145()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B904A96E82E9689A_METHOD_2_89EF21CA0414B145_OFFSET))(this);
	}

	::System::Void Method_2_E4782AED5DFF01B2(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_2_B904A96E82E9689A_METHOD_2_E4782AED5DFF01B2_OFFSET))(this, a1);
	}

	::System::Void Method_2_2ADDC85169A509AB()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B904A96E82E9689A_METHOD_2_2ADDC85169A509AB_OFFSET))(this);
	}

	::System::Void Method_2_8A05DE1403363D53(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_2_B904A96E82E9689A_METHOD_2_8A05DE1403363D53_OFFSET))(this, a1);
	}

	static ::System::Void Method_2_9A97C8307BC91C83(::RPG::GameCore::CharacterModelComponent* a1, ::System::String* a2)
	{
		return ((::System::Void(*)(::RPG::GameCore::CharacterModelComponent*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_B904A96E82E9689A_METHOD_2_9A97C8307BC91C83_OFFSET))(a1, a2);
	}
};

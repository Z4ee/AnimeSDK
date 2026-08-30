#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CharacterMovementTiming.h"
#include "unitysdk/RPG/MVector3.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class TransformComponent; }

#define CLASS_1_0FB80D70D80C34C9_METHOD_1_2685B6183E614529_OFFSET UNITYSDK_OFFSET(0x15B95A90)
#define CLASS_1_0FB80D70D80C34C9_METHOD_1_44AC65D71E233390_OFFSET UNITYSDK_OFFSET(0x15B95A00)
#define CLASS_1_0FB80D70D80C34C9_METHOD_1_6AE70BB345E12F27_OFFSET UNITYSDK_OFFSET(0x15B959E0)
#define CLASS_1_0FB80D70D80C34C9_METHOD_1_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x15B95AF0)
#define CLASS_1_0FB80D70D80C34C9__CTOR_OFFSET UNITYSDK_OFFSET(0x15B959F0)

inline static constexpr unsigned int Class_1_0FB80D70D80C34C9_TypeDefinitionIndex = 57122;

class Class_1_0FB80D70D80C34C9 : public ::System::Object
{
public:
	::RPG::GameCore::TransformComponent* PDJGEDNLBKJ; // 0x10

	::System::Void _ctor(::RPG::GameCore::TransformComponent* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TransformComponent*))((::PBYTE)hIl2Cpp + CLASS_1_0FB80D70D80C34C9__CTOR_OFFSET))(this, a1);
	}

	::RPG::GameCore::CharacterMovementTiming Method_1_6AE70BB345E12F27()
	{
		return ((::RPG::GameCore::CharacterMovementTiming(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0FB80D70D80C34C9_METHOD_1_6AE70BB345E12F27_OFFSET))(this);
	}

	::System::Void Method_1_44AC65D71E233390(::RPG::MVector3 a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::MVector3, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_0FB80D70D80C34C9_METHOD_1_44AC65D71E233390_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_2685B6183E614529(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_0FB80D70D80C34C9_METHOD_1_2685B6183E614529_OFFSET))(this, a1);
	}

	::System::Void Method_1_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0FB80D70D80C34C9_METHOD_1_CA373AA1C7054598_OFFSET))(this);
	}
};

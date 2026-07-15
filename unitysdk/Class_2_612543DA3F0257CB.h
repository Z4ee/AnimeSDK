#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_43BD383C98B4C0C5_117.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"

namespace RPG::GameCore { class GameEntity; }
namespace System { class String; }

#define CLASS_2_612543DA3F0257CB__CCTOR_OFFSET UNITYSDK_OFFSET(0x16C7B5F0)
#define CLASS_2_612543DA3F0257CB__CTOR_OFFSET UNITYSDK_OFFSET(0x16C7B5E0)

inline static constexpr unsigned int Class_2_612543DA3F0257CB_TypeDefinitionIndex = 53706;

class Class_2_612543DA3F0257CB : public ::Class_1_43BD383C98B4C0C5_117
{
public:
	static ::Class_2_612543DA3F0257CB** StaticGet_Field_2_0()
	{
		return (::Class_2_612543DA3F0257CB**)Il2CppClass::FromTypeDefinitionIndex(Class_2_612543DA3F0257CB_TypeDefinitionIndex)->GetStaticField(0x1DD0);
	}
	::RPG::GameCore::GameEntity* Field_2_1; // 0x10
	::System::String* Field_2_2; // 0x18
	::RPG::GameCore::FixPoint Field_2_3; // 0x20
	::RPG::GameCore::FixPoint Field_2_4; // 0x28
	::RPG::GameCore::FixPoint Field_2_5; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_612543DA3F0257CB__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_612543DA3F0257CB__CCTOR_OFFSET))();
	}
};

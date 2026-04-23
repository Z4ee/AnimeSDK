#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CharacterMotionFlag.h"
#include "unitysdk/Struct_2_77BC76C88383D2BD.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class GameEntity; }

#define CLASS_1_D95A52EE58A402D1_METHOD_1_1DAE4FBFF15AFD79_OFFSET UNITYSDK_OFFSET(0xD3A48A0)
#define CLASS_1_D95A52EE58A402D1_METHOD_1_40EF92E172A62EF5_OFFSET UNITYSDK_OFFSET(0xD3A52D0)
#define CLASS_1_D95A52EE58A402D1_METHOD_1_43E290A0B26B39F6_OFFSET UNITYSDK_OFFSET(0xD3A5630)
#define CLASS_1_D95A52EE58A402D1_METHOD_1_44E0E8A2B1BD80E6_OFFSET UNITYSDK_OFFSET(0xD3A50D0)
#define CLASS_1_D95A52EE58A402D1_METHOD_1_89FADE33F34E4AE0_OFFSET UNITYSDK_OFFSET(0xD3A55A0)
#define CLASS_1_D95A52EE58A402D1_METHOD_1_F0AE510290C74B9B_OFFSET UNITYSDK_OFFSET(0xD3A4EA0)
#define CLASS_1_D95A52EE58A402D1__CTOR_OFFSET UNITYSDK_OFFSET(0xD3A56B0)

inline static constexpr unsigned int Class_1_D95A52EE58A402D1_TypeDefinitionIndex = 48390;

class Class_1_D95A52EE58A402D1 : public ::System::Object
{
public:
	// static const ::System::Single Field_1_0; // 0x0
	// static const ::System::Single Field_1_3; // 0x0
	// static const ::System::Single Field_1_4; // 0x0
	::Il2CppArray<::Struct_2_77BC76C88383D2BD>* Field_1_2; // 0x10
	::System::Single Field_1_1; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D95A52EE58A402D1__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_1DAE4FBFF15AFD79(::RPG::GameCore::GameEntity* a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_D95A52EE58A402D1_METHOD_1_1DAE4FBFF15AFD79_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_F0AE510290C74B9B(::System::Single a1, ::System::Single a2, ::System::Single a3, ::System::Single a4, ::RPG::GameCore::CharacterMotionFlag& a5, ::System::Single& a6)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single, ::System::Single, ::System::Single, ::RPG::GameCore::CharacterMotionFlag&, ::System::Single&))((::PBYTE)hIl2Cpp + CLASS_1_D95A52EE58A402D1_METHOD_1_F0AE510290C74B9B_OFFSET))(this, a1, a2, a3, a4, a5, a6);
	}

	::System::Void Method_1_40EF92E172A62EF5(::System::Single a1, ::System::Single a2, ::System::Single a3, ::System::Single a4, ::System::Single a5, ::System::Single a6, ::RPG::GameCore::CharacterMotionFlag& a7, ::System::Single& a8)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single, ::System::Single, ::System::Single, ::System::Single, ::System::Single, ::RPG::GameCore::CharacterMotionFlag&, ::System::Single&))((::PBYTE)hIl2Cpp + CLASS_1_D95A52EE58A402D1_METHOD_1_40EF92E172A62EF5_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8);
	}

	::System::Single Method_1_89FADE33F34E4AE0(::System::Single a1)
	{
		return ((::System::Single(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_D95A52EE58A402D1_METHOD_1_89FADE33F34E4AE0_OFFSET))(this, a1);
	}

	::System::Single Method_1_43E290A0B26B39F6(::System::Single a1, ::System::Single a2)
	{
		return ((::System::Single(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_D95A52EE58A402D1_METHOD_1_43E290A0B26B39F6_OFFSET))(this, a1, a2);
	}

	::System::Single Method_1_44E0E8A2B1BD80E6(::System::Single a1, ::System::Single a2, ::System::Single a3, ::System::Single a4, ::System::Single a5)
	{
		return ((::System::Single(*)(::PVOID, ::System::Single, ::System::Single, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_D95A52EE58A402D1_METHOD_1_44E0E8A2B1BD80E6_OFFSET))(this, a1, a2, a3, a4, a5);
	}
};

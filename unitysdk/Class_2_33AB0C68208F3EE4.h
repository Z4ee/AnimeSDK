#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_CA217ABF4E3B4F3F.h"
#include "unitysdk/RPG/GameCore/AbilityProperty.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/Struct_2_5909FD7779934CCA.h"
#include "unitysdk/Struct_2_96F8F0A04B900A9E.h"
#include "unitysdk/System/Nullable_1.h"

namespace RPG::GameCore { class AvatarDataComponent; }
namespace RPG::GameCore { class BattleGridFightAvatarData; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class GridFightManager; }
namespace System { class Action; }

#define CLASS_2_33AB0C68208F3EE4_METHOD_2_151E25A63D14DDB0_OFFSET UNITYSDK_OFFSET(0x1419C6B0)
#define CLASS_2_33AB0C68208F3EE4_METHOD_2_15A76085D8A9AE23_OFFSET UNITYSDK_OFFSET(0x1419C450)
#define CLASS_2_33AB0C68208F3EE4_METHOD_2_28377F7D556D88B1_OFFSET UNITYSDK_OFFSET(0x1419CA20)
#define CLASS_2_33AB0C68208F3EE4_METHOD_2_2E53C5DB4AAD362C_OFFSET UNITYSDK_OFFSET(0x1419C7F0)
#define CLASS_2_33AB0C68208F3EE4_METHOD_2_531645807A27D0FD_OFFSET UNITYSDK_OFFSET(0x1419C9C0)
#define CLASS_2_33AB0C68208F3EE4_METHOD_2_56CE4AFC5339F746_OFFSET UNITYSDK_OFFSET(0x1419C4F0)
#define CLASS_2_33AB0C68208F3EE4_METHOD_2_5D9CF83CFC617CF9_OFFSET UNITYSDK_OFFSET(0x1419CB20)
#define CLASS_2_33AB0C68208F3EE4_METHOD_2_5F99198E5C2A08E8_OFFSET UNITYSDK_OFFSET(0x1419C900)
#define CLASS_2_33AB0C68208F3EE4_ONACQUIRE_OFFSET UNITYSDK_OFFSET(0x1419C630)
#define CLASS_2_33AB0C68208F3EE4_ONRETURN_OFFSET UNITYSDK_OFFSET(0x1419C7A0)
#define CLASS_2_33AB0C68208F3EE4__CTOR_OFFSET UNITYSDK_OFFSET(0x1419CAF0)

inline static constexpr unsigned int Class_2_33AB0C68208F3EE4_TypeDefinitionIndex = 67501;

class Class_2_33AB0C68208F3EE4 : public ::Class_1_CA217ABF4E3B4F3F
{
public:
	::RPG::GameCore::GameEntity* Field_2_0; // 0x60
	::System::Action* Field_2_1; // 0x68
	::System::Boolean Field_2_2; // 0x70

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_33AB0C68208F3EE4__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_15A76085D8A9AE23(::Struct_2_96F8F0A04B900A9E a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_96F8F0A04B900A9E))((::PBYTE)hIl2Cpp + CLASS_2_33AB0C68208F3EE4_METHOD_2_15A76085D8A9AE23_OFFSET))(this, a1);
	}

	::System::Void OnAcquire(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_2_33AB0C68208F3EE4_ONACQUIRE_OFFSET))(this, a1);
	}

	::System::Void OnReturn()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_33AB0C68208F3EE4_ONRETURN_OFFSET))(this);
	}

	::System::Void Method_2_56CE4AFC5339F746()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_33AB0C68208F3EE4_METHOD_2_56CE4AFC5339F746_OFFSET))(this);
	}

	::System::Void Method_2_151E25A63D14DDB0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_33AB0C68208F3EE4_METHOD_2_151E25A63D14DDB0_OFFSET))(this);
	}

	::System::Void Method_2_2E53C5DB4AAD362C(::RPG::GameCore::AbilityProperty a1, ::System::Nullable_1<::RPG::GameCore::FixPoint> a2, ::RPG::GameCore::FixPoint a3, ::RPG::GameCore::FixPoint a4, ::Struct_2_5909FD7779934CCA a5)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::AbilityProperty, ::System::Nullable_1<::RPG::GameCore::FixPoint>, ::RPG::GameCore::FixPoint, ::RPG::GameCore::FixPoint, ::Struct_2_5909FD7779934CCA))((::PBYTE)hIl2Cpp + CLASS_2_33AB0C68208F3EE4_METHOD_2_2E53C5DB4AAD362C_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::RPG::GameCore::AvatarDataComponent* Method_2_531645807A27D0FD()
	{
		return ((::RPG::GameCore::AvatarDataComponent*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_33AB0C68208F3EE4_METHOD_2_531645807A27D0FD_OFFSET))(this);
	}

	::RPG::GameCore::BattleGridFightAvatarData* Method_2_5F99198E5C2A08E8()
	{
		return ((::RPG::GameCore::BattleGridFightAvatarData*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_33AB0C68208F3EE4_METHOD_2_5F99198E5C2A08E8_OFFSET))(this);
	}

	::RPG::GameCore::GridFightManager* Method_2_28377F7D556D88B1()
	{
		return ((::RPG::GameCore::GridFightManager*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_33AB0C68208F3EE4_METHOD_2_28377F7D556D88B1_OFFSET))(this);
	}

	::System::Void Method_2_5D9CF83CFC617CF9(::Struct_2_96F8F0A04B900A9E a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_96F8F0A04B900A9E))((::PBYTE)hIl2Cpp + CLASS_2_33AB0C68208F3EE4_METHOD_2_5D9CF83CFC617CF9_OFFSET))(this, a1);
	}
};

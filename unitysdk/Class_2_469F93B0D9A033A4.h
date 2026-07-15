#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_CA217ABF4E3B4F3F.h"
#include "unitysdk/RPG/GameCore/AbilityProperty.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/Struct_2_5909FD7779934CCA.h"
#include "unitysdk/System/Nullable_1.h"

class Class_1_BA94109D2F811389;
class Class_2_270CD7F686A4CFB3;
class Class_2_616025E65B2913BC;
class Class_2_78C8C3A77A6DBE61;
class Class_2_D8FA915B7E1BF7BE;
class Class_2_DE37ACFC4BC7D654;
namespace RPG::GameCore { class BattleGridFightAvatarData; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class LevelBattleEventCreate; }
namespace System { class Object; }
namespace System { class String; }
namespace UnityEngine { class Animator; }
namespace UnityEngine { class CanvasGroup; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::UI { class Button; }
namespace UnityEngine::UI { class Image; }

#define CLASS_2_469F93B0D9A033A4_AUTOBINDCALLBACK_OFFSET UNITYSDK_OFFSET(0x16F281F0)
#define CLASS_2_469F93B0D9A033A4_AUTOREMOVECALLBACK_OFFSET UNITYSDK_OFFSET(0x16F28770)
#define CLASS_2_469F93B0D9A033A4_METHOD_2_0C88AB06D46E777A_OFFSET UNITYSDK_OFFSET(0x16F25FC0)
#define CLASS_2_469F93B0D9A033A4_METHOD_2_0CC4BC19C602BCD0_OFFSET UNITYSDK_OFFSET(0x16F268C0)
#define CLASS_2_469F93B0D9A033A4_METHOD_2_0D372435D9CAE4BC_OFFSET UNITYSDK_OFFSET(0x16F27560)
#define CLASS_2_469F93B0D9A033A4_METHOD_2_2B38BAF373E3F74D_OFFSET UNITYSDK_OFFSET(0x16F26640)
#define CLASS_2_469F93B0D9A033A4_METHOD_2_3845AD389B8E1E47_OFFSET UNITYSDK_OFFSET(0x16F27600)
#define CLASS_2_469F93B0D9A033A4_METHOD_2_62FC2DCD2EF869D5_OFFSET UNITYSDK_OFFSET(0x16F26FE0)
#define CLASS_2_469F93B0D9A033A4_METHOD_2_6ACD15849AFFCD1A_OFFSET UNITYSDK_OFFSET(0x16F26360)
#define CLASS_2_469F93B0D9A033A4_METHOD_2_731936E49075EBC2_OFFSET UNITYSDK_OFFSET(0x16F26A00)
#define CLASS_2_469F93B0D9A033A4_METHOD_2_755870B55A8B3AFF_1_OFFSET UNITYSDK_OFFSET(0x16F260E0)
#define CLASS_2_469F93B0D9A033A4_METHOD_2_755870B55A8B3AFF_2_OFFSET UNITYSDK_OFFSET(0x16F26130)
#define CLASS_2_469F93B0D9A033A4_METHOD_2_755870B55A8B3AFF_3_OFFSET UNITYSDK_OFFSET(0x16F26180)
#define CLASS_2_469F93B0D9A033A4_METHOD_2_755870B55A8B3AFF_4_OFFSET UNITYSDK_OFFSET(0x16F261D0)
#define CLASS_2_469F93B0D9A033A4_METHOD_2_755870B55A8B3AFF_5_OFFSET UNITYSDK_OFFSET(0x16F26220)
#define CLASS_2_469F93B0D9A033A4_METHOD_2_755870B55A8B3AFF_6_OFFSET UNITYSDK_OFFSET(0x16F26270)
#define CLASS_2_469F93B0D9A033A4_METHOD_2_755870B55A8B3AFF_7_OFFSET UNITYSDK_OFFSET(0x16F262C0)
#define CLASS_2_469F93B0D9A033A4_METHOD_2_755870B55A8B3AFF_8_OFFSET UNITYSDK_OFFSET(0x16F26310)
#define CLASS_2_469F93B0D9A033A4_METHOD_2_755870B55A8B3AFF_OFFSET UNITYSDK_OFFSET(0x16F25F70)
#define CLASS_2_469F93B0D9A033A4_METHOD_2_7DB49B5407C8FD68_OFFSET UNITYSDK_OFFSET(0x16F25D80)
#define CLASS_2_469F93B0D9A033A4_METHOD_2_848FDD59AB054F3D_OFFSET UNITYSDK_OFFSET(0x16F26F80)
#define CLASS_2_469F93B0D9A033A4_METHOD_2_8594010D6A57C9BB_OFFSET UNITYSDK_OFFSET(0x16F26960)
#define CLASS_2_469F93B0D9A033A4_METHOD_2_8C3DB70FFBBF01C7_OFFSET UNITYSDK_OFFSET(0x16F27A70)
#define CLASS_2_469F93B0D9A033A4_METHOD_2_96BDC4B57CCFE000_OFFSET UNITYSDK_OFFSET(0x16F27700)
#define CLASS_2_469F93B0D9A033A4_METHOD_2_B00A1D822E6F5C31_OFFSET UNITYSDK_OFFSET(0x16F26E40)
#define CLASS_2_469F93B0D9A033A4_METHOD_2_BD40450441797C58_OFFSET UNITYSDK_OFFSET(0x16F25D30)
#define CLASS_2_469F93B0D9A033A4_METHOD_2_E11AC65AA0DC2249_OFFSET UNITYSDK_OFFSET(0x16F26DE0)
#define CLASS_2_469F93B0D9A033A4_METHOD_2_E6AAC7A78A275E2F_OFFSET UNITYSDK_OFFSET(0x16F277E0)
#define CLASS_2_469F93B0D9A033A4_METHOD_2_F37CDBD6D46274D2_10_OFFSET UNITYSDK_OFFSET(0x16F28070)
#define CLASS_2_469F93B0D9A033A4_METHOD_2_F37CDBD6D46274D2_11_OFFSET UNITYSDK_OFFSET(0x16F28130)
#define CLASS_2_469F93B0D9A033A4_METHOD_2_F37CDBD6D46274D2_1_OFFSET UNITYSDK_OFFSET(0x16F278D0)
#define CLASS_2_469F93B0D9A033A4_METHOD_2_F37CDBD6D46274D2_2_OFFSET UNITYSDK_OFFSET(0x16F279B0)
#define CLASS_2_469F93B0D9A033A4_METHOD_2_F37CDBD6D46274D2_3_OFFSET UNITYSDK_OFFSET(0x16F27B30)
#define CLASS_2_469F93B0D9A033A4_METHOD_2_F37CDBD6D46274D2_4_OFFSET UNITYSDK_OFFSET(0x16F27BF0)
#define CLASS_2_469F93B0D9A033A4_METHOD_2_F37CDBD6D46274D2_5_OFFSET UNITYSDK_OFFSET(0x16F27CB0)
#define CLASS_2_469F93B0D9A033A4_METHOD_2_F37CDBD6D46274D2_6_OFFSET UNITYSDK_OFFSET(0x16F27D70)
#define CLASS_2_469F93B0D9A033A4_METHOD_2_F37CDBD6D46274D2_7_OFFSET UNITYSDK_OFFSET(0x16F27E30)
#define CLASS_2_469F93B0D9A033A4_METHOD_2_F37CDBD6D46274D2_8_OFFSET UNITYSDK_OFFSET(0x16F27EF0)
#define CLASS_2_469F93B0D9A033A4_METHOD_2_F37CDBD6D46274D2_9_OFFSET UNITYSDK_OFFSET(0x16F27FB0)
#define CLASS_2_469F93B0D9A033A4_METHOD_2_F37CDBD6D46274D2_OFFSET UNITYSDK_OFFSET(0x16F25CC0)
#define CLASS_2_469F93B0D9A033A4__CCTOR_OFFSET UNITYSDK_OFFSET(0x16F28CE0)
#define CLASS_2_469F93B0D9A033A4__CTOR_OFFSET UNITYSDK_OFFSET(0x16F28CB0)
#define CLASS_2_469F93B0D9A033A4__ONBIND_OFFSET UNITYSDK_OFFSET(0x16F257F0)
#define CLASS_2_469F93B0D9A033A4__ONDISPOSE_OFFSET UNITYSDK_OFFSET(0x16F25BD0)

inline static constexpr unsigned int Class_2_469F93B0D9A033A4_TypeDefinitionIndex = 68985;

class Class_2_469F93B0D9A033A4 : public ::Class_1_CA217ABF4E3B4F3F
{
public:
	static ::System::Int32* StaticGet_Field_2_0()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_2_469F93B0D9A033A4_TypeDefinitionIndex)->GetStaticField(0x9980);
	}
	static ::System::Int32* StaticGet_Field_2_1()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_2_469F93B0D9A033A4_TypeDefinitionIndex)->GetStaticField(0x9984);
	}
	static ::System::Int32* StaticGet_Field_2_2()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_2_469F93B0D9A033A4_TypeDefinitionIndex)->GetStaticField(0x9988);
	}
	static ::System::Int32* StaticGet_Field_2_3()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_2_469F93B0D9A033A4_TypeDefinitionIndex)->GetStaticField(0x998C);
	}
	// static const ::System::String* Field_2_4; // 0x0
	::Class_2_78C8C3A77A6DBE61* Field_2_5; // 0x60
	::UnityEngine::Transform* Field_2_6; // 0x68
	::UnityEngine::Transform* Field_2_7; // 0x70
	::UnityEngine::Animator* Field_2_8; // 0x78
	::UnityEngine::UI::Image* Field_2_9; // 0x80
	::UnityEngine::Transform* Field_2_10; // 0x88
	::Class_2_D8FA915B7E1BF7BE* Field_2_11; // 0x90
	::UnityEngine::CanvasGroup* Field_2_12; // 0x98
	::RPG::GameCore::GameEntity* Field_2_13; // 0xA0
	::UnityEngine::Transform* Field_2_14; // 0xA8
	::RPG::GameCore::BattleGridFightAvatarData* Field_2_15; // 0xB0
	::Class_2_270CD7F686A4CFB3* Field_2_16; // 0xB8
	::Class_2_616025E65B2913BC* Field_2_17; // 0xC0
	::UnityEngine::UI::Image* Field_2_18; // 0xC8
	::Class_2_DE37ACFC4BC7D654* Field_2_19; // 0xD0
	::UnityEngine::UI::Button* Field_2_20; // 0xD8
	::System::Boolean Field_2_21; // 0xE0

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_469F93B0D9A033A4__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_469F93B0D9A033A4__CCTOR_OFFSET))();
	}

	::System::Void _OnBind()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_469F93B0D9A033A4__ONBIND_OFFSET))(this);
	}

	::System::Void _OnDispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_469F93B0D9A033A4__ONDISPOSE_OFFSET))(this);
	}

	::System::Void Method_2_F37CDBD6D46274D2(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_469F93B0D9A033A4_METHOD_2_F37CDBD6D46274D2_OFFSET))(this, a1);
	}

	::System::Void Method_2_BD40450441797C58(::RPG::GameCore::LevelBattleEventCreate* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::LevelBattleEventCreate*))((::PBYTE)hIl2Cpp + CLASS_2_469F93B0D9A033A4_METHOD_2_BD40450441797C58_OFFSET))(this, a1);
	}

	::System::Void Method_2_755870B55A8B3AFF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_469F93B0D9A033A4_METHOD_2_755870B55A8B3AFF_OFFSET))(this);
	}

	::System::Void Method_2_755870B55A8B3AFF_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_469F93B0D9A033A4_METHOD_2_755870B55A8B3AFF_1_OFFSET))(this);
	}

	::System::Void Method_2_755870B55A8B3AFF_2()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_469F93B0D9A033A4_METHOD_2_755870B55A8B3AFF_2_OFFSET))(this);
	}

	::System::Void Method_2_755870B55A8B3AFF_3()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_469F93B0D9A033A4_METHOD_2_755870B55A8B3AFF_3_OFFSET))(this);
	}

	::System::Void Method_2_755870B55A8B3AFF_4()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_469F93B0D9A033A4_METHOD_2_755870B55A8B3AFF_4_OFFSET))(this);
	}

	::System::Void Method_2_755870B55A8B3AFF_5()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_469F93B0D9A033A4_METHOD_2_755870B55A8B3AFF_5_OFFSET))(this);
	}

	::System::Void Method_2_755870B55A8B3AFF_6()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_469F93B0D9A033A4_METHOD_2_755870B55A8B3AFF_6_OFFSET))(this);
	}

	::System::Void Method_2_755870B55A8B3AFF_7()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_469F93B0D9A033A4_METHOD_2_755870B55A8B3AFF_7_OFFSET))(this);
	}

	::System::Void Method_2_755870B55A8B3AFF_8()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_469F93B0D9A033A4_METHOD_2_755870B55A8B3AFF_8_OFFSET))(this);
	}

	::System::Void Method_2_6ACD15849AFFCD1A(::Class_1_BA94109D2F811389* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_BA94109D2F811389*))((::PBYTE)hIl2Cpp + CLASS_2_469F93B0D9A033A4_METHOD_2_6ACD15849AFFCD1A_OFFSET))(this, a1);
	}

	::System::Void Method_2_2B38BAF373E3F74D(::RPG::GameCore::BattleGridFightAvatarData* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::BattleGridFightAvatarData*))((::PBYTE)hIl2Cpp + CLASS_2_469F93B0D9A033A4_METHOD_2_2B38BAF373E3F74D_OFFSET))(this, a1);
	}

	::System::Void Method_2_848FDD59AB054F3D(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_469F93B0D9A033A4_METHOD_2_848FDD59AB054F3D_OFFSET))(this, a1);
	}

	::System::Void Method_2_62FC2DCD2EF869D5()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_469F93B0D9A033A4_METHOD_2_62FC2DCD2EF869D5_OFFSET))(this);
	}

	::System::Void Method_2_B00A1D822E6F5C31()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_469F93B0D9A033A4_METHOD_2_B00A1D822E6F5C31_OFFSET))(this);
	}

	::System::Void Method_2_0CC4BC19C602BCD0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_469F93B0D9A033A4_METHOD_2_0CC4BC19C602BCD0_OFFSET))(this);
	}

	::System::Void Method_2_0D372435D9CAE4BC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_469F93B0D9A033A4_METHOD_2_0D372435D9CAE4BC_OFFSET))(this);
	}

	::System::Void Method_2_8594010D6A57C9BB()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_469F93B0D9A033A4_METHOD_2_8594010D6A57C9BB_OFFSET))(this);
	}

	::System::Void Method_2_731936E49075EBC2()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_469F93B0D9A033A4_METHOD_2_731936E49075EBC2_OFFSET))(this);
	}

	::System::Void Method_2_E11AC65AA0DC2249()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_469F93B0D9A033A4_METHOD_2_E11AC65AA0DC2249_OFFSET))(this);
	}

	::System::Void Method_2_0C88AB06D46E777A()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_469F93B0D9A033A4_METHOD_2_0C88AB06D46E777A_OFFSET))(this);
	}

	::System::Boolean Method_2_3845AD389B8E1E47()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_469F93B0D9A033A4_METHOD_2_3845AD389B8E1E47_OFFSET))(this);
	}

	::System::Void Method_2_96BDC4B57CCFE000(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_469F93B0D9A033A4_METHOD_2_96BDC4B57CCFE000_OFFSET))(this, a1);
	}

	::System::Void Method_2_7DB49B5407C8FD68()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_469F93B0D9A033A4_METHOD_2_7DB49B5407C8FD68_OFFSET))(this);
	}

	::System::Void Method_2_E6AAC7A78A275E2F(::RPG::GameCore::AbilityProperty a1, ::System::Nullable_1<::RPG::GameCore::FixPoint> a2, ::RPG::GameCore::FixPoint a3, ::RPG::GameCore::FixPoint a4, ::Struct_2_5909FD7779934CCA a5)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::AbilityProperty, ::System::Nullable_1<::RPG::GameCore::FixPoint>, ::RPG::GameCore::FixPoint, ::RPG::GameCore::FixPoint, ::Struct_2_5909FD7779934CCA))((::PBYTE)hIl2Cpp + CLASS_2_469F93B0D9A033A4_METHOD_2_E6AAC7A78A275E2F_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::System::Void Method_2_F37CDBD6D46274D2_1(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_469F93B0D9A033A4_METHOD_2_F37CDBD6D46274D2_1_OFFSET))(this, a1);
	}

	::System::Void Method_2_F37CDBD6D46274D2_2(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_469F93B0D9A033A4_METHOD_2_F37CDBD6D46274D2_2_OFFSET))(this, a1);
	}

	::System::Void Method_2_8C3DB70FFBBF01C7(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_469F93B0D9A033A4_METHOD_2_8C3DB70FFBBF01C7_OFFSET))(this, a1);
	}

	::System::Void Method_2_F37CDBD6D46274D2_3(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_469F93B0D9A033A4_METHOD_2_F37CDBD6D46274D2_3_OFFSET))(this, a1);
	}

	::System::Void Method_2_F37CDBD6D46274D2_4(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_469F93B0D9A033A4_METHOD_2_F37CDBD6D46274D2_4_OFFSET))(this, a1);
	}

	::System::Void Method_2_F37CDBD6D46274D2_5(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_469F93B0D9A033A4_METHOD_2_F37CDBD6D46274D2_5_OFFSET))(this, a1);
	}

	::System::Void Method_2_F37CDBD6D46274D2_6(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_469F93B0D9A033A4_METHOD_2_F37CDBD6D46274D2_6_OFFSET))(this, a1);
	}

	::System::Void Method_2_F37CDBD6D46274D2_7(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_469F93B0D9A033A4_METHOD_2_F37CDBD6D46274D2_7_OFFSET))(this, a1);
	}

	::System::Void Method_2_F37CDBD6D46274D2_8(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_469F93B0D9A033A4_METHOD_2_F37CDBD6D46274D2_8_OFFSET))(this, a1);
	}

	::System::Void Method_2_F37CDBD6D46274D2_9(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_469F93B0D9A033A4_METHOD_2_F37CDBD6D46274D2_9_OFFSET))(this, a1);
	}

	::System::Void Method_2_F37CDBD6D46274D2_10(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_469F93B0D9A033A4_METHOD_2_F37CDBD6D46274D2_10_OFFSET))(this, a1);
	}

	::System::Void Method_2_F37CDBD6D46274D2_11(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_469F93B0D9A033A4_METHOD_2_F37CDBD6D46274D2_11_OFFSET))(this, a1);
	}

	::System::Void AutoBindCallback()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_469F93B0D9A033A4_AUTOBINDCALLBACK_OFFSET))(this);
	}

	::System::Void AutoRemoveCallback()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_469F93B0D9A033A4_AUTOREMOVECALLBACK_OFFSET))(this);
	}
};

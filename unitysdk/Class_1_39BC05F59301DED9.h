#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/ConfigHollowCameraShake_ParamType.h"
#include "unitysdk/MoleMole/Config/ConfigHollowCameraShake_ShakeAtom.h"
#include "unitysdk/Struct_2_31CE9F74ED7EF316_3.h"
#include "unitysdk/Struct_2_3BFB14B0511B64BC_2.h"
#include "unitysdk/Struct_2_D57A57246A9544D0.h"
#include "unitysdk/Struct_2_FC595D1A561D8C6F_2.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Config { class ConfigHollowCameraShake; }
namespace UnityEngine { class AnimationCurve; }

#define CLASS_1_39BC05F59301DED9_METHOD_1_0BA03A469F9107A1_OFFSET UNITYSDK_OFFSET(0x1509F680)
#define CLASS_1_39BC05F59301DED9_METHOD_1_2CD98858EB7186BC_OFFSET UNITYSDK_OFFSET(0x1509F140)
#define CLASS_1_39BC05F59301DED9_METHOD_1_5323F2DF46A044DA_OFFSET UNITYSDK_OFFSET(0x1509E9C0)
#define CLASS_1_39BC05F59301DED9_METHOD_1_8B1539119E15327F_OFFSET UNITYSDK_OFFSET(0x1509ED00)
#define CLASS_1_39BC05F59301DED9_METHOD_1_B56B3C64AF620CB0_OFFSET UNITYSDK_OFFSET(0x1509F2C0)
#define CLASS_1_39BC05F59301DED9_METHOD_1_DD72C14CBFB6D403_OFFSET UNITYSDK_OFFSET(0x1509EC40)
#define CLASS_1_39BC05F59301DED9_METHOD_1_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x1509E9B0)
#define CLASS_1_39BC05F59301DED9_METHOD_1_F99C5AF42FB21261_OFFSET UNITYSDK_OFFSET(0x1509EFF0)
#define CLASS_1_39BC05F59301DED9__CTOR_OFFSET UNITYSDK_OFFSET(0x1509E9D0)

inline static constexpr unsigned int Class_1_39BC05F59301DED9_TypeDefinitionIndex = 66014;

class Class_1_39BC05F59301DED9 : public ::System::Object
{
public:
	::MoleMole::Config::ConfigHollowCameraShake_ShakeAtom Field_1_10; // 0x10
	::UnityEngine::AnimationCurve* Field_1_17; // 0x30
	::MoleMole::Config::ConfigHollowCameraShake_ShakeAtom Field_1_7; // 0x38
	::MoleMole::Config::ConfigHollowCameraShake_ShakeAtom Field_1_4; // 0x58
	::MoleMole::Config::ConfigHollowCameraShake_ShakeAtom Field_1_5; // 0x78
	::MoleMole::Config::ConfigHollowCameraShake_ShakeAtom Field_1_11; // 0x98
	::MoleMole::Config::ConfigHollowCameraShake_ShakeAtom Field_1_6; // 0xB8
	::System::Single Field_1_12; // 0xD8
	::System::Boolean Field_1_18; // 0xDC
	::System::Single Field_1_8; // 0xE0
	::System::Single Field_1_13; // 0xE4
	::System::Int32 Field_1_19; // 0xE8
	::System::Single Field_1_2; // 0xEC
	::System::Single Field_1_16; // 0xF0
	::System::Single Field_1_14; // 0xF4
	::System::Single Field_1_15; // 0xF8
	::System::Single Field_1_0; // 0xFC
	::System::Single Field_1_9; // 0x100
	::MoleMole::Config::ConfigHollowCameraShake_ParamType Field_1_1; // 0x104

	::System::Void _ctor(::MoleMole::Config::ConfigHollowCameraShake* a1, ::System::Int32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigHollowCameraShake*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_39BC05F59301DED9__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_1_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_39BC05F59301DED9_METHOD_1_F0088C88851A7DFB_OFFSET))(this);
	}

	::System::Single Method_1_5323F2DF46A044DA()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_39BC05F59301DED9_METHOD_1_5323F2DF46A044DA_OFFSET))(this);
	}

	::Struct_2_D57A57246A9544D0<::Struct_2_FC595D1A561D8C6F_2, ::Struct_2_3BFB14B0511B64BC_2> Method_1_DD72C14CBFB6D403(::Struct_2_D57A57246A9544D0<::Struct_2_FC595D1A561D8C6F_2, ::Struct_2_3BFB14B0511B64BC_2>& a1, ::Struct_2_31CE9F74ED7EF316_3& a2)
	{
		return ((::Struct_2_D57A57246A9544D0<::Struct_2_FC595D1A561D8C6F_2, ::Struct_2_3BFB14B0511B64BC_2>(*)(::PVOID, ::Struct_2_D57A57246A9544D0<::Struct_2_FC595D1A561D8C6F_2, ::Struct_2_3BFB14B0511B64BC_2>&, ::Struct_2_31CE9F74ED7EF316_3&))((::PBYTE)hIl2Cpp + CLASS_1_39BC05F59301DED9_METHOD_1_DD72C14CBFB6D403_OFFSET))(this, a1, a2);
	}

	static ::System::Single Method_1_F99C5AF42FB21261(::MoleMole::Config::ConfigHollowCameraShake_ShakeAtom& a1, ::System::Single a2)
	{
		return ((::System::Single(*)(::MoleMole::Config::ConfigHollowCameraShake_ShakeAtom&, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_39BC05F59301DED9_METHOD_1_F99C5AF42FB21261_OFFSET))(a1, a2);
	}

	::Struct_2_D57A57246A9544D0<::Struct_2_FC595D1A561D8C6F_2, ::Struct_2_3BFB14B0511B64BC_2> Method_1_2CD98858EB7186BC(::Struct_2_D57A57246A9544D0<::Struct_2_FC595D1A561D8C6F_2, ::Struct_2_3BFB14B0511B64BC_2>& a1, ::System::Single a2)
	{
		return ((::Struct_2_D57A57246A9544D0<::Struct_2_FC595D1A561D8C6F_2, ::Struct_2_3BFB14B0511B64BC_2>(*)(::PVOID, ::Struct_2_D57A57246A9544D0<::Struct_2_FC595D1A561D8C6F_2, ::Struct_2_3BFB14B0511B64BC_2>&, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_39BC05F59301DED9_METHOD_1_2CD98858EB7186BC_OFFSET))(this, a1, a2);
	}

	::Struct_2_D57A57246A9544D0<::Struct_2_FC595D1A561D8C6F_2, ::Struct_2_3BFB14B0511B64BC_2> Method_1_0BA03A469F9107A1(::Struct_2_D57A57246A9544D0<::Struct_2_FC595D1A561D8C6F_2, ::Struct_2_3BFB14B0511B64BC_2>& a1, ::Struct_2_31CE9F74ED7EF316_3& a2)
	{
		return ((::Struct_2_D57A57246A9544D0<::Struct_2_FC595D1A561D8C6F_2, ::Struct_2_3BFB14B0511B64BC_2>(*)(::PVOID, ::Struct_2_D57A57246A9544D0<::Struct_2_FC595D1A561D8C6F_2, ::Struct_2_3BFB14B0511B64BC_2>&, ::Struct_2_31CE9F74ED7EF316_3&))((::PBYTE)hIl2Cpp + CLASS_1_39BC05F59301DED9_METHOD_1_0BA03A469F9107A1_OFFSET))(this, a1, a2);
	}

	::Struct_2_D57A57246A9544D0<::Struct_2_FC595D1A561D8C6F_2, ::Struct_2_3BFB14B0511B64BC_2> Method_1_8B1539119E15327F(::Struct_2_D57A57246A9544D0<::Struct_2_FC595D1A561D8C6F_2, ::Struct_2_3BFB14B0511B64BC_2>& a1, ::System::Single a2)
	{
		return ((::Struct_2_D57A57246A9544D0<::Struct_2_FC595D1A561D8C6F_2, ::Struct_2_3BFB14B0511B64BC_2>(*)(::PVOID, ::Struct_2_D57A57246A9544D0<::Struct_2_FC595D1A561D8C6F_2, ::Struct_2_3BFB14B0511B64BC_2>&, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_39BC05F59301DED9_METHOD_1_8B1539119E15327F_OFFSET))(this, a1, a2);
	}

	static ::Struct_2_D57A57246A9544D0<::Struct_2_FC595D1A561D8C6F_2, ::Struct_2_3BFB14B0511B64BC_2> Method_1_B56B3C64AF620CB0(::Struct_2_D57A57246A9544D0<::Struct_2_FC595D1A561D8C6F_2, ::Struct_2_3BFB14B0511B64BC_2>& a1, ::System::Single a2, ::System::Single a3, ::System::Single a4, ::System::Single a5, ::System::Single a6, ::System::Single a7)
	{
		return ((::Struct_2_D57A57246A9544D0<::Struct_2_FC595D1A561D8C6F_2, ::Struct_2_3BFB14B0511B64BC_2>(*)(::Struct_2_D57A57246A9544D0<::Struct_2_FC595D1A561D8C6F_2, ::Struct_2_3BFB14B0511B64BC_2>&, ::System::Single, ::System::Single, ::System::Single, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_39BC05F59301DED9_METHOD_1_B56B3C64AF620CB0_OFFSET))(a1, a2, a3, a4, a5, a6, a7);
	}
};

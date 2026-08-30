#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_AD314FA3A58751E4.h"
#include "unitysdk/RPG/GameCore/ModifierAddReason.h"
#include "unitysdk/RPG/GameCore/ModifierStackingFlag.h"
#include "unitysdk/RPG/MVector3.h"
#include "unitysdk/System/Nullable_1.h"

class Class_0_16E4307DCC419505_417;
class Class_1_76D50EEEB128A93C;
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class TurnBasedModifierInstance; }
namespace System { class String; }

#define CLASS_2_7AA0468CE6C1F3D7_1_CLEAR_OFFSET UNITYSDK_OFFSET(0xE889670)
#define CLASS_2_7AA0468CE6C1F3D7_1_METHOD_2_3C8305164A0C9B06_OFFSET UNITYSDK_OFFSET(0xE889520)
#define CLASS_2_7AA0468CE6C1F3D7_1__CCTOR_OFFSET UNITYSDK_OFFSET(0xE889720)
#define CLASS_2_7AA0468CE6C1F3D7_1__CTOR_OFFSET UNITYSDK_OFFSET(0xE8896E0)

inline static constexpr unsigned int Class_2_7AA0468CE6C1F3D7_1_TypeDefinitionIndex = 56027;

class Class_2_7AA0468CE6C1F3D7_1 : public ::Class_1_AD314FA3A58751E4<::Class_2_7AA0468CE6C1F3D7_1*>
{
public:
	static ::Class_2_7AA0468CE6C1F3D7_1** StaticGet_JNKBIGPJDNK()
	{
		return (::Class_2_7AA0468CE6C1F3D7_1**)Il2CppClass::FromTypeDefinitionIndex(Class_2_7AA0468CE6C1F3D7_1_TypeDefinitionIndex)->GetStaticField(0x4140);
	}
	::Class_1_76D50EEEB128A93C* PMCDOCGAOIN; // 0x18
	::System::String* MKFEAAIKJNA; // 0x20
	::System::String* BFHDJGEIGBC; // 0x28
	::Class_0_16E4307DCC419505_417* KPLILJJOOGI; // 0x30
	::RPG::GameCore::TurnBasedModifierInstance* AMLKIGFLNHI; // 0x38
	::RPG::GameCore::GameEntity* MFIEDDGBIPH; // 0x40
	::RPG::GameCore::ModifierStackingFlag MLLIBMECPGM; // 0x48
	::System::Nullable_1<::System::Int32> DIIGMKEAKCD; // 0x4C
	::System::Single LDFKGILGIOA; // 0x54
	::System::Boolean JILEMDKEOKL; // 0x58
	::System::Boolean ICMOLOJEKDF; // 0x59
	::System::Boolean BPEKOACCGHK; // 0x5A
	::System::Boolean BAGDOPLOCCG; // 0x5B
	::System::Nullable_1<::System::Int32> MJPNFNMGANM; // 0x5C
	::System::Single FGGHHEIIFEL; // 0x64
	::System::Nullable_1<::System::Int32> BNJBNIIDHJN; // 0x68
	::System::Boolean LDGDOCAGNEE; // 0x70
	::System::Boolean DNNKBICNJOA; // 0x71
	::System::Boolean CPFEDPAGDFF; // 0x72
	::System::Boolean APFPPJAKNBF; // 0x73
	::RPG::GameCore::ModifierAddReason HBGNJPJNLIJ; // 0x74
	::System::Boolean ADMJLNEDMDG; // 0x78
	::System::Single OCAGLPIKAKC; // 0x7C
	::System::Nullable_1<::System::Int32> OEODJDBGBIF; // 0x80
	::System::Nullable_1<::System::Int32> AAIKGIBKHBH; // 0x88
	::RPG::MVector3 HNNPEMAPANP; // 0x90

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7AA0468CE6C1F3D7_1__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_7AA0468CE6C1F3D7_1__CCTOR_OFFSET))();
	}

	::System::Void Method_2_3C8305164A0C9B06(::Class_2_7AA0468CE6C1F3D7_1* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_7AA0468CE6C1F3D7_1*))((::PBYTE)hIl2Cpp + CLASS_2_7AA0468CE6C1F3D7_1_METHOD_2_3C8305164A0C9B06_OFFSET))(this, a1);
	}

	::System::Void Clear()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7AA0468CE6C1F3D7_1_CLEAR_OFFSET))(this);
	}
};

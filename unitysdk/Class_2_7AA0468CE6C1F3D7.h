#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_AD314FA3A58751E4.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/RPG/GameCore/ModifierAddReason.h"
#include "unitysdk/RPG/GameCore/ModifierStackingFlag.h"
#include "unitysdk/RPG/MVector3.h"
#include "unitysdk/System/Nullable_1.h"

class Class_0_16E4307DCC419505_504;
class Class_1_76D50EEEB128A93C;
class Class_2_291F7DA21A504FC4;
namespace RPG::GameCore { class GameEntity; }
namespace System { class String; }

#define CLASS_2_7AA0468CE6C1F3D7_CLEAR_OFFSET UNITYSDK_OFFSET(0xBE38C50)
#define CLASS_2_7AA0468CE6C1F3D7_METHOD_2_3C8305164A0C9B06_OFFSET UNITYSDK_OFFSET(0xBE38AF0)
#define CLASS_2_7AA0468CE6C1F3D7__CCTOR_OFFSET UNITYSDK_OFFSET(0xBE38D20)
#define CLASS_2_7AA0468CE6C1F3D7__CTOR_OFFSET UNITYSDK_OFFSET(0xBE38CE0)

inline static constexpr unsigned int Class_2_7AA0468CE6C1F3D7_TypeDefinitionIndex = 53790;

class Class_2_7AA0468CE6C1F3D7 : public ::Class_1_AD314FA3A58751E4<::Class_2_7AA0468CE6C1F3D7*>
{
public:
	static ::Class_2_7AA0468CE6C1F3D7** StaticGet_JNKBIGPJDNK()
	{
		return (::Class_2_7AA0468CE6C1F3D7**)Il2CppClass::FromTypeDefinitionIndex(Class_2_7AA0468CE6C1F3D7_TypeDefinitionIndex)->GetStaticField(0x64600);
	}
	::System::String* BFHDJGEIGBC; // 0x18
	::Class_0_16E4307DCC419505_504* KPLILJJOOGI; // 0x20
	::Class_1_76D50EEEB128A93C* PMCDOCGAOIN; // 0x28
	::RPG::GameCore::GameEntity* MFIEDDGBIPH; // 0x30
	::System::String* MKFEAAIKJNA; // 0x38
	::Class_2_291F7DA21A504FC4* AMLKIGFLNHI; // 0x40
	::System::Single OCAGLPIKAKC; // 0x48
	::System::Nullable_1<::System::Int32> DIIGMKEAKCD; // 0x4C
	::System::Nullable_1<::System::Int32> OEODJDBGBIF; // 0x54
	::System::Boolean LDGDOCAGNEE; // 0x5C
	::System::Boolean BPEKOACCGHK; // 0x5D
	::System::Nullable_1<::System::Int32> BNJBNIIDHJN; // 0x60
	::System::Nullable_1<::RPG::GameCore::FixPoint> MJPNFNMGANM; // 0x68
	::System::Nullable_1<::System::Int32> AAIKGIBKHBH; // 0x78
	::System::Single LDFKGILGIOA; // 0x80
	::RPG::GameCore::ModifierAddReason HBGNJPJNLIJ; // 0x84
	::RPG::MVector3 HNNPEMAPANP; // 0x88
	::RPG::GameCore::ModifierStackingFlag MLLIBMECPGM; // 0x94
	::System::Boolean ADMJLNEDMDG; // 0x98
	::System::Boolean DNNKBICNJOA; // 0x99
	::System::Boolean APFPPJAKNBF; // 0x9A
	::System::Boolean CPFEDPAGDFF; // 0x9B
	::System::Nullable_1<::RPG::GameCore::FixPoint> HJKAEDGCBAC; // 0xA0

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7AA0468CE6C1F3D7__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_7AA0468CE6C1F3D7__CCTOR_OFFSET))();
	}

	::System::Void Method_2_3C8305164A0C9B06(::Class_2_7AA0468CE6C1F3D7* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_7AA0468CE6C1F3D7*))((::PBYTE)hIl2Cpp + CLASS_2_7AA0468CE6C1F3D7_METHOD_2_3C8305164A0C9B06_OFFSET))(this, a1);
	}

	::System::Void Clear()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7AA0468CE6C1F3D7_CLEAR_OFFSET))(this);
	}
};

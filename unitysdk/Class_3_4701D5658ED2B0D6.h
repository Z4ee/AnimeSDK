#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ModifierCasterType.h"
#include "unitysdk/RPG/GameCore/ModifierStackingFlag.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
#include "unitysdk/RPG/MVector3.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class DynamicString; }
namespace RPG::GameCore { class TargetEvaluator; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_3_4701D5658ED2B0D6_METHOD_3_0CF8DABEC48D56B0_OFFSET UNITYSDK_OFFSET(0x1C738CA0)
#define CLASS_3_4701D5658ED2B0D6_METHOD_3_41307200E9DE3ABB_OFFSET UNITYSDK_OFFSET(0x1C738E20)
#define CLASS_3_4701D5658ED2B0D6__CTOR_OFFSET UNITYSDK_OFFSET(0x1C738D70)

inline static constexpr unsigned int Class_3_4701D5658ED2B0D6_TypeDefinitionIndex = 23911;

class Class_3_4701D5658ED2B0D6 : public ::RPG::GameCore::TaskConfig
{
public:
	::Il2CppArray<::RPG::GameCore::TaskConfig*>* LFHAABBNJDJ; // 0x18
	::System::String* MKFEAAIKJNA; // 0x20
	::System::String* BJAPMKJMKNH; // 0x28
	::RPG::GameCore::TargetEvaluator* HILNFHCPEAD; // 0x30
	::RPG::GameCore::DynamicFloat* FMIINGDFPKN; // 0x38
	::RPG::GameCore::DynamicFloat* FOJKIIBENMC; // 0x40
	::RPG::GameCore::DynamicFloat* PGKFGKELKDI; // 0x48
	::Il2CppArray<::RPG::GameCore::TaskConfig*>* KAKEMNLIPIH; // 0x50
	::RPG::GameCore::DynamicString* IFNAGLOMHBK; // 0x58
	::System::String* MMCICOAEEJI; // 0x60
	::RPG::GameCore::DynamicFloat* KIPAGNCANAJ; // 0x68
	::RPG::GameCore::DynamicFloat* LKFNPPCHCII; // 0x70
	::Il2CppArray<::RPG::GameCore::TaskConfig*>* DLCFLIBOFPN; // 0x78
	::RPG::GameCore::DynamicFloat* CFKOIAGCFDA; // 0x80
	::System::Collections::Generic::Dictionary_2<::System::String*, ::RPG::GameCore::DynamicFloat*>* FMCJJBALBEN; // 0x88
	::RPG::GameCore::DynamicFloat* HCDEOKNIGKG; // 0x90
	::RPG::GameCore::ModifierStackingFlag MLLIBMECPGM; // 0x98
	::RPG::GameCore::ModifierCasterType ALCIIPJMPAF; // 0x9C
	::System::Single LDFKGILGIOA; // 0xA0
	::System::Single OCAGLPIKAKC; // 0xA4
	::System::Boolean GCCGAPOANDM; // 0xA8
	::System::Boolean APFPPJAKNBF; // 0xA9
	::System::Boolean BPEKOACCGHK; // 0xAA
	::System::Boolean CPFEDPAGDFF; // 0xAB
	::RPG::MVector3 HNNPEMAPANP; // 0xAC
	::System::Boolean LHAFBLMBGHB; // 0xB8
	::System::Boolean DNNKBICNJOA; // 0xB9

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_4701D5658ED2B0D6__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_3_0CF8DABEC48D56B0(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_3_4701D5658ED2B0D6*& a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_3_4701D5658ED2B0D6*&))((::PBYTE)hIl2Cpp + CLASS_3_4701D5658ED2B0D6_METHOD_3_0CF8DABEC48D56B0_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_41307200E9DE3ABB(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_3_4701D5658ED2B0D6* a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_3_4701D5658ED2B0D6*))((::PBYTE)hIl2Cpp + CLASS_3_4701D5658ED2B0D6_METHOD_3_41307200E9DE3ABB_OFFSET))(a1, a2);
	}
};

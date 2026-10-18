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

#define CLASS_3_85ED59CBFA50321C_METHOD_3_0A6B9F8F03BE0A79_OFFSET UNITYSDK_OFFSET(0x1CC93F00)
#define CLASS_3_85ED59CBFA50321C_METHOD_3_41307200E9DE3ABB_OFFSET UNITYSDK_OFFSET(0x1CC94090)
#define CLASS_3_85ED59CBFA50321C__CTOR_OFFSET UNITYSDK_OFFSET(0x1CC93FE0)

inline static constexpr unsigned int Class_3_85ED59CBFA50321C_TypeDefinitionIndex = 24186;

class Class_3_85ED59CBFA50321C : public ::RPG::GameCore::TaskConfig
{
public:
	::System::String* MMCICOAEEJI; // 0x18
	::RPG::GameCore::DynamicString* IFNAGLOMHBK; // 0x20
	::RPG::GameCore::DynamicFloat* CFKOIAGCFDA; // 0x28
	::Il2CppArray<::RPG::GameCore::TaskConfig*>* DLCFLIBOFPN; // 0x30
	::RPG::GameCore::DynamicFloat* PGKFGKELKDI; // 0x38
	::RPG::GameCore::DynamicFloat* FOJKIIBENMC; // 0x40
	::RPG::GameCore::DynamicFloat* FMIINGDFPKN; // 0x48
	::System::Collections::Generic::Dictionary_2<::System::String*, ::RPG::GameCore::DynamicFloat*>* FMCJJBALBEN; // 0x50
	::Il2CppArray<::RPG::GameCore::TaskConfig*>* KAKEMNLIPIH; // 0x58
	::RPG::GameCore::DynamicFloat* HCDEOKNIGKG; // 0x60
	::Il2CppArray<::RPG::GameCore::TaskConfig*>* LFHAABBNJDJ; // 0x68
	::RPG::GameCore::DynamicFloat* LKFNPPCHCII; // 0x70
	::RPG::GameCore::DynamicFloat* KIPAGNCANAJ; // 0x78
	::System::String* BJAPMKJMKNH; // 0x80
	::System::String* MKFEAAIKJNA; // 0x88
	::RPG::GameCore::TargetEvaluator* HILNFHCPEAD; // 0x90
	::System::Boolean BPEKOACCGHK; // 0x98
	::System::Boolean CPFEDPAGDFF; // 0x99
	::RPG::MVector3 HNNPEMAPANP; // 0x9C
	::System::Single LDFKGILGIOA; // 0xA8
	::System::Single OCAGLPIKAKC; // 0xAC
	::System::Boolean APFPPJAKNBF; // 0xB0
	::System::Boolean GCCGAPOANDM; // 0xB1
	::System::Boolean DNNKBICNJOA; // 0xB2
	::System::Boolean LHAFBLMBGHB; // 0xB3
	::RPG::GameCore::ModifierStackingFlag MLLIBMECPGM; // 0xB4
	::RPG::GameCore::ModifierCasterType ALCIIPJMPAF; // 0xB8

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_85ED59CBFA50321C__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_3_0A6B9F8F03BE0A79(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_3_85ED59CBFA50321C*& a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_3_85ED59CBFA50321C*&))((::PBYTE)hIl2Cpp + CLASS_3_85ED59CBFA50321C_METHOD_3_0A6B9F8F03BE0A79_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_41307200E9DE3ABB(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_3_85ED59CBFA50321C* a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_3_85ED59CBFA50321C*))((::PBYTE)hIl2Cpp + CLASS_3_85ED59CBFA50321C_METHOD_3_41307200E9DE3ABB_OFFSET))(a1, a2);
	}
};

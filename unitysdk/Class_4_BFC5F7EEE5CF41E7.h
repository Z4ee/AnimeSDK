#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CharacterMotionFlag.h"
#include "unitysdk/RPG/GameCore/STTaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define CLASS_4_BFC5F7EEE5CF41E7_METHOD_4_162058F8831C7217_OFFSET UNITYSDK_OFFSET(0x1C7576C0)
#define CLASS_4_BFC5F7EEE5CF41E7_METHOD_4_491DC5019255BE43_OFFSET UNITYSDK_OFFSET(0x1C757760)
#define CLASS_4_BFC5F7EEE5CF41E7__CTOR_OFFSET UNITYSDK_OFFSET(0x1C757720)

inline static constexpr unsigned int Class_4_BFC5F7EEE5CF41E7_TypeDefinitionIndex = 19870;

class Class_4_BFC5F7EEE5CF41E7 : public ::RPG::GameCore::STTaskConfig
{
public:
	::System::Single EIHACODFCAF; // 0x18
	::System::Single NIMHEFPFMFB; // 0x1C
	::System::Single NCGJNLDBCNJ; // 0x20
	::System::Boolean NPCBIMFJKJN; // 0x24
	::System::Boolean KCIGOHEMFII; // 0x25
	::System::UInt32 DKDCFFAEEJJ; // 0x28
	::System::Single HFPPEDKNPIK; // 0x2C
	::RPG::GameCore::CharacterMotionFlag FPHBEHJJBIA; // 0x30
	::System::Single CALJANHOCJI; // 0x34
	::System::Single JOAGCKLELBO; // 0x38
	::System::Single AAFGMLMPLBI; // 0x3C
	::System::Int32 MBNLJEMMPNC; // 0x40
	::System::Boolean NFGFKCOECEC; // 0x44
	::System::Boolean GCANOIMDIKI; // 0x45
	::System::Boolean LPEKIEOGFKE; // 0x46
	::System::Boolean EGGFFAGKDGP; // 0x47
	::System::UInt32 OLAELANDNCE; // 0x48
	::System::Single NGCEGPHFGCL; // 0x4C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_BFC5F7EEE5CF41E7__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_4_162058F8831C7217(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_4_BFC5F7EEE5CF41E7*& a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_4_BFC5F7EEE5CF41E7*&))((::PBYTE)hIl2Cpp + CLASS_4_BFC5F7EEE5CF41E7_METHOD_4_162058F8831C7217_OFFSET))(a1, a2);
	}

	static ::System::Void Method_4_491DC5019255BE43(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_4_BFC5F7EEE5CF41E7* a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_4_BFC5F7EEE5CF41E7*))((::PBYTE)hIl2Cpp + CLASS_4_BFC5F7EEE5CF41E7_METHOD_4_491DC5019255BE43_OFFSET))(a1, a2);
	}
};

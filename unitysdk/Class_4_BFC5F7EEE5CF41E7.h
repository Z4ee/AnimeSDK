#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CharacterMotionFlag.h"
#include "unitysdk/RPG/GameCore/STTaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define CLASS_4_BFC5F7EEE5CF41E7_METHOD_4_162058F8831C7217_OFFSET UNITYSDK_OFFSET(0x1CCB3330)
#define CLASS_4_BFC5F7EEE5CF41E7_METHOD_4_491DC5019255BE43_OFFSET UNITYSDK_OFFSET(0x1CCB33D0)
#define CLASS_4_BFC5F7EEE5CF41E7__CTOR_OFFSET UNITYSDK_OFFSET(0x1CCB3390)

inline static constexpr unsigned int Class_4_BFC5F7EEE5CF41E7_TypeDefinitionIndex = 20104;

class Class_4_BFC5F7EEE5CF41E7 : public ::RPG::GameCore::STTaskConfig
{
public:
	::System::Single AAFGMLMPLBI; // 0x18
	::System::Single EIHACODFCAF; // 0x1C
	::System::Single NGCEGPHFGCL; // 0x20
	::System::UInt32 OLAELANDNCE; // 0x24
	::System::Single NIMHEFPFMFB; // 0x28
	::System::Single HFPPEDKNPIK; // 0x2C
	::System::Boolean EGGFFAGKDGP; // 0x30
	::System::Boolean NFGFKCOECEC; // 0x31
	::System::Single CALJANHOCJI; // 0x34
	::RPG::GameCore::CharacterMotionFlag FPHBEHJJBIA; // 0x38
	::System::UInt32 DKDCFFAEEJJ; // 0x3C
	::System::Single JOAGCKLELBO; // 0x40
	::System::Int32 MBNLJEMMPNC; // 0x44
	::System::Boolean NPCBIMFJKJN; // 0x48
	::System::Boolean KCIGOHEMFII; // 0x49
	::System::Boolean LPEKIEOGFKE; // 0x4A
	::System::Boolean GCANOIMDIKI; // 0x4B
	::System::Single NCGJNLDBCNJ; // 0x4C

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

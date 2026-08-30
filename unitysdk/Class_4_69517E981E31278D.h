#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CharacterMotionFlag.h"
#include "unitysdk/RPG/GameCore/STTaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define CLASS_4_69517E981E31278D_METHOD_4_491DC5019255BE43_OFFSET UNITYSDK_OFFSET(0x1D835540)
#define CLASS_4_69517E981E31278D_METHOD_4_6D3BD31FF07A4A8E_OFFSET UNITYSDK_OFFSET(0x1D8354C0)
#define CLASS_4_69517E981E31278D__CTOR_OFFSET UNITYSDK_OFFSET(0x1D835510)

inline static constexpr unsigned int Class_4_69517E981E31278D_TypeDefinitionIndex = 19870;

class Class_4_69517E981E31278D : public ::RPG::GameCore::STTaskConfig
{
public:
	::System::UInt32 DKDCFFAEEJJ; // 0x18
	::System::Single EIHACODFCAF; // 0x1C
	::System::Int32 MBNLJEMMPNC; // 0x20
	::System::Single NIMHEFPFMFB; // 0x24
	::System::Single NGCEGPHFGCL; // 0x28
	::RPG::GameCore::CharacterMotionFlag FPHBEHJJBIA; // 0x2C
	::System::Single CALJANHOCJI; // 0x30
	::System::Boolean NFGFKCOECEC; // 0x34
	::System::Boolean NPCBIMFJKJN; // 0x35
	::System::Single JOAGCKLELBO; // 0x38
	::System::Single AAFGMLMPLBI; // 0x3C
	::System::Single HFPPEDKNPIK; // 0x40
	::System::Single NCGJNLDBCNJ; // 0x44
	::System::UInt32 OLAELANDNCE; // 0x48
	::System::Boolean EGGFFAGKDGP; // 0x4C
	::System::Boolean KCIGOHEMFII; // 0x4D
	::System::Boolean LPEKIEOGFKE; // 0x4E
	::System::Boolean GCANOIMDIKI; // 0x4F

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_69517E981E31278D__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_4_6D3BD31FF07A4A8E(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_4_69517E981E31278D*& a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_4_69517E981E31278D*&))((::PBYTE)hIl2Cpp + CLASS_4_69517E981E31278D_METHOD_4_6D3BD31FF07A4A8E_OFFSET))(a1, a2);
	}

	static ::System::Void Method_4_491DC5019255BE43(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_4_69517E981E31278D* a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_4_69517E981E31278D*))((::PBYTE)hIl2Cpp + CLASS_4_69517E981E31278D_METHOD_4_491DC5019255BE43_OFFSET))(a1, a2);
	}
};

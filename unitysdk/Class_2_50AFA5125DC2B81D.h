#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/UIController.h"

class Class_2_5462E9D93C6034C6;

#define CLASS_2_50AFA5125DC2B81D_METHOD_2_08A44229CA25E941_OFFSET UNITYSDK_OFFSET(0xBFBCDB0)
#define CLASS_2_50AFA5125DC2B81D_METHOD_2_3FD121E637FAC302_OFFSET UNITYSDK_OFFSET(0xBFBD150)
#define CLASS_2_50AFA5125DC2B81D_METHOD_2_FD3B916300F77FDA_OFFSET UNITYSDK_OFFSET(0xBFBCEA0)
#define CLASS_2_50AFA5125DC2B81D__CTOR_OFFSET UNITYSDK_OFFSET(0xBFBCBF0)
#define CLASS_2_50AFA5125DC2B81D__CUSTOMBINDVIEW_OFFSET UNITYSDK_OFFSET(0xBFBCC60)
#define CLASS_2_50AFA5125DC2B81D__ONTICK_OFFSET UNITYSDK_OFFSET(0xBFBD0C0)
#define CLASS_2_50AFA5125DC2B81D__SETUPVIEW_OFFSET UNITYSDK_OFFSET(0xBFBCE40)

inline static constexpr unsigned int Class_2_50AFA5125DC2B81D_TypeDefinitionIndex = 72255;

class Class_2_50AFA5125DC2B81D : public ::RPG::Client::UIController
{
public:
	// static const ::System::Single EGGEFOFAPHE; // 0x0
	::System::UInt32 ADGBLJLHPPJ; // 0x188
	::System::UInt32 ODABLBFILEK; // 0x18C
	::System::Single ECKPKPNMBIL; // 0x190

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_50AFA5125DC2B81D__CTOR_OFFSET))(this);
	}

	::System::Void _CustomBindView()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_50AFA5125DC2B81D__CUSTOMBINDVIEW_OFFSET))(this);
	}

	::System::Void _SetupView()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_50AFA5125DC2B81D__SETUPVIEW_OFFSET))(this);
	}

	::System::Void _OnTick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_50AFA5125DC2B81D__ONTICK_OFFSET))(this, a1);
	}

	::System::Void Method_2_3FD121E637FAC302(::System::UInt32 a1, ::System::UInt32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_2_50AFA5125DC2B81D_METHOD_2_3FD121E637FAC302_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_FD3B916300F77FDA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_50AFA5125DC2B81D_METHOD_2_FD3B916300F77FDA_OFFSET))(this);
	}

	::Class_2_5462E9D93C6034C6* Method_2_08A44229CA25E941()
	{
		return ((::Class_2_5462E9D93C6034C6*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_50AFA5125DC2B81D_METHOD_2_08A44229CA25E941_OFFSET))(this);
	}
};

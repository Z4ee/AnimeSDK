#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RootMotion/FinalIK/GrounderIKThreadSolver.h"
#include "unitysdk/Struct_2_05A67A9E2D5889AA.h"
#include "unitysdk/Struct_2_1E36AD6D9A5F486C.h"
#include "unitysdk/Struct_2_9337153130FDFA1E.h"
#include "unitysdk/Struct_2_9FC3BF6B16C6AFE6.h"
#include "unitysdk/Struct_2_B87BAA35D432DB99.h"
#include "unitysdk/Struct_2_F15D3B4A9D0D9701.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class GameEntity; }

#define CLASS_1_43BD383C98B4C0C5_180_DISPOSE_OFFSET UNITYSDK_OFFSET(0xC3C0E40)
#define CLASS_1_43BD383C98B4C0C5_180__CTOR_OFFSET UNITYSDK_OFFSET(0xC3C0E30)

inline static constexpr unsigned int Class_1_43BD383C98B4C0C5_180_TypeDefinitionIndex = 68430;

class Class_1_43BD383C98B4C0C5_180 : public ::System::Object
{
public:
	::Struct_2_F15D3B4A9D0D9701 IOCCJDPHPMO; // 0x10
	::Struct_2_9FC3BF6B16C6AFE6 NFJFMDNNBIG; // 0x48
	::RootMotion::FinalIK::GrounderIKThreadSolver HBHLPDHLAMN; // 0xF8
	::Struct_2_9337153130FDFA1E MNOINHJJNEA; // 0x130
	::Struct_2_B87BAA35D432DB99 LKACFMGFOAC; // 0x168
	::Struct_2_05A67A9E2D5889AA LHFALBCKKLB; // 0x190
	::Struct_2_1E36AD6D9A5F486C FDBILNKGHHE; // 0x398
	::RPG::GameCore::GameEntity* OFHDAHHPNPJ; // 0x5D8
	::System::Boolean HDMBBDFNNNH; // 0x5E0
	::System::Boolean GJLGMCCCDCJ; // 0x5E1
	::System::Boolean NPALIKFPBAK; // 0x5E2
	::System::Boolean ICBBMHAMLML; // 0x5E3
	::System::Boolean KFPFKBDANBH; // 0x5E4
	::System::Boolean OJHMAKLGPAJ; // 0x5E5
	::System::Boolean NAHPIFIEDHL; // 0x5E6
	::System::Boolean CHGIKGMLPMI; // 0x5E7

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_43BD383C98B4C0C5_180__CTOR_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_43BD383C98B4C0C5_180_DISPOSE_OFFSET))(this);
	}
};

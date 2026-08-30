#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_201087101F08923C.h"

class Class_1_FBFA092366368ABD;
namespace RPG::Client { class VersionUpdateProgressInfo; }
namespace System { class String; }

#define CLASS_2_133BA21AA34825FD_METHOD_2_1603FD8A1E61F0F0_OFFSET UNITYSDK_OFFSET(0x19A90860)
#define CLASS_2_133BA21AA34825FD_METHOD_2_A239DF324AF4215D_OFFSET UNITYSDK_OFFSET(0x19A90710)
#define CLASS_2_133BA21AA34825FD_METHOD_2_E9A575D18A0748D9_OFFSET UNITYSDK_OFFSET(0x19A90810)
#define CLASS_2_133BA21AA34825FD_METHOD_2_F562C4CF3B08A528_OFFSET UNITYSDK_OFFSET(0x19A90AE0)
#define CLASS_2_133BA21AA34825FD__CTOR_OFFSET UNITYSDK_OFFSET(0x19A90660)

inline static constexpr unsigned int Class_2_133BA21AA34825FD_TypeDefinitionIndex = 61324;

class Class_2_133BA21AA34825FD : public ::Class_1_201087101F08923C
{
public:
	// static const ::System::Int32 HEJIPBBACOC = 0x1F4; // 0x0
	::System::String* GGALBOIEFFF; // 0x40
	::Class_1_FBFA092366368ABD* FNHMEHJKBEN; // 0x48
	::RPG::Client::VersionUpdateProgressInfo* APMIKLLFEOP; // 0x50
	::System::String* ADDBGNJAHDO; // 0x58

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_133BA21AA34825FD__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_E9A575D18A0748D9(::Class_1_FBFA092366368ABD* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_FBFA092366368ABD*))((::PBYTE)hIl2Cpp + CLASS_2_133BA21AA34825FD_METHOD_2_E9A575D18A0748D9_OFFSET))(this, a1);
	}

	::System::Void Method_2_1603FD8A1E61F0F0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_133BA21AA34825FD_METHOD_2_1603FD8A1E61F0F0_OFFSET))(this);
	}

	::System::Void Method_2_A239DF324AF4215D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_133BA21AA34825FD_METHOD_2_A239DF324AF4215D_OFFSET))(this);
	}

	::System::Void Method_2_F562C4CF3B08A528(::RPG::Client::VersionUpdateProgressInfo* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::VersionUpdateProgressInfo*))((::PBYTE)hIl2Cpp + CLASS_2_133BA21AA34825FD_METHOD_2_F562C4CF3B08A528_OFFSET))(this, a1);
	}
};

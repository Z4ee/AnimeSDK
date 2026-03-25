#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_201087101F08923C.h"

class Class_1_18B0677ECDC1AEEB;
namespace RPG::Client { class VersionUpdateProgressInfo; }
namespace System { class String; }

#define CLASS_2_4BD02DAFECCE67E6_METHOD_2_1603FD8A1E61F0F0_OFFSET UNITYSDK_OFFSET(0x10B65110)
#define CLASS_2_4BD02DAFECCE67E6_METHOD_2_1EC253B9815DA521_OFFSET UNITYSDK_OFFSET(0x10B655A0)
#define CLASS_2_4BD02DAFECCE67E6_METHOD_2_85C1529007B5C47F_OFFSET UNITYSDK_OFFSET(0x10B653F0)
#define CLASS_2_4BD02DAFECCE67E6_METHOD_2_A239DF324AF4215D_OFFSET UNITYSDK_OFFSET(0x10B64FE0)
#define CLASS_2_4BD02DAFECCE67E6_METHOD_2_E9A575D18A0748D9_OFFSET UNITYSDK_OFFSET(0x10B650C0)
#define CLASS_2_4BD02DAFECCE67E6__CTOR_OFFSET UNITYSDK_OFFSET(0x10B64F30)

inline static constexpr unsigned int Class_2_4BD02DAFECCE67E6_TypeDefinitionIndex = 49652;

class Class_2_4BD02DAFECCE67E6 : public ::Class_1_201087101F08923C
{
public:
	// static const ::System::Int32 Field_2_2 = 0x1F4; // 0x0
	::RPG::Client::VersionUpdateProgressInfo* Field_2_1; // 0x40
	::System::String* Field_2_3; // 0x48
	::Class_1_18B0677ECDC1AEEB* Field_2_0; // 0x50
	::System::String* Field_2_4; // 0x58

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4BD02DAFECCE67E6__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_E9A575D18A0748D9(::Class_1_18B0677ECDC1AEEB* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_18B0677ECDC1AEEB*))((::PBYTE)hIl2Cpp + CLASS_2_4BD02DAFECCE67E6_METHOD_2_E9A575D18A0748D9_OFFSET))(this, a1);
	}

	::System::Void Method_2_1603FD8A1E61F0F0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4BD02DAFECCE67E6_METHOD_2_1603FD8A1E61F0F0_OFFSET))(this);
	}

	::System::Void Method_2_A239DF324AF4215D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4BD02DAFECCE67E6_METHOD_2_A239DF324AF4215D_OFFSET))(this);
	}

	::System::Void Method_2_85C1529007B5C47F(::RPG::Client::VersionUpdateProgressInfo* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::VersionUpdateProgressInfo*))((::PBYTE)hIl2Cpp + CLASS_2_4BD02DAFECCE67E6_METHOD_2_85C1529007B5C47F_OFFSET))(this, a1);
	}

	::System::Void Method_2_1EC253B9815DA521()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4BD02DAFECCE67E6_METHOD_2_1EC253B9815DA521_OFFSET))(this);
	}
};

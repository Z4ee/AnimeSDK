#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/MarbleTaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define CLASS_3_5A4994080D78908E_METHOD_3_4AB367920EEA371A_OFFSET UNITYSDK_OFFSET(0x1CEACAC0)
#define CLASS_3_5A4994080D78908E_METHOD_3_E024E0080A08A9C9_OFFSET UNITYSDK_OFFSET(0x1CEACB20)
#define CLASS_3_5A4994080D78908E__CTOR_OFFSET UNITYSDK_OFFSET(0x1CEACB10)

inline static constexpr unsigned int Class_3_5A4994080D78908E_TypeDefinitionIndex = 16848;

class Class_3_5A4994080D78908E : public ::RPG::GameCore::MarbleTaskConfig
{
public:
	::System::String* NBAPNNJAJLE; // 0x10
	::System::String* HHALMPFBJPC; // 0x18
	::System::String* AJMDINFOJLE; // 0x20
	::System::String* EDLFBJEJJPB; // 0x28
	::System::Single JLLFPNIFOMB; // 0x30
	::System::Single JOACOBOICAF; // 0x34
	::System::Boolean NPBLOMFBHBH; // 0x38
	::System::UInt32 OBCOHALAFNG; // 0x3C
	::System::Int32 IMKHIDEBGEB; // 0x40
	::System::UInt32 MAGEFLCHECM; // 0x44
	::System::Single GECLIFGNLKM; // 0x48
	::System::UInt32 FLIEDGKFNOL; // 0x4C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_5A4994080D78908E__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_3_4AB367920EEA371A(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_3_5A4994080D78908E*& a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_3_5A4994080D78908E*&))((::PBYTE)hIl2Cpp + CLASS_3_5A4994080D78908E_METHOD_3_4AB367920EEA371A_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_E024E0080A08A9C9(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_3_5A4994080D78908E* a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_3_5A4994080D78908E*))((::PBYTE)hIl2Cpp + CLASS_3_5A4994080D78908E_METHOD_3_E024E0080A08A9C9_OFFSET))(a1, a2);
	}
};

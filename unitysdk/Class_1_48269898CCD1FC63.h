#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class EarlyAccessContent; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define CLASS_1_48269898CCD1FC63_METHOD_1_672565748843F43D_OFFSET UNITYSDK_OFFSET(0xB78F1C0)
#define CLASS_1_48269898CCD1FC63_METHOD_1_DB5D297A176C2473_OFFSET UNITYSDK_OFFSET(0xB78F160)
#define CLASS_1_48269898CCD1FC63__CTOR_OFFSET UNITYSDK_OFFSET(0xB78F0A0)

inline static constexpr unsigned int Class_1_48269898CCD1FC63_TypeDefinitionIndex = 68874;

class Class_1_48269898CCD1FC63 : public ::System::Object
{
public:
	::RPG::Client::EarlyAccessContent* Field_1_0; // 0x10
	::System::Collections::Generic::HashSet_1<::System::UInt32>* Field_1_1; // 0x18

	::System::Void _ctor(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_48269898CCD1FC63__CTOR_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_DB5D297A176C2473(::System::UInt32 a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_48269898CCD1FC63_METHOD_1_DB5D297A176C2473_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_672565748843F43D(::System::UInt32 a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_48269898CCD1FC63_METHOD_1_672565748843F43D_OFFSET))(this, a1);
	}
};

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Proto { class Item; }

#define CLASS_1_9E75A6F37EAB58DE__CTOR_1_OFFSET UNITYSDK_OFFSET(0xB867970)
#define CLASS_1_9E75A6F37EAB58DE__CTOR_OFFSET UNITYSDK_OFFSET(0xB867960)

inline static constexpr unsigned int Class_1_9E75A6F37EAB58DE_TypeDefinitionIndex = 62951;

class Class_1_9E75A6F37EAB58DE : public ::System::Object
{
public:
	::System::UInt32 PBELLGFMILM; // 0x10
	::System::UInt32 CMNOEFFFNPE; // 0x14
	::System::UInt32 PJAAGEPKBMM; // 0x18

	::System::Void _ctor(::System::UInt32 a1, ::System::UInt32 a2, ::System::UInt32 a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_9E75A6F37EAB58DE__CTOR_OFFSET))(this, a1, a2, a3);
	}

	::System::Void _ctor_1(::Proto::Item* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Proto::Item*))((::PBYTE)hIl2Cpp + CLASS_1_9E75A6F37EAB58DE__CTOR_1_OFFSET))(this, a1);
	}
};

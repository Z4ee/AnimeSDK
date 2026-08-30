#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_4AEC8D69C60E1E74_EWindowType.h"
#include "unitysdk/System/Object.h"

class Class_1_8676A5D6BF139078;
namespace RPG::Client { class MonoInflatableFighter; }

#define CLASS_1_4AEC8D69C60E1E74_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1710BFE0)
#define CLASS_1_4AEC8D69C60E1E74_METHOD_1_4343F372F34C05BF_OFFSET UNITYSDK_OFFSET(0x1710BF80)
#define CLASS_1_4AEC8D69C60E1E74_METHOD_1_4AACBB459A14CD39_OFFSET UNITYSDK_OFFSET(0x1710C0E0)
#define CLASS_1_4AEC8D69C60E1E74_METHOD_1_5EAB2C5E0D76A6B7_OFFSET UNITYSDK_OFFSET(0x1710C030)
#define CLASS_1_4AEC8D69C60E1E74__CTOR_OFFSET UNITYSDK_OFFSET(0x1710BF70)

inline static constexpr unsigned int Class_1_4AEC8D69C60E1E74_TypeDefinitionIndex = 68651;

class Class_1_4AEC8D69C60E1E74 : public ::System::Object
{
public:
	::RPG::Client::MonoInflatableFighter* CEODOONOFBM; // 0x10
	::Class_1_8676A5D6BF139078* CPIIOIPAAKK; // 0x18
	::System::Boolean IEGFFNAPBDL; // 0x20
	::System::Boolean DEANEDGAIHB; // 0x21
	::Class_1_4AEC8D69C60E1E74_EWindowType PJMLOLKIEOM; // 0x24

	::System::Void _ctor(::RPG::Client::MonoInflatableFighter* a1, ::Class_1_8676A5D6BF139078* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::MonoInflatableFighter*, ::Class_1_8676A5D6BF139078*))((::PBYTE)hIl2Cpp + CLASS_1_4AEC8D69C60E1E74__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_4343F372F34C05BF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4AEC8D69C60E1E74_METHOD_1_4343F372F34C05BF_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4AEC8D69C60E1E74_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_1_5EAB2C5E0D76A6B7(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_4AEC8D69C60E1E74_METHOD_1_5EAB2C5E0D76A6B7_OFFSET))(this, a1);
	}

	::Class_1_4AEC8D69C60E1E74_EWindowType Method_1_4AACBB459A14CD39()
	{
		return ((::Class_1_4AEC8D69C60E1E74_EWindowType(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4AEC8D69C60E1E74_METHOD_1_4AACBB459A14CD39_OFFSET))(this);
	}
};

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class RogueTournNPCRow; }
namespace System { class String; }

#define CLASS_1_6E1CFE95796F5D4F_METHOD_1_128774387667156B_OFFSET UNITYSDK_OFFSET(0xA7A67A0)
#define CLASS_1_6E1CFE95796F5D4F_METHOD_1_63D1770D8D097315_OFFSET UNITYSDK_OFFSET(0xA7A66F0)
#define CLASS_1_6E1CFE95796F5D4F_METHOD_1_D978819B0A4871A0_OFFSET UNITYSDK_OFFSET(0xA7A6780)
#define CLASS_1_6E1CFE95796F5D4F__CTOR_OFFSET UNITYSDK_OFFSET(0xA7A66E0)

inline static constexpr unsigned int Class_1_6E1CFE95796F5D4F_TypeDefinitionIndex = 61998;

class Class_1_6E1CFE95796F5D4F : public ::System::Object
{
public:
	::RPG::GameCore::RogueTournNPCRow* Field_1_0; // 0x10

	::System::Void _ctor(::RPG::GameCore::RogueTournNPCRow* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::RogueTournNPCRow*))((::PBYTE)hIl2Cpp + CLASS_1_6E1CFE95796F5D4F__CTOR_OFFSET))(this, a1);
	}

	static ::Class_1_6E1CFE95796F5D4F* Method_1_63D1770D8D097315(::System::UInt32 a1)
	{
		return ((::Class_1_6E1CFE95796F5D4F*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_6E1CFE95796F5D4F_METHOD_1_63D1770D8D097315_OFFSET))(a1);
	}

	::System::UInt32 Method_1_D978819B0A4871A0()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6E1CFE95796F5D4F_METHOD_1_D978819B0A4871A0_OFFSET))(this);
	}

	::System::String* Method_1_128774387667156B()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6E1CFE95796F5D4F_METHOD_1_128774387667156B_OFFSET))(this);
	}
};

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class RogueNPCRow; }
namespace System { class String; }

#define CLASS_1_AA6A04780AC2BD2B_METHOD_1_128774387667156B_OFFSET UNITYSDK_OFFSET(0xB506EF0)
#define CLASS_1_AA6A04780AC2BD2B_METHOD_1_63D1770D8D097315_OFFSET UNITYSDK_OFFSET(0xB506E40)
#define CLASS_1_AA6A04780AC2BD2B_METHOD_1_D978819B0A4871A0_OFFSET UNITYSDK_OFFSET(0xB506ED0)
#define CLASS_1_AA6A04780AC2BD2B__CTOR_OFFSET UNITYSDK_OFFSET(0xB506E30)

inline static constexpr unsigned int Class_1_AA6A04780AC2BD2B_TypeDefinitionIndex = 62930;

class Class_1_AA6A04780AC2BD2B : public ::System::Object
{
public:
	::RPG::GameCore::RogueNPCRow* Field_1_0; // 0x10

	::System::Void _ctor(::RPG::GameCore::RogueNPCRow* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::RogueNPCRow*))((::PBYTE)hIl2Cpp + CLASS_1_AA6A04780AC2BD2B__CTOR_OFFSET))(this, a1);
	}

	static ::Class_1_AA6A04780AC2BD2B* Method_1_63D1770D8D097315(::System::UInt32 a1)
	{
		return ((::Class_1_AA6A04780AC2BD2B*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_AA6A04780AC2BD2B_METHOD_1_63D1770D8D097315_OFFSET))(a1);
	}

	::System::UInt32 Method_1_D978819B0A4871A0()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_AA6A04780AC2BD2B_METHOD_1_D978819B0A4871A0_OFFSET))(this);
	}

	::System::String* Method_1_128774387667156B()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_AA6A04780AC2BD2B_METHOD_1_128774387667156B_OFFSET))(this);
	}
};

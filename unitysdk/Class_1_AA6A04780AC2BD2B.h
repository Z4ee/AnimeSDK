#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class RogueNPCRow; }
namespace System { class String; }

#define CLASS_1_AA6A04780AC2BD2B_METHOD_1_63D1770D8D097315_OFFSET UNITYSDK_OFFSET(0x15E3CFC0)
#define CLASS_1_AA6A04780AC2BD2B_METHOD_1_88B60F3B95FAA4F1_OFFSET UNITYSDK_OFFSET(0x15E3D0A0)
#define CLASS_1_AA6A04780AC2BD2B_METHOD_1_AA2D3E889C8A52CA_OFFSET UNITYSDK_OFFSET(0x15E3D050)
#define CLASS_1_AA6A04780AC2BD2B__CTOR_OFFSET UNITYSDK_OFFSET(0x15E3CFB0)

inline static constexpr unsigned int Class_1_AA6A04780AC2BD2B_TypeDefinitionIndex = 67292;

class Class_1_AA6A04780AC2BD2B : public ::System::Object
{
public:
	::RPG::GameCore::RogueNPCRow* IBPBJBOKKMF; // 0x10

	::System::Void _ctor(::RPG::GameCore::RogueNPCRow* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::RogueNPCRow*))((::PBYTE)hIl2Cpp + CLASS_1_AA6A04780AC2BD2B__CTOR_OFFSET))(this, a1);
	}

	static ::Class_1_AA6A04780AC2BD2B* Method_1_63D1770D8D097315(::System::UInt32 a1)
	{
		return ((::Class_1_AA6A04780AC2BD2B*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_AA6A04780AC2BD2B_METHOD_1_63D1770D8D097315_OFFSET))(a1);
	}

	::System::UInt32 Method_1_AA2D3E889C8A52CA()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_AA6A04780AC2BD2B_METHOD_1_AA2D3E889C8A52CA_OFFSET))(this);
	}

	::System::String* Method_1_88B60F3B95FAA4F1()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_AA6A04780AC2BD2B_METHOD_1_88B60F3B95FAA4F1_OFFSET))(this);
	}
};

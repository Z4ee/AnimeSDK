#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class RogueTournNPCRow; }
namespace System { class String; }

#define CLASS_1_6E1CFE95796F5D4F_METHOD_1_63D1770D8D097315_OFFSET UNITYSDK_OFFSET(0x165B8260)
#define CLASS_1_6E1CFE95796F5D4F_METHOD_1_88B60F3B95FAA4F1_OFFSET UNITYSDK_OFFSET(0x165B8340)
#define CLASS_1_6E1CFE95796F5D4F_METHOD_1_AA2D3E889C8A52CA_OFFSET UNITYSDK_OFFSET(0x165B82F0)
#define CLASS_1_6E1CFE95796F5D4F__CTOR_OFFSET UNITYSDK_OFFSET(0x165B8250)

inline static constexpr unsigned int Class_1_6E1CFE95796F5D4F_TypeDefinitionIndex = 67293;

class Class_1_6E1CFE95796F5D4F : public ::System::Object
{
public:
	::RPG::GameCore::RogueTournNPCRow* IBPBJBOKKMF; // 0x10

	::System::Void _ctor(::RPG::GameCore::RogueTournNPCRow* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::RogueTournNPCRow*))((::PBYTE)hIl2Cpp + CLASS_1_6E1CFE95796F5D4F__CTOR_OFFSET))(this, a1);
	}

	static ::Class_1_6E1CFE95796F5D4F* Method_1_63D1770D8D097315(::System::UInt32 a1)
	{
		return ((::Class_1_6E1CFE95796F5D4F*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_6E1CFE95796F5D4F_METHOD_1_63D1770D8D097315_OFFSET))(a1);
	}

	::System::UInt32 Method_1_AA2D3E889C8A52CA()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6E1CFE95796F5D4F_METHOD_1_AA2D3E889C8A52CA_OFFSET))(this);
	}

	::System::String* Method_1_88B60F3B95FAA4F1()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6E1CFE95796F5D4F_METHOD_1_88B60F3B95FAA4F1_OFFSET))(this);
	}
};

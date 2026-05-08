#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_46566C4AF8825083.h"

namespace MoleMole::Battle { class Entity; }

#define CLASS_2_E52029144C0D20EC_METHOD_2_02A3D10A9D535169_OFFSET UNITYSDK_OFFSET(0xF6036B0)
#define CLASS_2_E52029144C0D20EC_METHOD_2_709C6ACE480ED0E5_OFFSET UNITYSDK_OFFSET(0xF603550)
#define CLASS_2_E52029144C0D20EC_METHOD_2_7786DC814C2FC3BE_OFFSET UNITYSDK_OFFSET(0xF6036C0)
#define CLASS_2_E52029144C0D20EC__CTOR_OFFSET UNITYSDK_OFFSET(0xF603540)

inline static constexpr unsigned int Class_2_E52029144C0D20EC_TypeDefinitionIndex = 76967;

class Class_2_E52029144C0D20EC : public ::Class_1_46566C4AF8825083
{
public:
	::System::Int32 Field_2_1; // 0x78
	::System::UInt32 Field_2_0; // 0x7C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E52029144C0D20EC__CTOR_OFFSET))(this);
	}

	::MoleMole::Battle::Entity* Method_2_709C6ACE480ED0E5()
	{
		return ((::MoleMole::Battle::Entity*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E52029144C0D20EC_METHOD_2_709C6ACE480ED0E5_OFFSET))(this);
	}

	::System::UInt32 Method_2_02A3D10A9D535169()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E52029144C0D20EC_METHOD_2_02A3D10A9D535169_OFFSET))(this);
	}

	::System::Void Method_2_7786DC814C2FC3BE(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_2_E52029144C0D20EC_METHOD_2_7786DC814C2FC3BE_OFFSET))(this, a1);
	}
};

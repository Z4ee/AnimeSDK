#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_F9FBCC956DFCF137_1.h"

class Class_1_EFDEDB2BC2764B7D;
namespace RPG::GameCore { class MarbleRandomRevive; }

#define CLASS_2_208E75987E2103DE_METHOD_2_8AE88CC79AC0221D_OFFSET UNITYSDK_OFFSET(0x1C580CC0)
#define CLASS_2_208E75987E2103DE_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x1C580DD0)
#define CLASS_2_208E75987E2103DE__CTOR_OFFSET UNITYSDK_OFFSET(0x1C580CB0)

inline static constexpr unsigned int Class_2_208E75987E2103DE_TypeDefinitionIndex = 40548;

class Class_2_208E75987E2103DE : public ::Class_1_F9FBCC956DFCF137_1
{
public:
	::RPG::GameCore::MarbleRandomRevive* Field_2_0; // 0x18

	::System::Void _ctor(::RPG::GameCore::MarbleRandomRevive* a1, ::Class_1_EFDEDB2BC2764B7D* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::MarbleRandomRevive*, ::Class_1_EFDEDB2BC2764B7D*))((::PBYTE)hIl2Cpp + CLASS_2_208E75987E2103DE__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_2_8AE88CC79AC0221D()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_208E75987E2103DE_METHOD_2_8AE88CC79AC0221D_OFFSET))(this);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_208E75987E2103DE_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}
};

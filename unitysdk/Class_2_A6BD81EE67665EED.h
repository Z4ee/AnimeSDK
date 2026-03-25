#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_F9FBCC956DFCF137.h"

class Class_1_C03F4DDB5A53142C;
namespace RPG::GameCore { class MarbleAddScore; }

#define CLASS_2_A6BD81EE67665EED_METHOD_2_568AE7A1499723FD_OFFSET UNITYSDK_OFFSET(0x16A4DEC0)
#define CLASS_2_A6BD81EE67665EED_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x16A4DF50)
#define CLASS_2_A6BD81EE67665EED__CTOR_OFFSET UNITYSDK_OFFSET(0x16A48130)

inline static constexpr unsigned int Class_2_A6BD81EE67665EED_TypeDefinitionIndex = 33189;

class Class_2_A6BD81EE67665EED : public ::Class_1_F9FBCC956DFCF137
{
public:
	::RPG::GameCore::MarbleAddScore* Field_2_0; // 0x18

	::System::Void _ctor(::RPG::GameCore::MarbleAddScore* a1, ::Class_1_C03F4DDB5A53142C* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::MarbleAddScore*, ::Class_1_C03F4DDB5A53142C*))((::PBYTE)hIl2Cpp + CLASS_2_A6BD81EE67665EED__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_2_568AE7A1499723FD()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A6BD81EE67665EED_METHOD_2_568AE7A1499723FD_OFFSET))(this);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A6BD81EE67665EED_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}
};

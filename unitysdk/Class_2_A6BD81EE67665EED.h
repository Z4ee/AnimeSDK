#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_F9FBCC956DFCF137_1.h"

class Class_1_5816B66AC6910205;
namespace RPG::GameCore { class MarbleAddScore; }

#define CLASS_2_A6BD81EE67665EED_METHOD_2_568AE7A1499723FD_OFFSET UNITYSDK_OFFSET(0x18E506B0)
#define CLASS_2_A6BD81EE67665EED_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x18E50740)
#define CLASS_2_A6BD81EE67665EED__CTOR_OFFSET UNITYSDK_OFFSET(0x18E506A0)

inline static constexpr unsigned int Class_2_A6BD81EE67665EED_TypeDefinitionIndex = 39747;

class Class_2_A6BD81EE67665EED : public ::Class_1_F9FBCC956DFCF137_1
{
public:
	::RPG::GameCore::MarbleAddScore* Field_2_0; // 0x18

	::System::Void _ctor(::RPG::GameCore::MarbleAddScore* a1, ::Class_1_5816B66AC6910205* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::MarbleAddScore*, ::Class_1_5816B66AC6910205*))((::PBYTE)hIl2Cpp + CLASS_2_A6BD81EE67665EED__CTOR_OFFSET))(this, a1, a2);
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

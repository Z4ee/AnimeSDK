#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/UIController.h"

#define CLASS_2_3BF7A92C2F4BA9E2_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x17E8EC30)
#define CLASS_2_3BF7A92C2F4BA9E2__CTOR_OFFSET UNITYSDK_OFFSET(0x17E8EAF0)
#define CLASS_2_3BF7A92C2F4BA9E2__CUSTOMBINDVIEW_OFFSET UNITYSDK_OFFSET(0x17E8EB60)
#define CLASS_2_3BF7A92C2F4BA9E2__UNBINDVIEW_OFFSET UNITYSDK_OFFSET(0x17E8EBE0)

inline static constexpr unsigned int Class_2_3BF7A92C2F4BA9E2_TypeDefinitionIndex = 62901;

class Class_2_3BF7A92C2F4BA9E2 : public ::RPG::Client::UIController
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3BF7A92C2F4BA9E2__CTOR_OFFSET))(this);
	}

	::System::Void _CustomBindView()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3BF7A92C2F4BA9E2__CUSTOMBINDVIEW_OFFSET))(this);
	}

	::System::Void _UnBindView()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3BF7A92C2F4BA9E2__UNBINDVIEW_OFFSET))(this);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3BF7A92C2F4BA9E2_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}
};

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/UIController.h"

#define CLASS_2_3BF7A92C2F4BA9E2_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x13553DA0)
#define CLASS_2_3BF7A92C2F4BA9E2__CTOR_OFFSET UNITYSDK_OFFSET(0x13553BE0)
#define CLASS_2_3BF7A92C2F4BA9E2__CUSTOMBINDVIEW_OFFSET UNITYSDK_OFFSET(0x13553C50)
#define CLASS_2_3BF7A92C2F4BA9E2__UNBINDVIEW_OFFSET UNITYSDK_OFFSET(0x13553D50)
#define CLASS_2_3BF7A92C2F4BA9E2___IFIXBASEPROXY__CUSTOMBINDVIEW_OFFSET UNITYSDK_OFFSET(0x13553DE0)
#define CLASS_2_3BF7A92C2F4BA9E2___IFIXBASEPROXY__UNBINDVIEW_OFFSET UNITYSDK_OFFSET(0x13553E40)

inline static constexpr unsigned int Class_2_3BF7A92C2F4BA9E2_TypeDefinitionIndex = 61539;

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

	::System::Void __iFixBaseProxy__CustomBindView()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3BF7A92C2F4BA9E2___IFIXBASEPROXY__CUSTOMBINDVIEW_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy__UnBindView()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3BF7A92C2F4BA9E2___IFIXBASEPROXY__UNBINDVIEW_OFFSET))(this);
	}
};

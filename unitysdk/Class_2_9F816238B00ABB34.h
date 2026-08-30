#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/UIController.h"

#define CLASS_2_9F816238B00ABB34_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x152C9260)
#define CLASS_2_9F816238B00ABB34__CTOR_OFFSET UNITYSDK_OFFSET(0x152C90A0)
#define CLASS_2_9F816238B00ABB34__CUSTOMBINDVIEW_OFFSET UNITYSDK_OFFSET(0x152C9110)
#define CLASS_2_9F816238B00ABB34__UNBINDVIEW_OFFSET UNITYSDK_OFFSET(0x152C9210)

inline static constexpr unsigned int Class_2_9F816238B00ABB34_TypeDefinitionIndex = 65886;

class Class_2_9F816238B00ABB34 : public ::RPG::Client::UIController
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_9F816238B00ABB34__CTOR_OFFSET))(this);
	}

	::System::Void _CustomBindView()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_9F816238B00ABB34__CUSTOMBINDVIEW_OFFSET))(this);
	}

	::System::Void _UnBindView()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_9F816238B00ABB34__UNBINDVIEW_OFFSET))(this);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_9F816238B00ABB34_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}
};

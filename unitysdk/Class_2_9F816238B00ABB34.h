#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/UIController.h"

#define CLASS_2_9F816238B00ABB34_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x155B43F0)
#define CLASS_2_9F816238B00ABB34__CTOR_OFFSET UNITYSDK_OFFSET(0x155B4230)
#define CLASS_2_9F816238B00ABB34__CUSTOMBINDVIEW_OFFSET UNITYSDK_OFFSET(0x155B42A0)
#define CLASS_2_9F816238B00ABB34__UNBINDVIEW_OFFSET UNITYSDK_OFFSET(0x155B43A0)

inline static constexpr unsigned int Class_2_9F816238B00ABB34_TypeDefinitionIndex = 65840;

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

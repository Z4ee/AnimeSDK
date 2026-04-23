#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/UIController.h"

#define CLASS_2_8E79DBA6BB03FC4D_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x91E6310)
#define CLASS_2_8E79DBA6BB03FC4D__CTOR_OFFSET UNITYSDK_OFFSET(0x91E61D0)
#define CLASS_2_8E79DBA6BB03FC4D__CUSTOMBINDVIEW_OFFSET UNITYSDK_OFFSET(0x91E6240)
#define CLASS_2_8E79DBA6BB03FC4D__UNBINDVIEW_OFFSET UNITYSDK_OFFSET(0x91E62C0)
#define CLASS_2_8E79DBA6BB03FC4D___IFIXBASEPROXY__CUSTOMBINDVIEW_OFFSET UNITYSDK_OFFSET(0x91E6350)
#define CLASS_2_8E79DBA6BB03FC4D___IFIXBASEPROXY__UNBINDVIEW_OFFSET UNITYSDK_OFFSET(0x91E63B0)

inline static constexpr unsigned int Class_2_8E79DBA6BB03FC4D_TypeDefinitionIndex = 60605;

class Class_2_8E79DBA6BB03FC4D : public ::RPG::Client::UIController
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8E79DBA6BB03FC4D__CTOR_OFFSET))(this);
	}

	::System::Void _CustomBindView()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8E79DBA6BB03FC4D__CUSTOMBINDVIEW_OFFSET))(this);
	}

	::System::Void _UnBindView()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8E79DBA6BB03FC4D__UNBINDVIEW_OFFSET))(this);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8E79DBA6BB03FC4D_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy__CustomBindView()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8E79DBA6BB03FC4D___IFIXBASEPROXY__CUSTOMBINDVIEW_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy__UnBindView()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8E79DBA6BB03FC4D___IFIXBASEPROXY__UNBINDVIEW_OFFSET))(this);
	}
};

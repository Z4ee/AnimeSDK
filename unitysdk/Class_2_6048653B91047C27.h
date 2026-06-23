#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_C9FCD193B2E091DD.h"

class Class_1_EEA0111A28582B57;
class Class_2_1B1C05BC0A38A2D5;
namespace MoleMole { class UIActivityGuideInfoWidgetController; }
namespace MoleMole { class UIActivitySkinRewardWidgetController; }
namespace MoleMole { class UIBaseController; }
namespace MoleMole { class UIControllerContextBase; }
namespace UnityEngine { class Transform; }

#define CLASS_2_6048653B91047C27_METHOD_2_4CD8461FEFD0CC16_OFFSET UNITYSDK_OFFSET(0x1C6A12D0)
#define CLASS_2_6048653B91047C27_METHOD_2_B2A9E476CE8053F4_OFFSET UNITYSDK_OFFSET(0x1C6A1240)
#define CLASS_2_6048653B91047C27_METHOD_2_B57C7ADBD2B0A5E4_OFFSET UNITYSDK_OFFSET(0x1C6A0F30)
#define CLASS_2_6048653B91047C27_METHOD_2_B8A434D1CA8894A2_OFFSET UNITYSDK_OFFSET(0x1C6A0B40)
#define CLASS_2_6048653B91047C27_METHOD_2_C20FDB87D3E31092_OFFSET UNITYSDK_OFFSET(0x1C6A0FB0)
#define CLASS_2_6048653B91047C27__CTOR_OFFSET UNITYSDK_OFFSET(0x1C6A1230)

inline static constexpr unsigned int Class_2_6048653B91047C27_TypeDefinitionIndex = 75600;

class Class_2_6048653B91047C27 : public ::Class_1_C9FCD193B2E091DD
{
public:
	::MoleMole::UIActivitySkinRewardWidgetController* Field_2_2; // 0x30
	::Class_2_1B1C05BC0A38A2D5* Field_2_1; // 0x38
	::UnityEngine::Transform* Field_2_3; // 0x40
	::MoleMole::UIActivityGuideInfoWidgetController* Field_2_0; // 0x48

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6048653B91047C27__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_B8A434D1CA8894A2(::MoleMole::UIBaseController* a1, ::Class_1_EEA0111A28582B57* a2, ::MoleMole::UIControllerContextBase* a3)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::UIBaseController*, ::Class_1_EEA0111A28582B57*, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + CLASS_2_6048653B91047C27_METHOD_2_B8A434D1CA8894A2_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_2_B57C7ADBD2B0A5E4(::MoleMole::UIControllerContextBase* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + CLASS_2_6048653B91047C27_METHOD_2_B57C7ADBD2B0A5E4_OFFSET))(this, a1);
	}

	::System::Void Method_2_B2A9E476CE8053F4(::MoleMole::UIControllerContextBase* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + CLASS_2_6048653B91047C27_METHOD_2_B2A9E476CE8053F4_OFFSET))(this, a1);
	}

	::System::Void Method_2_C20FDB87D3E31092()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6048653B91047C27_METHOD_2_C20FDB87D3E31092_OFFSET))(this);
	}

	::System::Void Method_2_4CD8461FEFD0CC16(::MoleMole::UIBaseController* a1, ::Class_1_EEA0111A28582B57* a2, ::MoleMole::UIControllerContextBase* a3)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::UIBaseController*, ::Class_1_EEA0111A28582B57*, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + CLASS_2_6048653B91047C27_METHOD_2_4CD8461FEFD0CC16_OFFSET))(this, a1, a2, a3);
	}
};

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_4_86126C0ABC4F0231.h"

class Class_1_C376DB68B1C74261;
class Class_2_9DCE2FC33F67E8A2;
namespace MoleMole::Config { class ConfigChessboardChangeMaskNode; }
namespace MoleMole::Config { class UISpecialNumGroup; }

#define CLASS_5_3E77D20902112359_METHOD_5_070E744817F3CD4B_OFFSET UNITYSDK_OFFSET(0x11B00FF0)
#define CLASS_5_3E77D20902112359_METHOD_5_7509332595EEBEFC_OFFSET UNITYSDK_OFFSET(0x11B00F70)
#define CLASS_5_3E77D20902112359_METHOD_5_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x11B011E0)
#define CLASS_5_3E77D20902112359_METHOD_5_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x11B00FE0)
#define CLASS_5_3E77D20902112359__CTOR_OFFSET UNITYSDK_OFFSET(0x11B01180)

inline static constexpr unsigned int Class_5_3E77D20902112359_TypeDefinitionIndex = 79345;

class Class_5_3E77D20902112359 : public ::Class_4_86126C0ABC4F0231<::MoleMole::Config::ConfigChessboardChangeMaskNode*>
{
public:
	::MoleMole::Config::ConfigChessboardChangeMaskNode* Field_5_0; // 0x40

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_5_3E77D20902112359__CTOR_OFFSET))(this);
	}

	::System::Void Method_5_7509332595EEBEFC(::MoleMole::Config::ConfigChessboardChangeMaskNode* a1, ::Class_2_9DCE2FC33F67E8A2* a2, ::MoleMole::Config::UISpecialNumGroup* a3, ::Class_1_C376DB68B1C74261* a4)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigChessboardChangeMaskNode*, ::Class_2_9DCE2FC33F67E8A2*, ::MoleMole::Config::UISpecialNumGroup*, ::Class_1_C376DB68B1C74261*))((::PBYTE)hIl2Cpp + CLASS_5_3E77D20902112359_METHOD_5_7509332595EEBEFC_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Boolean Method_5_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_5_3E77D20902112359_METHOD_5_F0088C88851A7DFB_OFFSET))(this);
	}

	::System::Void Method_5_070E744817F3CD4B()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_5_3E77D20902112359_METHOD_5_070E744817F3CD4B_OFFSET))(this);
	}

	::System::Void Method_5_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_5_3E77D20902112359_METHOD_5_CA373AA1C7054598_OFFSET))(this);
	}
};

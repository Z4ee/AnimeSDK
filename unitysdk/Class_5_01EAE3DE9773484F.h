#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_4_86126C0ABC4F0231.h"

class Class_1_C376DB68B1C74261;
class Class_2_9DCE2FC33F67E8A2;
namespace MoleMole::Config { class ConfigRemoveNpcNode; }
namespace MoleMole::Config { class UISpecialNumGroup; }
namespace System { class String; }

#define CLASS_5_01EAE3DE9773484F_METHOD_5_070E744817F3CD4B_OFFSET UNITYSDK_OFFSET(0x12F0A850)
#define CLASS_5_01EAE3DE9773484F_METHOD_5_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x12F0AA60)
#define CLASS_5_01EAE3DE9773484F_METHOD_5_E215712BB4219EC3_OFFSET UNITYSDK_OFFSET(0x12F0A7C0)
#define CLASS_5_01EAE3DE9773484F__CTOR_OFFSET UNITYSDK_OFFSET(0x12F0AA00)

inline static constexpr unsigned int Class_5_01EAE3DE9773484F_TypeDefinitionIndex = 80948;

class Class_5_01EAE3DE9773484F : public ::Class_4_86126C0ABC4F0231<::MoleMole::Config::ConfigRemoveNpcNode*>
{
public:
	::System::String* Field_5_0; // 0x40

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_5_01EAE3DE9773484F__CTOR_OFFSET))(this);
	}

	::System::Void Method_5_E215712BB4219EC3(::MoleMole::Config::ConfigRemoveNpcNode* a1, ::Class_2_9DCE2FC33F67E8A2* a2, ::MoleMole::Config::UISpecialNumGroup* a3, ::Class_1_C376DB68B1C74261* a4)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigRemoveNpcNode*, ::Class_2_9DCE2FC33F67E8A2*, ::MoleMole::Config::UISpecialNumGroup*, ::Class_1_C376DB68B1C74261*))((::PBYTE)hIl2Cpp + CLASS_5_01EAE3DE9773484F_METHOD_5_E215712BB4219EC3_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_5_070E744817F3CD4B()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_5_01EAE3DE9773484F_METHOD_5_070E744817F3CD4B_OFFSET))(this);
	}

	::System::Void Method_5_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_5_01EAE3DE9773484F_METHOD_5_CA373AA1C7054598_OFFSET))(this);
	}
};

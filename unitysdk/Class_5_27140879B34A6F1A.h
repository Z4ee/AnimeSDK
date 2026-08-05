#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_4_86126C0ABC4F0231.h"

class Class_1_D3581D8A71834B25;
class Class_2_9DCE2FC33F67E8A2;
namespace MoleMole { class UIHollowMainPageController; }
namespace MoleMole::Config { class ConfigHollowJoystickBlock; }
namespace MoleMole::Config { class UISpecialNumGroup; }

#define CLASS_5_27140879B34A6F1A_METHOD_5_B1222CD8E9A11708_OFFSET UNITYSDK_OFFSET(0x18C89620)
#define CLASS_5_27140879B34A6F1A_METHOD_5_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x18C897C0)
#define CLASS_5_27140879B34A6F1A_METHOD_5_CB8CF89038C44C8A_OFFSET UNITYSDK_OFFSET(0x18C896B0)
#define CLASS_5_27140879B34A6F1A__CTOR_OFFSET UNITYSDK_OFFSET(0x18C89760)

inline static constexpr unsigned int Class_5_27140879B34A6F1A_TypeDefinitionIndex = 90037;

class Class_5_27140879B34A6F1A : public ::Class_4_86126C0ABC4F0231<::MoleMole::Config::ConfigHollowJoystickBlock*>
{
public:
	::MoleMole::UIHollowMainPageController* Field_5_7; // 0x40
	::System::Boolean Field_5_0; // 0x48

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_5_27140879B34A6F1A__CTOR_OFFSET))(this);
	}

	::System::Void Method_5_B1222CD8E9A11708(::MoleMole::Config::ConfigHollowJoystickBlock* a1, ::Class_2_9DCE2FC33F67E8A2* a2, ::MoleMole::Config::UISpecialNumGroup* a3, ::Class_1_D3581D8A71834B25* a4)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigHollowJoystickBlock*, ::Class_2_9DCE2FC33F67E8A2*, ::MoleMole::Config::UISpecialNumGroup*, ::Class_1_D3581D8A71834B25*))((::PBYTE)hIl2Cpp + CLASS_5_27140879B34A6F1A_METHOD_5_B1222CD8E9A11708_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_5_CB8CF89038C44C8A()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_5_27140879B34A6F1A_METHOD_5_CB8CF89038C44C8A_OFFSET))(this);
	}

	::System::Void Method_5_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_5_27140879B34A6F1A_METHOD_5_CA373AA1C7054598_OFFSET))(this);
	}
};

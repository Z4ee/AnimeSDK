#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_4_86126C0ABC4F0231.h"

class Class_1_D3581D8A71834B25;
class Class_2_9DCE2FC33F67E8A2;
class Class_3_793A447220C740D8;
namespace MoleMole::Config { class ConfigPlayFilterPluginSpecialEffect; }
namespace MoleMole::Config { class UISpecialNumGroup; }

#define CLASS_5_6647112852B5D45D_METHOD_5_09161FEE113B1CBD_OFFSET UNITYSDK_OFFSET(0x137AF5C0)
#define CLASS_5_6647112852B5D45D_METHOD_5_9D3A21F2F0EC6A39_OFFSET UNITYSDK_OFFSET(0x137AF550)
#define CLASS_5_6647112852B5D45D_METHOD_5_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x137AF730)
#define CLASS_5_6647112852B5D45D__CTOR_OFFSET UNITYSDK_OFFSET(0x137AF6D0)

inline static constexpr unsigned int Class_5_6647112852B5D45D_TypeDefinitionIndex = 51043;

class Class_5_6647112852B5D45D : public ::Class_4_86126C0ABC4F0231<::MoleMole::Config::ConfigPlayFilterPluginSpecialEffect*>
{
public:
	::Class_3_793A447220C740D8* Field_5_0; // 0x40

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_5_6647112852B5D45D__CTOR_OFFSET))(this);
	}

	::System::Void Method_5_9D3A21F2F0EC6A39(::MoleMole::Config::ConfigPlayFilterPluginSpecialEffect* a1, ::Class_2_9DCE2FC33F67E8A2* a2, ::MoleMole::Config::UISpecialNumGroup* a3, ::Class_1_D3581D8A71834B25* a4)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigPlayFilterPluginSpecialEffect*, ::Class_2_9DCE2FC33F67E8A2*, ::MoleMole::Config::UISpecialNumGroup*, ::Class_1_D3581D8A71834B25*))((::PBYTE)hIl2Cpp + CLASS_5_6647112852B5D45D_METHOD_5_9D3A21F2F0EC6A39_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_5_09161FEE113B1CBD()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_5_6647112852B5D45D_METHOD_5_09161FEE113B1CBD_OFFSET))(this);
	}

	::System::Void Method_5_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_5_6647112852B5D45D_METHOD_5_CA373AA1C7054598_OFFSET))(this);
	}
};

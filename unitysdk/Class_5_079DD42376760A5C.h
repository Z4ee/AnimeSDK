#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_4_86126C0ABC4F0231.h"

class Class_1_C376DB68B1C74261;
class Class_2_9DCE2FC33F67E8A2;
class Class_5_A6F8D19602712D95;
namespace MoleMole::Config { class ModifyHollowParticleHDRConfig; }
namespace MoleMole::Config { class UISpecialNumGroup; }

#define CLASS_5_079DD42376760A5C_METHOD_5_6658A59E97131C41_OFFSET UNITYSDK_OFFSET(0x18AB80A0)
#define CLASS_5_079DD42376760A5C_METHOD_5_676E831338583C9D_OFFSET UNITYSDK_OFFSET(0x18AB8110)
#define CLASS_5_079DD42376760A5C_METHOD_5_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x18AB8430)
#define CLASS_5_079DD42376760A5C_METHOD_5_D0F4FB9A661FE191_OFFSET UNITYSDK_OFFSET(0x18AB8340)
#define CLASS_5_079DD42376760A5C__CTOR_OFFSET UNITYSDK_OFFSET(0x18AB82E0)

inline static constexpr unsigned int Class_5_079DD42376760A5C_TypeDefinitionIndex = 59317;

class Class_5_079DD42376760A5C : public ::Class_4_86126C0ABC4F0231<::MoleMole::Config::ModifyHollowParticleHDRConfig*>
{
public:
	::MoleMole::Config::ModifyHollowParticleHDRConfig* Field_5_0; // 0x40

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_5_079DD42376760A5C__CTOR_OFFSET))(this);
	}

	::System::Void Method_5_6658A59E97131C41(::MoleMole::Config::ModifyHollowParticleHDRConfig* a1, ::Class_2_9DCE2FC33F67E8A2* a2, ::MoleMole::Config::UISpecialNumGroup* a3, ::Class_1_C376DB68B1C74261* a4)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ModifyHollowParticleHDRConfig*, ::Class_2_9DCE2FC33F67E8A2*, ::MoleMole::Config::UISpecialNumGroup*, ::Class_1_C376DB68B1C74261*))((::PBYTE)hIl2Cpp + CLASS_5_079DD42376760A5C_METHOD_5_6658A59E97131C41_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_5_676E831338583C9D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_5_079DD42376760A5C_METHOD_5_676E831338583C9D_OFFSET))(this);
	}

	::System::Boolean Method_5_D0F4FB9A661FE191(::Class_5_A6F8D19602712D95* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_5_A6F8D19602712D95*))((::PBYTE)hIl2Cpp + CLASS_5_079DD42376760A5C_METHOD_5_D0F4FB9A661FE191_OFFSET))(this, a1);
	}

	::System::Void Method_5_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_5_079DD42376760A5C_METHOD_5_CA373AA1C7054598_OFFSET))(this);
	}
};

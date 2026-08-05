#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_4_86126C0ABC4F0231.h"

class Class_1_D3581D8A71834B25;
class Class_2_9DCE2FC33F67E8A2;
class Class_5_A6F8D19602712D95;
namespace MoleMole { class UIHollowMainPageController; }
namespace MoleMole::Config { class ConfigChessboardModifyFloorSplash; }
namespace MoleMole::Config { class UISpecialNumGroup; }

#define CLASS_5_E468AA904B2DC837_METHOD_5_39FD7185C859CEAD_OFFSET UNITYSDK_OFFSET(0x1C3CCEC0)
#define CLASS_5_E468AA904B2DC837_METHOD_5_945567CF4B450D03_OFFSET UNITYSDK_OFFSET(0x1C3CD4B0)
#define CLASS_5_E468AA904B2DC837_METHOD_5_BA0755F1BFBBD9D7_OFFSET UNITYSDK_OFFSET(0x1C3CCE40)
#define CLASS_5_E468AA904B2DC837_METHOD_5_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x1C3CD600)
#define CLASS_5_E468AA904B2DC837__CTOR_OFFSET UNITYSDK_OFFSET(0x1C3CD450)

inline static constexpr unsigned int Class_5_E468AA904B2DC837_TypeDefinitionIndex = 83901;

class Class_5_E468AA904B2DC837 : public ::Class_4_86126C0ABC4F0231<::MoleMole::Config::ConfigChessboardModifyFloorSplash*>
{
public:
	::MoleMole::UIHollowMainPageController* Field_5_0; // 0x40
	::MoleMole::Config::ConfigChessboardModifyFloorSplash* Field_5_1; // 0x48

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_5_E468AA904B2DC837__CTOR_OFFSET))(this);
	}

	::System::Void Method_5_BA0755F1BFBBD9D7(::MoleMole::Config::ConfigChessboardModifyFloorSplash* a1, ::Class_2_9DCE2FC33F67E8A2* a2, ::MoleMole::Config::UISpecialNumGroup* a3, ::Class_1_D3581D8A71834B25* a4)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigChessboardModifyFloorSplash*, ::Class_2_9DCE2FC33F67E8A2*, ::MoleMole::Config::UISpecialNumGroup*, ::Class_1_D3581D8A71834B25*))((::PBYTE)hIl2Cpp + CLASS_5_E468AA904B2DC837_METHOD_5_BA0755F1BFBBD9D7_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_5_39FD7185C859CEAD()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_5_E468AA904B2DC837_METHOD_5_39FD7185C859CEAD_OFFSET))(this);
	}

	::System::Boolean Method_5_945567CF4B450D03(::Class_5_A6F8D19602712D95* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_5_A6F8D19602712D95*))((::PBYTE)hIl2Cpp + CLASS_5_E468AA904B2DC837_METHOD_5_945567CF4B450D03_OFFSET))(this, a1);
	}

	::System::Void Method_5_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_5_E468AA904B2DC837_METHOD_5_CA373AA1C7054598_OFFSET))(this);
	}
};

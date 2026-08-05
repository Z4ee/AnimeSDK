#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_4_86126C0ABC4F0231.h"
#include "unitysdk/Foundation/Coroutine/CoroutineHandle.h"

class Class_1_D3581D8A71834B25;
class Class_2_9DCE2FC33F67E8A2;
namespace MoleMole { class UIHollowMainPageController; }
namespace MoleMole::Config { class ConfigChessboardElevatorDownSplash; }
namespace MoleMole::Config { class UISpecialNumGroup; }

#define CLASS_5_09AE0B7433138A1A_METHOD_5_367B9590522079D1_OFFSET UNITYSDK_OFFSET(0x1BB63F10)
#define CLASS_5_09AE0B7433138A1A_METHOD_5_4BE9D9EFA5982319_OFFSET UNITYSDK_OFFSET(0x1BB63E90)
#define CLASS_5_09AE0B7433138A1A_METHOD_5_CA373AA1C7054598_1_OFFSET UNITYSDK_OFFSET(0x1BB64360)
#define CLASS_5_09AE0B7433138A1A_METHOD_5_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x1BB642C0)
#define CLASS_5_09AE0B7433138A1A_METHOD_5_DB67EEFB041425EC_OFFSET UNITYSDK_OFFSET(0x1BB64190)
#define CLASS_5_09AE0B7433138A1A__CTOR_OFFSET UNITYSDK_OFFSET(0x1BB64260)

inline static constexpr unsigned int Class_5_09AE0B7433138A1A_TypeDefinitionIndex = 76075;

class Class_5_09AE0B7433138A1A : public ::Class_4_86126C0ABC4F0231<::MoleMole::Config::ConfigChessboardElevatorDownSplash*>
{
public:
	::MoleMole::UIHollowMainPageController* Field_5_6; // 0x40
	::MoleMole::Config::ConfigChessboardElevatorDownSplash* Field_5_7; // 0x48
	::Foundation::Coroutine::CoroutineHandle Field_5_0; // 0x50

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_5_09AE0B7433138A1A__CTOR_OFFSET))(this);
	}

	::System::Void Method_5_4BE9D9EFA5982319(::MoleMole::Config::ConfigChessboardElevatorDownSplash* a1, ::Class_2_9DCE2FC33F67E8A2* a2, ::MoleMole::Config::UISpecialNumGroup* a3, ::Class_1_D3581D8A71834B25* a4)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigChessboardElevatorDownSplash*, ::Class_2_9DCE2FC33F67E8A2*, ::MoleMole::Config::UISpecialNumGroup*, ::Class_1_D3581D8A71834B25*))((::PBYTE)hIl2Cpp + CLASS_5_09AE0B7433138A1A_METHOD_5_4BE9D9EFA5982319_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_5_367B9590522079D1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_5_09AE0B7433138A1A_METHOD_5_367B9590522079D1_OFFSET))(this);
	}

	::System::Void Method_5_DB67EEFB041425EC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_5_09AE0B7433138A1A_METHOD_5_DB67EEFB041425EC_OFFSET))(this);
	}

	::System::Void Method_5_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_5_09AE0B7433138A1A_METHOD_5_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_5_CA373AA1C7054598_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_5_09AE0B7433138A1A_METHOD_5_CA373AA1C7054598_1_OFFSET))(this);
	}
};

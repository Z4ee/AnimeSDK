#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_4_86126C0ABC4F0231.h"

class Class_1_84B6C347EF56A177;
class Class_1_C376DB68B1C74261;
class Class_2_9DCE2FC33F67E8A2;
namespace MoleMole { class UIHollowMainPageController; }
namespace MoleMole::Config { class ConfigChessboardFloorMove; }
namespace MoleMole::Config { class UISpecialNumGroup; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_5_354FFAF5B0FC5B5A_METHOD_5_2685B6183E614529_OFFSET UNITYSDK_OFFSET(0x165C9EE0)
#define CLASS_5_354FFAF5B0FC5B5A_METHOD_5_4FED0CA16815702B_OFFSET UNITYSDK_OFFSET(0x165C8F90)
#define CLASS_5_354FFAF5B0FC5B5A_METHOD_5_89D1F247B9D324EE_OFFSET UNITYSDK_OFFSET(0x165C9D40)
#define CLASS_5_354FFAF5B0FC5B5A_METHOD_5_89EF21CA0414B145_OFFSET UNITYSDK_OFFSET(0x165C9010)
#define CLASS_5_354FFAF5B0FC5B5A_METHOD_5_CA373AA1C7054598_1_OFFSET UNITYSDK_OFFSET(0x165CA010)
#define CLASS_5_354FFAF5B0FC5B5A_METHOD_5_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x165C9F80)
#define CLASS_5_354FFAF5B0FC5B5A_METHOD_5_F0E5333B48B6C5FF_OFFSET UNITYSDK_OFFSET(0x165C9380)
#define CLASS_5_354FFAF5B0FC5B5A__CTOR_OFFSET UNITYSDK_OFFSET(0x165C9E00)

inline static constexpr unsigned int Class_5_354FFAF5B0FC5B5A_TypeDefinitionIndex = 85301;

class Class_5_354FFAF5B0FC5B5A : public ::Class_4_86126C0ABC4F0231<::MoleMole::Config::ConfigChessboardFloorMove*>
{
public:
	::System::Collections::Generic::List_1<::Class_1_84B6C347EF56A177*>* Field_5_2; // 0x40
	::MoleMole::Config::ConfigChessboardFloorMove* Field_5_0; // 0x48
	::MoleMole::UIHollowMainPageController* Field_5_1; // 0x50

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_5_354FFAF5B0FC5B5A__CTOR_OFFSET))(this);
	}

	::System::Void Method_5_4FED0CA16815702B(::MoleMole::Config::ConfigChessboardFloorMove* a1, ::Class_2_9DCE2FC33F67E8A2* a2, ::MoleMole::Config::UISpecialNumGroup* a3, ::Class_1_C376DB68B1C74261* a4)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigChessboardFloorMove*, ::Class_2_9DCE2FC33F67E8A2*, ::MoleMole::Config::UISpecialNumGroup*, ::Class_1_C376DB68B1C74261*))((::PBYTE)hIl2Cpp + CLASS_5_354FFAF5B0FC5B5A_METHOD_5_4FED0CA16815702B_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_5_89EF21CA0414B145()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_5_354FFAF5B0FC5B5A_METHOD_5_89EF21CA0414B145_OFFSET))(this);
	}

	::System::Void Method_5_F0E5333B48B6C5FF(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_5_354FFAF5B0FC5B5A_METHOD_5_F0E5333B48B6C5FF_OFFSET))(this, a1);
	}

	::System::Void Method_5_89D1F247B9D324EE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_5_354FFAF5B0FC5B5A_METHOD_5_89D1F247B9D324EE_OFFSET))(this);
	}

	::System::Void Method_5_2685B6183E614529(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_5_354FFAF5B0FC5B5A_METHOD_5_2685B6183E614529_OFFSET))(this, a1);
	}

	::System::Void Method_5_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_5_354FFAF5B0FC5B5A_METHOD_5_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_5_CA373AA1C7054598_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_5_354FFAF5B0FC5B5A_METHOD_5_CA373AA1C7054598_1_OFFSET))(this);
	}
};

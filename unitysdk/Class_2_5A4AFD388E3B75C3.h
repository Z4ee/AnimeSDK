#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/BaseModule.h"

namespace RPG::GameCore { class BattleFailureTipsConfigRow; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_5A4AFD388E3B75C3_DISPOSE_OFFSET UNITYSDK_OFFSET(0xB018BD0)
#define CLASS_2_5A4AFD388E3B75C3_INIT_OFFSET UNITYSDK_OFFSET(0xB0185C0)
#define CLASS_2_5A4AFD388E3B75C3_METHOD_2_017C915772AE00E9_OFFSET UNITYSDK_OFFSET(0xB018CC0)
#define CLASS_2_5A4AFD388E3B75C3_METHOD_2_57D5ED2C4C06D908_OFFSET UNITYSDK_OFFSET(0xB0186E0)
#define CLASS_2_5A4AFD388E3B75C3__ADDNOTIFYHANDLERS_OFFSET UNITYSDK_OFFSET(0xB018C80)
#define CLASS_2_5A4AFD388E3B75C3__CTOR_OFFSET UNITYSDK_OFFSET(0xB018D60)
#define CLASS_2_5A4AFD388E3B75C3___IFIXBASEPROXY_DISPOSE_OFFSET UNITYSDK_OFFSET(0xB018E00)
#define CLASS_2_5A4AFD388E3B75C3___IFIXBASEPROXY_INIT_OFFSET UNITYSDK_OFFSET(0xB018D80)
#define CLASS_2_5A4AFD388E3B75C3___IFIXBASEPROXY__ADDNOTIFYHANDLERS_OFFSET UNITYSDK_OFFSET(0xB018E10)

inline static constexpr unsigned int Class_2_5A4AFD388E3B75C3_TypeDefinitionIndex = 58849;

class Class_2_5A4AFD388E3B75C3 : public ::RPG::Client::BaseModule
{
public:
	::System::Collections::Generic::List_1<::System::UInt32>* Field_2_0; // 0x10
	::System::Collections::Generic::List_1<::RPG::GameCore::BattleFailureTipsConfigRow*>* Field_2_1; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5A4AFD388E3B75C3__CTOR_OFFSET))(this);
	}

	::System::Void Init()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5A4AFD388E3B75C3_INIT_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5A4AFD388E3B75C3_DISPOSE_OFFSET))(this);
	}

	::System::Void _AddNotifyHandlers()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5A4AFD388E3B75C3__ADDNOTIFYHANDLERS_OFFSET))(this);
	}

	::System::Void Method_2_017C915772AE00E9()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5A4AFD388E3B75C3_METHOD_2_017C915772AE00E9_OFFSET))(this);
	}

	::System::Void Method_2_57D5ED2C4C06D908()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5A4AFD388E3B75C3_METHOD_2_57D5ED2C4C06D908_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_Init()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5A4AFD388E3B75C3___IFIXBASEPROXY_INIT_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5A4AFD388E3B75C3___IFIXBASEPROXY_DISPOSE_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy__AddNotifyHandlers()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5A4AFD388E3B75C3___IFIXBASEPROXY__ADDNOTIFYHANDLERS_OFFSET))(this);
	}
};

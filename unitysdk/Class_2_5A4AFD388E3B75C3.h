#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/BaseModule.h"

namespace RPG::GameCore { class BattleFailureTipsConfigRow; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_5A4AFD388E3B75C3_DISPOSE_OFFSET UNITYSDK_OFFSET(0xC477FA0)
#define CLASS_2_5A4AFD388E3B75C3_INIT_OFFSET UNITYSDK_OFFSET(0xC4779F0)
#define CLASS_2_5A4AFD388E3B75C3_METHOD_2_017C915772AE00E9_OFFSET UNITYSDK_OFFSET(0xC478090)
#define CLASS_2_5A4AFD388E3B75C3_METHOD_2_57D5ED2C4C06D908_OFFSET UNITYSDK_OFFSET(0xC477AB0)
#define CLASS_2_5A4AFD388E3B75C3__ADDNOTIFYHANDLERS_OFFSET UNITYSDK_OFFSET(0xC478050)
#define CLASS_2_5A4AFD388E3B75C3__CTOR_OFFSET UNITYSDK_OFFSET(0xC478130)

inline static constexpr unsigned int Class_2_5A4AFD388E3B75C3_TypeDefinitionIndex = 62966;

class Class_2_5A4AFD388E3B75C3 : public ::RPG::Client::BaseModule
{
public:
	::System::Collections::Generic::List_1<::System::UInt32>* BNIKMDAGAOP; // 0x10
	::System::Collections::Generic::List_1<::RPG::GameCore::BattleFailureTipsConfigRow*>* EIMHNEMFGIH; // 0x18

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
};

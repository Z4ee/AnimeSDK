#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_328;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_HORIZONTALBATTLECONTEXT_HORIZONTALBATTLETAB_INITTABDATA_OFFSET UNITYSDK_OFFSET(0x17908A10)
#define MOLEMOLE_HORIZONTALBATTLECONTEXT_HORIZONTALBATTLETAB_SETLOCK_OFFSET UNITYSDK_OFFSET(0x17908C10)
#define MOLEMOLE_HORIZONTALBATTLECONTEXT_HORIZONTALBATTLETAB__CTOR_OFFSET UNITYSDK_OFFSET(0x17908A00)

namespace MoleMole
{
	inline static constexpr unsigned int HorizontalBattleContext_HorizontalBattleTab_TypeDefinitionIndex = 56361;

	class HorizontalBattleContext_HorizontalBattleTab : public ::System::Object
	{
	public:
		::System::String* BackGroundPath; // 0x10
		::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_328*>* LevelList; // 0x18
		::System::String* TabName; // 0x20
		::System::Boolean IsNewTab; // 0x28
		::System::Boolean IsLock; // 0x29

		::System::Void _ctor(::System::String* tabName, ::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_328*>* levelList)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_328*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_HORIZONTALBATTLECONTEXT_HORIZONTALBATTLETAB__CTOR_OFFSET))(this, tabName, levelList);
		}

		::System::Void InitTabData()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_HORIZONTALBATTLECONTEXT_HORIZONTALBATTLETAB_INITTABDATA_OFFSET))(this);
		}

		::System::Void SetLock(::System::Boolean isLock)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_HORIZONTALBATTLECONTEXT_HORIZONTALBATTLETAB_SETLOCK_OFFSET))(this, isLock);
		}
	};
}

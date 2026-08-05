#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/MyLoggerSwitcher_MyLoggerSwitcherItem.h"
#include "unitysdk/Foundation/Singleton_1.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define FOUNDATION_MYLOGGERSWITCHER_CHECKISENABLE_OFFSET UNITYSDK_OFFSET(0x1E1919B0)
#define FOUNDATION_MYLOGGERSWITCHER_GET_SAVEFILENAME_OFFSET UNITYSDK_OFFSET(0x1E191D70)
#define FOUNDATION_MYLOGGERSWITCHER_LOAD_OFFSET UNITYSDK_OFFSET(0x1E191810)
#define FOUNDATION_MYLOGGERSWITCHER_SAVE_OFFSET UNITYSDK_OFFSET(0x1E191BA0)
#define FOUNDATION_MYLOGGERSWITCHER__CTOR_OFFSET UNITYSDK_OFFSET(0x1E1917F0)

namespace Foundation
{
	inline static constexpr unsigned int MyLoggerSwitcher_TypeDefinitionIndex = 8466;

	class MyLoggerSwitcher : public ::Foundation::Singleton_1<::Foundation::MyLoggerSwitcher*>
	{
	public:
		::System::Collections::Generic::List_1<::Foundation::MyLoggerSwitcher_MyLoggerSwitcherItem>* _logSwitcher; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_MYLOGGERSWITCHER__CTOR_OFFSET))(this);
		}

		::System::Boolean CheckIsEnable(::System::String* key)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + FOUNDATION_MYLOGGERSWITCHER_CHECKISENABLE_OFFSET))(this, key);
		}

		::System::Void Load()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_MYLOGGERSWITCHER_LOAD_OFFSET))(this);
		}

		::System::Void Save()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_MYLOGGERSWITCHER_SAVE_OFFSET))(this);
		}

		::System::String* get_SaveFileName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_MYLOGGERSWITCHER_GET_SAVEFILENAME_OFFSET))(this);
		}
	};
}

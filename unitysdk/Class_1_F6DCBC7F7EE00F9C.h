#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class BattleInstance; }

#define CLASS_1_F6DCBC7F7EE00F9C_METHOD_1_1C32C6A727E940CF_OFFSET UNITYSDK_OFFSET(0x10616A00)
#define CLASS_1_F6DCBC7F7EE00F9C_METHOD_1_63B829B9389E5B83_OFFSET UNITYSDK_OFFSET(0x106168E0)
#define CLASS_1_F6DCBC7F7EE00F9C_METHOD_1_F89C0F885BC10351_OFFSET UNITYSDK_OFFSET(0x10616B50)
#define CLASS_1_F6DCBC7F7EE00F9C__CTOR_OFFSET UNITYSDK_OFFSET(0x10616C20)

inline static constexpr unsigned int Class_1_F6DCBC7F7EE00F9C_TypeDefinitionIndex = 74290;

class Class_1_F6DCBC7F7EE00F9C : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F6DCBC7F7EE00F9C__CTOR_OFFSET))(this);
	}

	::System::Boolean Method_1_63B829B9389E5B83(::RPG::GameCore::BattleInstance*& a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::BattleInstance*&))((::PBYTE)hIl2Cpp + CLASS_1_F6DCBC7F7EE00F9C_METHOD_1_63B829B9389E5B83_OFFSET))(this, a1);
	}

	::System::Nullable_1<::System::Int32> Method_1_1C32C6A727E940CF()
	{
		return ((::System::Nullable_1<::System::Int32>(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F6DCBC7F7EE00F9C_METHOD_1_1C32C6A727E940CF_OFFSET))(this);
	}

	::System::Nullable_1<::System::Int32> Method_1_F89C0F885BC10351()
	{
		return ((::System::Nullable_1<::System::Int32>(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F6DCBC7F7EE00F9C_METHOD_1_F89C0F885BC10351_OFFSET))(this);
	}
};

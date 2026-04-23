#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/GamePlayLockTargetFunc.h"

class Class_0_16E4307DCC419505_303;
namespace RPG::GameCore { class GameWorld; }
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_6E1CBA3CFF03EDC8_LOCK_OFFSET UNITYSDK_OFFSET(0x97DC060)
#define CLASS_2_6E1CBA3CFF03EDC8_METHOD_2_ABDF85D3A0E98557_OFFSET UNITYSDK_OFFSET(0x97DC910)
#define CLASS_2_6E1CBA3CFF03EDC8_METHOD_2_F844C7D82F25E1EF_OFFSET UNITYSDK_OFFSET(0x97DC450)
#define CLASS_2_6E1CBA3CFF03EDC8_UNLOCK_OFFSET UNITYSDK_OFFSET(0x97DC530)
#define CLASS_2_6E1CBA3CFF03EDC8__CTOR_OFFSET UNITYSDK_OFFSET(0x97DC050)
#define CLASS_2_6E1CBA3CFF03EDC8___IFIXBASEPROXY_LOCK_OFFSET UNITYSDK_OFFSET(0x97DC960)
#define CLASS_2_6E1CBA3CFF03EDC8___IFIXBASEPROXY_UNLOCK_OFFSET UNITYSDK_OFFSET(0x97DC9D0)

inline static constexpr unsigned int Class_2_6E1CBA3CFF03EDC8_TypeDefinitionIndex = 68985;

class Class_2_6E1CBA3CFF03EDC8 : public ::RPG::Client::GamePlayLockTargetFunc
{
public:
	::System::Void _ctor(::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_303*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_303*>*))((::PBYTE)hIl2Cpp + CLASS_2_6E1CBA3CFF03EDC8__CTOR_OFFSET))(this, a1);
	}

	::System::Void Lock(::Il2CppArray<::System::Object*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Object*>*))((::PBYTE)hIl2Cpp + CLASS_2_6E1CBA3CFF03EDC8_LOCK_OFFSET))(this, a1);
	}

	::System::Void Unlock(::Il2CppArray<::System::Object*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Object*>*))((::PBYTE)hIl2Cpp + CLASS_2_6E1CBA3CFF03EDC8_UNLOCK_OFFSET))(this, a1);
	}

	::System::Void Method_2_ABDF85D3A0E98557(::RPG::GameCore::GameWorld* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameWorld*))((::PBYTE)hIl2Cpp + CLASS_2_6E1CBA3CFF03EDC8_METHOD_2_ABDF85D3A0E98557_OFFSET))(this, a1);
	}

	static ::System::Void Method_2_F844C7D82F25E1EF(::RPG::GameCore::GameWorld* a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::RPG::GameCore::GameWorld*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_6E1CBA3CFF03EDC8_METHOD_2_F844C7D82F25E1EF_OFFSET))(a1, a2);
	}

	::System::Void __iFixBaseProxy_Lock(::Il2CppArray<::System::Object*>* P0)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Object*>*))((::PBYTE)hIl2Cpp + CLASS_2_6E1CBA3CFF03EDC8___IFIXBASEPROXY_LOCK_OFFSET))(this, P0);
	}

	::System::Void __iFixBaseProxy_Unlock(::Il2CppArray<::System::Object*>* P0)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Object*>*))((::PBYTE)hIl2Cpp + CLASS_2_6E1CBA3CFF03EDC8___IFIXBASEPROXY_UNLOCK_OFFSET))(this, P0);
	}
};

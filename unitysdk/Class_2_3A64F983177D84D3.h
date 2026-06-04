#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/GamePlayLockTargetFunc.h"

class Class_0_16E4307DCC419505_316;
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_3A64F983177D84D3_LOCK_OFFSET UNITYSDK_OFFSET(0x14171E30)
#define CLASS_2_3A64F983177D84D3_METHOD_2_D2260F16F48CA325_OFFSET UNITYSDK_OFFSET(0x14171E80)
#define CLASS_2_3A64F983177D84D3_UNLOCK_OFFSET UNITYSDK_OFFSET(0x14171F30)
#define CLASS_2_3A64F983177D84D3__CTOR_OFFSET UNITYSDK_OFFSET(0x14171E20)
#define CLASS_2_3A64F983177D84D3___IFIXBASEPROXY_LOCK_OFFSET UNITYSDK_OFFSET(0x14171F80)
#define CLASS_2_3A64F983177D84D3___IFIXBASEPROXY_UNLOCK_OFFSET UNITYSDK_OFFSET(0x14171FE0)

inline static constexpr unsigned int Class_2_3A64F983177D84D3_TypeDefinitionIndex = 69812;

class Class_2_3A64F983177D84D3 : public ::RPG::Client::GamePlayLockTargetFunc
{
public:
	::System::Void _ctor(::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_316*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_316*>*))((::PBYTE)hIl2Cpp + CLASS_2_3A64F983177D84D3__CTOR_OFFSET))(this, a1);
	}

	::System::Void Lock(::Il2CppArray<::System::Object*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Object*>*))((::PBYTE)hIl2Cpp + CLASS_2_3A64F983177D84D3_LOCK_OFFSET))(this, a1);
	}

	::System::Void Unlock(::Il2CppArray<::System::Object*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Object*>*))((::PBYTE)hIl2Cpp + CLASS_2_3A64F983177D84D3_UNLOCK_OFFSET))(this, a1);
	}

	::System::Void Method_2_D2260F16F48CA325(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_3A64F983177D84D3_METHOD_2_D2260F16F48CA325_OFFSET))(this, a1);
	}

	::System::Void __iFixBaseProxy_Lock(::Il2CppArray<::System::Object*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Object*>*))((::PBYTE)hIl2Cpp + CLASS_2_3A64F983177D84D3___IFIXBASEPROXY_LOCK_OFFSET))(this, a1);
	}

	::System::Void __iFixBaseProxy_Unlock(::Il2CppArray<::System::Object*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Object*>*))((::PBYTE)hIl2Cpp + CLASS_2_3A64F983177D84D3___IFIXBASEPROXY_UNLOCK_OFFSET))(this, a1);
	}
};

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_694;
namespace RPG::AvatarSystem { class IAvatar; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_E95AD75CA23B8C6C_METHOD_1_5DD5C1BB765A38EB_OFFSET UNITYSDK_OFFSET(0x13C31F80)
#define CLASS_1_E95AD75CA23B8C6C_METHOD_1_CC24A8CBD62623DA_OFFSET UNITYSDK_OFFSET(0x13C32060)
#define CLASS_1_E95AD75CA23B8C6C__CTOR_OFFSET UNITYSDK_OFFSET(0x13C32010)

inline static constexpr unsigned int Class_1_E95AD75CA23B8C6C_TypeDefinitionIndex = 58520;

class Class_1_E95AD75CA23B8C6C : public ::System::Object
{
public:
	::Il2CppArray<::Class_0_16E4307DCC419505_694*>* Field_1_0; // 0x10

	::System::Void _ctor(::Il2CppArray<::Class_0_16E4307DCC419505_694*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::Class_0_16E4307DCC419505_694*>*))((::PBYTE)hIl2Cpp + CLASS_1_E95AD75CA23B8C6C__CTOR_OFFSET))(this, a1);
	}

	static ::Class_1_E95AD75CA23B8C6C* Method_1_5DD5C1BB765A38EB(::Il2CppArray<::Class_0_16E4307DCC419505_694*>* a1)
	{
		return ((::Class_1_E95AD75CA23B8C6C*(*)(::Il2CppArray<::Class_0_16E4307DCC419505_694*>*))((::PBYTE)hIl2Cpp + CLASS_1_E95AD75CA23B8C6C_METHOD_1_5DD5C1BB765A38EB_OFFSET))(a1);
	}

	::System::Collections::Generic::List_1<::RPG::AvatarSystem::IAvatar*>* Method_1_CC24A8CBD62623DA()
	{
		return ((::System::Collections::Generic::List_1<::RPG::AvatarSystem::IAvatar*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E95AD75CA23B8C6C_METHOD_1_CC24A8CBD62623DA_OFFSET))(this);
	}
};

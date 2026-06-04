#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define CLASS_1_75689124DAD47FA9_1_CLASS_1_D35DAB6258A728DC_GETARRAY_OFFSET UNITYSDK_OFFSET(0x143BBFC0)
#define CLASS_1_75689124DAD47FA9_1_CLASS_1_D35DAB6258A728DC_RETURNARRAY_OFFSET UNITYSDK_OFFSET(0x143BC0B0)
#define CLASS_1_75689124DAD47FA9_1_CLASS_1_D35DAB6258A728DC__CTOR_OFFSET UNITYSDK_OFFSET(0x143BBFB0)

inline static constexpr unsigned int Class_1_75689124DAD47FA9_1_Class_1_D35DAB6258A728DC_TypeDefinitionIndex = 64885;

class Class_1_75689124DAD47FA9_1_Class_1_D35DAB6258A728DC : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_75689124DAD47FA9_1_CLASS_1_D35DAB6258A728DC__CTOR_OFFSET))(this);
	}

	::Il2CppArray<::System::Byte>* GetArray(::System::Int32 a1)
	{
		return ((::Il2CppArray<::System::Byte>*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_75689124DAD47FA9_1_CLASS_1_D35DAB6258A728DC_GETARRAY_OFFSET))(this, a1);
	}

	::System::Void ReturnArray(::Il2CppArray<::System::Byte>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + CLASS_1_75689124DAD47FA9_1_CLASS_1_D35DAB6258A728DC_RETURNARRAY_OFFSET))(this, a1);
	}
};

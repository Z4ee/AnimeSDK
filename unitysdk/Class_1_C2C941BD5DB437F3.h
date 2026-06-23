#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_CB5690F6DB6722A0;

#define CLASS_1_C2C941BD5DB437F3_METHOD_1_28718D08835F451A_OFFSET UNITYSDK_OFFSET(0x1CF83EF0)
#define CLASS_1_C2C941BD5DB437F3_METHOD_1_3C301397B4596391_OFFSET UNITYSDK_OFFSET(0x1CF7F1A0)
#define CLASS_1_C2C941BD5DB437F3_METHOD_1_65C710033AD4410E_OFFSET UNITYSDK_OFFSET(0x1CF83F50)
#define CLASS_1_C2C941BD5DB437F3__CTOR_OFFSET UNITYSDK_OFFSET(0x1CF73940)

inline static constexpr unsigned int Class_1_C2C941BD5DB437F3_TypeDefinitionIndex = 33901;

class Class_1_C2C941BD5DB437F3 : public ::System::Object
{
public:
	::Il2CppArray<::System::Byte>* Field_1_1; // 0x10
	::System::UInt32 Field_1_0; // 0x18

	::System::Void _ctor(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_C2C941BD5DB437F3__CTOR_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_28718D08835F451A(::Il2CppArray<::System::Byte>*& a1, ::System::UInt32& a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Il2CppArray<::System::Byte>*&, ::System::UInt32&))((::PBYTE)hIl2Cpp + CLASS_1_C2C941BD5DB437F3_METHOD_1_28718D08835F451A_OFFSET))(this, a1, a2);
	}

	static ::Il2CppArray<::System::Byte>* Method_1_65C710033AD4410E(::System::UInt64 a1, ::System::UInt64 a2)
	{
		return ((::Il2CppArray<::System::Byte>*(*)(::System::UInt64, ::System::UInt64))((::PBYTE)hIl2Cpp + CLASS_1_C2C941BD5DB437F3_METHOD_1_65C710033AD4410E_OFFSET))(a1, a2);
	}

	::System::Boolean Method_1_3C301397B4596391(::Class_1_CB5690F6DB6722A0* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_CB5690F6DB6722A0*))((::PBYTE)hIl2Cpp + CLASS_1_C2C941BD5DB437F3_METHOD_1_3C301397B4596391_OFFSET))(this, a1);
	}
};

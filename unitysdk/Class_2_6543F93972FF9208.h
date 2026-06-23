#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_43BD383C98B4C0C5_19.h"

#define CLASS_2_6543F93972FF9208_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1CF73430)
#define CLASS_2_6543F93972FF9208_METHOD_2_EBA2AA4AB9DDC60F_OFFSET UNITYSDK_OFFSET(0x1CF72D60)
#define CLASS_2_6543F93972FF9208__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1CF81D10)
#define CLASS_2_6543F93972FF9208__CTOR_OFFSET UNITYSDK_OFFSET(0x1CF72810)

inline static constexpr unsigned int Class_2_6543F93972FF9208_TypeDefinitionIndex = 33877;

class Class_2_6543F93972FF9208 : public ::Class_1_43BD383C98B4C0C5_19
{
public:
	::Il2CppArray<::System::Byte>* Field_2_0; // 0x10
	::System::Int64 Field_2_1; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6543F93972FF9208__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Il2CppArray<::System::Byte>* a1, ::System::Int64 a2)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::System::Int64))((::PBYTE)hIl2Cpp + CLASS_2_6543F93972FF9208__CTOR_1_OFFSET))(this, a1, a2);
	}

	::System::Int64 Method_2_EBA2AA4AB9DDC60F(::System::Int64 a1, ::Il2CppArray<::System::Byte>* a2, ::System::Int32 a3, ::System::Int32 a4)
	{
		return ((::System::Int64(*)(::PVOID, ::System::Int64, ::Il2CppArray<::System::Byte>*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_6543F93972FF9208_METHOD_2_EBA2AA4AB9DDC60F_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6543F93972FF9208_DISPOSE_OFFSET))(this);
	}
};

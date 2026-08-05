#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_B7E341C5F1A6F199.h"

namespace System { class String; }

#define CLASS_2_A3374693E1DCFAB6_METHOD_2_50131F4CF014469C_OFFSET UNITYSDK_OFFSET(0x17215060)
#define CLASS_2_A3374693E1DCFAB6_METHOD_2_6782B1B380F063A8_OFFSET UNITYSDK_OFFSET(0x17215180)
#define CLASS_2_A3374693E1DCFAB6_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x172150F0)
#define CLASS_2_A3374693E1DCFAB6__CCTOR_OFFSET UNITYSDK_OFFSET(0x17214FE0)
#define CLASS_2_A3374693E1DCFAB6__CTOR_OFFSET UNITYSDK_OFFSET(0x17215050)

inline static constexpr unsigned int Class_2_A3374693E1DCFAB6_TypeDefinitionIndex = 43239;

class Class_2_A3374693E1DCFAB6 : public ::Class_1_B7E341C5F1A6F199
{
public:
	// static const ::System::UInt16 Field_2_7 = 0x114; // 0x0
	::Il2CppArray<::System::String*>* Field_2_0; // 0x20
	::Il2CppArray<::System::Int32>* Field_2_3; // 0x28
	::System::String* Field_2_1; // 0x30
	::System::Boolean Field_2_2; // 0x38

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_A3374693E1DCFAB6__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A3374693E1DCFAB6__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_50131F4CF014469C()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A3374693E1DCFAB6_METHOD_2_50131F4CF014469C_OFFSET))(this);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A3374693E1DCFAB6_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_2_6782B1B380F063A8(::System::UInt32 a1, ::Il2CppArray<::System::Int32>* a2, ::System::String* a3, ::System::Boolean a4, ::Il2CppArray<::System::String*>* a5)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::Il2CppArray<::System::Int32>*, ::System::String*, ::System::Boolean, ::Il2CppArray<::System::String*>*))((::PBYTE)hIl2Cpp + CLASS_2_A3374693E1DCFAB6_METHOD_2_6782B1B380F063A8_OFFSET))(this, a1, a2, a3, a4, a5);
	}
};

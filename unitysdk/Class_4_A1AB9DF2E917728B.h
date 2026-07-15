#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_3_3F1B1DE9D9F51912.h"
#include "unitysdk/Struct_2_395B739A1AC58399_1.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_A043D803AC652E6E;
namespace UnityEngine { class Transform; }

#define CLASS_4_A1AB9DF2E917728B_METHOD_4_9B8014E775FB45D6_OFFSET UNITYSDK_OFFSET(0x17454C90)
#define CLASS_4_A1AB9DF2E917728B_METHOD_4_AD23FDCC7576BB32_OFFSET UNITYSDK_OFFSET(0x17454ED0)
#define CLASS_4_A1AB9DF2E917728B_METHOD_4_C5316B8772B0F7ED_OFFSET UNITYSDK_OFFSET(0x174551F0)
#define CLASS_4_A1AB9DF2E917728B_METHOD_4_DE481EE510C0F24F_OFFSET UNITYSDK_OFFSET(0x17454AB0)
#define CLASS_4_A1AB9DF2E917728B_REVERSE_OFFSET UNITYSDK_OFFSET(0x17454E10)
#define CLASS_4_A1AB9DF2E917728B_STARTWITHTARGET_OFFSET UNITYSDK_OFFSET(0x17454D60)
#define CLASS_4_A1AB9DF2E917728B__CTOR_OFFSET UNITYSDK_OFFSET(0x17454C70)

inline static constexpr unsigned int Class_4_A1AB9DF2E917728B_TypeDefinitionIndex = 70098;

class Class_4_A1AB9DF2E917728B : public ::Class_3_3F1B1DE9D9F51912
{
public:
	::UnityEngine::Vector3 Field_4_0; // 0x38
	::Struct_2_395B739A1AC58399_1 Field_4_1; // 0x44
	::UnityEngine::Vector3 Field_4_2; // 0x68

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_A1AB9DF2E917728B__CTOR_OFFSET))(this);
	}

	static ::Class_4_A1AB9DF2E917728B* Method_4_DE481EE510C0F24F(::System::Single a1, ::Struct_2_395B739A1AC58399_1 a2)
	{
		return ((::Class_4_A1AB9DF2E917728B*(*)(::System::Single, ::Struct_2_395B739A1AC58399_1))((::PBYTE)hIl2Cpp + CLASS_4_A1AB9DF2E917728B_METHOD_4_DE481EE510C0F24F_OFFSET))(a1, a2);
	}

	::System::Boolean Method_4_9B8014E775FB45D6(::System::Single a1, ::Struct_2_395B739A1AC58399_1 a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Single, ::Struct_2_395B739A1AC58399_1))((::PBYTE)hIl2Cpp + CLASS_4_A1AB9DF2E917728B_METHOD_4_9B8014E775FB45D6_OFFSET))(this, a1, a2);
	}

	::System::Void StartWithTarget(::UnityEngine::Transform* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + CLASS_4_A1AB9DF2E917728B_STARTWITHTARGET_OFFSET))(this, a1);
	}

	::Class_1_A043D803AC652E6E* Reverse()
	{
		return ((::Class_1_A043D803AC652E6E*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_A1AB9DF2E917728B_REVERSE_OFFSET))(this);
	}

	::System::Void Method_4_AD23FDCC7576BB32(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_4_A1AB9DF2E917728B_METHOD_4_AD23FDCC7576BB32_OFFSET))(this, a1);
	}

	static ::System::Single Method_4_C5316B8772B0F7ED(::System::Single a1, ::System::Single a2, ::System::Single a3, ::System::Single a4, ::System::Single a5)
	{
		return ((::System::Single(*)(::System::Single, ::System::Single, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_4_A1AB9DF2E917728B_METHOD_4_C5316B8772B0F7ED_OFFSET))(a1, a2, a3, a4, a5);
	}
};

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_A48F3719AA1CF200_38.h"
#include "unitysdk/MoleMole/Arcade/BallsRace/BrEntityType.h"
#include "unitysdk/Struct_2_FA6F1CFCFAC0D4A9.h"

class Class_3_01B4CC30216C9ABE_1;
class Class_4_C3281F1010689A02;

#define CLASS_3_9D5733E4E81DEEEA_METHOD_3_F52C35CFABCB147C_OFFSET UNITYSDK_OFFSET(0x1E04F080)
#define CLASS_3_9D5733E4E81DEEEA__CTOR_OFFSET UNITYSDK_OFFSET(0x1E04F000)

inline static constexpr unsigned int Class_3_9D5733E4E81DEEEA_TypeDefinitionIndex = 92110;

class Class_3_9D5733E4E81DEEEA : public ::Class_2_A48F3719AA1CF200_38
{
public:
	::Il2CppArray<::Struct_2_FA6F1CFCFAC0D4A9>* Field_3_7; // 0x20
	::Il2CppArray<::MoleMole::Arcade::BallsRace::BrEntityType>* Field_3_1; // 0x28
	::Il2CppArray<::System::UInt32>* Field_3_0; // 0x30
	::Il2CppArray<::System::UInt64>* Field_3_6; // 0x38

	::System::Void _ctor(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_3_9D5733E4E81DEEEA__CTOR_OFFSET))(this, a1);
	}

	::System::Void Method_3_F52C35CFABCB147C(::Class_3_01B4CC30216C9ABE_1* a1, ::Class_4_C3281F1010689A02* a2, ::System::Int32 a3, ::System::UInt64 a4)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_01B4CC30216C9ABE_1*, ::Class_4_C3281F1010689A02*, ::System::Int32, ::System::UInt64))((::PBYTE)hIl2Cpp + CLASS_3_9D5733E4E81DEEEA_METHOD_3_F52C35CFABCB147C_OFFSET))(this, a1, a2, a3, a4);
	}
};

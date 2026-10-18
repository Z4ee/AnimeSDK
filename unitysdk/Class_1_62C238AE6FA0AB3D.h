#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_96F6662CA3713095.h"
#include "unitysdk/Enum_3_F80BFD5B986D5503.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define CLASS_1_62C238AE6FA0AB3D_METHOD_1_81F3FEDEB8077FC5_OFFSET UNITYSDK_OFFSET(0x1D0A3F90)
#define CLASS_1_62C238AE6FA0AB3D__CTOR_OFFSET UNITYSDK_OFFSET(0x1D0A4170)

inline static constexpr unsigned int Class_1_62C238AE6FA0AB3D_TypeDefinitionIndex = 12023;

class Class_1_62C238AE6FA0AB3D : public ::System::Object
{
public:
	::Il2CppArray<::System::String*>* OHILMAPCAHM; // 0x10
	::Enum_3_F80BFD5B986D5503 OAPONHEHCOJ; // 0x18
	::System::UInt32 EHLMAJICIGJ; // 0x1C
	::Enum_3_96F6662CA3713095 CADLBIKGCCP; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_62C238AE6FA0AB3D__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_1_81F3FEDEB8077FC5(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_1_62C238AE6FA0AB3D*& a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_1_62C238AE6FA0AB3D*&))((::PBYTE)hIl2Cpp + CLASS_1_62C238AE6FA0AB3D_METHOD_1_81F3FEDEB8077FC5_OFFSET))(a1, a2);
	}
};

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/EntityType.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/AnimatorCullingMode.h"

class Class_3_F33F9DC5F4112336;
namespace MoleMole::Battle { class Entity; }

#define CLASS_1_A38BF3E778FA910E_METHOD_1_2A0F87BBFF6387F7_OFFSET UNITYSDK_OFFSET(0x1398ED50)
#define CLASS_1_A38BF3E778FA910E_METHOD_1_63882E0318B95793_OFFSET UNITYSDK_OFFSET(0x1398EFC0)
#define CLASS_1_A38BF3E778FA910E_METHOD_1_ACEE8F0463BB6E80_OFFSET UNITYSDK_OFFSET(0x1398EDE0)
#define CLASS_1_A38BF3E778FA910E_METHOD_1_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x1398EF60)
#define CLASS_1_A38BF3E778FA910E__CTOR_OFFSET UNITYSDK_OFFSET(0x1398ED40)

inline static constexpr unsigned int Class_1_A38BF3E778FA910E_TypeDefinitionIndex = 89015;

class Class_1_A38BF3E778FA910E : public ::System::Object
{
public:
	::MoleMole::Battle::Entity* Field_1_4; // 0x10
	::Class_3_F33F9DC5F4112336* Field_1_11; // 0x18
	::UnityEngine::AnimatorCullingMode Field_1_6; // 0x20
	::MoleMole::Config::EntityType Field_1_5; // 0x24
	::System::Boolean Field_1_0; // 0x28
	::System::Int32 Field_1_7; // 0x2C
	::System::UInt32 Field_1_2; // 0x30
	::System::Int32 Field_1_1; // 0x34

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A38BF3E778FA910E__CTOR_OFFSET))(this);
	}

	static ::Class_1_A38BF3E778FA910E* Method_1_2A0F87BBFF6387F7()
	{
		return ((::Class_1_A38BF3E778FA910E*(*)())((::PBYTE)hIl2Cpp + CLASS_1_A38BF3E778FA910E_METHOD_1_2A0F87BBFF6387F7_OFFSET))();
	}

	static ::System::Void Method_1_ACEE8F0463BB6E80(::Class_1_A38BF3E778FA910E* a1)
	{
		return ((::System::Void(*)(::Class_1_A38BF3E778FA910E*))((::PBYTE)hIl2Cpp + CLASS_1_A38BF3E778FA910E_METHOD_1_ACEE8F0463BB6E80_OFFSET))(a1);
	}

	::System::Void Method_1_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A38BF3E778FA910E_METHOD_1_CA373AA1C7054598_OFFSET))(this);
	}

	static ::System::Void Method_1_63882E0318B95793(::Class_1_A38BF3E778FA910E*& a1)
	{
		return ((::System::Void(*)(::Class_1_A38BF3E778FA910E*&))((::PBYTE)hIl2Cpp + CLASS_1_A38BF3E778FA910E_METHOD_1_63882E0318B95793_OFFSET))(a1);
	}
};

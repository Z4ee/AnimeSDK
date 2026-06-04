#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define CLASS_3_A71767B01C046081_METHOD_3_14F2FC46FC687955_OFFSET UNITYSDK_OFFSET(0x191ADD70)
#define CLASS_3_A71767B01C046081_METHOD_3_2D9B1DEC829F4427_OFFSET UNITYSDK_OFFSET(0x191ADDF0)
#define CLASS_3_A71767B01C046081__CTOR_OFFSET UNITYSDK_OFFSET(0x191ADDC0)

inline static constexpr unsigned int Class_3_A71767B01C046081_TypeDefinitionIndex = 21642;

class Class_3_A71767B01C046081 : public ::RPG::GameCore::TaskConfig
{
public:
	::Il2CppArray<::System::String*>* Field_3_0; // 0x18
	::Il2CppArray<::System::String*>* Field_3_1; // 0x20
	::Il2CppArray<::System::String*>* Field_3_2; // 0x28
	::System::String* Field_3_3; // 0x30
	::Il2CppArray<::System::String*>* Field_3_4; // 0x38
	::Il2CppArray<::System::String*>* Field_3_5; // 0x40

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_A71767B01C046081__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_3_14F2FC46FC687955(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_3_A71767B01C046081*& a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_3_A71767B01C046081*&))((::PBYTE)hIl2Cpp + CLASS_3_A71767B01C046081_METHOD_3_14F2FC46FC687955_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_2D9B1DEC829F4427(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_3_A71767B01C046081* a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_3_A71767B01C046081*))((::PBYTE)hIl2Cpp + CLASS_3_A71767B01C046081_METHOD_3_2D9B1DEC829F4427_OFFSET))(a1, a2);
	}
};

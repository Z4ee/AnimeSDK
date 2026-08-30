#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AdvWaitingEventBase.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class TaskConfig; }
namespace System { class String; }

#define CLASS_4_64BCF413F756F4C1_METHOD_4_3051109D4354B20C_OFFSET UNITYSDK_OFFSET(0x1CF57F20)
#define CLASS_4_64BCF413F756F4C1_METHOD_4_637CBE131CC2826D_OFFSET UNITYSDK_OFFSET(0x1CF57ED0)
#define CLASS_4_64BCF413F756F4C1__CTOR_OFFSET UNITYSDK_OFFSET(0x1CF57F10)

inline static constexpr unsigned int Class_4_64BCF413F756F4C1_TypeDefinitionIndex = 22076;

class Class_4_64BCF413F756F4C1 : public ::RPG::GameCore::AdvWaitingEventBase
{
public:
	::System::String* LJPOEMIKGKB; // 0x20
	::Il2CppArray<::RPG::GameCore::TaskConfig*>* JEEACGDIOCE; // 0x28
	::RPG::GameCore::DynamicFloat* AMHGLPIJMBN; // 0x30
	::System::Boolean KHCFEEHLEFH; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_64BCF413F756F4C1__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_4_637CBE131CC2826D(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_4_64BCF413F756F4C1*& a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_4_64BCF413F756F4C1*&))((::PBYTE)hIl2Cpp + CLASS_4_64BCF413F756F4C1_METHOD_4_637CBE131CC2826D_OFFSET))(a1, a2);
	}

	static ::System::Void Method_4_3051109D4354B20C(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_4_64BCF413F756F4C1* a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_4_64BCF413F756F4C1*))((::PBYTE)hIl2Cpp + CLASS_4_64BCF413F756F4C1_METHOD_4_3051109D4354B20C_OFFSET))(a1, a2);
	}
};

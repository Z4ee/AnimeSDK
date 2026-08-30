#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define CLASS_3_9FCA7B1BEE77D5BD_METHOD_3_469ECD10EF199C13_OFFSET UNITYSDK_OFFSET(0x1C8D5820)
#define CLASS_3_9FCA7B1BEE77D5BD_METHOD_3_9E3D0C5F7C38F16C_OFFSET UNITYSDK_OFFSET(0x1C8D57E0)
#define CLASS_3_9FCA7B1BEE77D5BD__CTOR_OFFSET UNITYSDK_OFFSET(0x1C8D5810)

inline static constexpr unsigned int Class_3_9FCA7B1BEE77D5BD_TypeDefinitionIndex = 23088;

class Class_3_9FCA7B1BEE77D5BD : public ::RPG::GameCore::TaskConfig
{
public:
	::Il2CppArray<::System::String*>* DPBLGLBPFGK; // 0x18
	::System::String* OELMOCMDEJI; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_9FCA7B1BEE77D5BD__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_3_9E3D0C5F7C38F16C(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_3_9FCA7B1BEE77D5BD*& a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_3_9FCA7B1BEE77D5BD*&))((::PBYTE)hIl2Cpp + CLASS_3_9FCA7B1BEE77D5BD_METHOD_3_9E3D0C5F7C38F16C_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_469ECD10EF199C13(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_3_9FCA7B1BEE77D5BD* a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_3_9FCA7B1BEE77D5BD*))((::PBYTE)hIl2Cpp + CLASS_3_9FCA7B1BEE77D5BD_METHOD_3_469ECD10EF199C13_OFFSET))(a1, a2);
	}
};

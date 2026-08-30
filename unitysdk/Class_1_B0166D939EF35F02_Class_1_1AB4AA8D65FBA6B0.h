#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_1C30CE192ABE4C54;
class Class_1_5F51D4049EA87B7B;
class Class_1_93EC936D6B573DA2;
namespace RPG::GameCore { class TaskConfig; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_1_B0166D939EF35F02_CLASS_1_1AB4AA8D65FBA6B0__CTOR_OFFSET UNITYSDK_OFFSET(0x16932B20)

inline static constexpr unsigned int Class_1_B0166D939EF35F02_Class_1_1AB4AA8D65FBA6B0_TypeDefinitionIndex = 56006;

class Class_1_B0166D939EF35F02_Class_1_1AB4AA8D65FBA6B0 : public ::System::Object
{
public:
	::Class_1_93EC936D6B573DA2* BGOBPFANEHD; // 0x10
	::Class_1_5F51D4049EA87B7B* PJJGPDNKMJH; // 0x18
	::Class_1_1C30CE192ABE4C54* CIJDNELBFIG; // 0x20
	::RPG::GameCore::TaskContext* BKIFMPHBIAK; // 0x28
	::RPG::GameCore::TaskConfig* EABKOHGCHFP; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B0166D939EF35F02_CLASS_1_1AB4AA8D65FBA6B0__CTOR_OFFSET))(this);
	}
};

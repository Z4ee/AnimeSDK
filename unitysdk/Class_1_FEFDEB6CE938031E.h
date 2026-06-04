#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class GameComponentBase; }

#define CLASS_1_FEFDEB6CE938031E_METHOD_1_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x1442B550)
#define CLASS_1_FEFDEB6CE938031E__CTOR_OFFSET UNITYSDK_OFFSET(0x1442B5A0)

inline static constexpr unsigned int Class_1_FEFDEB6CE938031E_TypeDefinitionIndex = 53778;

class Class_1_FEFDEB6CE938031E : public ::System::Object
{
public:
	::RPG::GameCore::GameComponentBase* Field_1_0; // 0x10
	::Class_1_FEFDEB6CE938031E* Field_1_1; // 0x18
	::System::Int32 Field_1_2; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FEFDEB6CE938031E__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FEFDEB6CE938031E_METHOD_1_CA373AA1C7054598_OFFSET))(this);
	}
};

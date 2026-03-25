#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_0C40FF0290B5423C;
namespace RPG::GameCore { class GameEntity; }

#define CLASS_1_666516215F7752AA__CTOR_OFFSET UNITYSDK_OFFSET(0x117F2480)

inline static constexpr unsigned int Class_1_666516215F7752AA_TypeDefinitionIndex = 60053;

class Class_1_666516215F7752AA : public ::System::Object
{
public:
	::RPG::GameCore::GameEntity* Field_1_0; // 0x10
	::Il2CppArray<::System::Int32>* Field_1_1; // 0x18
	::Il2CppArray<::Class_1_0C40FF0290B5423C*>* Field_1_3; // 0x20
	::System::Boolean Field_1_2; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_666516215F7752AA__CTOR_OFFSET))(this);
	}
};

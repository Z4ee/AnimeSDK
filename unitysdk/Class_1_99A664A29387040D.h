#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AvatarPropertyType.h"
#include "unitysdk/System/Object.h"

class Class_1_588CD27F71E12A8A;
class Class_1_A561DBBEB8754F4D;

#define CLASS_1_99A664A29387040D_METHOD_1_46BAD610FE8DB0B4_OFFSET UNITYSDK_OFFSET(0xCFD1290)
#define CLASS_1_99A664A29387040D_METHOD_1_4E35707373DCBA3B_OFFSET UNITYSDK_OFFSET(0xCFD1470)
#define CLASS_1_99A664A29387040D__CTOR_OFFSET UNITYSDK_OFFSET(0xCFD14D0)

inline static constexpr unsigned int Class_1_99A664A29387040D_TypeDefinitionIndex = 62714;

class Class_1_99A664A29387040D : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_99A664A29387040D__CTOR_OFFSET))(this);
	}

	::Class_1_A561DBBEB8754F4D* Method_1_46BAD610FE8DB0B4(::RPG::GameCore::AvatarPropertyType& a1)
	{
		return ((::Class_1_A561DBBEB8754F4D*(*)(::PVOID, ::RPG::GameCore::AvatarPropertyType&))((::PBYTE)hIl2Cpp + CLASS_1_99A664A29387040D_METHOD_1_46BAD610FE8DB0B4_OFFSET))(this, a1);
	}

	::Class_1_588CD27F71E12A8A* Method_1_4E35707373DCBA3B(::RPG::GameCore::AvatarPropertyType& a1)
	{
		return ((::Class_1_588CD27F71E12A8A*(*)(::PVOID, ::RPG::GameCore::AvatarPropertyType&))((::PBYTE)hIl2Cpp + CLASS_1_99A664A29387040D_METHOD_1_4E35707373DCBA3B_OFFSET))(this, a1);
	}
};

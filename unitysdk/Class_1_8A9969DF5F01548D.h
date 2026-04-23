#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_24C2E7EF22229C6A;
class Class_2_F47F7A3F5E97970D;
class Class_3_1A92845FAFA5EC77;

#define CLASS_1_8A9969DF5F01548D_LATEEXECUTE_OFFSET UNITYSDK_OFFSET(0x8FD1770)
#define CLASS_1_8A9969DF5F01548D__CTOR_OFFSET UNITYSDK_OFFSET(0x8FD1750)

inline static constexpr unsigned int Class_1_8A9969DF5F01548D_TypeDefinitionIndex = 70623;

class Class_1_8A9969DF5F01548D : public ::System::Object
{
public:
	::Class_2_F47F7A3F5E97970D* Field_1_0; // 0x10
	::Class_3_1A92845FAFA5EC77* Field_1_1; // 0x18

	::System::Void _ctor(::Class_1_24C2E7EF22229C6A* a1, ::Class_3_1A92845FAFA5EC77* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_24C2E7EF22229C6A*, ::Class_3_1A92845FAFA5EC77*))((::PBYTE)hIl2Cpp + CLASS_1_8A9969DF5F01548D__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void LateExecute()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8A9969DF5F01548D_LATEEXECUTE_OFFSET))(this);
	}
};

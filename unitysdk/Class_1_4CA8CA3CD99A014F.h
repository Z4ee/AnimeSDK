#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_24C2E7EF22229C6A;
class Class_2_9DD8A46984F1AFFD;
class Class_2_F47F7A3F5E97970D;
class Class_3_1A92845FAFA5EC77;
namespace Entitas { template <typename T> class IGroup_1; }

#define CLASS_1_4CA8CA3CD99A014F_LATEEXECUTE_OFFSET UNITYSDK_OFFSET(0xA6CC010)
#define CLASS_1_4CA8CA3CD99A014F__CTOR_OFFSET UNITYSDK_OFFSET(0xA6CBF70)

inline static constexpr unsigned int Class_1_4CA8CA3CD99A014F_TypeDefinitionIndex = 62619;

class Class_1_4CA8CA3CD99A014F : public ::System::Object
{
public:
	::Class_2_F47F7A3F5E97970D* Field_1_0; // 0x10
	::Class_3_1A92845FAFA5EC77* Field_1_1; // 0x18
	::Entitas::IGroup_1<::Class_2_9DD8A46984F1AFFD*>* Field_1_2; // 0x20

	::System::Void _ctor(::Class_1_24C2E7EF22229C6A* a1, ::Class_3_1A92845FAFA5EC77* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_24C2E7EF22229C6A*, ::Class_3_1A92845FAFA5EC77*))((::PBYTE)hIl2Cpp + CLASS_1_4CA8CA3CD99A014F__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void LateExecute()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4CA8CA3CD99A014F_LATEEXECUTE_OFFSET))(this);
	}
};

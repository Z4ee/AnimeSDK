#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_B4357A1C72BABC6B;
class Class_2_B9E8C2EEAA5C96EC;
class Class_2_F47F7A3F5E97970D;
class Class_3_1E4F9B0ED3BF21DE;
namespace Entitas { template <typename T> class IGroup_1; }

#define CLASS_1_4CA8CA3CD99A014F_2_EXECUTE_OFFSET UNITYSDK_OFFSET(0x13502B30)
#define CLASS_1_4CA8CA3CD99A014F_2__CTOR_OFFSET UNITYSDK_OFFSET(0x13502A90)

inline static constexpr unsigned int Class_1_4CA8CA3CD99A014F_2_TypeDefinitionIndex = 71691;

class Class_1_4CA8CA3CD99A014F_2 : public ::System::Object
{
public:
	::Class_3_1E4F9B0ED3BF21DE* Field_1_0; // 0x10
	::Class_2_F47F7A3F5E97970D* Field_1_1; // 0x18
	::Entitas::IGroup_1<::Class_2_B9E8C2EEAA5C96EC*>* Field_1_2; // 0x20

	::System::Void _ctor(::Class_1_B4357A1C72BABC6B* a1, ::Class_3_1E4F9B0ED3BF21DE* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_B4357A1C72BABC6B*, ::Class_3_1E4F9B0ED3BF21DE*))((::PBYTE)hIl2Cpp + CLASS_1_4CA8CA3CD99A014F_2__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Execute()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4CA8CA3CD99A014F_2_EXECUTE_OFFSET))(this);
	}
};

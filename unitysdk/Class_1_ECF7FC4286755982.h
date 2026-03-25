#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class TAMonoTickLodTemplate; }
namespace System { template <typename T1, typename T2> class Tuple_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_ECF7FC4286755982_METHOD_1_4CDE1EA778BFA05C_OFFSET UNITYSDK_OFFSET(0x110E8070)
#define CLASS_1_ECF7FC4286755982_METHOD_1_7E018FEEC7B9632D_OFFSET UNITYSDK_OFFSET(0x110E7CE0)
#define CLASS_1_ECF7FC4286755982_METHOD_1_9681042564541CD6_OFFSET UNITYSDK_OFFSET(0x110E8000)
#define CLASS_1_ECF7FC4286755982__CTOR_OFFSET UNITYSDK_OFFSET(0x110E7C90)

inline static constexpr unsigned int Class_1_ECF7FC4286755982_TypeDefinitionIndex = 60644;

class Class_1_ECF7FC4286755982 : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::System::Tuple_2<::System::Single, ::System::Int32>*>* Field_1_0; // 0x10
	::System::Single Field_1_1; // 0x18

	::System::Void _ctor(::RPG::GameCore::TAMonoTickLodTemplate* a1, ::System::Int32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TAMonoTickLodTemplate*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_ECF7FC4286755982__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_7E018FEEC7B9632D(::RPG::GameCore::TAMonoTickLodTemplate* a1, ::System::Int32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TAMonoTickLodTemplate*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_ECF7FC4286755982_METHOD_1_7E018FEEC7B9632D_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_9681042564541CD6()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_ECF7FC4286755982_METHOD_1_9681042564541CD6_OFFSET))(this);
	}

	::System::Int32 Method_1_4CDE1EA778BFA05C(::System::Single a1)
	{
		return ((::System::Int32(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_ECF7FC4286755982_METHOD_1_4CDE1EA778BFA05C_OFFSET))(this, a1);
	}
};

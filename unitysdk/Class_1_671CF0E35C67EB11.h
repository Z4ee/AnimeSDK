#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CakeRaceTriggerEventType.h"
#include "unitysdk/System/Object.h"

class Class_1_7D0B754E2D8CECAF;
class Class_1_979F16DD4FAB7B8E;
class Class_3_626F93E2306641CC;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_671CF0E35C67EB11_METHOD_1_8EDC5B702148C1D6_OFFSET UNITYSDK_OFFSET(0xA453E00)
#define CLASS_1_671CF0E35C67EB11_METHOD_1_F7C76255991F0F9D_OFFSET UNITYSDK_OFFSET(0xA454160)
#define CLASS_1_671CF0E35C67EB11_METHOD_1_FD6692A5F6B0AC0C_OFFSET UNITYSDK_OFFSET(0xA453F30)
#define CLASS_1_671CF0E35C67EB11__CTOR_OFFSET UNITYSDK_OFFSET(0xA453ED0)

inline static constexpr unsigned int Class_1_671CF0E35C67EB11_TypeDefinitionIndex = 62169;

class Class_1_671CF0E35C67EB11 : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::Class_1_979F16DD4FAB7B8E*>* Field_1_1; // 0x10
	::RPG::GameCore::CakeRaceTriggerEventType Field_1_0; // 0x18

	::System::Void _ctor(::RPG::GameCore::CakeRaceTriggerEventType a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::CakeRaceTriggerEventType))((::PBYTE)hIl2Cpp + CLASS_1_671CF0E35C67EB11__CTOR_OFFSET))(this, a1);
	}

	static ::Class_1_671CF0E35C67EB11* Method_1_8EDC5B702148C1D6(::RPG::GameCore::CakeRaceTriggerEventType a1)
	{
		return ((::Class_1_671CF0E35C67EB11*(*)(::RPG::GameCore::CakeRaceTriggerEventType))((::PBYTE)hIl2Cpp + CLASS_1_671CF0E35C67EB11_METHOD_1_8EDC5B702148C1D6_OFFSET))(a1);
	}

	::System::Void Method_1_FD6692A5F6B0AC0C()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_671CF0E35C67EB11_METHOD_1_FD6692A5F6B0AC0C_OFFSET))(this);
	}

	::System::Void Method_1_F7C76255991F0F9D(::Class_3_626F93E2306641CC* a1, ::Class_1_7D0B754E2D8CECAF* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_626F93E2306641CC*, ::Class_1_7D0B754E2D8CECAF*))((::PBYTE)hIl2Cpp + CLASS_1_671CF0E35C67EB11_METHOD_1_F7C76255991F0F9D_OFFSET))(this, a1, a2);
	}
};

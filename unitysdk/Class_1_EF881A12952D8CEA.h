#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_D7003CCDED916330;
class Class_3_07C3C4D2990C49EE;
namespace RPG::GameCore { class FreeStyleAnimGroupEventConfig; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_1_EF881A12952D8CEA_DISPOSE_OFFSET UNITYSDK_OFFSET(0x15545770)
#define CLASS_1_EF881A12952D8CEA_METHOD_1_DCEFAFDD5C991493_OFFSET UNITYSDK_OFFSET(0x155456D0)
#define CLASS_1_EF881A12952D8CEA_METHOD_1_E1AD7DF7CE87A7A2_1_OFFSET UNITYSDK_OFFSET(0x15545600)
#define CLASS_1_EF881A12952D8CEA_METHOD_1_E1AD7DF7CE87A7A2_OFFSET UNITYSDK_OFFSET(0x15545530)
#define CLASS_1_EF881A12952D8CEA_METHOD_1_F0E307B84478A272_OFFSET UNITYSDK_OFFSET(0x15545290)
#define CLASS_1_EF881A12952D8CEA__CTOR_OFFSET UNITYSDK_OFFSET(0x155452B0)

inline static constexpr unsigned int Class_1_EF881A12952D8CEA_TypeDefinitionIndex = 57422;

class Class_1_EF881A12952D8CEA : public ::System::Object
{
public:
	::Il2CppArray<::System::Int32>* BAODKPDFNFC; // 0x10
	::Class_3_07C3C4D2990C49EE* KEBGDCCFDEF; // 0x18
	::RPG::GameCore::FreeStyleAnimGroupEventConfig* EABKOHGCHFP; // 0x20
	::Class_3_07C3C4D2990C49EE* MLFDPPFABHF; // 0x28
	::System::Boolean LEICGLBOIDL; // 0x30
	::System::Boolean LMLJLOCBMDI; // 0x31
	::System::Int32 FJJHLAEBNLJ; // 0x34

	::System::Void _ctor(::Class_1_D7003CCDED916330* a1, ::RPG::GameCore::TaskContext* a2, ::RPG::GameCore::FreeStyleAnimGroupEventConfig* a3)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_D7003CCDED916330*, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::FreeStyleAnimGroupEventConfig*))((::PBYTE)hIl2Cpp + CLASS_1_EF881A12952D8CEA__CTOR_OFFSET))(this, a1, a2, a3);
	}

	::System::Boolean Method_1_F0E307B84478A272()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EF881A12952D8CEA_METHOD_1_F0E307B84478A272_OFFSET))(this);
	}

	::System::Void Method_1_E1AD7DF7CE87A7A2(::Class_1_D7003CCDED916330* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_D7003CCDED916330*))((::PBYTE)hIl2Cpp + CLASS_1_EF881A12952D8CEA_METHOD_1_E1AD7DF7CE87A7A2_OFFSET))(this, a1);
	}

	::System::Void Method_1_E1AD7DF7CE87A7A2_1(::Class_1_D7003CCDED916330* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_D7003CCDED916330*))((::PBYTE)hIl2Cpp + CLASS_1_EF881A12952D8CEA_METHOD_1_E1AD7DF7CE87A7A2_1_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_DCEFAFDD5C991493(::System::Int32 a1, ::System::Int32 a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_EF881A12952D8CEA_METHOD_1_DCEFAFDD5C991493_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EF881A12952D8CEA_DISPOSE_OFFSET))(this);
	}
};

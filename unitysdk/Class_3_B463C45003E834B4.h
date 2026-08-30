#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_A48F3719AA1CF200_4.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/RPG/GameCore/StringHash.h"

class Class_1_43B0AF86156D9901;
class Class_1_5F51D4049EA87B7B;
namespace RPG::GameCore { class RandomConfig; }
namespace RPG::GameCore { class TaskContext; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_3_B463C45003E834B4_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1952E7E0)
#define CLASS_3_B463C45003E834B4_METHOD_3_0352744742F7C457_OFFSET UNITYSDK_OFFSET(0x19530230)
#define CLASS_3_B463C45003E834B4_METHOD_3_106289055FB804CE_OFFSET UNITYSDK_OFFSET(0x1952E9C0)
#define CLASS_3_B463C45003E834B4_METHOD_3_185B399CB78CCCB0_OFFSET UNITYSDK_OFFSET(0x1952F660)
#define CLASS_3_B463C45003E834B4_METHOD_3_DDFE24F2AFD1C7C5_OFFSET UNITYSDK_OFFSET(0x19530370)
#define CLASS_3_B463C45003E834B4_METHOD_3_F2ACC5B1FFC4D55A_OFFSET UNITYSDK_OFFSET(0x19530330)
#define CLASS_3_B463C45003E834B4_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x1952E960)
#define CLASS_3_B463C45003E834B4_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x1952FE60)
#define CLASS_3_B463C45003E834B4_TICK_OFFSET UNITYSDK_OFFSET(0x195301A0)
#define CLASS_3_B463C45003E834B4__CTOR_OFFSET UNITYSDK_OFFSET(0x1952E6E0)

inline static constexpr unsigned int Class_3_B463C45003E834B4_TypeDefinitionIndex = 54977;

class Class_3_B463C45003E834B4 : public ::Class_2_A48F3719AA1CF200_4
{
public:
	::Class_1_43B0AF86156D9901* AIJGGLCAEON; // 0x18
	::RPG::GameCore::TaskContext* EEFMDEHLLFI; // 0x20
	::System::Collections::Generic::List_1<::Class_1_5F51D4049EA87B7B*>* DLHGAHBOIDN; // 0x28
	::RPG::GameCore::RandomConfig* OFKGLJOAMLD; // 0x30
	::RPG::GameCore::StringHash JEMNICCLDAJ; // 0x38

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::RandomConfig* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::RandomConfig*))((::PBYTE)hIl2Cpp + CLASS_3_B463C45003E834B4__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_B463C45003E834B4_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_B463C45003E834B4_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_B463C45003E834B4_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_B463C45003E834B4_TICK_OFFSET))(this, a1);
	}

	::RPG::GameCore::TaskContext* Method_3_F2ACC5B1FFC4D55A()
	{
		return ((::RPG::GameCore::TaskContext*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_B463C45003E834B4_METHOD_3_F2ACC5B1FFC4D55A_OFFSET))(this);
	}

	::System::Void Method_3_185B399CB78CCCB0(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_B463C45003E834B4_METHOD_3_185B399CB78CCCB0_OFFSET))(this, a1);
	}

	::System::Boolean Method_3_0352744742F7C457()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_B463C45003E834B4_METHOD_3_0352744742F7C457_OFFSET))(this);
	}

	::System::Void Method_3_106289055FB804CE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_B463C45003E834B4_METHOD_3_106289055FB804CE_OFFSET))(this);
	}

	::Il2CppArray<::System::Int32>* Method_3_DDFE24F2AFD1C7C5(::System::UInt32 a1, ::Il2CppArray<::RPG::GameCore::FixPoint>* a2, ::System::Boolean a3)
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID, ::System::UInt32, ::Il2CppArray<::RPG::GameCore::FixPoint>*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_3_B463C45003E834B4_METHOD_3_DDFE24F2AFD1C7C5_OFFSET))(this, a1, a2, a3);
	}
};

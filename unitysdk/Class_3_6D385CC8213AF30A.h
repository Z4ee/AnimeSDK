#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_A48F3719AA1CF200_6.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/RPG/GameCore/StringHash.h"

class Class_1_5F51D4049EA87B7B;
class Class_1_827373C1CEDFE355;
namespace RPG::GameCore { class RandomConfig; }
namespace RPG::GameCore { class TaskContext; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_3_6D385CC8213AF30A_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1187B410)
#define CLASS_3_6D385CC8213AF30A_METHOD_3_4857357D5C1BFCE8_OFFSET UNITYSDK_OFFSET(0x1187B530)
#define CLASS_3_6D385CC8213AF30A_METHOD_3_7A5EE891DA69F667_OFFSET UNITYSDK_OFFSET(0x1187BFB0)
#define CLASS_3_6D385CC8213AF30A_METHOD_3_E240D159E3150659_OFFSET UNITYSDK_OFFSET(0x1187C970)
#define CLASS_3_6D385CC8213AF30A_METHOD_3_E56B9FE83D41CC29_OFFSET UNITYSDK_OFFSET(0x1187CAA0)
#define CLASS_3_6D385CC8213AF30A_METHOD_3_F2ACC5B1FFC4D55A_OFFSET UNITYSDK_OFFSET(0x1187CA60)
#define CLASS_3_6D385CC8213AF30A_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x1187B4D0)
#define CLASS_3_6D385CC8213AF30A_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x1187C680)
#define CLASS_3_6D385CC8213AF30A_TICK_OFFSET UNITYSDK_OFFSET(0x1187C8E0)
#define CLASS_3_6D385CC8213AF30A__CTOR_OFFSET UNITYSDK_OFFSET(0x1187B220)

inline static constexpr unsigned int Class_3_6D385CC8213AF30A_TypeDefinitionIndex = 43831;

class Class_3_6D385CC8213AF30A : public ::Class_2_A48F3719AA1CF200_6
{
public:
	::RPG::GameCore::TaskContext* Field_3_0; // 0x18
	::RPG::GameCore::RandomConfig* Field_3_1; // 0x20
	::Class_1_827373C1CEDFE355* Field_3_3; // 0x28
	::System::Collections::Generic::List_1<::Class_1_5F51D4049EA87B7B*>* Field_3_2; // 0x30
	::RPG::GameCore::StringHash Field_3_4; // 0x38

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::RandomConfig* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::RandomConfig*))((::PBYTE)hIl2Cpp + CLASS_3_6D385CC8213AF30A__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_6D385CC8213AF30A_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_6D385CC8213AF30A_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_6D385CC8213AF30A_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_6D385CC8213AF30A_TICK_OFFSET))(this, a1);
	}

	::RPG::GameCore::TaskContext* Method_3_F2ACC5B1FFC4D55A()
	{
		return ((::RPG::GameCore::TaskContext*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_6D385CC8213AF30A_METHOD_3_F2ACC5B1FFC4D55A_OFFSET))(this);
	}

	::System::Void Method_3_7A5EE891DA69F667(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_6D385CC8213AF30A_METHOD_3_7A5EE891DA69F667_OFFSET))(this, a1);
	}

	::System::Boolean Method_3_E240D159E3150659()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_6D385CC8213AF30A_METHOD_3_E240D159E3150659_OFFSET))(this);
	}

	::System::Void Method_3_4857357D5C1BFCE8()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_6D385CC8213AF30A_METHOD_3_4857357D5C1BFCE8_OFFSET))(this);
	}

	::Il2CppArray<::System::Int32>* Method_3_E56B9FE83D41CC29(::System::UInt32 a1, ::Il2CppArray<::RPG::GameCore::FixPoint>* a2, ::System::Boolean a3)
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID, ::System::UInt32, ::Il2CppArray<::RPG::GameCore::FixPoint>*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_3_6D385CC8213AF30A_METHOD_3_E56B9FE83D41CC29_OFFSET))(this, a1, a2, a3);
	}
};

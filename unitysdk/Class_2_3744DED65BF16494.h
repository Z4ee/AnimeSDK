#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

class Class_0_16E4307DCC419505_425;
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class PumanHuntGameplayController; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_2_3744DED65BF16494_DISPOSE_OFFSET UNITYSDK_OFFSET(0x14B9BBC0)
#define CLASS_2_3744DED65BF16494_METHOD_2_2FD16EEAD9984A60_OFFSET UNITYSDK_OFFSET(0x14B9C7E0)
#define CLASS_2_3744DED65BF16494_METHOD_2_45714050EDEF8291_OFFSET UNITYSDK_OFFSET(0x14B9BC60)
#define CLASS_2_3744DED65BF16494_METHOD_2_4C6323B24B55F693_OFFSET UNITYSDK_OFFSET(0x14B9C4D0)
#define CLASS_2_3744DED65BF16494_METHOD_2_96189EDEF38976A6_OFFSET UNITYSDK_OFFSET(0x14B9CA80)
#define CLASS_2_3744DED65BF16494_METHOD_2_9AB55F553C4AC6E8_1_OFFSET UNITYSDK_OFFSET(0x14B9C240)
#define CLASS_2_3744DED65BF16494_METHOD_2_9AB55F553C4AC6E8_OFFSET UNITYSDK_OFFSET(0x14B9C030)
#define CLASS_2_3744DED65BF16494_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x14B9CA30)
#define CLASS_2_3744DED65BF16494_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x14B9C450)
#define CLASS_2_3744DED65BF16494_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x14B9D050)
#define CLASS_2_3744DED65BF16494_TICK_OFFSET UNITYSDK_OFFSET(0x14B9BC00)
#define CLASS_2_3744DED65BF16494__CTOR_OFFSET UNITYSDK_OFFSET(0x14B9BB20)

inline static constexpr unsigned int Class_2_3744DED65BF16494_TypeDefinitionIndex = 50762;

class Class_2_3744DED65BF16494 : public ::Class_1_5F51D4049EA87B7B
{
public:
	// static const ::System::String* Field_2_0; // 0x0
	// static const ::System::String* Field_2_1; // 0x0
	// static const ::System::String* Field_2_2; // 0x0
	::RPG::GameCore::PumanHuntGameplayController* Field_2_3; // 0x18
	::RPG::GameCore::TaskContext* Field_2_4; // 0x20
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::GameCore::GameEntity*>* Field_2_5; // 0x28
	::System::Int32 Field_2_6; // 0x30

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::PumanHuntGameplayController* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::PumanHuntGameplayController*))((::PBYTE)hIl2Cpp + CLASS_2_3744DED65BF16494__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3744DED65BF16494_DISPOSE_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_3744DED65BF16494_TICK_OFFSET))(this, a1);
	}

	::System::Void Method_2_45714050EDEF8291()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3744DED65BF16494_METHOD_2_45714050EDEF8291_OFFSET))(this);
	}

	::System::Void Method_2_9AB55F553C4AC6E8()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3744DED65BF16494_METHOD_2_9AB55F553C4AC6E8_OFFSET))(this);
	}

	::System::Void Method_2_9AB55F553C4AC6E8_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3744DED65BF16494_METHOD_2_9AB55F553C4AC6E8_1_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3744DED65BF16494_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void Method_2_4C6323B24B55F693(::Class_0_16E4307DCC419505_425* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_425*))((::PBYTE)hIl2Cpp + CLASS_2_3744DED65BF16494_METHOD_2_4C6323B24B55F693_OFFSET))(this, a1);
	}

	::System::Void Method_2_2FD16EEAD9984A60(::Class_0_16E4307DCC419505_425* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_425*))((::PBYTE)hIl2Cpp + CLASS_2_3744DED65BF16494_METHOD_2_2FD16EEAD9984A60_OFFSET))(this, a1);
	}

	::System::Void Method_2_96189EDEF38976A6()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3744DED65BF16494_METHOD_2_96189EDEF38976A6_OFFSET))(this);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3744DED65BF16494_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3744DED65BF16494_ONTASKRESET_OFFSET))(this);
	}
};

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

class Class_0_16E4307DCC419505_382;
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class PumanHuntGameplayController; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_2_3744DED65BF16494_DISPOSE_OFFSET UNITYSDK_OFFSET(0x95DCAF0)
#define CLASS_2_3744DED65BF16494_METHOD_2_283DA224BE06DA9F_OFFSET UNITYSDK_OFFSET(0x95DD000)
#define CLASS_2_3744DED65BF16494_METHOD_2_489E0B827662C211_OFFSET UNITYSDK_OFFSET(0x95DCE90)
#define CLASS_2_3744DED65BF16494_METHOD_2_51A2EAB7889E8A59_OFFSET UNITYSDK_OFFSET(0x95DD1F0)
#define CLASS_2_3744DED65BF16494_METHOD_2_9AB55F553C4AC6E8_OFFSET UNITYSDK_OFFSET(0x95DD600)
#define CLASS_2_3744DED65BF16494_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x95DD5B0)
#define CLASS_2_3744DED65BF16494_METHOD_2_E4D0511DF09B348F_OFFSET UNITYSDK_OFFSET(0x95DCB90)
#define CLASS_2_3744DED65BF16494_METHOD_2_F5324E2636212B9C_OFFSET UNITYSDK_OFFSET(0x95DD3E0)
#define CLASS_2_3744DED65BF16494_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x95DD170)
#define CLASS_2_3744DED65BF16494_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x95DDB10)
#define CLASS_2_3744DED65BF16494_TICK_OFFSET UNITYSDK_OFFSET(0x95DCB30)
#define CLASS_2_3744DED65BF16494__CTOR_OFFSET UNITYSDK_OFFSET(0x95DCA50)

inline static constexpr unsigned int Class_2_3744DED65BF16494_TypeDefinitionIndex = 49042;

class Class_2_3744DED65BF16494 : public ::Class_1_5F51D4049EA87B7B
{
public:
	// static const ::System::String* Field_2_4; // 0x0
	// static const ::System::String* Field_2_5; // 0x0
	// static const ::System::String* Field_2_6; // 0x0
	::RPG::GameCore::PumanHuntGameplayController* Field_2_2; // 0x18
	::RPG::GameCore::TaskContext* Field_2_3; // 0x20
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::GameCore::GameEntity*>* Field_2_0; // 0x28
	::System::Int32 Field_2_1; // 0x30

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

	::System::Void Method_2_E4D0511DF09B348F()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3744DED65BF16494_METHOD_2_E4D0511DF09B348F_OFFSET))(this);
	}

	::System::Void Method_2_489E0B827662C211()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3744DED65BF16494_METHOD_2_489E0B827662C211_OFFSET))(this);
	}

	::System::Void Method_2_283DA224BE06DA9F()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3744DED65BF16494_METHOD_2_283DA224BE06DA9F_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3744DED65BF16494_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void Method_2_51A2EAB7889E8A59(::Class_0_16E4307DCC419505_382* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_382*))((::PBYTE)hIl2Cpp + CLASS_2_3744DED65BF16494_METHOD_2_51A2EAB7889E8A59_OFFSET))(this, a1);
	}

	::System::Void Method_2_F5324E2636212B9C(::Class_0_16E4307DCC419505_382* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_382*))((::PBYTE)hIl2Cpp + CLASS_2_3744DED65BF16494_METHOD_2_F5324E2636212B9C_OFFSET))(this, a1);
	}

	::System::Void Method_2_9AB55F553C4AC6E8()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3744DED65BF16494_METHOD_2_9AB55F553C4AC6E8_OFFSET))(this);
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

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_F3CFF1AFF7EE7DCD.h"
#include "unitysdk/Class_3_F2DAD7F45F518868_Struct_2_BBD456EBC9087BC2_14.h"

class Class_2_A49223FCF7A3C1CF;
class NPCAvatarRuntimeData;
namespace NPCCrowd::Ability { class NPCAbility; }
namespace NPCCrowd::Accessories { class NPCAccessory; }
namespace NPCCrowd::Animation { class NPCUnionAnimator; }
namespace NPCCrowd::CrowdPhysics { class NPCPhysicsRuntimeData; }
namespace NPCCrowd::GameplayTask { class NPCGameplayTaskContainer; }
namespace NPCCrowd::Lod { class NPCCrowdLodRuntimeData; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_3_F2DAD7F45F518868_GETCLASSID_OFFSET UNITYSDK_OFFSET(0x12D7F080)
#define CLASS_3_F2DAD7F45F518868_METHOD_3_A1D8CD775DEC3C21_OFFSET UNITYSDK_OFFSET(0x12D7F3A0)
#define CLASS_3_F2DAD7F45F518868_METHOD_3_C74CF020AA42ED85_OFFSET UNITYSDK_OFFSET(0x12D7F390)
#define CLASS_3_F2DAD7F45F518868_METHOD_3_CB613A5EF970C11B_OFFSET UNITYSDK_OFFSET(0x12D7F430)
#define CLASS_3_F2DAD7F45F518868_METHOD_3_CCBE730AF445BBD4_OFFSET UNITYSDK_OFFSET(0x12D7F4B0)
#define CLASS_3_F2DAD7F45F518868_METHOD_3_EEBB7BA0EB4C8B79_OFFSET UNITYSDK_OFFSET(0x12D7F530)
#define CLASS_3_F2DAD7F45F518868_ONCLEAN_OFFSET UNITYSDK_OFFSET(0x12D7F150)
#define CLASS_3_F2DAD7F45F518868__CCTOR_OFFSET UNITYSDK_OFFSET(0x12D7F0D0)
#define CLASS_3_F2DAD7F45F518868__CTOR_OFFSET UNITYSDK_OFFSET(0x12D7F270)

inline static constexpr unsigned int Class_3_F2DAD7F45F518868_TypeDefinitionIndex = 81771;

class Class_3_F2DAD7F45F518868 : public ::Class_2_F3CFF1AFF7EE7DCD
{
public:
	// static const ::System::Int32 Field_3_0 = 0xD6; // 0x0
	::NPCCrowd::CrowdPhysics::NPCPhysicsRuntimeData* Field_3_5; // 0x48
	::System::Collections::Generic::List_1<::NPCCrowd::Accessories::NPCAccessory*>* Field_3_10; // 0x50
	::NPCCrowd::Lod::NPCCrowdLodRuntimeData* Field_3_4; // 0x58
	::NPCAvatarRuntimeData* Field_3_6; // 0x60
	::NPCCrowd::Animation::NPCUnionAnimator* Field_3_7; // 0x68
	::Class_2_A49223FCF7A3C1CF* Field_3_3; // 0x70
	::NPCCrowd::GameplayTask::NPCGameplayTaskContainer* Field_3_9; // 0x78
	::NPCCrowd::Ability::NPCAbility* Field_3_8; // 0x80
	::System::Collections::Generic::List_1<::Class_3_F2DAD7F45F518868_Struct_2_BBD456EBC9087BC2_14>* Field_3_12; // 0x88
	::System::Int32 Field_3_2; // 0x90
	::System::Boolean Field_3_11; // 0x94
	::System::UInt64 Field_3_1; // 0x98

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_3_F2DAD7F45F518868__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_F2DAD7F45F518868__CTOR_OFFSET))(this);
	}

	::System::Int32 GetClassID()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_F2DAD7F45F518868_GETCLASSID_OFFSET))(this);
	}

	::System::Void OnClean()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_F2DAD7F45F518868_ONCLEAN_OFFSET))(this);
	}

	::System::Int32 Method_3_C74CF020AA42ED85()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_F2DAD7F45F518868_METHOD_3_C74CF020AA42ED85_OFFSET))(this);
	}

	::System::Int32 Method_3_A1D8CD775DEC3C21()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_F2DAD7F45F518868_METHOD_3_A1D8CD775DEC3C21_OFFSET))(this);
	}

	::System::Void Method_3_CB613A5EF970C11B(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_3_F2DAD7F45F518868_METHOD_3_CB613A5EF970C11B_OFFSET))(this, a1);
	}

	static ::Class_3_F2DAD7F45F518868* Method_3_CCBE730AF445BBD4()
	{
		return ((::Class_3_F2DAD7F45F518868*(*)())((::PBYTE)hIl2Cpp + CLASS_3_F2DAD7F45F518868_METHOD_3_CCBE730AF445BBD4_OFFSET))();
	}

	::System::Void Method_3_EEBB7BA0EB4C8B79(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_3_F2DAD7F45F518868_METHOD_3_EEBB7BA0EB4C8B79_OFFSET))(this, a1);
	}
};

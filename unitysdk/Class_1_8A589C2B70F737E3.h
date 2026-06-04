#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/GamePhaseType.h"
#include "unitysdk/RPG/Client/NotifyType.h"
#include "unitysdk/RPG/Client/WorkGroupType.h"
#include "unitysdk/System/Object.h"

class Class_1_D844B2DE6BA41D76;
class Class_2_0C561856C5C5A2FC;
class Class_2_D151FD175CE5B583;
class Class_3_8C3755F0AD94625A;
class Class_3_BA2470EB4010CC5A;
class Class_3_C7DF73C10A7F90A1;
namespace RPG::Client { template <typename T1, typename T2> class WorkNode_Action_2; }
namespace RPG::Client { template <typename T> class WorkNode_Action_1; }
namespace RPG::Client { template <typename T> class WorkNode_Promise_1; }
namespace RPG::Client::Promises { class IPromise; }
namespace RPG::Client::Promises { template <typename T> class IPromise_1; }
namespace RPG::GameCore { class TaskConfig; }
namespace System { class Action; }
namespace System { class String; }
namespace System { template <typename T1, typename T2> class Action_2; }
namespace System { template <typename T> class Action_1; }

#define CLASS_1_8A589C2B70F737E3_METHOD_1_2456C165EF43AD68_OFFSET UNITYSDK_OFFSET(0x1428CDD0)
#define CLASS_1_8A589C2B70F737E3_METHOD_1_26328A56B6303989_OFFSET UNITYSDK_OFFSET(0x1428CF50)
#define CLASS_1_8A589C2B70F737E3_METHOD_1_26B69CFA6E7B9012_OFFSET UNITYSDK_OFFSET(0x1428CFE0)
#define CLASS_1_8A589C2B70F737E3_METHOD_1_33792D420F66CDC6_OFFSET UNITYSDK_OFFSET(0x1428CA50)
#define CLASS_1_8A589C2B70F737E3_METHOD_1_3EB8764C16033CCE_OFFSET UNITYSDK_OFFSET(0x1428CCA0)
#define CLASS_1_8A589C2B70F737E3_METHOD_1_7057B6074E288C1F_OFFSET UNITYSDK_OFFSET(0x1428CC10)
#define CLASS_1_8A589C2B70F737E3_METHOD_1_9AF11C592411DCB8_OFFSET UNITYSDK_OFFSET(0x1428C970)
#define CLASS_1_8A589C2B70F737E3_METHOD_1_C9CBC2E3B6F8583B_OFFSET UNITYSDK_OFFSET(0x1428CAB0)

inline static constexpr unsigned int Class_1_8A589C2B70F737E3_TypeDefinitionIndex = 57068;

class Class_1_8A589C2B70F737E3 : public ::System::Object
{
public:
	static ::Class_2_D151FD175CE5B583* Method_1_9AF11C592411DCB8(::Class_2_D151FD175CE5B583* a1, ::RPG::Client::WorkGroupType a2, ::System::Object* a3, ::System::String* a4)
	{
		return ((::Class_2_D151FD175CE5B583*(*)(::Class_2_D151FD175CE5B583*, ::RPG::Client::WorkGroupType, ::System::Object*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_8A589C2B70F737E3_METHOD_1_9AF11C592411DCB8_OFFSET))(a1, a2, a3, a4);
	}

	static ::Class_1_D844B2DE6BA41D76* Method_1_33792D420F66CDC6(::Class_1_D844B2DE6BA41D76* a1, ::System::String* a2)
	{
		return ((::Class_1_D844B2DE6BA41D76*(*)(::Class_1_D844B2DE6BA41D76*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_8A589C2B70F737E3_METHOD_1_33792D420F66CDC6_OFFSET))(a1, a2);
	}

	static ::Class_1_D844B2DE6BA41D76* Method_1_C9CBC2E3B6F8583B(::Class_1_D844B2DE6BA41D76* a1, ::System::String* a2)
	{
		return ((::Class_1_D844B2DE6BA41D76*(*)(::Class_1_D844B2DE6BA41D76*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_8A589C2B70F737E3_METHOD_1_C9CBC2E3B6F8583B_OFFSET))(a1, a2);
	}

	static ::Class_3_BA2470EB4010CC5A* Method_1_7057B6074E288C1F(::Class_2_D151FD175CE5B583* a1, ::System::Action* a2, ::System::String* a3)
	{
		return ((::Class_3_BA2470EB4010CC5A*(*)(::Class_2_D151FD175CE5B583*, ::System::Action*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_8A589C2B70F737E3_METHOD_1_7057B6074E288C1F_OFFSET))(a1, a2, a3);
	}

	static ::Class_1_D844B2DE6BA41D76* Method_1_3EB8764C16033CCE(::Class_2_D151FD175CE5B583* a1, ::RPG::Client::GamePhaseType a2, ::System::Object* a3, ::System::String* a4)
	{
		return ((::Class_1_D844B2DE6BA41D76*(*)(::Class_2_D151FD175CE5B583*, ::RPG::Client::GamePhaseType, ::System::Object*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_8A589C2B70F737E3_METHOD_1_3EB8764C16033CCE_OFFSET))(a1, a2, a3, a4);
	}

	static ::Class_1_D844B2DE6BA41D76* Method_1_2456C165EF43AD68(::Class_2_D151FD175CE5B583* a1, ::RPG::Client::NotifyType a2, ::System::Object* a3, ::System::String* a4)
	{
		return ((::Class_1_D844B2DE6BA41D76*(*)(::Class_2_D151FD175CE5B583*, ::RPG::Client::NotifyType, ::System::Object*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_8A589C2B70F737E3_METHOD_1_2456C165EF43AD68_OFFSET))(a1, a2, a3, a4);
	}

	static ::Class_2_0C561856C5C5A2FC* Method_1_26328A56B6303989(::Class_2_D151FD175CE5B583* a1, ::System::String* a2)
	{
		return ((::Class_2_0C561856C5C5A2FC*(*)(::Class_2_D151FD175CE5B583*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_8A589C2B70F737E3_METHOD_1_26328A56B6303989_OFFSET))(a1, a2);
	}

	static ::Class_3_C7DF73C10A7F90A1* Method_1_26B69CFA6E7B9012(::Class_2_D151FD175CE5B583* a1, ::Il2CppArray<::RPG::GameCore::TaskConfig*>* a2, ::Il2CppArray<::RPG::GameCore::TaskConfig*>* a3, ::Il2CppArray<::RPG::GameCore::TaskConfig*>* a4, ::System::String* a5)
	{
		return ((::Class_3_C7DF73C10A7F90A1*(*)(::Class_2_D151FD175CE5B583*, ::Il2CppArray<::RPG::GameCore::TaskConfig*>*, ::Il2CppArray<::RPG::GameCore::TaskConfig*>*, ::Il2CppArray<::RPG::GameCore::TaskConfig*>*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_8A589C2B70F737E3_METHOD_1_26B69CFA6E7B9012_OFFSET))(a1, a2, a3, a4, a5);
	}
};

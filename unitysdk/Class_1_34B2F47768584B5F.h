#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/GamePhaseType.h"
#include "unitysdk/RPG/Client/NotifyType.h"
#include "unitysdk/RPG/Client/WorkGroupType.h"
#include "unitysdk/System/Object.h"

class Class_1_520B187A8F3E7005;
class Class_2_06F295EA640EE8E8;
class Class_2_DA3132AA62F93B22;
class Class_3_1466EC1BADAC5CD4;
class Class_3_461195ED2D55C953;
class Class_3_A1A6647366FB0E6A;
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

#define CLASS_1_34B2F47768584B5F_METHOD_1_050D5F091847753D_OFFSET UNITYSDK_OFFSET(0x128BE830)
#define CLASS_1_34B2F47768584B5F_METHOD_1_0B196572FD978AA5_OFFSET UNITYSDK_OFFSET(0x128BEB10)
#define CLASS_1_34B2F47768584B5F_METHOD_1_3E2B1595BFD24825_OFFSET UNITYSDK_OFFSET(0x128BE7A0)
#define CLASS_1_34B2F47768584B5F_METHOD_1_5114EF55E20078A7_OFFSET UNITYSDK_OFFSET(0x128BEA80)
#define CLASS_1_34B2F47768584B5F_METHOD_1_7BBAF1C9879966DE_OFFSET UNITYSDK_OFFSET(0x128BE600)
#define CLASS_1_34B2F47768584B5F_METHOD_1_9AF11C592411DCB8_OFFSET UNITYSDK_OFFSET(0x128BE520)
#define CLASS_1_34B2F47768584B5F_METHOD_1_F06DFA398E182E0F_OFFSET UNITYSDK_OFFSET(0x128BE930)
#define CLASS_1_34B2F47768584B5F_METHOD_1_FE3106BF593B2951_OFFSET UNITYSDK_OFFSET(0x128BE660)

inline static constexpr unsigned int Class_1_34B2F47768584B5F_TypeDefinitionIndex = 56306;

class Class_1_34B2F47768584B5F : public ::System::Object
{
public:
	static ::Class_2_06F295EA640EE8E8* Method_1_9AF11C592411DCB8(::Class_2_06F295EA640EE8E8* a1, ::RPG::Client::WorkGroupType a2, ::System::Object* a3, ::System::String* a4)
	{
		return ((::Class_2_06F295EA640EE8E8*(*)(::Class_2_06F295EA640EE8E8*, ::RPG::Client::WorkGroupType, ::System::Object*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_34B2F47768584B5F_METHOD_1_9AF11C592411DCB8_OFFSET))(a1, a2, a3, a4);
	}

	static ::Class_1_520B187A8F3E7005* Method_1_7BBAF1C9879966DE(::Class_1_520B187A8F3E7005* a1, ::System::String* a2)
	{
		return ((::Class_1_520B187A8F3E7005*(*)(::Class_1_520B187A8F3E7005*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_34B2F47768584B5F_METHOD_1_7BBAF1C9879966DE_OFFSET))(a1, a2);
	}

	static ::Class_1_520B187A8F3E7005* Method_1_FE3106BF593B2951(::Class_1_520B187A8F3E7005* a1, ::System::String* a2)
	{
		return ((::Class_1_520B187A8F3E7005*(*)(::Class_1_520B187A8F3E7005*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_34B2F47768584B5F_METHOD_1_FE3106BF593B2951_OFFSET))(a1, a2);
	}

	static ::Class_3_461195ED2D55C953* Method_1_3E2B1595BFD24825(::Class_2_06F295EA640EE8E8* a1, ::System::Action* a2, ::System::String* a3)
	{
		return ((::Class_3_461195ED2D55C953*(*)(::Class_2_06F295EA640EE8E8*, ::System::Action*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_34B2F47768584B5F_METHOD_1_3E2B1595BFD24825_OFFSET))(a1, a2, a3);
	}

	static ::Class_1_520B187A8F3E7005* Method_1_050D5F091847753D(::Class_2_06F295EA640EE8E8* a1, ::RPG::Client::GamePhaseType a2, ::System::Object* a3, ::System::String* a4)
	{
		return ((::Class_1_520B187A8F3E7005*(*)(::Class_2_06F295EA640EE8E8*, ::RPG::Client::GamePhaseType, ::System::Object*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_34B2F47768584B5F_METHOD_1_050D5F091847753D_OFFSET))(a1, a2, a3, a4);
	}

	static ::Class_1_520B187A8F3E7005* Method_1_F06DFA398E182E0F(::Class_2_06F295EA640EE8E8* a1, ::RPG::Client::NotifyType a2, ::System::Object* a3, ::System::String* a4)
	{
		return ((::Class_1_520B187A8F3E7005*(*)(::Class_2_06F295EA640EE8E8*, ::RPG::Client::NotifyType, ::System::Object*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_34B2F47768584B5F_METHOD_1_F06DFA398E182E0F_OFFSET))(a1, a2, a3, a4);
	}

	static ::Class_2_DA3132AA62F93B22* Method_1_5114EF55E20078A7(::Class_2_06F295EA640EE8E8* a1, ::System::String* a2)
	{
		return ((::Class_2_DA3132AA62F93B22*(*)(::Class_2_06F295EA640EE8E8*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_34B2F47768584B5F_METHOD_1_5114EF55E20078A7_OFFSET))(a1, a2);
	}

	static ::Class_3_A1A6647366FB0E6A* Method_1_0B196572FD978AA5(::Class_2_06F295EA640EE8E8* a1, ::Il2CppArray<::RPG::GameCore::TaskConfig*>* a2, ::Il2CppArray<::RPG::GameCore::TaskConfig*>* a3, ::Il2CppArray<::RPG::GameCore::TaskConfig*>* a4, ::System::String* a5)
	{
		return ((::Class_3_A1A6647366FB0E6A*(*)(::Class_2_06F295EA640EE8E8*, ::Il2CppArray<::RPG::GameCore::TaskConfig*>*, ::Il2CppArray<::RPG::GameCore::TaskConfig*>*, ::Il2CppArray<::RPG::GameCore::TaskConfig*>*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_34B2F47768584B5F_METHOD_1_0B196572FD978AA5_OFFSET))(a1, a2, a3, a4, a5);
	}
};

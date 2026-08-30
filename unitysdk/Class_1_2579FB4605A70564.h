#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_3_07C3C4D2990C49EE;
namespace RPG::GameCore { class EntityColliderHeightCameraConfig; }
namespace RPG::GameCore { class TaskConfig; }
namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class TaskListTemplate; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_2579FB4605A70564_METHOD_1_10DB45458716A26C_OFFSET UNITYSDK_OFFSET(0x17F8D920)
#define CLASS_1_2579FB4605A70564_METHOD_1_1C82B039E54ECF07_OFFSET UNITYSDK_OFFSET(0x17F8D360)
#define CLASS_1_2579FB4605A70564_METHOD_1_4A21111363FD2A52_OFFSET UNITYSDK_OFFSET(0x17F8DB10)
#define CLASS_1_2579FB4605A70564_METHOD_1_5677B3C4D9FDEB86_OFFSET UNITYSDK_OFFSET(0x17F8D2C0)
#define CLASS_1_2579FB4605A70564_METHOD_1_793B1016BDC8E72B_OFFSET UNITYSDK_OFFSET(0x17F8D450)
#define CLASS_1_2579FB4605A70564_METHOD_1_95A267D56BC01B4E_OFFSET UNITYSDK_OFFSET(0x17F8D870)
#define CLASS_1_2579FB4605A70564_METHOD_1_95DC66B1D26C06DD_OFFSET UNITYSDK_OFFSET(0x17F8DCA0)
#define CLASS_1_2579FB4605A70564_METHOD_1_B4B010DEA6CE98E6_OFFSET UNITYSDK_OFFSET(0x17F8CEC0)
#define CLASS_1_2579FB4605A70564_METHOD_1_E7EF6BC52B28648C_OFFSET UNITYSDK_OFFSET(0x17F8DA20)
#define CLASS_1_2579FB4605A70564__CTOR_OFFSET UNITYSDK_OFFSET(0x17F8DD70)

inline static constexpr unsigned int Class_1_2579FB4605A70564_TypeDefinitionIndex = 56688;

class Class_1_2579FB4605A70564 : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::RPG::GameCore::EntityColliderHeightCameraConfig*, ::System::Collections::Generic::List_1<::Class_3_07C3C4D2990C49EE*>*>* JJDFKGPAJOM; // 0x10
	::Il2CppArray<::RPG::GameCore::EntityColliderHeightCameraConfig*>* DMFJJCIDECA; // 0x18
	::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Collections::Generic::List_1<::Class_3_07C3C4D2990C49EE*>*>* OEFCCNOANPG; // 0x20
	::System::Collections::Generic::Dictionary_2<::System::String*, ::RPG::GameCore::TaskListTemplate*>* DFFCIHEFNGG; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2579FB4605A70564__CTOR_OFFSET))(this);
	}

	::Class_3_07C3C4D2990C49EE* Method_1_B4B010DEA6CE98E6(::RPG::GameCore::TaskContext* a1, ::System::Single a2)
	{
		return ((::Class_3_07C3C4D2990C49EE*(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_2579FB4605A70564_METHOD_1_B4B010DEA6CE98E6_OFFSET))(this, a1, a2);
	}

	::Il2CppArray<::RPG::GameCore::TaskConfig*>* Method_1_1C82B039E54ECF07(::System::Single a1)
	{
		return ((::Il2CppArray<::RPG::GameCore::TaskConfig*>*(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_2579FB4605A70564_METHOD_1_1C82B039E54ECF07_OFFSET))(this, a1);
	}

	::Class_3_07C3C4D2990C49EE* Method_1_793B1016BDC8E72B(::RPG::GameCore::TaskContext* a1, ::System::String* a2)
	{
		return ((::Class_3_07C3C4D2990C49EE*(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_2579FB4605A70564_METHOD_1_793B1016BDC8E72B_OFFSET))(this, a1, a2);
	}

	::Il2CppArray<::RPG::GameCore::TaskConfig*>* Method_1_10DB45458716A26C(::System::String* a1)
	{
		return ((::Il2CppArray<::RPG::GameCore::TaskConfig*>*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_2579FB4605A70564_METHOD_1_10DB45458716A26C_OFFSET))(this, a1);
	}

	::System::Void Method_1_E7EF6BC52B28648C()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2579FB4605A70564_METHOD_1_E7EF6BC52B28648C_OFFSET))(this);
	}

	::System::Void Method_1_4A21111363FD2A52(::Il2CppArray<::RPG::GameCore::TaskListTemplate*>* a1, ::System::String* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::RPG::GameCore::TaskListTemplate*>*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_2579FB4605A70564_METHOD_1_4A21111363FD2A52_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_95DC66B1D26C06DD(::Il2CppArray<::RPG::GameCore::TaskListTemplate*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::RPG::GameCore::TaskListTemplate*>*))((::PBYTE)hIl2Cpp + CLASS_1_2579FB4605A70564_METHOD_1_95DC66B1D26C06DD_OFFSET))(this, a1);
	}

	::RPG::GameCore::EntityColliderHeightCameraConfig* Method_1_5677B3C4D9FDEB86(::System::Single a1)
	{
		return ((::RPG::GameCore::EntityColliderHeightCameraConfig*(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_2579FB4605A70564_METHOD_1_5677B3C4D9FDEB86_OFFSET))(this, a1);
	}

	::RPG::GameCore::TaskListTemplate* Method_1_95A267D56BC01B4E(::System::String* a1)
	{
		return ((::RPG::GameCore::TaskListTemplate*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_2579FB4605A70564_METHOD_1_95A267D56BC01B4E_OFFSET))(this, a1);
	}
};

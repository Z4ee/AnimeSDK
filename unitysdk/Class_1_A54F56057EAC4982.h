#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_A54F56057EAC4982_ProfileStackDirtyState.h"
#include "unitysdk/RPG/GameCore/EnviromentControlPriority.h"
#include "unitysdk/System/Collections/Generic/List_1_Enumerator.h"
#include "unitysdk/System/Object.h"

namespace EnviromentSystem { class EnviroProperty; }
namespace EnviromentSystem { class EnviromentProfile; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_A54F56057EAC4982_METHOD_1_17D90C360FB880C9_OFFSET UNITYSDK_OFFSET(0xA45F5C0)
#define CLASS_1_A54F56057EAC4982_METHOD_1_30DB9FEA809FB628_OFFSET UNITYSDK_OFFSET(0xA45F440)
#define CLASS_1_A54F56057EAC4982_METHOD_1_3491186A807DBD3E_OFFSET UNITYSDK_OFFSET(0xA45DF30)
#define CLASS_1_A54F56057EAC4982_METHOD_1_6640E844F3C3C78F_OFFSET UNITYSDK_OFFSET(0xA45E1A0)
#define CLASS_1_A54F56057EAC4982_METHOD_1_676750090E8B1F7B_OFFSET UNITYSDK_OFFSET(0xA45D190)
#define CLASS_1_A54F56057EAC4982_METHOD_1_710D8A6890D8BE39_OFFSET UNITYSDK_OFFSET(0xA45FA10)
#define CLASS_1_A54F56057EAC4982_METHOD_1_738547C0280DC980_OFFSET UNITYSDK_OFFSET(0xA45E0B0)
#define CLASS_1_A54F56057EAC4982_METHOD_1_7E6C0CE662FEB18D_OFFSET UNITYSDK_OFFSET(0xA45F7A0)
#define CLASS_1_A54F56057EAC4982_METHOD_1_88B60F3B95FAA4F1_OFFSET UNITYSDK_OFFSET(0xA45F4A0)
#define CLASS_1_A54F56057EAC4982_METHOD_1_AA725F26622F7965_OFFSET UNITYSDK_OFFSET(0xA45DBD0)
#define CLASS_1_A54F56057EAC4982_METHOD_1_AFC8199B16CC18DC_OFFSET UNITYSDK_OFFSET(0xA45F4F0)
#define CLASS_1_A54F56057EAC4982_METHOD_1_B235E757922104A8_OFFSET UNITYSDK_OFFSET(0xA45D020)
#define CLASS_1_A54F56057EAC4982_METHOD_1_D07632179F660373_OFFSET UNITYSDK_OFFSET(0xA45D810)
#define CLASS_1_A54F56057EAC4982_METHOD_1_DD784213055292FB_OFFSET UNITYSDK_OFFSET(0xA45CA30)
#define CLASS_1_A54F56057EAC4982__CTOR_OFFSET UNITYSDK_OFFSET(0xA45C8D0)

inline static constexpr unsigned int Class_1_A54F56057EAC4982_TypeDefinitionIndex = 40277;

class Class_1_A54F56057EAC4982 : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::EnviromentSystem::EnviromentProfile*>* Field_1_1; // 0x10
	::EnviromentSystem::EnviromentProfile* Field_1_3; // 0x18
	::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::EnviromentSystem::EnviroProperty*>*>* Field_1_0; // 0x20
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* Field_1_2; // 0x28
	::Class_1_A54F56057EAC4982_ProfileStackDirtyState Field_1_4; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A54F56057EAC4982__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_DD784213055292FB()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A54F56057EAC4982_METHOD_1_DD784213055292FB_OFFSET))(this);
	}

	::System::Void Method_1_B235E757922104A8()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A54F56057EAC4982_METHOD_1_B235E757922104A8_OFFSET))(this);
	}

	::System::Void Method_1_676750090E8B1F7B(::EnviromentSystem::EnviromentProfile* a1, ::RPG::GameCore::EnviromentControlPriority a2)
	{
		return ((::System::Void(*)(::PVOID, ::EnviromentSystem::EnviromentProfile*, ::RPG::GameCore::EnviromentControlPriority))((::PBYTE)hIl2Cpp + CLASS_1_A54F56057EAC4982_METHOD_1_676750090E8B1F7B_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_D07632179F660373(::RPG::GameCore::EnviromentControlPriority a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::EnviromentControlPriority))((::PBYTE)hIl2Cpp + CLASS_1_A54F56057EAC4982_METHOD_1_D07632179F660373_OFFSET))(this, a1);
	}

	::RPG::GameCore::EnviromentControlPriority Method_1_3491186A807DBD3E()
	{
		return ((::RPG::GameCore::EnviromentControlPriority(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A54F56057EAC4982_METHOD_1_3491186A807DBD3E_OFFSET))(this);
	}

	::System::Boolean Method_1_738547C0280DC980(::RPG::GameCore::EnviromentControlPriority a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::EnviromentControlPriority))((::PBYTE)hIl2Cpp + CLASS_1_A54F56057EAC4982_METHOD_1_738547C0280DC980_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_6640E844F3C3C78F(::System::Boolean& a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Boolean&))((::PBYTE)hIl2Cpp + CLASS_1_A54F56057EAC4982_METHOD_1_6640E844F3C3C78F_OFFSET))(this, a1);
	}

	::System::Void Method_1_30DB9FEA809FB628(::EnviromentSystem::EnviromentProfile* a1)
	{
		return ((::System::Void(*)(::PVOID, ::EnviromentSystem::EnviromentProfile*))((::PBYTE)hIl2Cpp + CLASS_1_A54F56057EAC4982_METHOD_1_30DB9FEA809FB628_OFFSET))(this, a1);
	}

	::System::String* Method_1_88B60F3B95FAA4F1()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A54F56057EAC4982_METHOD_1_88B60F3B95FAA4F1_OFFSET))(this);
	}

	::EnviromentSystem::EnviromentProfile* Method_1_AFC8199B16CC18DC()
	{
		return ((::EnviromentSystem::EnviromentProfile*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A54F56057EAC4982_METHOD_1_AFC8199B16CC18DC_OFFSET))(this);
	}

	::System::Void Method_1_AA725F26622F7965(::EnviromentSystem::EnviroProperty* a1, ::RPG::GameCore::EnviromentControlPriority a2)
	{
		return ((::System::Void(*)(::PVOID, ::EnviromentSystem::EnviroProperty*, ::RPG::GameCore::EnviromentControlPriority))((::PBYTE)hIl2Cpp + CLASS_1_A54F56057EAC4982_METHOD_1_AA725F26622F7965_OFFSET))(this, a1, a2);
	}

	::System::Collections::Generic::List_1_Enumerator<::EnviromentSystem::EnviroProperty*> Method_1_17D90C360FB880C9(::System::Int32 a1)
	{
		return ((::System::Collections::Generic::List_1_Enumerator<::EnviromentSystem::EnviroProperty*>(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_A54F56057EAC4982_METHOD_1_17D90C360FB880C9_OFFSET))(this, a1);
	}

	::System::Void Method_1_7E6C0CE662FEB18D(::EnviromentSystem::EnviroProperty* a1, ::RPG::GameCore::EnviromentControlPriority a2)
	{
		return ((::System::Void(*)(::PVOID, ::EnviromentSystem::EnviroProperty*, ::RPG::GameCore::EnviromentControlPriority))((::PBYTE)hIl2Cpp + CLASS_1_A54F56057EAC4982_METHOD_1_7E6C0CE662FEB18D_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_710D8A6890D8BE39(::RPG::GameCore::EnviromentControlPriority a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::EnviromentControlPriority))((::PBYTE)hIl2Cpp + CLASS_1_A54F56057EAC4982_METHOD_1_710D8A6890D8BE39_OFFSET))(this, a1);
	}
};

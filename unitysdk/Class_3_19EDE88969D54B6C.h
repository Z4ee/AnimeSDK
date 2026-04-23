#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"
#include "unitysdk/Struct_2_7A3F2FEE63423E6C.h"

namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class TriggerSound; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define CLASS_3_19EDE88969D54B6C_DISPOSE_OFFSET UNITYSDK_OFFSET(0x995D670)
#define CLASS_3_19EDE88969D54B6C_METHOD_3_00C7E95C17870A07_OFFSET UNITYSDK_OFFSET(0x995DCB0)
#define CLASS_3_19EDE88969D54B6C_METHOD_3_8D0E9C93FAF7CDD8_OFFSET UNITYSDK_OFFSET(0x995D890)
#define CLASS_3_19EDE88969D54B6C_METHOD_3_B07AB08D2F98F5CB_OFFSET UNITYSDK_OFFSET(0x995D810)
#define CLASS_3_19EDE88969D54B6C_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x995D6B0)
#define CLASS_3_19EDE88969D54B6C__CTOR_OFFSET UNITYSDK_OFFSET(0x995D640)
#define CLASS_3_19EDE88969D54B6C___IFIXBASEPROXY_DISPOSE_OFFSET UNITYSDK_OFFSET(0x995DEC0)

inline static constexpr unsigned int Class_3_19EDE88969D54B6C_TypeDefinitionIndex = 52052;

class Class_3_19EDE88969D54B6C : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::TriggerSound*>
{
public:
	::RPG::GameCore::GameEntity* Field_3_0; // 0x28

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::TriggerSound* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::TriggerSound*))((::PBYTE)hIl2Cpp + CLASS_3_19EDE88969D54B6C__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_19EDE88969D54B6C_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_19EDE88969D54B6C_ONTASKBEGIN_OFFSET))(this);
	}

	static ::Struct_2_7A3F2FEE63423E6C Method_3_B07AB08D2F98F5CB(::RPG::GameCore::TriggerSound* a1)
	{
		return ((::Struct_2_7A3F2FEE63423E6C(*)(::RPG::GameCore::TriggerSound*))((::PBYTE)hIl2Cpp + CLASS_3_19EDE88969D54B6C_METHOD_3_B07AB08D2F98F5CB_OFFSET))(a1);
	}

	static ::System::Void Method_3_8D0E9C93FAF7CDD8(::Struct_2_7A3F2FEE63423E6C a1, ::System::String* a2, ::RPG::GameCore::TaskContext* a3, ::RPG::GameCore::GameEntity*& a4)
	{
		return ((::System::Void(*)(::Struct_2_7A3F2FEE63423E6C, ::System::String*, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::GameEntity*&))((::PBYTE)hIl2Cpp + CLASS_3_19EDE88969D54B6C_METHOD_3_8D0E9C93FAF7CDD8_OFFSET))(a1, a2, a3, a4);
	}

	static ::System::Boolean Method_3_00C7E95C17870A07(::RPG::GameCore::TriggerSound* a1, ::System::String* a2, ::RPG::GameCore::GameEntity* a3, ::System::Action_1<::System::UInt32>* a4)
	{
		return ((::System::Boolean(*)(::RPG::GameCore::TriggerSound*, ::System::String*, ::RPG::GameCore::GameEntity*, ::System::Action_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + CLASS_3_19EDE88969D54B6C_METHOD_3_00C7E95C17870A07_OFFSET))(a1, a2, a3, a4);
	}

	::System::Void __iFixBaseProxy_Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_19EDE88969D54B6C___IFIXBASEPROXY_DISPOSE_OFFSET))(this);
	}
};

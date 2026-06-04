#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

namespace RPG::GameCore { class CreatePhoneOnCharacter; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class String; }

#define CLASS_3_2B69C8568E662913_DISPOSE_OFFSET UNITYSDK_OFFSET(0xAA49490)
#define CLASS_3_2B69C8568E662913_METHOD_3_06330CD58CB602B6_OFFSET UNITYSDK_OFFSET(0xAA493B0)
#define CLASS_3_2B69C8568E662913_METHOD_3_1808E1CF7A125519_OFFSET UNITYSDK_OFFSET(0xAA48900)
#define CLASS_3_2B69C8568E662913_METHOD_3_1CCF53A77385A828_OFFSET UNITYSDK_OFFSET(0xAA48960)
#define CLASS_3_2B69C8568E662913_METHOD_3_693C0B5DBE41057A_OFFSET UNITYSDK_OFFSET(0xAA48B60)
#define CLASS_3_2B69C8568E662913_METHOD_3_9325D344BE9D4788_OFFSET UNITYSDK_OFFSET(0xAA48E90)
#define CLASS_3_2B69C8568E662913_METHOD_3_946BD6472BB097A4_OFFSET UNITYSDK_OFFSET(0xAA49300)
#define CLASS_3_2B69C8568E662913_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xAA485F0)
#define CLASS_3_2B69C8568E662913_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xAA495C0)
#define CLASS_3_2B69C8568E662913__CTOR_OFFSET UNITYSDK_OFFSET(0xAA485D0)
#define CLASS_3_2B69C8568E662913___IFIXBASEPROXY_DISPOSE_OFFSET UNITYSDK_OFFSET(0xAA49700)
#define CLASS_3_2B69C8568E662913___IFIXBASEPROXY_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xAA49710)

inline static constexpr unsigned int Class_3_2B69C8568E662913_TypeDefinitionIndex = 54251;

class Class_3_2B69C8568E662913 : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::CreatePhoneOnCharacter*>
{
public:
	// static const ::System::String* Field_3_0; // 0x0
	// static const ::System::String* Field_3_1; // 0x0
	::System::String* Field_3_2; // 0x28
	::RPG::GameCore::GameEntity* Field_3_3; // 0x30

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::CreatePhoneOnCharacter* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::CreatePhoneOnCharacter*))((::PBYTE)hIl2Cpp + CLASS_3_2B69C8568E662913__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_2B69C8568E662913_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void Method_3_06330CD58CB602B6()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_2B69C8568E662913_METHOD_3_06330CD58CB602B6_OFFSET))(this);
	}

	::System::Void Method_3_9325D344BE9D4788(::RPG::GameCore::GameEntity* a1, ::System::String* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_3_2B69C8568E662913_METHOD_3_9325D344BE9D4788_OFFSET))(this, a1, a2);
	}

	::System::Void Method_3_946BD6472BB097A4(::RPG::GameCore::GameEntity* a1, ::System::String* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_3_2B69C8568E662913_METHOD_3_946BD6472BB097A4_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_3_1808E1CF7A125519()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_2B69C8568E662913_METHOD_3_1808E1CF7A125519_OFFSET))(this);
	}

	::RPG::GameCore::GameEntity* Method_3_1CCF53A77385A828(::System::UInt32 a1, ::System::UInt32 a2)
	{
		return ((::RPG::GameCore::GameEntity*(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_3_2B69C8568E662913_METHOD_3_1CCF53A77385A828_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_2B69C8568E662913_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_2B69C8568E662913_ONTASKRESET_OFFSET))(this);
	}

	static ::System::String* Method_3_693C0B5DBE41057A(::RPG::GameCore::GameEntity* a1, ::System::Boolean a2)
	{
		return ((::System::String*(*)(::RPG::GameCore::GameEntity*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_3_2B69C8568E662913_METHOD_3_693C0B5DBE41057A_OFFSET))(a1, a2);
	}

	::System::Void __iFixBaseProxy_Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_2B69C8568E662913___IFIXBASEPROXY_DISPOSE_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_2B69C8568E662913___IFIXBASEPROXY_ONTASKRESET_OFFSET))(this);
	}
};

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

namespace RPG::Client { class Map; }
namespace RPG::Client { class RuntimeGroupManager; }
namespace RPG::GameCore { class CreateNPCV2; }
namespace RPG::GameCore { class NpcEntityInfo; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class String; }

#define CLASS_3_4CB5CE11B4BA988E_DISPOSE_OFFSET UNITYSDK_OFFSET(0xCB2EF90)
#define CLASS_3_4CB5CE11B4BA988E_METHOD_3_33937F24660A3D0E_OFFSET UNITYSDK_OFFSET(0xCB2F7C0)
#define CLASS_3_4CB5CE11B4BA988E_METHOD_3_51ABF6003DD43A69_OFFSET UNITYSDK_OFFSET(0xCB2F2F0)
#define CLASS_3_4CB5CE11B4BA988E_METHOD_3_A77D6566C61606F0_OFFSET UNITYSDK_OFFSET(0xCB2F4B0)
#define CLASS_3_4CB5CE11B4BA988E_METHOD_3_BB7F0438EA6317CA_OFFSET UNITYSDK_OFFSET(0xCB2F1C0)
#define CLASS_3_4CB5CE11B4BA988E_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xCB2EFE0)
#define CLASS_3_4CB5CE11B4BA988E__CTOR_OFFSET UNITYSDK_OFFSET(0xCB2EF60)
#define CLASS_3_4CB5CE11B4BA988E___IFIXBASEPROXY_DISPOSE_OFFSET UNITYSDK_OFFSET(0xCB2F8E0)

inline static constexpr unsigned int Class_3_4CB5CE11B4BA988E_TypeDefinitionIndex = 46825;

class Class_3_4CB5CE11B4BA988E : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::CreateNPCV2*>
{
public:
	::RPG::Client::Map* Field_3_2; // 0x28
	::RPG::Client::RuntimeGroupManager* Field_3_1; // 0x30
	::System::Int32 Field_3_0; // 0x38

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::CreateNPCV2* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::CreateNPCV2*))((::PBYTE)hIl2Cpp + CLASS_3_4CB5CE11B4BA988E__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_4CB5CE11B4BA988E_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_4CB5CE11B4BA988E_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void Method_3_BB7F0438EA6317CA(::RPG::GameCore::NpcEntityInfo* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::NpcEntityInfo*))((::PBYTE)hIl2Cpp + CLASS_3_4CB5CE11B4BA988E_METHOD_3_BB7F0438EA6317CA_OFFSET))(this, a1);
	}

	::System::Void Method_3_51ABF6003DD43A69(::System::UInt32 a1, ::System::UInt32 a2, ::System::String* a3, ::System::String* a4)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_3_4CB5CE11B4BA988E_METHOD_3_51ABF6003DD43A69_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_3_A77D6566C61606F0(::System::UInt32 a1, ::System::UInt32 a2, ::System::String* a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_3_4CB5CE11B4BA988E_METHOD_3_A77D6566C61606F0_OFFSET))(this, a1, a2, a3);
	}

	::RPG::Client::Map* Method_3_33937F24660A3D0E()
	{
		return ((::RPG::Client::Map*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_4CB5CE11B4BA988E_METHOD_3_33937F24660A3D0E_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_4CB5CE11B4BA988E___IFIXBASEPROXY_DISPOSE_OFFSET))(this);
	}
};

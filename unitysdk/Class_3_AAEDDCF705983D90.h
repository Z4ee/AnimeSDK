#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

class Class_3_F1507657401FC6F9;
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class String; }

#define CLASS_3_AAEDDCF705983D90_METHOD_3_5BF335F9480260EB_OFFSET UNITYSDK_OFFSET(0xB7A6F20)
#define CLASS_3_AAEDDCF705983D90_METHOD_3_6E78D87734DE3167_OFFSET UNITYSDK_OFFSET(0xB7A73D0)
#define CLASS_3_AAEDDCF705983D90_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xB7A6E10)
#define CLASS_3_AAEDDCF705983D90__CCTOR_OFFSET UNITYSDK_OFFSET(0xB7A74A0)
#define CLASS_3_AAEDDCF705983D90__CTOR_OFFSET UNITYSDK_OFFSET(0xB7A6DE0)

inline static constexpr unsigned int Class_3_AAEDDCF705983D90_TypeDefinitionIndex = 53082;

class Class_3_AAEDDCF705983D90 : public ::RPG::GameCore::ImmediateTaskBase_1<::Class_3_F1507657401FC6F9*>
{
public:
	static ::System::String** StaticGet_NGCPHLMENKB()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(Class_3_AAEDDCF705983D90_TypeDefinitionIndex)->GetStaticField(0x6E820);
	}
	// static const ::System::Int32 FHHOIOAFEIF = 0x1; // 0x0
	// static const ::System::Int32 OLLBDAOHPBI = 0x2; // 0x0
	// static const ::System::Int32 OGKPIGECAKH = 0x0; // 0x0
	// static const ::System::Int32 BNNDJOENBOM = 0x1; // 0x0
	// static const ::System::Int32 BPLNKGKICHJ = 0x2; // 0x0

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::Class_3_F1507657401FC6F9* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::Class_3_F1507657401FC6F9*))((::PBYTE)hIl2Cpp + CLASS_3_AAEDDCF705983D90__CTOR_OFFSET))(this, a1, a2);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_3_AAEDDCF705983D90__CCTOR_OFFSET))();
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_AAEDDCF705983D90_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void Method_3_5BF335F9480260EB(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_3_AAEDDCF705983D90_METHOD_3_5BF335F9480260EB_OFFSET))(this, a1);
	}

	static ::System::UInt32 Method_3_6E78D87734DE3167(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::UInt32(*)(::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_3_AAEDDCF705983D90_METHOD_3_6E78D87734DE3167_OFFSET))(a1);
	}
};

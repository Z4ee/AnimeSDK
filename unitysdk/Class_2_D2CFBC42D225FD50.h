#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGame/FiveDim/BaseDestructiblePropSystem_1.h"

class Class_1_24C2E7EF22229C6A;
class Class_2_9DD8A46984F1AFFD;
class Class_3_1A92845FAFA5EC77;
namespace System { class String; }
namespace UnityEngine { class Collider; }

#define CLASS_2_D2CFBC42D225FD50_METHOD_2_67BD3EF66160DD38_OFFSET UNITYSDK_OFFSET(0xA6D3460)
#define CLASS_2_D2CFBC42D225FD50_METHOD_2_D9CD0E56E8810C81_OFFSET UNITYSDK_OFFSET(0xA6D3320)
#define CLASS_2_D2CFBC42D225FD50__CREATEEMPTYENTITY_OFFSET UNITYSDK_OFFSET(0xA6D2B20)
#define CLASS_2_D2CFBC42D225FD50__CTOR_OFFSET UNITYSDK_OFFSET(0xA6D28E0)
#define CLASS_2_D2CFBC42D225FD50__GETENTITYBYCONFIGID_OFFSET UNITYSDK_OFFSET(0xA6D2BE0)
#define CLASS_2_D2CFBC42D225FD50__GETENTITYBYRUNTIMEID_OFFSET UNITYSDK_OFFSET(0xA6D2B80)
#define CLASS_2_D2CFBC42D225FD50__INITDESTRUCTIBLEPROP_OFFSET UNITYSDK_OFFSET(0xA6D2C80)

inline static constexpr unsigned int Class_2_D2CFBC42D225FD50_TypeDefinitionIndex = 62767;

class Class_2_D2CFBC42D225FD50 : public ::RPG::Client::LittleGame::FiveDim::BaseDestructiblePropSystem_1<::Class_2_9DD8A46984F1AFFD*>
{
public:
	// static const ::System::String* Field_2_2; // 0x0
	::Class_3_1A92845FAFA5EC77* Field_2_1; // 0x48
	::Class_1_24C2E7EF22229C6A* Field_2_0; // 0x50

	::System::Void _ctor(::Class_1_24C2E7EF22229C6A* a1, ::Class_3_1A92845FAFA5EC77* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_24C2E7EF22229C6A*, ::Class_3_1A92845FAFA5EC77*))((::PBYTE)hIl2Cpp + CLASS_2_D2CFBC42D225FD50__CTOR_OFFSET))(this, a1, a2);
	}

	::Class_2_9DD8A46984F1AFFD* _CreateEmptyEntity(::System::String* a1)
	{
		return ((::Class_2_9DD8A46984F1AFFD*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_D2CFBC42D225FD50__CREATEEMPTYENTITY_OFFSET))(this, a1);
	}

	::Class_2_9DD8A46984F1AFFD* _GetEntityByRuntimeID(::System::Int32 a1)
	{
		return ((::Class_2_9DD8A46984F1AFFD*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_D2CFBC42D225FD50__GETENTITYBYRUNTIMEID_OFFSET))(this, a1);
	}

	::Class_2_9DD8A46984F1AFFD* _GetEntityByConfigID(::System::UInt32 a1)
	{
		return ((::Class_2_9DD8A46984F1AFFD*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_2_D2CFBC42D225FD50__GETENTITYBYCONFIGID_OFFSET))(this, a1);
	}

	::System::Void _InitDestructibleProp(::Class_2_9DD8A46984F1AFFD* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_9DD8A46984F1AFFD*))((::PBYTE)hIl2Cpp + CLASS_2_D2CFBC42D225FD50__INITDESTRUCTIBLEPROP_OFFSET))(this, a1);
	}

	::System::Void Method_2_D9CD0E56E8810C81(::Class_2_9DD8A46984F1AFFD* a1, ::UnityEngine::Collider* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_9DD8A46984F1AFFD*, ::UnityEngine::Collider*))((::PBYTE)hIl2Cpp + CLASS_2_D2CFBC42D225FD50_METHOD_2_D9CD0E56E8810C81_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_67BD3EF66160DD38(::Class_2_9DD8A46984F1AFFD* a1, ::UnityEngine::Collider* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_9DD8A46984F1AFFD*, ::UnityEngine::Collider*))((::PBYTE)hIl2Cpp + CLASS_2_D2CFBC42D225FD50_METHOD_2_67BD3EF66160DD38_OFFSET))(this, a1, a2);
	}
};

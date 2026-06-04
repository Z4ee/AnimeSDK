#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGame/FiveDim/BaseDestructiblePropSystem_1.h"

class Class_1_B4357A1C72BABC6B;
class Class_2_B9E8C2EEAA5C96EC;
class Class_3_1E4F9B0ED3BF21DE;
namespace System { class String; }
namespace UnityEngine { class Collider; }

#define CLASS_2_E23930726FE443EC_METHOD_2_BC10E9C28D1C3452_OFFSET UNITYSDK_OFFSET(0x1449EC30)
#define CLASS_2_E23930726FE443EC_METHOD_2_D8C1EAE18FAE51DF_OFFSET UNITYSDK_OFFSET(0x1449ECF0)
#define CLASS_2_E23930726FE443EC__CREATEEMPTYENTITY_OFFSET UNITYSDK_OFFSET(0x1449E4C0)
#define CLASS_2_E23930726FE443EC__CTOR_OFFSET UNITYSDK_OFFSET(0x1449E2E0)
#define CLASS_2_E23930726FE443EC__GETENTITYBYCONFIGID_OFFSET UNITYSDK_OFFSET(0x1449E580)
#define CLASS_2_E23930726FE443EC__GETENTITYBYRUNTIMEID_OFFSET UNITYSDK_OFFSET(0x1449E520)
#define CLASS_2_E23930726FE443EC__INITDESTRUCTIBLEPROP_OFFSET UNITYSDK_OFFSET(0x1449E620)

inline static constexpr unsigned int Class_2_E23930726FE443EC_TypeDefinitionIndex = 71608;

class Class_2_E23930726FE443EC : public ::RPG::Client::LittleGame::FiveDim::BaseDestructiblePropSystem_1<::Class_2_B9E8C2EEAA5C96EC*>
{
public:
	// static const ::System::String* Field_2_0; // 0x0
	::Class_1_B4357A1C72BABC6B* Field_2_1; // 0x48
	::Class_3_1E4F9B0ED3BF21DE* Field_2_2; // 0x50

	::System::Void _ctor(::Class_1_B4357A1C72BABC6B* a1, ::Class_3_1E4F9B0ED3BF21DE* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_B4357A1C72BABC6B*, ::Class_3_1E4F9B0ED3BF21DE*))((::PBYTE)hIl2Cpp + CLASS_2_E23930726FE443EC__CTOR_OFFSET))(this, a1, a2);
	}

	::Class_2_B9E8C2EEAA5C96EC* _CreateEmptyEntity(::System::String* a1)
	{
		return ((::Class_2_B9E8C2EEAA5C96EC*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_E23930726FE443EC__CREATEEMPTYENTITY_OFFSET))(this, a1);
	}

	::Class_2_B9E8C2EEAA5C96EC* _GetEntityByRuntimeID(::System::Int32 a1)
	{
		return ((::Class_2_B9E8C2EEAA5C96EC*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_E23930726FE443EC__GETENTITYBYRUNTIMEID_OFFSET))(this, a1);
	}

	::Class_2_B9E8C2EEAA5C96EC* _GetEntityByConfigID(::System::UInt32 a1)
	{
		return ((::Class_2_B9E8C2EEAA5C96EC*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_2_E23930726FE443EC__GETENTITYBYCONFIGID_OFFSET))(this, a1);
	}

	::System::Void _InitDestructibleProp(::Class_2_B9E8C2EEAA5C96EC* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_B9E8C2EEAA5C96EC*))((::PBYTE)hIl2Cpp + CLASS_2_E23930726FE443EC__INITDESTRUCTIBLEPROP_OFFSET))(this, a1);
	}

	::System::Void Method_2_BC10E9C28D1C3452(::Class_2_B9E8C2EEAA5C96EC* a1, ::UnityEngine::Collider* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_B9E8C2EEAA5C96EC*, ::UnityEngine::Collider*))((::PBYTE)hIl2Cpp + CLASS_2_E23930726FE443EC_METHOD_2_BC10E9C28D1C3452_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_D8C1EAE18FAE51DF(::Class_2_B9E8C2EEAA5C96EC* a1, ::UnityEngine::Collider* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_B9E8C2EEAA5C96EC*, ::UnityEngine::Collider*))((::PBYTE)hIl2Cpp + CLASS_2_E23930726FE443EC_METHOD_2_D8C1EAE18FAE51DF_OFFSET))(this, a1, a2);
	}
};

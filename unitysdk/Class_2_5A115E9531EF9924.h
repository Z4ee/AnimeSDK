#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGame/FiveDim/BaseDestructiblePropSystem_1.h"

class Class_1_B4357A1C72BABC6B;
class Class_2_B9E8C2EEAA5C96EC;
class Class_3_1E4F9B0ED3BF21DE;
namespace System { class String; }
namespace UnityEngine { class Collider; }

#define CLASS_2_5A115E9531EF9924_METHOD_2_88CF21E3C14407F6_OFFSET UNITYSDK_OFFSET(0x16435F80)
#define CLASS_2_5A115E9531EF9924_METHOD_2_BC10E9C28D1C3452_OFFSET UNITYSDK_OFFSET(0x16435EC0)
#define CLASS_2_5A115E9531EF9924__CREATEEMPTYENTITY_OFFSET UNITYSDK_OFFSET(0x16435720)
#define CLASS_2_5A115E9531EF9924__CTOR_OFFSET UNITYSDK_OFFSET(0x16435540)
#define CLASS_2_5A115E9531EF9924__GETENTITYBYCONFIGID_OFFSET UNITYSDK_OFFSET(0x164357E0)
#define CLASS_2_5A115E9531EF9924__GETENTITYBYRUNTIMEID_OFFSET UNITYSDK_OFFSET(0x16435780)
#define CLASS_2_5A115E9531EF9924__INITDESTRUCTIBLEPROP_OFFSET UNITYSDK_OFFSET(0x16435880)

inline static constexpr unsigned int Class_2_5A115E9531EF9924_TypeDefinitionIndex = 76611;

class Class_2_5A115E9531EF9924 : public ::RPG::Client::LittleGame::FiveDim::BaseDestructiblePropSystem_1<::Class_2_B9E8C2EEAA5C96EC*>
{
public:
	// static const ::System::String* HODODNBMBCB; // 0x0
	::Class_1_B4357A1C72BABC6B* FKINCGODJEP; // 0x48
	::Class_3_1E4F9B0ED3BF21DE* PDENFEFCAGN; // 0x50

	::System::Void _ctor(::Class_1_B4357A1C72BABC6B* a1, ::Class_3_1E4F9B0ED3BF21DE* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_B4357A1C72BABC6B*, ::Class_3_1E4F9B0ED3BF21DE*))((::PBYTE)hIl2Cpp + CLASS_2_5A115E9531EF9924__CTOR_OFFSET))(this, a1, a2);
	}

	::Class_2_B9E8C2EEAA5C96EC* _CreateEmptyEntity(::System::String* a1)
	{
		return ((::Class_2_B9E8C2EEAA5C96EC*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_5A115E9531EF9924__CREATEEMPTYENTITY_OFFSET))(this, a1);
	}

	::Class_2_B9E8C2EEAA5C96EC* _GetEntityByRuntimeID(::System::Int32 a1)
	{
		return ((::Class_2_B9E8C2EEAA5C96EC*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_5A115E9531EF9924__GETENTITYBYRUNTIMEID_OFFSET))(this, a1);
	}

	::Class_2_B9E8C2EEAA5C96EC* _GetEntityByConfigID(::System::UInt32 a1)
	{
		return ((::Class_2_B9E8C2EEAA5C96EC*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_2_5A115E9531EF9924__GETENTITYBYCONFIGID_OFFSET))(this, a1);
	}

	::System::Void _InitDestructibleProp(::Class_2_B9E8C2EEAA5C96EC* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_B9E8C2EEAA5C96EC*))((::PBYTE)hIl2Cpp + CLASS_2_5A115E9531EF9924__INITDESTRUCTIBLEPROP_OFFSET))(this, a1);
	}

	::System::Void Method_2_BC10E9C28D1C3452(::Class_2_B9E8C2EEAA5C96EC* a1, ::UnityEngine::Collider* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_B9E8C2EEAA5C96EC*, ::UnityEngine::Collider*))((::PBYTE)hIl2Cpp + CLASS_2_5A115E9531EF9924_METHOD_2_BC10E9C28D1C3452_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_88CF21E3C14407F6(::Class_2_B9E8C2EEAA5C96EC* a1, ::UnityEngine::Collider* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_B9E8C2EEAA5C96EC*, ::UnityEngine::Collider*))((::PBYTE)hIl2Cpp + CLASS_2_5A115E9531EF9924_METHOD_2_88CF21E3C14407F6_OFFSET))(this, a1, a2);
	}
};

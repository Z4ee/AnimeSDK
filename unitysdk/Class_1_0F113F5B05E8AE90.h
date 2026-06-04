#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TeamType.h"
#include "unitysdk/System/Object.h"

class Class_1_843DD6330B22E422;
namespace RPG::GameCore { class GameEntity; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_0F113F5B05E8AE90_DISPOSE_OFFSET UNITYSDK_OFFSET(0x134F29A0)
#define CLASS_1_0F113F5B05E8AE90_GET_CHUNKOWNER_OFFSET UNITYSDK_OFFSET(0x134F2CB0)
#define CLASS_1_0F113F5B05E8AE90_GET_ISINCHUNK_OFFSET UNITYSDK_OFFSET(0x134F2CF0)
#define CLASS_1_0F113F5B05E8AE90_GET_TARGETTEAM_OFFSET UNITYSDK_OFFSET(0x134F2CD0)
#define CLASS_1_0F113F5B05E8AE90_METHOD_1_9681042564541CD6_1_OFFSET UNITYSDK_OFFSET(0x134F2AA0)
#define CLASS_1_0F113F5B05E8AE90_METHOD_1_9681042564541CD6_OFFSET UNITYSDK_OFFSET(0x134F2A20)
#define CLASS_1_0F113F5B05E8AE90_METHOD_1_C05ACA5047A5A01E_OFFSET UNITYSDK_OFFSET(0x134F2B20)
#define CLASS_1_0F113F5B05E8AE90_SET_CHUNKOWNER_OFFSET UNITYSDK_OFFSET(0x134F2CC0)
#define CLASS_1_0F113F5B05E8AE90_SET_ISINCHUNK_OFFSET UNITYSDK_OFFSET(0x134F2D00)
#define CLASS_1_0F113F5B05E8AE90_SET_TARGETTEAM_OFFSET UNITYSDK_OFFSET(0x134F2CE0)
#define CLASS_1_0F113F5B05E8AE90__CTOR_OFFSET UNITYSDK_OFFSET(0x134F2960)

inline static constexpr unsigned int Class_1_0F113F5B05E8AE90_TypeDefinitionIndex = 53942;

class Class_1_0F113F5B05E8AE90 : public ::System::Object
{
public:
	::RPG::GameCore::GameEntity* _ChunkOwner_k__BackingField; // 0x10
	::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* Field_1_1; // 0x18
	::RPG::GameCore::TeamType _TargetTeam_k__BackingField; // 0x20
	::System::Boolean _IsInChunk_k__BackingField; // 0x24

	::System::Void _ctor(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_1_0F113F5B05E8AE90__CTOR_OFFSET))(this, a1);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0F113F5B05E8AE90_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_1_9681042564541CD6()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0F113F5B05E8AE90_METHOD_1_9681042564541CD6_OFFSET))(this);
	}

	::System::Void Method_1_9681042564541CD6_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0F113F5B05E8AE90_METHOD_1_9681042564541CD6_1_OFFSET))(this);
	}

	::System::Void Method_1_C05ACA5047A5A01E(::RPG::GameCore::GameEntity* a1, ::Class_1_843DD6330B22E422* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::Class_1_843DD6330B22E422*))((::PBYTE)hIl2Cpp + CLASS_1_0F113F5B05E8AE90_METHOD_1_C05ACA5047A5A01E_OFFSET))(this, a1, a2);
	}

	::RPG::GameCore::GameEntity* get_ChunkOwner()
	{
		return ((::RPG::GameCore::GameEntity*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0F113F5B05E8AE90_GET_CHUNKOWNER_OFFSET))(this);
	}

	::System::Void set_ChunkOwner(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_1_0F113F5B05E8AE90_SET_CHUNKOWNER_OFFSET))(this, a1);
	}

	::RPG::GameCore::TeamType get_TargetTeam()
	{
		return ((::RPG::GameCore::TeamType(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0F113F5B05E8AE90_GET_TARGETTEAM_OFFSET))(this);
	}

	::System::Void set_TargetTeam(::RPG::GameCore::TeamType a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TeamType))((::PBYTE)hIl2Cpp + CLASS_1_0F113F5B05E8AE90_SET_TARGETTEAM_OFFSET))(this, a1);
	}

	::System::Boolean get_IsInChunk()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0F113F5B05E8AE90_GET_ISINCHUNK_OFFSET))(this);
	}

	::System::Void set_IsInChunk(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_0F113F5B05E8AE90_SET_ISINCHUNK_OFFSET))(this, a1);
	}
};

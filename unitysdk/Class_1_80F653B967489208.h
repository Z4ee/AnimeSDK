#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TeamType.h"
#include "unitysdk/System/Object.h"

class Class_1_256D9F63CEA2C6FD;
namespace RPG::GameCore { class GameEntity; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_80F653B967489208_DISPOSE_OFFSET UNITYSDK_OFFSET(0x9B9BE00)
#define CLASS_1_80F653B967489208_GET_CHUNKOWNER_OFFSET UNITYSDK_OFFSET(0x9B9C030)
#define CLASS_1_80F653B967489208_GET_ISINCHUNK_OFFSET UNITYSDK_OFFSET(0x9B9C070)
#define CLASS_1_80F653B967489208_GET_TARGETTEAM_OFFSET UNITYSDK_OFFSET(0x9B9C050)
#define CLASS_1_80F653B967489208_METHOD_1_64EB37ED69DA3A5C_OFFSET UNITYSDK_OFFSET(0x9B9BF80)
#define CLASS_1_80F653B967489208_METHOD_1_A239DF324AF4215D_1_OFFSET UNITYSDK_OFFSET(0x9B9BF00)
#define CLASS_1_80F653B967489208_METHOD_1_A239DF324AF4215D_OFFSET UNITYSDK_OFFSET(0x9B9BE80)
#define CLASS_1_80F653B967489208_SET_CHUNKOWNER_OFFSET UNITYSDK_OFFSET(0x9B9C040)
#define CLASS_1_80F653B967489208_SET_ISINCHUNK_OFFSET UNITYSDK_OFFSET(0x9B9C080)
#define CLASS_1_80F653B967489208_SET_TARGETTEAM_OFFSET UNITYSDK_OFFSET(0x9B9C060)
#define CLASS_1_80F653B967489208__CTOR_OFFSET UNITYSDK_OFFSET(0x9B9BDC0)

inline static constexpr unsigned int Class_1_80F653B967489208_TypeDefinitionIndex = 53230;

class Class_1_80F653B967489208 : public ::System::Object
{
public:
	::RPG::GameCore::GameEntity* _ChunkOwner_k__BackingField; // 0x10
	::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* Field_1_1; // 0x18
	::System::Boolean _IsInChunk_k__BackingField; // 0x20
	::RPG::GameCore::TeamType _TargetTeam_k__BackingField; // 0x24

	::System::Void _ctor(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_1_80F653B967489208__CTOR_OFFSET))(this, a1);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_80F653B967489208_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_1_A239DF324AF4215D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_80F653B967489208_METHOD_1_A239DF324AF4215D_OFFSET))(this);
	}

	::System::Void Method_1_A239DF324AF4215D_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_80F653B967489208_METHOD_1_A239DF324AF4215D_1_OFFSET))(this);
	}

	::System::Void Method_1_64EB37ED69DA3A5C(::RPG::GameCore::GameEntity* a1, ::Class_1_256D9F63CEA2C6FD* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::Class_1_256D9F63CEA2C6FD*))((::PBYTE)hIl2Cpp + CLASS_1_80F653B967489208_METHOD_1_64EB37ED69DA3A5C_OFFSET))(this, a1, a2);
	}

	::RPG::GameCore::GameEntity* get_ChunkOwner()
	{
		return ((::RPG::GameCore::GameEntity*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_80F653B967489208_GET_CHUNKOWNER_OFFSET))(this);
	}

	::System::Void set_ChunkOwner(::RPG::GameCore::GameEntity* value)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_1_80F653B967489208_SET_CHUNKOWNER_OFFSET))(this, value);
	}

	::RPG::GameCore::TeamType get_TargetTeam()
	{
		return ((::RPG::GameCore::TeamType(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_80F653B967489208_GET_TARGETTEAM_OFFSET))(this);
	}

	::System::Void set_TargetTeam(::RPG::GameCore::TeamType value)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TeamType))((::PBYTE)hIl2Cpp + CLASS_1_80F653B967489208_SET_TARGETTEAM_OFFSET))(this, value);
	}

	::System::Boolean get_IsInChunk()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_80F653B967489208_GET_ISINCHUNK_OFFSET))(this);
	}

	::System::Void set_IsInChunk(::System::Boolean value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_80F653B967489208_SET_ISINCHUNK_OFFSET))(this, value);
	}
};

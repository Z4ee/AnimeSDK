#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"
#include "unitysdk/RPG/GameCore/MazeBuffInBattleBindingType.h"

namespace RPG::GameCore { class AddMazeBuffBinding; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class GameEntityList; }
namespace RPG::GameCore { class MazeBuffData; }
namespace RPG::GameCore { class TaskContext; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_3_B481D6C8C830032E_METHOD_3_2B9D478141E0F891_OFFSET UNITYSDK_OFFSET(0x9073A50)
#define CLASS_3_B481D6C8C830032E_METHOD_3_3E7916FE13DAE31C_OFFSET UNITYSDK_OFFSET(0x9073CF0)
#define CLASS_3_B481D6C8C830032E_METHOD_3_90F82B9A0129D312_OFFSET UNITYSDK_OFFSET(0x9073BA0)
#define CLASS_3_B481D6C8C830032E_METHOD_3_A712C9EF756F6AA8_OFFSET UNITYSDK_OFFSET(0x9073E40)
#define CLASS_3_B481D6C8C830032E_METHOD_3_C4E5E4388CDFAEB5_OFFSET UNITYSDK_OFFSET(0x9073B00)
#define CLASS_3_B481D6C8C830032E_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x9072600)
#define CLASS_3_B481D6C8C830032E__CTOR_OFFSET UNITYSDK_OFFSET(0x90725B0)

inline static constexpr unsigned int Class_3_B481D6C8C830032E_TypeDefinitionIndex = 50576;

class Class_3_B481D6C8C830032E : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::AddMazeBuffBinding*>
{
public:
	::System::Collections::Generic::List_1<::RPG::GameCore::MazeBuffData*>* Field_3_0; // 0x28

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::AddMazeBuffBinding* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::AddMazeBuffBinding*))((::PBYTE)hIl2Cpp + CLASS_3_B481D6C8C830032E__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_B481D6C8C830032E_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void Method_3_2B9D478141E0F891()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_B481D6C8C830032E_METHOD_3_2B9D478141E0F891_OFFSET))(this);
	}

	::System::Int32 Method_3_A712C9EF756F6AA8(::RPG::GameCore::MazeBuffData* a1, ::RPG::GameCore::MazeBuffData* a2)
	{
		return ((::System::Int32(*)(::PVOID, ::RPG::GameCore::MazeBuffData*, ::RPG::GameCore::MazeBuffData*))((::PBYTE)hIl2Cpp + CLASS_3_B481D6C8C830032E_METHOD_3_A712C9EF756F6AA8_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_3_C4E5E4388CDFAEB5(::RPG::GameCore::MazeBuffInBattleBindingType a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::MazeBuffInBattleBindingType))((::PBYTE)hIl2Cpp + CLASS_3_B481D6C8C830032E_METHOD_3_C4E5E4388CDFAEB5_OFFSET))(this, a1);
	}

	::RPG::GameCore::GameEntity* Method_3_3E7916FE13DAE31C(::System::UInt32 a1)
	{
		return ((::RPG::GameCore::GameEntity*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_3_B481D6C8C830032E_METHOD_3_3E7916FE13DAE31C_OFFSET))(this, a1);
	}

	::RPG::GameCore::GameEntityList* Method_3_90F82B9A0129D312(::RPG::GameCore::MazeBuffData* a1)
	{
		return ((::RPG::GameCore::GameEntityList*(*)(::PVOID, ::RPG::GameCore::MazeBuffData*))((::PBYTE)hIl2Cpp + CLASS_3_B481D6C8C830032E_METHOD_3_90F82B9A0129D312_OFFSET))(this, a1);
	}
};

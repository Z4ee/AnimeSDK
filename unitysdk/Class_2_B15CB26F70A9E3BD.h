#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_B343FAFD80A8B29B.h"

class Class_1_2A2B2DC1DA1205FE;
class Class_1_D50913C0AC7A262A;
namespace RPG::Client { class PhotoGraphAimContainer_PhotoGraphAim; }
namespace RPG::GameCore { class BindSwitchPhotoGraphFuncBtn; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class TaskContext; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_B15CB26F70A9E3BD_METHOD_2_DFC598624F4DD14B_OFFSET UNITYSDK_OFFSET(0x162533B0)
#define CLASS_2_B15CB26F70A9E3BD__CTOR_OFFSET UNITYSDK_OFFSET(0x16253340)

inline static constexpr unsigned int Class_2_B15CB26F70A9E3BD_TypeDefinitionIndex = 58192;

class Class_2_B15CB26F70A9E3BD : public ::Class_1_B343FAFD80A8B29B
{
public:
	::System::Void _ctor(::Class_1_D50913C0AC7A262A* a1, ::System::Int32 a2, ::RPG::GameCore::TaskContext* a3, ::RPG::GameCore::BindSwitchPhotoGraphFuncBtn* a4, ::RPG::GameCore::GameEntity* a5)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_D50913C0AC7A262A*, ::System::Int32, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::BindSwitchPhotoGraphFuncBtn*, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_2_B15CB26F70A9E3BD__CTOR_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::System::Void Method_2_DFC598624F4DD14B(::System::Collections::Generic::List_1<::RPG::Client::PhotoGraphAimContainer_PhotoGraphAim*>* a1, ::System::UInt32& a2, ::System::UInt32& a3, ::Class_1_2A2B2DC1DA1205FE*& a4)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::PhotoGraphAimContainer_PhotoGraphAim*>*, ::System::UInt32&, ::System::UInt32&, ::Class_1_2A2B2DC1DA1205FE*&))((::PBYTE)hIl2Cpp + CLASS_2_B15CB26F70A9E3BD_METHOD_2_DFC598624F4DD14B_OFFSET))(this, a1, a2, a3, a4);
	}
};

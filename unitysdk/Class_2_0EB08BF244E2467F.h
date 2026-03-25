#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_00408D6054AA8022.h"

class Class_1_B958907EBFDC8D4E;
class Class_1_DFC115D3A3A89EBD;
namespace RPG::Client { class PhotoGraphAimContainer_PhotoGraphAim; }
namespace RPG::GameCore { class BindSwitchPhotoGraphFuncBtn; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class TaskContext; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_0EB08BF244E2467F_METHOD_2_3B04F5AF7B8BE993_OFFSET UNITYSDK_OFFSET(0x87AE3C0)
#define CLASS_2_0EB08BF244E2467F_METHOD_2_4025A72D6FB2409D_OFFSET UNITYSDK_OFFSET(0x87ADF70)
#define CLASS_2_0EB08BF244E2467F__CTOR_OFFSET UNITYSDK_OFFSET(0x87ADF20)

inline static constexpr unsigned int Class_2_0EB08BF244E2467F_TypeDefinitionIndex = 49386;

class Class_2_0EB08BF244E2467F : public ::Class_1_00408D6054AA8022
{
public:
	::System::Void _ctor(::Class_1_B958907EBFDC8D4E* a1, ::System::Int32 a2, ::RPG::GameCore::TaskContext* a3, ::RPG::GameCore::BindSwitchPhotoGraphFuncBtn* a4, ::RPG::GameCore::GameEntity* a5)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_B958907EBFDC8D4E*, ::System::Int32, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::BindSwitchPhotoGraphFuncBtn*, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_2_0EB08BF244E2467F__CTOR_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::System::Void Method_2_4025A72D6FB2409D(::System::Collections::Generic::List_1<::RPG::Client::PhotoGraphAimContainer_PhotoGraphAim*>* a1, ::System::UInt32& a2, ::System::UInt32& a3, ::Class_1_DFC115D3A3A89EBD*& a4)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::PhotoGraphAimContainer_PhotoGraphAim*>*, ::System::UInt32&, ::System::UInt32&, ::Class_1_DFC115D3A3A89EBD*&))((::PBYTE)hIl2Cpp + CLASS_2_0EB08BF244E2467F_METHOD_2_4025A72D6FB2409D_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_2_3B04F5AF7B8BE993(::System::Collections::Generic::List_1<::RPG::Client::PhotoGraphAimContainer_PhotoGraphAim*>* P0, ::System::UInt32& P1, ::System::UInt32& P2, ::Class_1_DFC115D3A3A89EBD*& P3)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::PhotoGraphAimContainer_PhotoGraphAim*>*, ::System::UInt32&, ::System::UInt32&, ::Class_1_DFC115D3A3A89EBD*&))((::PBYTE)hIl2Cpp + CLASS_2_0EB08BF244E2467F_METHOD_2_3B04F5AF7B8BE993_OFFSET))(this, P0, P1, P2, P3);
	}
};

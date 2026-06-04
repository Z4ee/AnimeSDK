#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_00408D6054AA8022.h"

class Class_1_2A2B2DC1DA1205FE;
class Class_1_D50913C0AC7A262A;
namespace RPG::Client { class PhotoGraphAimContainer_PhotoGraphAim; }
namespace RPG::GameCore { class BindSwitchPhotoGraphFuncBtn; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class TaskContext; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_65BC2B20080CA5F6_METHOD_2_8F4B850A3E2F4A2F_OFFSET UNITYSDK_OFFSET(0x13C97790)
#define CLASS_2_65BC2B20080CA5F6_METHOD_2_DFC598624F4DD14B_OFFSET UNITYSDK_OFFSET(0x13C972E0)
#define CLASS_2_65BC2B20080CA5F6__CTOR_OFFSET UNITYSDK_OFFSET(0x13C97270)

inline static constexpr unsigned int Class_2_65BC2B20080CA5F6_TypeDefinitionIndex = 56945;

class Class_2_65BC2B20080CA5F6 : public ::Class_1_00408D6054AA8022
{
public:
	::System::Void _ctor(::Class_1_D50913C0AC7A262A* a1, ::System::Int32 a2, ::RPG::GameCore::TaskContext* a3, ::RPG::GameCore::BindSwitchPhotoGraphFuncBtn* a4, ::RPG::GameCore::GameEntity* a5)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_D50913C0AC7A262A*, ::System::Int32, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::BindSwitchPhotoGraphFuncBtn*, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_2_65BC2B20080CA5F6__CTOR_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::System::Void Method_2_DFC598624F4DD14B(::System::Collections::Generic::List_1<::RPG::Client::PhotoGraphAimContainer_PhotoGraphAim*>* a1, ::System::UInt32& a2, ::System::UInt32& a3, ::Class_1_2A2B2DC1DA1205FE*& a4)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::PhotoGraphAimContainer_PhotoGraphAim*>*, ::System::UInt32&, ::System::UInt32&, ::Class_1_2A2B2DC1DA1205FE*&))((::PBYTE)hIl2Cpp + CLASS_2_65BC2B20080CA5F6_METHOD_2_DFC598624F4DD14B_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_2_8F4B850A3E2F4A2F(::System::Collections::Generic::List_1<::RPG::Client::PhotoGraphAimContainer_PhotoGraphAim*>* a1, ::System::UInt32& a2, ::System::UInt32& a3, ::Class_1_2A2B2DC1DA1205FE*& a4)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::PhotoGraphAimContainer_PhotoGraphAim*>*, ::System::UInt32&, ::System::UInt32&, ::Class_1_2A2B2DC1DA1205FE*&))((::PBYTE)hIl2Cpp + CLASS_2_65BC2B20080CA5F6_METHOD_2_8F4B850A3E2F4A2F_OFFSET))(this, a1, a2, a3, a4);
	}
};

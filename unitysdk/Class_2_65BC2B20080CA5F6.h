#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_00408D6054AA8022.h"

class Class_1_85DF9887662222C3;
class Class_1_B958907EBFDC8D4E;
namespace RPG::Client { class PhotoGraphAimContainer_PhotoGraphAim; }
namespace RPG::GameCore { class BindSwitchPhotoGraphFuncBtn; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class TaskContext; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_65BC2B20080CA5F6_METHOD_2_3B04F5AF7B8BE993_OFFSET UNITYSDK_OFFSET(0x12497770)
#define CLASS_2_65BC2B20080CA5F6_METHOD_2_6BB797C050A64994_OFFSET UNITYSDK_OFFSET(0x124972D0)
#define CLASS_2_65BC2B20080CA5F6__CTOR_OFFSET UNITYSDK_OFFSET(0x12497260)

inline static constexpr unsigned int Class_2_65BC2B20080CA5F6_TypeDefinitionIndex = 56183;

class Class_2_65BC2B20080CA5F6 : public ::Class_1_00408D6054AA8022
{
public:
	::System::Void _ctor(::Class_1_B958907EBFDC8D4E* a1, ::System::Int32 a2, ::RPG::GameCore::TaskContext* a3, ::RPG::GameCore::BindSwitchPhotoGraphFuncBtn* a4, ::RPG::GameCore::GameEntity* a5)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_B958907EBFDC8D4E*, ::System::Int32, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::BindSwitchPhotoGraphFuncBtn*, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_2_65BC2B20080CA5F6__CTOR_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::System::Void Method_2_6BB797C050A64994(::System::Collections::Generic::List_1<::RPG::Client::PhotoGraphAimContainer_PhotoGraphAim*>* a1, ::System::UInt32& a2, ::System::UInt32& a3, ::Class_1_85DF9887662222C3*& a4)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::PhotoGraphAimContainer_PhotoGraphAim*>*, ::System::UInt32&, ::System::UInt32&, ::Class_1_85DF9887662222C3*&))((::PBYTE)hIl2Cpp + CLASS_2_65BC2B20080CA5F6_METHOD_2_6BB797C050A64994_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_2_3B04F5AF7B8BE993(::System::Collections::Generic::List_1<::RPG::Client::PhotoGraphAimContainer_PhotoGraphAim*>* P0, ::System::UInt32& P1, ::System::UInt32& P2, ::Class_1_85DF9887662222C3*& P3)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::PhotoGraphAimContainer_PhotoGraphAim*>*, ::System::UInt32&, ::System::UInt32&, ::Class_1_85DF9887662222C3*&))((::PBYTE)hIl2Cpp + CLASS_2_65BC2B20080CA5F6_METHOD_2_3B04F5AF7B8BE993_OFFSET))(this, P0, P1, P2, P3);
	}
};

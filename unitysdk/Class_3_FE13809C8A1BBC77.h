#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ST_Task_1.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace RPG::Client { class ElfRestaurantGameInstance; }
namespace RPG::Client::LittleGame { class ElfRestaurantGameEntity; }
namespace RPG::Client::LittleGame { template <typename T> class NavigationRequest_1; }
namespace RPG::GameCore { class ST_Main_ElfMoveToPosition; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class Object; }

#define CLASS_3_FE13809C8A1BBC77_DISPOSE_OFFSET UNITYSDK_OFFSET(0x17E27650)
#define CLASS_3_FE13809C8A1BBC77_METHOD_3_147A527305B2FF1B_OFFSET UNITYSDK_OFFSET(0x17E27300)
#define CLASS_3_FE13809C8A1BBC77_METHOD_3_283228DCA08F69C7_OFFSET UNITYSDK_OFFSET(0x17E27AC0)
#define CLASS_3_FE13809C8A1BBC77_METHOD_3_8B848E52913DFCE9_OFFSET UNITYSDK_OFFSET(0x17E27E10)
#define CLASS_3_FE13809C8A1BBC77_METHOD_3_972DBDE8A873D51A_OFFSET UNITYSDK_OFFSET(0x17E27690)
#define CLASS_3_FE13809C8A1BBC77_METHOD_3_CAEE376DC5422269_OFFSET UNITYSDK_OFFSET(0x17E26E90)
#define CLASS_3_FE13809C8A1BBC77_METHOD_3_D299ECB45C12E72E_OFFSET UNITYSDK_OFFSET(0x17E27B60)
#define CLASS_3_FE13809C8A1BBC77_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x17E26340)
#define CLASS_3_FE13809C8A1BBC77_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x17E266E0)
#define CLASS_3_FE13809C8A1BBC77_TICK_OFFSET UNITYSDK_OFFSET(0x17E268C0)
#define CLASS_3_FE13809C8A1BBC77__CTOR_OFFSET UNITYSDK_OFFSET(0x17E262C0)

inline static constexpr unsigned int Class_3_FE13809C8A1BBC77_TypeDefinitionIndex = 52450;

class Class_3_FE13809C8A1BBC77 : public ::RPG::GameCore::ST_Task_1<::RPG::GameCore::ST_Main_ElfMoveToPosition*>
{
public:
	::RPG::Client::LittleGame::ElfRestaurantGameEntity* PELIMKCPLCC; // 0x28
	::RPG::Client::LittleGame::NavigationRequest_1<::RPG::Client::LittleGame::ElfRestaurantGameEntity*>* BOOJINILAND; // 0x30
	::RPG::Client::ElfRestaurantGameInstance* MIJMIIENKAK; // 0x38
	::System::Boolean BNDLCAADPPO; // 0x40
	::UnityEngine::Vector3 BEDPGAOCOHG; // 0x44
	::System::Single HBANLBGKNKP; // 0x50
	::System::Single IJAJOGNGEIK; // 0x54
	::System::Single JIJJJDONLIP; // 0x58

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ST_Main_ElfMoveToPosition* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ST_Main_ElfMoveToPosition*))((::PBYTE)hIl2Cpp + CLASS_3_FE13809C8A1BBC77__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_FE13809C8A1BBC77_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_FE13809C8A1BBC77_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_FE13809C8A1BBC77_TICK_OFFSET))(this, a1);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_FE13809C8A1BBC77_DISPOSE_OFFSET))(this);
	}

	::System::Boolean Method_3_CAEE376DC5422269()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_FE13809C8A1BBC77_METHOD_3_CAEE376DC5422269_OFFSET))(this);
	}

	::System::Void Method_3_972DBDE8A873D51A(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_3_FE13809C8A1BBC77_METHOD_3_972DBDE8A873D51A_OFFSET))(this, a1);
	}

	::System::Void Method_3_283228DCA08F69C7(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_3_FE13809C8A1BBC77_METHOD_3_283228DCA08F69C7_OFFSET))(this, a1);
	}

	::System::Void Method_3_D299ECB45C12E72E(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_3_FE13809C8A1BBC77_METHOD_3_D299ECB45C12E72E_OFFSET))(this, a1);
	}

	::System::Void Method_3_147A527305B2FF1B()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_FE13809C8A1BBC77_METHOD_3_147A527305B2FF1B_OFFSET))(this);
	}

	::System::Void Method_3_8B848E52913DFCE9()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_FE13809C8A1BBC77_METHOD_3_8B848E52913DFCE9_OFFSET))(this);
	}
};

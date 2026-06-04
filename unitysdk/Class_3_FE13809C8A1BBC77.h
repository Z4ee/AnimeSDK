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

#define CLASS_3_FE13809C8A1BBC77_DISPOSE_OFFSET UNITYSDK_OFFSET(0x13530760)
#define CLASS_3_FE13809C8A1BBC77_METHOD_3_147A527305B2FF1B_OFFSET UNITYSDK_OFFSET(0x13530410)
#define CLASS_3_FE13809C8A1BBC77_METHOD_3_283228DCA08F69C7_OFFSET UNITYSDK_OFFSET(0x13530BD0)
#define CLASS_3_FE13809C8A1BBC77_METHOD_3_8B848E52913DFCE9_OFFSET UNITYSDK_OFFSET(0x13530F20)
#define CLASS_3_FE13809C8A1BBC77_METHOD_3_972DBDE8A873D51A_OFFSET UNITYSDK_OFFSET(0x135307A0)
#define CLASS_3_FE13809C8A1BBC77_METHOD_3_CAEE376DC5422269_OFFSET UNITYSDK_OFFSET(0x1352FFA0)
#define CLASS_3_FE13809C8A1BBC77_METHOD_3_D299ECB45C12E72E_OFFSET UNITYSDK_OFFSET(0x13530C70)
#define CLASS_3_FE13809C8A1BBC77_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x1352F450)
#define CLASS_3_FE13809C8A1BBC77_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x1352F7F0)
#define CLASS_3_FE13809C8A1BBC77_TICK_OFFSET UNITYSDK_OFFSET(0x1352F9D0)
#define CLASS_3_FE13809C8A1BBC77__CTOR_OFFSET UNITYSDK_OFFSET(0x1352F3D0)
#define CLASS_3_FE13809C8A1BBC77___IFIXBASEPROXY_DISPOSE_OFFSET UNITYSDK_OFFSET(0x13530FE0)
#define CLASS_3_FE13809C8A1BBC77___IFIXBASEPROXY_TICK_OFFSET UNITYSDK_OFFSET(0x13530FD0)

inline static constexpr unsigned int Class_3_FE13809C8A1BBC77_TypeDefinitionIndex = 48777;

class Class_3_FE13809C8A1BBC77 : public ::RPG::GameCore::ST_Task_1<::RPG::GameCore::ST_Main_ElfMoveToPosition*>
{
public:
	::RPG::Client::ElfRestaurantGameInstance* Field_3_0; // 0x28
	::RPG::Client::LittleGame::NavigationRequest_1<::RPG::Client::LittleGame::ElfRestaurantGameEntity*>* Field_3_1; // 0x30
	::RPG::Client::LittleGame::ElfRestaurantGameEntity* Field_3_2; // 0x38
	::System::Boolean Field_3_3; // 0x40
	::System::Single Field_3_4; // 0x44
	::System::Single Field_3_5; // 0x48
	::System::Single Field_3_6; // 0x4C
	::UnityEngine::Vector3 Field_3_7; // 0x50

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

	::System::Void __iFixBaseProxy_Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_FE13809C8A1BBC77___IFIXBASEPROXY_TICK_OFFSET))(this, a1);
	}

	::System::Void __iFixBaseProxy_Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_FE13809C8A1BBC77___IFIXBASEPROXY_DISPOSE_OFFSET))(this);
	}
};

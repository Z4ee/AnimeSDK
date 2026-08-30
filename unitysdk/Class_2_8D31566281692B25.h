#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Entitas/Context_1.h"
#include "unitysdk/RPG/Client/LittleGame/RoadRash/ECameraMode.h"
#include "unitysdk/RPG/Client/LittleGame/RoadRash/EEngineState.h"
#include "unitysdk/RPG/Client/LittleGame/RoadRash/RoadRashMapStartLine.h"
#include "unitysdk/RPG/Client/LittleGame/RoadRash/RoadRashMapStartPoint.h"
#include "unitysdk/RPG/GameCore/B51RacingTREventType.h"
#include "unitysdk/Struct_2_5339A6B283F0E39D.h"
#include "unitysdk/Struct_2_5B95EFC62CEAE6E1.h"
#include "unitysdk/UnityEngine/Bounds.h"

class Class_0_16E4307DCC419505_209;
class Class_1_07A210D994F284D8_2;
class Class_1_07A210D994F284D8_3;
class Class_1_1DA68E94695C05BD;
class Class_1_43BD383C98B4C0C5_44;
class Class_1_47EE63CB5C4DC8FC_15;
class Class_1_48FFE902FEF4A0BA;
class Class_1_748AE60E47AD3E02;
class Class_1_80B0DA28ED2E4CFF;
class Class_1_83665B095F1535B5_6;
class Class_1_B6045334FA181376;
class Class_1_D2E90365D99FC7E6_12;
class Class_1_DCE3BC3D0902A8EB;
class Class_2_230F5EDDB35DAEBA;
namespace Entitas { template <typename T> class IMatcher_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Transform; }

#define CLASS_2_8D31566281692B25_GETABILITYMATCHER_OFFSET UNITYSDK_OFFSET(0x1C620980)
#define CLASS_2_8D31566281692B25_METHOD_2_09E69D5C9697D8A0_OFFSET UNITYSDK_OFFSET(0x1C620D00)
#define CLASS_2_8D31566281692B25_METHOD_2_1561BFA77991A03A_1_OFFSET UNITYSDK_OFFSET(0x1C620F30)
#define CLASS_2_8D31566281692B25_METHOD_2_1561BFA77991A03A_2_OFFSET UNITYSDK_OFFSET(0x1C6213A0)
#define CLASS_2_8D31566281692B25_METHOD_2_1561BFA77991A03A_3_OFFSET UNITYSDK_OFFSET(0x1C6218F0)
#define CLASS_2_8D31566281692B25_METHOD_2_1561BFA77991A03A_4_OFFSET UNITYSDK_OFFSET(0x1C621EC0)
#define CLASS_2_8D31566281692B25_METHOD_2_1561BFA77991A03A_5_OFFSET UNITYSDK_OFFSET(0x1C622320)
#define CLASS_2_8D31566281692B25_METHOD_2_1561BFA77991A03A_6_OFFSET UNITYSDK_OFFSET(0x1C622670)
#define CLASS_2_8D31566281692B25_METHOD_2_1561BFA77991A03A_7_OFFSET UNITYSDK_OFFSET(0x1C622A20)
#define CLASS_2_8D31566281692B25_METHOD_2_1561BFA77991A03A_OFFSET UNITYSDK_OFFSET(0x1C620B00)
#define CLASS_2_8D31566281692B25_METHOD_2_2D096A83338B52DB_OFFSET UNITYSDK_OFFSET(0x1C622830)
#define CLASS_2_8D31566281692B25_METHOD_2_323D6B63778DE88C_OFFSET UNITYSDK_OFFSET(0x1C621150)
#define CLASS_2_8D31566281692B25_METHOD_2_455E250D679F9642_1_OFFSET UNITYSDK_OFFSET(0x1C621260)
#define CLASS_2_8D31566281692B25_METHOD_2_455E250D679F9642_2_OFFSET UNITYSDK_OFFSET(0x1C6217B0)
#define CLASS_2_8D31566281692B25_METHOD_2_455E250D679F9642_3_OFFSET UNITYSDK_OFFSET(0x1C621D80)
#define CLASS_2_8D31566281692B25_METHOD_2_455E250D679F9642_4_OFFSET UNITYSDK_OFFSET(0x1C6221E0)
#define CLASS_2_8D31566281692B25_METHOD_2_455E250D679F9642_5_OFFSET UNITYSDK_OFFSET(0x1C622530)
#define CLASS_2_8D31566281692B25_METHOD_2_455E250D679F9642_6_OFFSET UNITYSDK_OFFSET(0x1C6228E0)
#define CLASS_2_8D31566281692B25_METHOD_2_455E250D679F9642_7_OFFSET UNITYSDK_OFFSET(0x1C623020)
#define CLASS_2_8D31566281692B25_METHOD_2_455E250D679F9642_OFFSET UNITYSDK_OFFSET(0x1C620DF0)
#define CLASS_2_8D31566281692B25_METHOD_2_61E9A777E95C2C6B_OFFSET UNITYSDK_OFFSET(0x1C6224B0)
#define CLASS_2_8D31566281692B25_METHOD_2_673DE15674E18423_1_OFFSET UNITYSDK_OFFSET(0x1C620E50)
#define CLASS_2_8D31566281692B25_METHOD_2_673DE15674E18423_2_OFFSET UNITYSDK_OFFSET(0x1C6212C0)
#define CLASS_2_8D31566281692B25_METHOD_2_673DE15674E18423_3_OFFSET UNITYSDK_OFFSET(0x1C621810)
#define CLASS_2_8D31566281692B25_METHOD_2_673DE15674E18423_4_OFFSET UNITYSDK_OFFSET(0x1C621DE0)
#define CLASS_2_8D31566281692B25_METHOD_2_673DE15674E18423_5_OFFSET UNITYSDK_OFFSET(0x1C622240)
#define CLASS_2_8D31566281692B25_METHOD_2_673DE15674E18423_6_OFFSET UNITYSDK_OFFSET(0x1C622590)
#define CLASS_2_8D31566281692B25_METHOD_2_673DE15674E18423_7_OFFSET UNITYSDK_OFFSET(0x1C622940)
#define CLASS_2_8D31566281692B25_METHOD_2_673DE15674E18423_OFFSET UNITYSDK_OFFSET(0x1C620A20)
#define CLASS_2_8D31566281692B25_METHOD_2_6F3C123C2C26FE89_OFFSET UNITYSDK_OFFSET(0x1C6223A0)
#define CLASS_2_8D31566281692B25_METHOD_2_71E6500BCF6E9811_OFFSET UNITYSDK_OFFSET(0x1C621970)
#define CLASS_2_8D31566281692B25_METHOD_2_71F662712A6123F1_OFFSET UNITYSDK_OFFSET(0x1C621420)
#define CLASS_2_8D31566281692B25_METHOD_2_751738DBA4193588_OFFSET UNITYSDK_OFFSET(0x1C620FB0)
#define CLASS_2_8D31566281692B25_METHOD_2_7597F2787D11F9FD_OFFSET UNITYSDK_OFFSET(0x1C6226F0)
#define CLASS_2_8D31566281692B25_METHOD_2_7E70D0EC169598CE_OFFSET UNITYSDK_OFFSET(0x1C622D60)
#define CLASS_2_8D31566281692B25_METHOD_2_875ADBD569B6DDC9_OFFSET UNITYSDK_OFFSET(0x1C620B80)
#define CLASS_2_8D31566281692B25_METHOD_2_9AC4B4DB94CF57BB_OFFSET UNITYSDK_OFFSET(0x1C621620)
#define CLASS_2_8D31566281692B25_METHOD_2_ABCD4B33645860EC_OFFSET UNITYSDK_OFFSET(0x1C621F40)
#define CLASS_2_8D31566281692B25_METHOD_2_BED040D7E3EE36A0_OFFSET UNITYSDK_OFFSET(0x1C6220D0)
#define CLASS_2_8D31566281692B25_METHOD_2_CFE535BB87473E94_OFFSET UNITYSDK_OFFSET(0x1C621BA0)
#define CLASS_2_8D31566281692B25_METHOD_2_F0088C88851A7DFB_1_OFFSET UNITYSDK_OFFSET(0x1C620F90)
#define CLASS_2_8D31566281692B25_METHOD_2_F0088C88851A7DFB_2_OFFSET UNITYSDK_OFFSET(0x1C621400)
#define CLASS_2_8D31566281692B25_METHOD_2_F0088C88851A7DFB_3_OFFSET UNITYSDK_OFFSET(0x1C621950)
#define CLASS_2_8D31566281692B25_METHOD_2_F0088C88851A7DFB_4_OFFSET UNITYSDK_OFFSET(0x1C621F20)
#define CLASS_2_8D31566281692B25_METHOD_2_F0088C88851A7DFB_5_OFFSET UNITYSDK_OFFSET(0x1C622380)
#define CLASS_2_8D31566281692B25_METHOD_2_F0088C88851A7DFB_6_OFFSET UNITYSDK_OFFSET(0x1C6226D0)
#define CLASS_2_8D31566281692B25_METHOD_2_F0088C88851A7DFB_7_OFFSET UNITYSDK_OFFSET(0x1C622A80)
#define CLASS_2_8D31566281692B25_METHOD_2_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x1C620B60)
#define CLASS_2_8D31566281692B25_METHOD_2_FD64230EB3C039B4_OFFSET UNITYSDK_OFFSET(0x1C622AA0)
#define CLASS_2_8D31566281692B25__CTOR_OFFSET UNITYSDK_OFFSET(0x1C623080)

inline static constexpr unsigned int Class_2_8D31566281692B25_TypeDefinitionIndex = 40641;

class Class_2_8D31566281692B25 : public ::Entitas::Context_1<::Class_2_230F5EDDB35DAEBA*>
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8D31566281692B25__CTOR_OFFSET))(this);
	}

	::Entitas::IMatcher_1<::Class_2_230F5EDDB35DAEBA*>* GetAbilityMatcher()
	{
		return ((::Entitas::IMatcher_1<::Class_2_230F5EDDB35DAEBA*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8D31566281692B25_GETABILITYMATCHER_OFFSET))(this);
	}

	::Class_2_230F5EDDB35DAEBA* Method_2_673DE15674E18423()
	{
		return ((::Class_2_230F5EDDB35DAEBA*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8D31566281692B25_METHOD_2_673DE15674E18423_OFFSET))(this);
	}

	::Class_1_48FFE902FEF4A0BA* Method_2_1561BFA77991A03A()
	{
		return ((::Class_1_48FFE902FEF4A0BA*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8D31566281692B25_METHOD_2_1561BFA77991A03A_OFFSET))(this);
	}

	::System::Boolean Method_2_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8D31566281692B25_METHOD_2_F0088C88851A7DFB_OFFSET))(this);
	}

	::Class_2_230F5EDDB35DAEBA* Method_2_875ADBD569B6DDC9(::RPG::Client::LittleGame::RoadRash::ECameraMode a1, ::UnityEngine::Transform* a2, ::Class_0_16E4307DCC419505_209* a3, ::System::Single a4, ::System::Single a5, ::Struct_2_5339A6B283F0E39D a6)
	{
		return ((::Class_2_230F5EDDB35DAEBA*(*)(::PVOID, ::RPG::Client::LittleGame::RoadRash::ECameraMode, ::UnityEngine::Transform*, ::Class_0_16E4307DCC419505_209*, ::System::Single, ::System::Single, ::Struct_2_5339A6B283F0E39D))((::PBYTE)hIl2Cpp + CLASS_2_8D31566281692B25_METHOD_2_875ADBD569B6DDC9_OFFSET))(this, a1, a2, a3, a4, a5, a6);
	}

	::System::Void Method_2_09E69D5C9697D8A0(::RPG::Client::LittleGame::RoadRash::ECameraMode a1, ::UnityEngine::Transform* a2, ::Class_0_16E4307DCC419505_209* a3, ::System::Single a4, ::System::Single a5, ::Struct_2_5339A6B283F0E39D a6)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::LittleGame::RoadRash::ECameraMode, ::UnityEngine::Transform*, ::Class_0_16E4307DCC419505_209*, ::System::Single, ::System::Single, ::Struct_2_5339A6B283F0E39D))((::PBYTE)hIl2Cpp + CLASS_2_8D31566281692B25_METHOD_2_09E69D5C9697D8A0_OFFSET))(this, a1, a2, a3, a4, a5, a6);
	}

	::System::Void Method_2_455E250D679F9642()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8D31566281692B25_METHOD_2_455E250D679F9642_OFFSET))(this);
	}

	::Class_2_230F5EDDB35DAEBA* Method_2_673DE15674E18423_1()
	{
		return ((::Class_2_230F5EDDB35DAEBA*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8D31566281692B25_METHOD_2_673DE15674E18423_1_OFFSET))(this);
	}

	::Class_1_07A210D994F284D8_2* Method_2_1561BFA77991A03A_1()
	{
		return ((::Class_1_07A210D994F284D8_2*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8D31566281692B25_METHOD_2_1561BFA77991A03A_1_OFFSET))(this);
	}

	::System::Boolean Method_2_F0088C88851A7DFB_1()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8D31566281692B25_METHOD_2_F0088C88851A7DFB_1_OFFSET))(this);
	}

	::Class_2_230F5EDDB35DAEBA* Method_2_751738DBA4193588(::System::UInt32 a1, ::System::UInt32 a2, ::System::Boolean a3, ::System::Boolean a4, ::System::Boolean a5, ::System::Boolean a6, ::System::Boolean a7, ::System::Boolean a8)
	{
		return ((::Class_2_230F5EDDB35DAEBA*(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::System::Boolean, ::System::Boolean, ::System::Boolean, ::System::Boolean, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_8D31566281692B25_METHOD_2_751738DBA4193588_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8);
	}

	::System::Void Method_2_323D6B63778DE88C(::System::UInt32 a1, ::System::UInt32 a2, ::System::Boolean a3, ::System::Boolean a4, ::System::Boolean a5, ::System::Boolean a6, ::System::Boolean a7, ::System::Boolean a8)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::System::Boolean, ::System::Boolean, ::System::Boolean, ::System::Boolean, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_8D31566281692B25_METHOD_2_323D6B63778DE88C_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8);
	}

	::System::Void Method_2_455E250D679F9642_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8D31566281692B25_METHOD_2_455E250D679F9642_1_OFFSET))(this);
	}

	::Class_2_230F5EDDB35DAEBA* Method_2_673DE15674E18423_2()
	{
		return ((::Class_2_230F5EDDB35DAEBA*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8D31566281692B25_METHOD_2_673DE15674E18423_2_OFFSET))(this);
	}

	::Class_1_83665B095F1535B5_6* Method_2_1561BFA77991A03A_2()
	{
		return ((::Class_1_83665B095F1535B5_6*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8D31566281692B25_METHOD_2_1561BFA77991A03A_2_OFFSET))(this);
	}

	::System::Boolean Method_2_F0088C88851A7DFB_2()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8D31566281692B25_METHOD_2_F0088C88851A7DFB_2_OFFSET))(this);
	}

	::Class_2_230F5EDDB35DAEBA* Method_2_71F662712A6123F1(::System::Boolean a1, ::System::Boolean a2, ::System::Boolean a3, ::System::Boolean a4, ::System::Boolean a5, ::System::Boolean a6, ::System::Boolean a7, ::System::Boolean a8, ::System::Boolean a9, ::System::Boolean a10, ::System::Boolean a11, ::System::Boolean a12)
	{
		return ((::Class_2_230F5EDDB35DAEBA*(*)(::PVOID, ::System::Boolean, ::System::Boolean, ::System::Boolean, ::System::Boolean, ::System::Boolean, ::System::Boolean, ::System::Boolean, ::System::Boolean, ::System::Boolean, ::System::Boolean, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_8D31566281692B25_METHOD_2_71F662712A6123F1_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12);
	}

	::System::Void Method_2_9AC4B4DB94CF57BB(::System::Boolean a1, ::System::Boolean a2, ::System::Boolean a3, ::System::Boolean a4, ::System::Boolean a5, ::System::Boolean a6, ::System::Boolean a7, ::System::Boolean a8, ::System::Boolean a9, ::System::Boolean a10, ::System::Boolean a11, ::System::Boolean a12)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Boolean, ::System::Boolean, ::System::Boolean, ::System::Boolean, ::System::Boolean, ::System::Boolean, ::System::Boolean, ::System::Boolean, ::System::Boolean, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_8D31566281692B25_METHOD_2_9AC4B4DB94CF57BB_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12);
	}

	::System::Void Method_2_455E250D679F9642_2()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8D31566281692B25_METHOD_2_455E250D679F9642_2_OFFSET))(this);
	}

	::Class_2_230F5EDDB35DAEBA* Method_2_673DE15674E18423_3()
	{
		return ((::Class_2_230F5EDDB35DAEBA*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8D31566281692B25_METHOD_2_673DE15674E18423_3_OFFSET))(this);
	}

	::Class_1_1DA68E94695C05BD* Method_2_1561BFA77991A03A_3()
	{
		return ((::Class_1_1DA68E94695C05BD*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8D31566281692B25_METHOD_2_1561BFA77991A03A_3_OFFSET))(this);
	}

	::System::Boolean Method_2_F0088C88851A7DFB_3()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8D31566281692B25_METHOD_2_F0088C88851A7DFB_3_OFFSET))(this);
	}

	::Class_2_230F5EDDB35DAEBA* Method_2_71E6500BCF6E9811(::UnityEngine::Transform* a1, ::Il2CppArray<::Class_1_B6045334FA181376*>* a2, ::System::Single a3, ::RPG::Client::LittleGame::RoadRash::RoadRashMapStartLine a4, ::Il2CppArray<::RPG::Client::LittleGame::RoadRash::RoadRashMapStartPoint>* a5, ::UnityEngine::Bounds a6, ::Il2CppArray<::Class_1_DCE3BC3D0902A8EB*>* a7, ::Il2CppArray<::Class_1_80B0DA28ED2E4CFF*>* a8, ::Il2CppArray<::Class_1_47EE63CB5C4DC8FC_15*>* a9)
	{
		return ((::Class_2_230F5EDDB35DAEBA*(*)(::PVOID, ::UnityEngine::Transform*, ::Il2CppArray<::Class_1_B6045334FA181376*>*, ::System::Single, ::RPG::Client::LittleGame::RoadRash::RoadRashMapStartLine, ::Il2CppArray<::RPG::Client::LittleGame::RoadRash::RoadRashMapStartPoint>*, ::UnityEngine::Bounds, ::Il2CppArray<::Class_1_DCE3BC3D0902A8EB*>*, ::Il2CppArray<::Class_1_80B0DA28ED2E4CFF*>*, ::Il2CppArray<::Class_1_47EE63CB5C4DC8FC_15*>*))((::PBYTE)hIl2Cpp + CLASS_2_8D31566281692B25_METHOD_2_71E6500BCF6E9811_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8, a9);
	}

	::System::Void Method_2_CFE535BB87473E94(::UnityEngine::Transform* a1, ::Il2CppArray<::Class_1_B6045334FA181376*>* a2, ::System::Single a3, ::RPG::Client::LittleGame::RoadRash::RoadRashMapStartLine a4, ::Il2CppArray<::RPG::Client::LittleGame::RoadRash::RoadRashMapStartPoint>* a5, ::UnityEngine::Bounds a6, ::Il2CppArray<::Class_1_DCE3BC3D0902A8EB*>* a7, ::Il2CppArray<::Class_1_80B0DA28ED2E4CFF*>* a8, ::Il2CppArray<::Class_1_47EE63CB5C4DC8FC_15*>* a9)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*, ::Il2CppArray<::Class_1_B6045334FA181376*>*, ::System::Single, ::RPG::Client::LittleGame::RoadRash::RoadRashMapStartLine, ::Il2CppArray<::RPG::Client::LittleGame::RoadRash::RoadRashMapStartPoint>*, ::UnityEngine::Bounds, ::Il2CppArray<::Class_1_DCE3BC3D0902A8EB*>*, ::Il2CppArray<::Class_1_80B0DA28ED2E4CFF*>*, ::Il2CppArray<::Class_1_47EE63CB5C4DC8FC_15*>*))((::PBYTE)hIl2Cpp + CLASS_2_8D31566281692B25_METHOD_2_CFE535BB87473E94_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8, a9);
	}

	::System::Void Method_2_455E250D679F9642_3()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8D31566281692B25_METHOD_2_455E250D679F9642_3_OFFSET))(this);
	}

	::Class_2_230F5EDDB35DAEBA* Method_2_673DE15674E18423_4()
	{
		return ((::Class_2_230F5EDDB35DAEBA*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8D31566281692B25_METHOD_2_673DE15674E18423_4_OFFSET))(this);
	}

	::Class_1_07A210D994F284D8_3* Method_2_1561BFA77991A03A_4()
	{
		return ((::Class_1_07A210D994F284D8_3*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8D31566281692B25_METHOD_2_1561BFA77991A03A_4_OFFSET))(this);
	}

	::System::Boolean Method_2_F0088C88851A7DFB_4()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8D31566281692B25_METHOD_2_F0088C88851A7DFB_4_OFFSET))(this);
	}

	::Class_2_230F5EDDB35DAEBA* Method_2_ABCD4B33645860EC(::System::UInt32 a1, ::System::UInt32 a2, ::System::Boolean a3, ::System::UInt32 a4, ::System::UInt32 a5, ::System::UInt32 a6, ::System::UInt32 a7, ::System::UInt32 a8)
	{
		return ((::Class_2_230F5EDDB35DAEBA*(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::System::Boolean, ::System::UInt32, ::System::UInt32, ::System::UInt32, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_2_8D31566281692B25_METHOD_2_ABCD4B33645860EC_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8);
	}

	::System::Void Method_2_BED040D7E3EE36A0(::System::UInt32 a1, ::System::UInt32 a2, ::System::Boolean a3, ::System::UInt32 a4, ::System::UInt32 a5, ::System::UInt32 a6, ::System::UInt32 a7, ::System::UInt32 a8)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::System::Boolean, ::System::UInt32, ::System::UInt32, ::System::UInt32, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_2_8D31566281692B25_METHOD_2_BED040D7E3EE36A0_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8);
	}

	::System::Void Method_2_455E250D679F9642_4()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8D31566281692B25_METHOD_2_455E250D679F9642_4_OFFSET))(this);
	}

	::Class_2_230F5EDDB35DAEBA* Method_2_673DE15674E18423_5()
	{
		return ((::Class_2_230F5EDDB35DAEBA*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8D31566281692B25_METHOD_2_673DE15674E18423_5_OFFSET))(this);
	}

	::Class_1_D2E90365D99FC7E6_12* Method_2_1561BFA77991A03A_5()
	{
		return ((::Class_1_D2E90365D99FC7E6_12*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8D31566281692B25_METHOD_2_1561BFA77991A03A_5_OFFSET))(this);
	}

	::System::Boolean Method_2_F0088C88851A7DFB_5()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8D31566281692B25_METHOD_2_F0088C88851A7DFB_5_OFFSET))(this);
	}

	::Class_2_230F5EDDB35DAEBA* Method_2_6F3C123C2C26FE89(::System::UInt32 a1, ::System::Int32 a2)
	{
		return ((::Class_2_230F5EDDB35DAEBA*(*)(::PVOID, ::System::UInt32, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_8D31566281692B25_METHOD_2_6F3C123C2C26FE89_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_61E9A777E95C2C6B(::System::UInt32 a1, ::System::Int32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_8D31566281692B25_METHOD_2_61E9A777E95C2C6B_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_455E250D679F9642_5()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8D31566281692B25_METHOD_2_455E250D679F9642_5_OFFSET))(this);
	}

	::Class_2_230F5EDDB35DAEBA* Method_2_673DE15674E18423_6()
	{
		return ((::Class_2_230F5EDDB35DAEBA*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8D31566281692B25_METHOD_2_673DE15674E18423_6_OFFSET))(this);
	}

	::Class_1_748AE60E47AD3E02* Method_2_1561BFA77991A03A_6()
	{
		return ((::Class_1_748AE60E47AD3E02*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8D31566281692B25_METHOD_2_1561BFA77991A03A_6_OFFSET))(this);
	}

	::System::Boolean Method_2_F0088C88851A7DFB_6()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8D31566281692B25_METHOD_2_F0088C88851A7DFB_6_OFFSET))(this);
	}

	::Class_2_230F5EDDB35DAEBA* Method_2_7597F2787D11F9FD(::System::Single a1, ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::B51RacingTREventType, ::System::Single>* a2, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>* a3, ::System::Collections::Generic::List_1<::Struct_2_5B95EFC62CEAE6E1>* a4)
	{
		return ((::Class_2_230F5EDDB35DAEBA*(*)(::PVOID, ::System::Single, ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::B51RacingTREventType, ::System::Single>*, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>*, ::System::Collections::Generic::List_1<::Struct_2_5B95EFC62CEAE6E1>*))((::PBYTE)hIl2Cpp + CLASS_2_8D31566281692B25_METHOD_2_7597F2787D11F9FD_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_2_2D096A83338B52DB(::System::Single a1, ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::B51RacingTREventType, ::System::Single>* a2, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>* a3, ::System::Collections::Generic::List_1<::Struct_2_5B95EFC62CEAE6E1>* a4)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::B51RacingTREventType, ::System::Single>*, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>*, ::System::Collections::Generic::List_1<::Struct_2_5B95EFC62CEAE6E1>*))((::PBYTE)hIl2Cpp + CLASS_2_8D31566281692B25_METHOD_2_2D096A83338B52DB_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_2_455E250D679F9642_6()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8D31566281692B25_METHOD_2_455E250D679F9642_6_OFFSET))(this);
	}

	::Class_2_230F5EDDB35DAEBA* Method_2_673DE15674E18423_7()
	{
		return ((::Class_2_230F5EDDB35DAEBA*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8D31566281692B25_METHOD_2_673DE15674E18423_7_OFFSET))(this);
	}

	::Class_1_43BD383C98B4C0C5_44* Method_2_1561BFA77991A03A_7()
	{
		return ((::Class_1_43BD383C98B4C0C5_44*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8D31566281692B25_METHOD_2_1561BFA77991A03A_7_OFFSET))(this);
	}

	::System::Boolean Method_2_F0088C88851A7DFB_7()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8D31566281692B25_METHOD_2_F0088C88851A7DFB_7_OFFSET))(this);
	}

	::Class_2_230F5EDDB35DAEBA* Method_2_FD64230EB3C039B4(::System::Boolean a1, ::System::Int32 a2, ::System::UInt32 a3, ::System::UInt32 a4, ::System::Single a5, ::RPG::Client::LittleGame::RoadRash::EEngineState a6, ::System::Int32 a7, ::System::Boolean a8, ::System::Boolean a9, ::System::Int32 a10, ::System::Single a11, ::System::Boolean a12, ::System::Boolean a13, ::System::Boolean a14, ::System::Boolean a15, ::System::Boolean a16, ::System::Boolean a17, ::System::Int32 a18)
	{
		return ((::Class_2_230F5EDDB35DAEBA*(*)(::PVOID, ::System::Boolean, ::System::Int32, ::System::UInt32, ::System::UInt32, ::System::Single, ::RPG::Client::LittleGame::RoadRash::EEngineState, ::System::Int32, ::System::Boolean, ::System::Boolean, ::System::Int32, ::System::Single, ::System::Boolean, ::System::Boolean, ::System::Boolean, ::System::Boolean, ::System::Boolean, ::System::Boolean, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_8D31566281692B25_METHOD_2_FD64230EB3C039B4_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14, a15, a16, a17, a18);
	}

	::System::Void Method_2_7E70D0EC169598CE(::System::Boolean a1, ::System::Int32 a2, ::System::UInt32 a3, ::System::UInt32 a4, ::System::Single a5, ::RPG::Client::LittleGame::RoadRash::EEngineState a6, ::System::Int32 a7, ::System::Boolean a8, ::System::Boolean a9, ::System::Int32 a10, ::System::Single a11, ::System::Boolean a12, ::System::Boolean a13, ::System::Boolean a14, ::System::Boolean a15, ::System::Boolean a16, ::System::Boolean a17, ::System::Int32 a18)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Int32, ::System::UInt32, ::System::UInt32, ::System::Single, ::RPG::Client::LittleGame::RoadRash::EEngineState, ::System::Int32, ::System::Boolean, ::System::Boolean, ::System::Int32, ::System::Single, ::System::Boolean, ::System::Boolean, ::System::Boolean, ::System::Boolean, ::System::Boolean, ::System::Boolean, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_8D31566281692B25_METHOD_2_7E70D0EC169598CE_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14, a15, a16, a17, a18);
	}

	::System::Void Method_2_455E250D679F9642_7()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8D31566281692B25_METHOD_2_455E250D679F9642_7_OFFSET))(this);
	}
};

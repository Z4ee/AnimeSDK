#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Entitas/Context_1.h"
#include "unitysdk/RPG/Client/LittleGame/ETimelineControlGamePlayMode.h"
#include "unitysdk/Struct_2_882A7D00DFE0F598.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/UnityEngine/Vector2Int.h"
#include "unitysdk/UnityEngine/Vector3Int.h"

class Class_0_16E4307DCC419505_198;
class Class_1_0C69BC2A626C1DF1;
class Class_1_328908A2B3683652;
class Class_1_B470ECE8B4D9EC2E;
class Class_2_54AE1C44DE8123D2;
namespace RPG::Client::LittleGame { class TimelineControlGameWorldLevelGrid; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace UnityEngine { class Transform; }

#define CLASS_2_D1523E43223DED38_METHOD_2_0DC93BE1E61D4155_OFFSET UNITYSDK_OFFSET(0x169CD5F0)
#define CLASS_2_D1523E43223DED38_METHOD_2_58EA5F4E77C0F4AE_1_OFFSET UNITYSDK_OFFSET(0x169CD230)
#define CLASS_2_D1523E43223DED38_METHOD_2_58EA5F4E77C0F4AE_2_OFFSET UNITYSDK_OFFSET(0x169CD800)
#define CLASS_2_D1523E43223DED38_METHOD_2_58EA5F4E77C0F4AE_OFFSET UNITYSDK_OFFSET(0x169CCD40)
#define CLASS_2_D1523E43223DED38_METHOD_2_6668093E133928CC_OFFSET UNITYSDK_OFFSET(0x169CDAB0)
#define CLASS_2_D1523E43223DED38_METHOD_2_7183C790EA8096D2_1_OFFSET UNITYSDK_OFFSET(0x169CD7A0)
#define CLASS_2_D1523E43223DED38_METHOD_2_7183C790EA8096D2_2_OFFSET UNITYSDK_OFFSET(0x169CDB30)
#define CLASS_2_D1523E43223DED38_METHOD_2_7183C790EA8096D2_OFFSET UNITYSDK_OFFSET(0x169CD1D0)
#define CLASS_2_D1523E43223DED38_METHOD_2_DFB19A0BFA0521CA_OFFSET UNITYSDK_OFFSET(0x169CD9A0)
#define CLASS_2_D1523E43223DED38_METHOD_2_E14A7FCF78650419_1_OFFSET UNITYSDK_OFFSET(0x169CD350)
#define CLASS_2_D1523E43223DED38_METHOD_2_E14A7FCF78650419_2_OFFSET UNITYSDK_OFFSET(0x169CD920)
#define CLASS_2_D1523E43223DED38_METHOD_2_E14A7FCF78650419_OFFSET UNITYSDK_OFFSET(0x169CCE60)
#define CLASS_2_D1523E43223DED38_METHOD_2_E18E16F8638334A5_OFFSET UNITYSDK_OFFSET(0x169CD3D0)
#define CLASS_2_D1523E43223DED38_METHOD_2_E58E80527D674C57_OFFSET UNITYSDK_OFFSET(0x169CD090)
#define CLASS_2_D1523E43223DED38_METHOD_2_F0088C88851A7DFB_1_OFFSET UNITYSDK_OFFSET(0x169CD3B0)
#define CLASS_2_D1523E43223DED38_METHOD_2_F0088C88851A7DFB_2_OFFSET UNITYSDK_OFFSET(0x169CD980)
#define CLASS_2_D1523E43223DED38_METHOD_2_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x169CCEC0)
#define CLASS_2_D1523E43223DED38_METHOD_2_FFE317E3087B237C_OFFSET UNITYSDK_OFFSET(0x169CCEE0)
#define CLASS_2_D1523E43223DED38__CTOR_OFFSET UNITYSDK_OFFSET(0x169CDB90)

inline static constexpr unsigned int Class_2_D1523E43223DED38_TypeDefinitionIndex = 32587;

class Class_2_D1523E43223DED38 : public ::Entitas::Context_1<::Class_2_54AE1C44DE8123D2*>
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D1523E43223DED38__CTOR_OFFSET))(this);
	}

	::Class_2_54AE1C44DE8123D2* Method_2_58EA5F4E77C0F4AE()
	{
		return ((::Class_2_54AE1C44DE8123D2*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D1523E43223DED38_METHOD_2_58EA5F4E77C0F4AE_OFFSET))(this);
	}

	::Class_1_328908A2B3683652* Method_2_E14A7FCF78650419()
	{
		return ((::Class_1_328908A2B3683652*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D1523E43223DED38_METHOD_2_E14A7FCF78650419_OFFSET))(this);
	}

	::System::Boolean Method_2_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D1523E43223DED38_METHOD_2_F0088C88851A7DFB_OFFSET))(this);
	}

	::Class_2_54AE1C44DE8123D2* Method_2_FFE317E3087B237C(::UnityEngine::Vector3Int a1, ::Class_2_54AE1C44DE8123D2* a2, ::UnityEngine::Transform* a3, ::System::Nullable_1<::Struct_2_882A7D00DFE0F598> a4)
	{
		return ((::Class_2_54AE1C44DE8123D2*(*)(::PVOID, ::UnityEngine::Vector3Int, ::Class_2_54AE1C44DE8123D2*, ::UnityEngine::Transform*, ::System::Nullable_1<::Struct_2_882A7D00DFE0F598>))((::PBYTE)hIl2Cpp + CLASS_2_D1523E43223DED38_METHOD_2_FFE317E3087B237C_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_2_E58E80527D674C57(::UnityEngine::Vector3Int a1, ::Class_2_54AE1C44DE8123D2* a2, ::UnityEngine::Transform* a3, ::System::Nullable_1<::Struct_2_882A7D00DFE0F598> a4)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3Int, ::Class_2_54AE1C44DE8123D2*, ::UnityEngine::Transform*, ::System::Nullable_1<::Struct_2_882A7D00DFE0F598>))((::PBYTE)hIl2Cpp + CLASS_2_D1523E43223DED38_METHOD_2_E58E80527D674C57_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_2_7183C790EA8096D2()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D1523E43223DED38_METHOD_2_7183C790EA8096D2_OFFSET))(this);
	}

	::Class_2_54AE1C44DE8123D2* Method_2_58EA5F4E77C0F4AE_1()
	{
		return ((::Class_2_54AE1C44DE8123D2*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D1523E43223DED38_METHOD_2_58EA5F4E77C0F4AE_1_OFFSET))(this);
	}

	::Class_1_B470ECE8B4D9EC2E* Method_2_E14A7FCF78650419_1()
	{
		return ((::Class_1_B470ECE8B4D9EC2E*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D1523E43223DED38_METHOD_2_E14A7FCF78650419_1_OFFSET))(this);
	}

	::System::Boolean Method_2_F0088C88851A7DFB_1()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D1523E43223DED38_METHOD_2_F0088C88851A7DFB_1_OFFSET))(this);
	}

	::Class_2_54AE1C44DE8123D2* Method_2_E18E16F8638334A5(::System::Boolean a1, ::System::Boolean a2, ::System::Boolean a3, ::System::Single a4, ::System::Single a5, ::System::Single a6, ::System::Single a7, ::RPG::Client::LittleGame::ETimelineControlGamePlayMode a8, ::Class_0_16E4307DCC419505_198* a9, ::System::Single a10)
	{
		return ((::Class_2_54AE1C44DE8123D2*(*)(::PVOID, ::System::Boolean, ::System::Boolean, ::System::Boolean, ::System::Single, ::System::Single, ::System::Single, ::System::Single, ::RPG::Client::LittleGame::ETimelineControlGamePlayMode, ::Class_0_16E4307DCC419505_198*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_D1523E43223DED38_METHOD_2_E18E16F8638334A5_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10);
	}

	::System::Void Method_2_0DC93BE1E61D4155(::System::Boolean a1, ::System::Boolean a2, ::System::Boolean a3, ::System::Single a4, ::System::Single a5, ::System::Single a6, ::System::Single a7, ::RPG::Client::LittleGame::ETimelineControlGamePlayMode a8, ::Class_0_16E4307DCC419505_198* a9, ::System::Single a10)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Boolean, ::System::Boolean, ::System::Single, ::System::Single, ::System::Single, ::System::Single, ::RPG::Client::LittleGame::ETimelineControlGamePlayMode, ::Class_0_16E4307DCC419505_198*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_D1523E43223DED38_METHOD_2_0DC93BE1E61D4155_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10);
	}

	::System::Void Method_2_7183C790EA8096D2_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D1523E43223DED38_METHOD_2_7183C790EA8096D2_1_OFFSET))(this);
	}

	::Class_2_54AE1C44DE8123D2* Method_2_58EA5F4E77C0F4AE_2()
	{
		return ((::Class_2_54AE1C44DE8123D2*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D1523E43223DED38_METHOD_2_58EA5F4E77C0F4AE_2_OFFSET))(this);
	}

	::Class_1_0C69BC2A626C1DF1* Method_2_E14A7FCF78650419_2()
	{
		return ((::Class_1_0C69BC2A626C1DF1*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D1523E43223DED38_METHOD_2_E14A7FCF78650419_2_OFFSET))(this);
	}

	::System::Boolean Method_2_F0088C88851A7DFB_2()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D1523E43223DED38_METHOD_2_F0088C88851A7DFB_2_OFFSET))(this);
	}

	::Class_2_54AE1C44DE8123D2* Method_2_DFB19A0BFA0521CA(::System::Collections::Generic::Dictionary_2<::UnityEngine::Vector3Int, ::RPG::Client::LittleGame::TimelineControlGameWorldLevelGrid*>* a1, ::System::Collections::Generic::Dictionary_2<::UnityEngine::Vector2Int, ::RPG::Client::LittleGame::TimelineControlGameWorldLevelGrid*>* a2)
	{
		return ((::Class_2_54AE1C44DE8123D2*(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::UnityEngine::Vector3Int, ::RPG::Client::LittleGame::TimelineControlGameWorldLevelGrid*>*, ::System::Collections::Generic::Dictionary_2<::UnityEngine::Vector2Int, ::RPG::Client::LittleGame::TimelineControlGameWorldLevelGrid*>*))((::PBYTE)hIl2Cpp + CLASS_2_D1523E43223DED38_METHOD_2_DFB19A0BFA0521CA_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_6668093E133928CC(::System::Collections::Generic::Dictionary_2<::UnityEngine::Vector3Int, ::RPG::Client::LittleGame::TimelineControlGameWorldLevelGrid*>* a1, ::System::Collections::Generic::Dictionary_2<::UnityEngine::Vector2Int, ::RPG::Client::LittleGame::TimelineControlGameWorldLevelGrid*>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::UnityEngine::Vector3Int, ::RPG::Client::LittleGame::TimelineControlGameWorldLevelGrid*>*, ::System::Collections::Generic::Dictionary_2<::UnityEngine::Vector2Int, ::RPG::Client::LittleGame::TimelineControlGameWorldLevelGrid*>*))((::PBYTE)hIl2Cpp + CLASS_2_D1523E43223DED38_METHOD_2_6668093E133928CC_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_7183C790EA8096D2_2()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D1523E43223DED38_METHOD_2_7183C790EA8096D2_2_OFFSET))(this);
	}
};

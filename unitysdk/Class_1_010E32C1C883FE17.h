#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/LevelNavNodeInfo.h"
#include "unitysdk/RPG/GameCore/LevelNavNodeTransitInfo.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_2.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_0_16E4307DCC419505_1211;
class Class_1_46FCAD36F5CA36C7;
class Class_1_4BC03BAAC61C4531;
class Class_1_879FB201627808AE;
namespace RPG::Client::NavMap { class IMapDataSource; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class IReadOnlyCollection_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_010E32C1C883FE17_METHOD_1_283DA224BE06DA9F_OFFSET UNITYSDK_OFFSET(0x12E78AE0)
#define CLASS_1_010E32C1C883FE17_METHOD_1_4649371C2F4940AD_OFFSET UNITYSDK_OFFSET(0x12E79270)
#define CLASS_1_010E32C1C883FE17_METHOD_1_8EDA8C6CA37A1F3A_OFFSET UNITYSDK_OFFSET(0x12E77F30)
#define CLASS_1_010E32C1C883FE17_METHOD_1_A29454F4348BF530_OFFSET UNITYSDK_OFFSET(0x12E79610)
#define CLASS_1_010E32C1C883FE17_METHOD_1_A917AC671DF6CB2D_OFFSET UNITYSDK_OFFSET(0x12E796F0)
#define CLASS_1_010E32C1C883FE17_METHOD_1_B29205EE7F7B640C_OFFSET UNITYSDK_OFFSET(0x12E78390)
#define CLASS_1_010E32C1C883FE17_METHOD_1_B2C0ADBFEA309440_OFFSET UNITYSDK_OFFSET(0x12E78330)
#define CLASS_1_010E32C1C883FE17_METHOD_1_CD8EB704BDED69B6_OFFSET UNITYSDK_OFFSET(0x12E78650)
#define CLASS_1_010E32C1C883FE17_METHOD_1_E20BC96B50A592B5_OFFSET UNITYSDK_OFFSET(0x12E77EE0)
#define CLASS_1_010E32C1C883FE17_METHOD_1_E9B8A590D11E394E_OFFSET UNITYSDK_OFFSET(0x12E79790)
#define CLASS_1_010E32C1C883FE17_METHOD_1_FD509156BCE51F7E_OFFSET UNITYSDK_OFFSET(0x12E78270)
#define CLASS_1_010E32C1C883FE17__CTOR_OFFSET UNITYSDK_OFFSET(0x12E78100)

inline static constexpr unsigned int Class_1_010E32C1C883FE17_TypeDefinitionIndex = 74478;

class Class_1_010E32C1C883FE17 : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::GameCore::LevelNavNodeInfo>* AFOPLGLPMKK; // 0x10
	::Class_1_4BC03BAAC61C4531* DCOPELFHOLO; // 0x18
	::System::Collections::Generic::Dictionary_2<::System::ValueTuple_2<::System::UInt32, ::System::UInt32>, ::System::Collections::Generic::List_1<::RPG::GameCore::LevelNavNodeTransitInfo>*>* KADGKBFMELL; // 0x20
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::Class_1_879FB201627808AE*>* KIMKMPPNJEI; // 0x28
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>* EAPOGCIPOIO; // 0x30
	::System::Collections::Generic::List_1<::Class_1_46FCAD36F5CA36C7*>* CAEIHNOCJDC; // 0x38

	::System::Void _ctor(::Class_1_4BC03BAAC61C4531* a1, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::GameCore::LevelNavNodeInfo>* a2, ::System::Collections::Generic::Dictionary_2<::System::ValueTuple_2<::System::UInt32, ::System::UInt32>, ::System::Collections::Generic::List_1<::RPG::GameCore::LevelNavNodeTransitInfo>*>* a3)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_4BC03BAAC61C4531*, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::GameCore::LevelNavNodeInfo>*, ::System::Collections::Generic::Dictionary_2<::System::ValueTuple_2<::System::UInt32, ::System::UInt32>, ::System::Collections::Generic::List_1<::RPG::GameCore::LevelNavNodeTransitInfo>*>*))((::PBYTE)hIl2Cpp + CLASS_1_010E32C1C883FE17__CTOR_OFFSET))(this, a1, a2, a3);
	}

	::RPG::Client::NavMap::IMapDataSource* Method_1_E20BC96B50A592B5()
	{
		return ((::RPG::Client::NavMap::IMapDataSource*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_010E32C1C883FE17_METHOD_1_E20BC96B50A592B5_OFFSET))(this);
	}

	static ::Class_1_010E32C1C883FE17* Method_1_8EDA8C6CA37A1F3A(::Class_1_4BC03BAAC61C4531* a1, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::GameCore::LevelNavNodeInfo>* a2, ::System::Collections::Generic::Dictionary_2<::System::ValueTuple_2<::System::UInt32, ::System::UInt32>, ::System::Collections::Generic::List_1<::RPG::GameCore::LevelNavNodeTransitInfo>*>* a3)
	{
		return ((::Class_1_010E32C1C883FE17*(*)(::Class_1_4BC03BAAC61C4531*, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::GameCore::LevelNavNodeInfo>*, ::System::Collections::Generic::Dictionary_2<::System::ValueTuple_2<::System::UInt32, ::System::UInt32>, ::System::Collections::Generic::List_1<::RPG::GameCore::LevelNavNodeTransitInfo>*>*))((::PBYTE)hIl2Cpp + CLASS_1_010E32C1C883FE17_METHOD_1_8EDA8C6CA37A1F3A_OFFSET))(a1, a2, a3);
	}

	::System::UInt32 Method_1_FD509156BCE51F7E(::System::UInt32 a1)
	{
		return ((::System::UInt32(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_010E32C1C883FE17_METHOD_1_FD509156BCE51F7E_OFFSET))(this, a1);
	}

	::System::Void Method_1_B2C0ADBFEA309440()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_010E32C1C883FE17_METHOD_1_B2C0ADBFEA309440_OFFSET))(this);
	}

	::System::Void Method_1_B29205EE7F7B640C()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_010E32C1C883FE17_METHOD_1_B29205EE7F7B640C_OFFSET))(this);
	}

	::System::Void Method_1_CD8EB704BDED69B6()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_010E32C1C883FE17_METHOD_1_CD8EB704BDED69B6_OFFSET))(this);
	}

	::System::Void Method_1_4649371C2F4940AD(::System::UInt32 a1, ::System::UInt32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_010E32C1C883FE17_METHOD_1_4649371C2F4940AD_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_283DA224BE06DA9F()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_010E32C1C883FE17_METHOD_1_283DA224BE06DA9F_OFFSET))(this);
	}

	::System::Collections::Generic::IReadOnlyCollection_1<::Class_1_879FB201627808AE*>* Method_1_A29454F4348BF530()
	{
		return ((::System::Collections::Generic::IReadOnlyCollection_1<::Class_1_879FB201627808AE*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_010E32C1C883FE17_METHOD_1_A29454F4348BF530_OFFSET))(this);
	}

	::Class_1_879FB201627808AE* Method_1_A917AC671DF6CB2D(::System::UInt32 a1)
	{
		return ((::Class_1_879FB201627808AE*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_010E32C1C883FE17_METHOD_1_A917AC671DF6CB2D_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_E9B8A590D11E394E(::UnityEngine::Vector3 a1, ::Class_0_16E4307DCC419505_1211*& a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector3, ::Class_0_16E4307DCC419505_1211*&))((::PBYTE)hIl2Cpp + CLASS_1_010E32C1C883FE17_METHOD_1_E9B8A590D11E394E_OFFSET))(this, a1, a2);
	}
};

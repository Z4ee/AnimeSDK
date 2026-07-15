#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/LevelNavNodeInfo.h"
#include "unitysdk/RPG/GameCore/LevelNavNodeTransitInfo.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_2.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_0_16E4307DCC419505_1153;
class Class_1_4BC03BAAC61C4531;
class Class_1_5D9B913D6FFF7638;
class Class_1_879FB201627808AE;
namespace RPG::Client::NavMap { class IMapDataSource; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class IReadOnlyCollection_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_F77CABFB14F6C520_METHOD_1_283DA224BE06DA9F_OFFSET UNITYSDK_OFFSET(0x18F96B40)
#define CLASS_1_F77CABFB14F6C520_METHOD_1_4649371C2F4940AD_OFFSET UNITYSDK_OFFSET(0x18F972D0)
#define CLASS_1_F77CABFB14F6C520_METHOD_1_5AC34C94A24D8319_OFFSET UNITYSDK_OFFSET(0x18F95FD0)
#define CLASS_1_F77CABFB14F6C520_METHOD_1_A29454F4348BF530_OFFSET UNITYSDK_OFFSET(0x18F97690)
#define CLASS_1_F77CABFB14F6C520_METHOD_1_A917AC671DF6CB2D_OFFSET UNITYSDK_OFFSET(0x18F97770)
#define CLASS_1_F77CABFB14F6C520_METHOD_1_B29205EE7F7B640C_OFFSET UNITYSDK_OFFSET(0x18F963F0)
#define CLASS_1_F77CABFB14F6C520_METHOD_1_B2C0ADBFEA309440_OFFSET UNITYSDK_OFFSET(0x18F96390)
#define CLASS_1_F77CABFB14F6C520_METHOD_1_CD8EB704BDED69B6_OFFSET UNITYSDK_OFFSET(0x18F966B0)
#define CLASS_1_F77CABFB14F6C520_METHOD_1_E20BC96B50A592B5_OFFSET UNITYSDK_OFFSET(0x18F95F80)
#define CLASS_1_F77CABFB14F6C520_METHOD_1_E9B8A590D11E394E_OFFSET UNITYSDK_OFFSET(0x18F97810)
#define CLASS_1_F77CABFB14F6C520_METHOD_1_FD509156BCE51F7E_OFFSET UNITYSDK_OFFSET(0x18F962D0)
#define CLASS_1_F77CABFB14F6C520__CTOR_OFFSET UNITYSDK_OFFSET(0x18F96180)

inline static constexpr unsigned int Class_1_F77CABFB14F6C520_TypeDefinitionIndex = 71178;

class Class_1_F77CABFB14F6C520 : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>* Field_1_0; // 0x10
	::System::Collections::Generic::List_1<::Class_1_5D9B913D6FFF7638*>* Field_1_1; // 0x18
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::Class_1_879FB201627808AE*>* Field_1_2; // 0x20
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::GameCore::LevelNavNodeInfo>* Field_1_3; // 0x28
	::Class_1_4BC03BAAC61C4531* Field_1_4; // 0x30
	::System::Collections::Generic::Dictionary_2<::System::ValueTuple_2<::System::UInt32, ::System::UInt32>, ::System::Collections::Generic::List_1<::RPG::GameCore::LevelNavNodeTransitInfo>*>* Field_1_5; // 0x38

	::System::Void _ctor(::Class_1_4BC03BAAC61C4531* a1, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::GameCore::LevelNavNodeInfo>* a2, ::System::Collections::Generic::Dictionary_2<::System::ValueTuple_2<::System::UInt32, ::System::UInt32>, ::System::Collections::Generic::List_1<::RPG::GameCore::LevelNavNodeTransitInfo>*>* a3)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_4BC03BAAC61C4531*, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::GameCore::LevelNavNodeInfo>*, ::System::Collections::Generic::Dictionary_2<::System::ValueTuple_2<::System::UInt32, ::System::UInt32>, ::System::Collections::Generic::List_1<::RPG::GameCore::LevelNavNodeTransitInfo>*>*))((::PBYTE)hIl2Cpp + CLASS_1_F77CABFB14F6C520__CTOR_OFFSET))(this, a1, a2, a3);
	}

	::RPG::Client::NavMap::IMapDataSource* Method_1_E20BC96B50A592B5()
	{
		return ((::RPG::Client::NavMap::IMapDataSource*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F77CABFB14F6C520_METHOD_1_E20BC96B50A592B5_OFFSET))(this);
	}

	static ::Class_1_F77CABFB14F6C520* Method_1_5AC34C94A24D8319(::Class_1_4BC03BAAC61C4531* a1, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::GameCore::LevelNavNodeInfo>* a2, ::System::Collections::Generic::Dictionary_2<::System::ValueTuple_2<::System::UInt32, ::System::UInt32>, ::System::Collections::Generic::List_1<::RPG::GameCore::LevelNavNodeTransitInfo>*>* a3)
	{
		return ((::Class_1_F77CABFB14F6C520*(*)(::Class_1_4BC03BAAC61C4531*, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::GameCore::LevelNavNodeInfo>*, ::System::Collections::Generic::Dictionary_2<::System::ValueTuple_2<::System::UInt32, ::System::UInt32>, ::System::Collections::Generic::List_1<::RPG::GameCore::LevelNavNodeTransitInfo>*>*))((::PBYTE)hIl2Cpp + CLASS_1_F77CABFB14F6C520_METHOD_1_5AC34C94A24D8319_OFFSET))(a1, a2, a3);
	}

	::System::UInt32 Method_1_FD509156BCE51F7E(::System::UInt32 a1)
	{
		return ((::System::UInt32(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_F77CABFB14F6C520_METHOD_1_FD509156BCE51F7E_OFFSET))(this, a1);
	}

	::System::Void Method_1_B2C0ADBFEA309440()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F77CABFB14F6C520_METHOD_1_B2C0ADBFEA309440_OFFSET))(this);
	}

	::System::Void Method_1_B29205EE7F7B640C()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F77CABFB14F6C520_METHOD_1_B29205EE7F7B640C_OFFSET))(this);
	}

	::System::Void Method_1_CD8EB704BDED69B6()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F77CABFB14F6C520_METHOD_1_CD8EB704BDED69B6_OFFSET))(this);
	}

	::System::Void Method_1_4649371C2F4940AD(::System::UInt32 a1, ::System::UInt32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_F77CABFB14F6C520_METHOD_1_4649371C2F4940AD_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_283DA224BE06DA9F()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F77CABFB14F6C520_METHOD_1_283DA224BE06DA9F_OFFSET))(this);
	}

	::System::Collections::Generic::IReadOnlyCollection_1<::Class_1_879FB201627808AE*>* Method_1_A29454F4348BF530()
	{
		return ((::System::Collections::Generic::IReadOnlyCollection_1<::Class_1_879FB201627808AE*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F77CABFB14F6C520_METHOD_1_A29454F4348BF530_OFFSET))(this);
	}

	::Class_1_879FB201627808AE* Method_1_A917AC671DF6CB2D(::System::UInt32 a1)
	{
		return ((::Class_1_879FB201627808AE*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_F77CABFB14F6C520_METHOD_1_A917AC671DF6CB2D_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_E9B8A590D11E394E(::UnityEngine::Vector3 a1, ::Class_0_16E4307DCC419505_1153*& a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector3, ::Class_0_16E4307DCC419505_1153*&))((::PBYTE)hIl2Cpp + CLASS_1_F77CABFB14F6C520_METHOD_1_E9B8A590D11E394E_OFFSET))(this, a1, a2);
	}
};

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/MonoDanmuController_Struct_2_073B2444F83A44B4.h"
#include "unitysdk/RPG/GameCore/DanmuType.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_1840863A7E9666C9;
class Class_1_1842CDA6A764B151;
class Class_1_849EE5CF9026AE9F;
class Class_1_B30FA7BF7E9CB8E9;
namespace RPG::Client { class MonoDanmuController_Class_1_F965D59814B4853A; }
namespace RPG::Client { class MonoDanmuItem; }
namespace RPG::Client { class MonoDanmuSpawner; }
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::Collections::Generic { template <typename T> class Queue_1; }
namespace UnityEngine { class RectTransform; }

#define RPG_CLIENT_MONODANMUCONTROLLER_ADDSEQUENCE_OFFSET UNITYSDK_OFFSET(0x10CC5FF0)
#define RPG_CLIENT_MONODANMUCONTROLLER_CLEAR_OFFSET UNITYSDK_OFFSET(0x10CC60F0)
#define RPG_CLIENT_MONODANMUCONTROLLER_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x10CC5FA0)
#define RPG_CLIENT_MONODANMUCONTROLLER_METHOD_5_022B0D58A3077BF2_OFFSET UNITYSDK_OFFSET(0x10CC67C0)
#define RPG_CLIENT_MONODANMUCONTROLLER_METHOD_5_04DB6A076713051C_OFFSET UNITYSDK_OFFSET(0x10CC7FD0)
#define RPG_CLIENT_MONODANMUCONTROLLER_METHOD_5_07280B24DFAC0CA9_OFFSET UNITYSDK_OFFSET(0x10CC5910)
#define RPG_CLIENT_MONODANMUCONTROLLER_METHOD_5_12A5B534813F3445_OFFSET UNITYSDK_OFFSET(0x10CC73B0)
#define RPG_CLIENT_MONODANMUCONTROLLER_METHOD_5_1808E1CF7A125519_OFFSET UNITYSDK_OFFSET(0x10CC7420)
#define RPG_CLIENT_MONODANMUCONTROLLER_METHOD_5_1D4B81334E4490D3_OFFSET UNITYSDK_OFFSET(0x10CC6B50)
#define RPG_CLIENT_MONODANMUCONTROLLER_METHOD_5_2E4E9C95DDAA0B10_OFFSET UNITYSDK_OFFSET(0x10CC7490)
#define RPG_CLIENT_MONODANMUCONTROLLER_METHOD_5_3415D88EE6078A04_OFFSET UNITYSDK_OFFSET(0x10CC71D0)
#define RPG_CLIENT_MONODANMUCONTROLLER_METHOD_5_348674E9BAD074BA_OFFSET UNITYSDK_OFFSET(0x10CC7040)
#define RPG_CLIENT_MONODANMUCONTROLLER_METHOD_5_414C8F92528E4746_OFFSET UNITYSDK_OFFSET(0x10CC5CE0)
#define RPG_CLIENT_MONODANMUCONTROLLER_METHOD_5_41A074549EF25F63_OFFSET UNITYSDK_OFFSET(0x10CC7570)
#define RPG_CLIENT_MONODANMUCONTROLLER_METHOD_5_44CCBF5B25F21E3A_OFFSET UNITYSDK_OFFSET(0x10CC7D70)
#define RPG_CLIENT_MONODANMUCONTROLLER_METHOD_5_805C56F44231AEF9_OFFSET UNITYSDK_OFFSET(0x10CC6A30)
#define RPG_CLIENT_MONODANMUCONTROLLER_METHOD_5_82E992240300FB30_OFFSET UNITYSDK_OFFSET(0x10CC5F30)
#define RPG_CLIENT_MONODANMUCONTROLLER_METHOD_5_871F6AAF8C0E80CC_OFFSET UNITYSDK_OFFSET(0x10CC7AD0)
#define RPG_CLIENT_MONODANMUCONTROLLER_METHOD_5_B6C6410B1FEA0BB3_OFFSET UNITYSDK_OFFSET(0x10CC6A80)
#define RPG_CLIENT_MONODANMUCONTROLLER_METHOD_5_CD762BD492FAC131_OFFSET UNITYSDK_OFFSET(0x10CC6670)
#define RPG_CLIENT_MONODANMUCONTROLLER_METHOD_5_D549E229DFA00CC6_OFFSET UNITYSDK_OFFSET(0x10CC7670)
#define RPG_CLIENT_MONODANMUCONTROLLER_METHOD_5_D9899AB38F7BA87E_OFFSET UNITYSDK_OFFSET(0x10CC7130)
#define RPG_CLIENT_MONODANMUCONTROLLER_METHOD_5_DD784213055292FB_OFFSET UNITYSDK_OFFSET(0x10CC6890)
#define RPG_CLIENT_MONODANMUCONTROLLER_METHOD_5_F82AD9CF5EEF353D_OFFSET UNITYSDK_OFFSET(0x10CC6DF0)
#define RPG_CLIENT_MONODANMUCONTROLLER_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x10CC5780)
#define RPG_CLIENT_MONODANMUCONTROLLER_ONENABLE_OFFSET UNITYSDK_OFFSET(0x10CC5670)
#define RPG_CLIENT_MONODANMUCONTROLLER_UPDATE_OFFSET UNITYSDK_OFFSET(0x10CC5890)
#define RPG_CLIENT_MONODANMUCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x10CC8040)

namespace RPG::Client
{
	inline static constexpr unsigned int MonoDanmuController_TypeDefinitionIndex = 65871;

	class MonoDanmuController : public ::UnityEngine::MonoBehaviour
	{
	public:
		::RPG::Client::MonoDanmuSpawner* _Spawner; // 0x18
		::System::Single _TextLineSpacing; // 0x20
		::System::Single _ImageLineSpacing; // 0x24
		::System::Single _GiftLineSpacing; // 0x28
		::System::Collections::Generic::Dictionary_2<::RPG::GameCore::DanmuType, ::RPG::Client::MonoDanmuController_Class_1_F965D59814B4853A*>* Field_5_4; // 0x30
		::System::Collections::Generic::Dictionary_2<::RPG::GameCore::DanmuType, ::System::Collections::Generic::Queue_1<::RPG::Client::MonoDanmuController_Struct_2_073B2444F83A44B4>*>* Field_5_5; // 0x38
		::Il2CppArray<::UnityEngine::Vector3>* Field_5_6; // 0x40
		::System::Collections::Generic::List_1<::RPG::Client::MonoDanmuItem*>* Field_5_7; // 0x48
		::Class_1_B30FA7BF7E9CB8E9* Field_5_8; // 0x50
		::Class_1_1840863A7E9666C9* Field_5_9; // 0x58
		::System::Boolean Field_5_10; // 0x60

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONODANMUCONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Void OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONODANMUCONTROLLER_ONENABLE_OFFSET))(this);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONODANMUCONTROLLER_ONDESTROY_OFFSET))(this);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONODANMUCONTROLLER_UPDATE_OFFSET))(this);
		}

		::System::Void Initialize(::Class_1_B30FA7BF7E9CB8E9* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_B30FA7BF7E9CB8E9*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONODANMUCONTROLLER_INITIALIZE_OFFSET))(this, a1);
		}

		::System::Void AddSequence(::Class_1_1842CDA6A764B151* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_1842CDA6A764B151*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONODANMUCONTROLLER_ADDSEQUENCE_OFFSET))(this, a1);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONODANMUCONTROLLER_CLEAR_OFFSET))(this);
		}

		::System::Void Method_5_CD762BD492FAC131(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONODANMUCONTROLLER_METHOD_5_CD762BD492FAC131_OFFSET))(this, a1);
		}

		::System::Void Method_5_022B0D58A3077BF2(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONODANMUCONTROLLER_METHOD_5_022B0D58A3077BF2_OFFSET))(this, a1);
		}

		::System::Void Method_5_82E992240300FB30()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONODANMUCONTROLLER_METHOD_5_82E992240300FB30_OFFSET))(this);
		}

		::System::Void Method_5_DD784213055292FB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONODANMUCONTROLLER_METHOD_5_DD784213055292FB_OFFSET))(this);
		}

		::System::Void Method_5_1D4B81334E4490D3(::Class_1_849EE5CF9026AE9F* a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_849EE5CF9026AE9F*, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONODANMUCONTROLLER_METHOD_5_1D4B81334E4490D3_OFFSET))(this, a1, a2);
		}

		::System::Void Method_5_348674E9BAD074BA(::Class_1_849EE5CF9026AE9F* a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_849EE5CF9026AE9F*, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONODANMUCONTROLLER_METHOD_5_348674E9BAD074BA_OFFSET))(this, a1, a2);
		}

		::System::Boolean Method_5_D9899AB38F7BA87E(::RPG::GameCore::DanmuType a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::DanmuType))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONODANMUCONTROLLER_METHOD_5_D9899AB38F7BA87E_OFFSET))(this, a1);
		}

		::System::Boolean Method_5_3415D88EE6078A04()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONODANMUCONTROLLER_METHOD_5_3415D88EE6078A04_OFFSET))(this);
		}

		::System::Boolean Method_5_12A5B534813F3445(::RPG::GameCore::DanmuType a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::DanmuType))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONODANMUCONTROLLER_METHOD_5_12A5B534813F3445_OFFSET))(this, a1);
		}

		::System::Boolean Method_5_1808E1CF7A125519()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONODANMUCONTROLLER_METHOD_5_1808E1CF7A125519_OFFSET))(this);
		}

		::System::Void Method_5_2E4E9C95DDAA0B10(::Class_1_849EE5CF9026AE9F* a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_849EE5CF9026AE9F*, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONODANMUCONTROLLER_METHOD_5_2E4E9C95DDAA0B10_OFFSET))(this, a1, a2);
		}

		::System::Void Method_5_41A074549EF25F63()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONODANMUCONTROLLER_METHOD_5_41A074549EF25F63_OFFSET))(this);
		}

		::System::Void Method_5_805C56F44231AEF9()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONODANMUCONTROLLER_METHOD_5_805C56F44231AEF9_OFFSET))(this);
		}

		::System::Void Method_5_F82AD9CF5EEF353D(::RPG::Client::MonoDanmuItem* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MonoDanmuItem*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONODANMUCONTROLLER_METHOD_5_F82AD9CF5EEF353D_OFFSET))(this, a1);
		}

		::System::Void Method_5_414C8F92528E4746()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONODANMUCONTROLLER_METHOD_5_414C8F92528E4746_OFFSET))(this);
		}

		::System::Void Method_5_07280B24DFAC0CA9()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONODANMUCONTROLLER_METHOD_5_07280B24DFAC0CA9_OFFSET))(this);
		}

		::System::Boolean Method_5_B6C6410B1FEA0BB3(::RPG::GameCore::DanmuType a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::DanmuType))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONODANMUCONTROLLER_METHOD_5_B6C6410B1FEA0BB3_OFFSET))(this, a1);
		}

		::System::Single Method_5_D549E229DFA00CC6(::RPG::Client::MonoDanmuItem* a1)
		{
			return ((::System::Single(*)(::PVOID, ::RPG::Client::MonoDanmuItem*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONODANMUCONTROLLER_METHOD_5_D549E229DFA00CC6_OFFSET))(this, a1);
		}

		::UnityEngine::RectTransform* Method_5_44CCBF5B25F21E3A(::RPG::GameCore::DanmuType a1)
		{
			return ((::UnityEngine::RectTransform*(*)(::PVOID, ::RPG::GameCore::DanmuType))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONODANMUCONTROLLER_METHOD_5_44CCBF5B25F21E3A_OFFSET))(this, a1);
		}

		::System::Single Method_5_04DB6A076713051C(::RPG::GameCore::DanmuType a1)
		{
			return ((::System::Single(*)(::PVOID, ::RPG::GameCore::DanmuType))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONODANMUCONTROLLER_METHOD_5_04DB6A076713051C_OFFSET))(this, a1);
		}

		::System::Void Method_5_871F6AAF8C0E80CC(::RPG::GameCore::DanmuType a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::DanmuType, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONODANMUCONTROLLER_METHOD_5_871F6AAF8C0E80CC_OFFSET))(this, a1, a2);
		}
	};
}

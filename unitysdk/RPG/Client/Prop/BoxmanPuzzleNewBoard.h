#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/Prop/BoxmanDir.h"
#include "unitysdk/RPG/Client/Prop/BoxmanPuzzleBoard.h"

class Class_1_43BD383C98B4C0C5_196;
namespace RPG::Client::Prop { class BoxmanPuzzleItem; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class OptionTriggerInfo; }
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_CLIENT_PROP_BOXMANPUZZLENEWBOARD_DESTROYINTERACTTARGETENTITY_OFFSET UNITYSDK_OFFSET(0xC4E0FC0)
#define RPG_CLIENT_PROP_BOXMANPUZZLENEWBOARD_DISPOSE_OFFSET UNITYSDK_OFFSET(0xC4E4500)
#define RPG_CLIENT_PROP_BOXMANPUZZLENEWBOARD_INITITEMS_OFFSET UNITYSDK_OFFSET(0xC4DEC50)
#define RPG_CLIENT_PROP_BOXMANPUZZLENEWBOARD_INITOPTIONS_OFFSET UNITYSDK_OFFSET(0xC4E0D40)
#define RPG_CLIENT_PROP_BOXMANPUZZLENEWBOARD_ISPUZZLEFINISH_OFFSET UNITYSDK_OFFSET(0xC4DEC00)
#define RPG_CLIENT_PROP_BOXMANPUZZLENEWBOARD_METHOD_8_01509228E3A9577B_OFFSET UNITYSDK_OFFSET(0xC4E2E00)
#define RPG_CLIENT_PROP_BOXMANPUZZLENEWBOARD_METHOD_8_0946D2F262750751_OFFSET UNITYSDK_OFFSET(0xC4E2D80)
#define RPG_CLIENT_PROP_BOXMANPUZZLENEWBOARD_METHOD_8_1D6B195952ACC491_OFFSET UNITYSDK_OFFSET(0xC4E34A0)
#define RPG_CLIENT_PROP_BOXMANPUZZLENEWBOARD_METHOD_8_2372762F4122DEB8_OFFSET UNITYSDK_OFFSET(0xC4E0F40)
#define RPG_CLIENT_PROP_BOXMANPUZZLENEWBOARD_METHOD_8_2A73302F5D8B0BA6_OFFSET UNITYSDK_OFFSET(0xC4E2AD0)
#define RPG_CLIENT_PROP_BOXMANPUZZLENEWBOARD_METHOD_8_82DA7C9763B3C65E_OFFSET UNITYSDK_OFFSET(0xC4E3860)
#define RPG_CLIENT_PROP_BOXMANPUZZLENEWBOARD_METHOD_8_86EBD5D37B0318E4_OFFSET UNITYSDK_OFFSET(0xC4E1180)
#define RPG_CLIENT_PROP_BOXMANPUZZLENEWBOARD_METHOD_8_86F29E33B77959FF_OFFSET UNITYSDK_OFFSET(0xC4E3330)
#define RPG_CLIENT_PROP_BOXMANPUZZLENEWBOARD_METHOD_8_9681042564541CD6_1_OFFSET UNITYSDK_OFFSET(0xC4E2CF0)
#define RPG_CLIENT_PROP_BOXMANPUZZLENEWBOARD_METHOD_8_9681042564541CD6_OFFSET UNITYSDK_OFFSET(0xC4E2C50)
#define RPG_CLIENT_PROP_BOXMANPUZZLENEWBOARD_METHOD_8_CD9F3CEFB366C27A_OFFSET UNITYSDK_OFFSET(0xC4E35C0)
#define RPG_CLIENT_PROP_BOXMANPUZZLENEWBOARD_METHOD_8_F2C8A9D880BBBF6E_OFFSET UNITYSDK_OFFSET(0xC4E33F0)
#define RPG_CLIENT_PROP_BOXMANPUZZLENEWBOARD_ONINTERACTTARGETFINISH_OFFSET UNITYSDK_OFFSET(0xC4E39F0)
#define RPG_CLIENT_PROP_BOXMANPUZZLENEWBOARD_ONITEMMOVEFINISH_OFFSET UNITYSDK_OFFSET(0xC4E39A0)
#define RPG_CLIENT_PROP_BOXMANPUZZLENEWBOARD_RECOVERFROMPUZZLESTATE_OFFSET UNITYSDK_OFFSET(0xC4E06D0)
#define RPG_CLIENT_PROP_BOXMANPUZZLENEWBOARD_RESETPUZZLE_OFFSET UNITYSDK_OFFSET(0xC4E3AE0)
#define RPG_CLIENT_PROP_BOXMANPUZZLENEWBOARD_UPDATE_OFFSET UNITYSDK_OFFSET(0xC4E13A0)
#define RPG_CLIENT_PROP_BOXMANPUZZLENEWBOARD__CCTOR_OFFSET UNITYSDK_OFFSET(0xC4E48C0)
#define RPG_CLIENT_PROP_BOXMANPUZZLENEWBOARD__CTOR_OFFSET UNITYSDK_OFFSET(0xC4E47B0)
#define RPG_CLIENT_PROP_BOXMANPUZZLENEWBOARD___IFIXBASEPROXY_DISPOSE_OFFSET UNITYSDK_OFFSET(0xC4E49F0)
#define RPG_CLIENT_PROP_BOXMANPUZZLENEWBOARD___IFIXBASEPROXY_INITITEMS_OFFSET UNITYSDK_OFFSET(0xC4E4930)
#define RPG_CLIENT_PROP_BOXMANPUZZLENEWBOARD___IFIXBASEPROXY_INITOPTIONS_OFFSET UNITYSDK_OFFSET(0xC4E4950)
#define RPG_CLIENT_PROP_BOXMANPUZZLENEWBOARD___IFIXBASEPROXY_ISPUZZLEFINISH_OFFSET UNITYSDK_OFFSET(0xC4E48D0)
#define RPG_CLIENT_PROP_BOXMANPUZZLENEWBOARD___IFIXBASEPROXY_ONITEMMOVEFINISH_OFFSET UNITYSDK_OFFSET(0xC4E4970)
#define RPG_CLIENT_PROP_BOXMANPUZZLENEWBOARD___IFIXBASEPROXY_RECOVERFROMPUZZLESTATE_OFFSET UNITYSDK_OFFSET(0xC4E4940)
#define RPG_CLIENT_PROP_BOXMANPUZZLENEWBOARD___IFIXBASEPROXY_RESETPUZZLE_OFFSET UNITYSDK_OFFSET(0xC4E49E0)
#define RPG_CLIENT_PROP_BOXMANPUZZLENEWBOARD___IFIXBASEPROXY_UPDATE_OFFSET UNITYSDK_OFFSET(0xC4E4960)

namespace RPG::Client::Prop
{
	inline static constexpr unsigned int BoxmanPuzzleNewBoard_TypeDefinitionIndex = 73371;

	class BoxmanPuzzleNewBoard : public ::RPG::Client::Prop::BoxmanPuzzleBoard
	{
	public:
		static ::System::Single* StaticGet_Field_8_0()
		{
			return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(BoxmanPuzzleNewBoard_TypeDefinitionIndex)->GetStaticField(0x53E0);
		}
		// static const ::System::String* Field_8_1; // 0x0
		// static const ::System::String* Field_8_2; // 0x0
		// static const ::System::String* Field_8_3; // 0x0
		// static const ::System::String* Field_8_4; // 0x0
		// static const ::System::String* Field_8_5; // 0x0
		// static const ::System::String* Field_8_6; // 0x0
		// static const ::System::String* Field_8_7; // 0x0
		// static const ::System::String* Field_8_8; // 0x0
		// static const ::System::String* Field_8_9; // 0x0
		::RPG::GameCore::OptionTriggerInfo* Field_8_10; // 0x130
		::RPG::GameCore::OptionTriggerInfo* Field_8_11; // 0x138
		::RPG::GameCore::OptionTriggerInfo* Field_8_12; // 0x140
		::RPG::GameCore::OptionTriggerInfo* Field_8_13; // 0x148
		::System::Collections::Generic::Dictionary_2<::RPG::Client::Prop::BoxmanPuzzleItem*, ::RPG::GameCore::GameEntity*>* Field_8_14; // 0x150

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_BOXMANPUZZLENEWBOARD__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_BOXMANPUZZLENEWBOARD__CCTOR_OFFSET))();
		}

		::System::Boolean IsPuzzleFinish()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_BOXMANPUZZLENEWBOARD_ISPUZZLEFINISH_OFFSET))(this);
		}

		::System::Void InitItems()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_BOXMANPUZZLENEWBOARD_INITITEMS_OFFSET))(this);
		}

		::System::Void RecoverFromPuzzleState(::Class_1_43BD383C98B4C0C5_196* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_43BD383C98B4C0C5_196*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_BOXMANPUZZLENEWBOARD_RECOVERFROMPUZZLESTATE_OFFSET))(this, a1);
		}

		::System::Void InitOptions()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_BOXMANPUZZLENEWBOARD_INITOPTIONS_OFFSET))(this);
		}

		::System::UInt32 Method_8_2372762F4122DEB8()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_BOXMANPUZZLENEWBOARD_METHOD_8_2372762F4122DEB8_OFFSET))(this);
		}

		::System::Void DestroyInteractTargetEntity(::RPG::Client::Prop::BoxmanPuzzleItem* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::Prop::BoxmanPuzzleItem*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_BOXMANPUZZLENEWBOARD_DESTROYINTERACTTARGETENTITY_OFFSET))(this, a1);
		}

		::RPG::GameCore::OptionTriggerInfo* Method_8_86EBD5D37B0318E4(::RPG::Client::Prop::BoxmanPuzzleItem* a1, ::RPG::Client::Prop::BoxmanDir a2)
		{
			return ((::RPG::GameCore::OptionTriggerInfo*(*)(::PVOID, ::RPG::Client::Prop::BoxmanPuzzleItem*, ::RPG::Client::Prop::BoxmanDir))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_BOXMANPUZZLENEWBOARD_METHOD_8_86EBD5D37B0318E4_OFFSET))(this, a1, a2);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_BOXMANPUZZLENEWBOARD_UPDATE_OFFSET))(this);
		}

		::System::Void Method_8_01509228E3A9577B(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_BOXMANPUZZLENEWBOARD_METHOD_8_01509228E3A9577B_OFFSET))(this, a1);
		}

		::System::Void Method_8_9681042564541CD6()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_BOXMANPUZZLENEWBOARD_METHOD_8_9681042564541CD6_OFFSET))(this);
		}

		::System::Void Method_8_9681042564541CD6_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_BOXMANPUZZLENEWBOARD_METHOD_8_9681042564541CD6_1_OFFSET))(this);
		}

		::System::Boolean Method_8_86F29E33B77959FF(::RPG::Client::Prop::BoxmanPuzzleItem* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::Prop::BoxmanPuzzleItem*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_BOXMANPUZZLENEWBOARD_METHOD_8_86F29E33B77959FF_OFFSET))(this, a1);
		}

		::System::Boolean Method_8_F2C8A9D880BBBF6E()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_BOXMANPUZZLENEWBOARD_METHOD_8_F2C8A9D880BBBF6E_OFFSET))(this);
		}

		::System::Int32 Method_8_1D6B195952ACC491()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_BOXMANPUZZLENEWBOARD_METHOD_8_1D6B195952ACC491_OFFSET))(this);
		}

		::System::Boolean Method_8_2A73302F5D8B0BA6()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_BOXMANPUZZLENEWBOARD_METHOD_8_2A73302F5D8B0BA6_OFFSET))(this);
		}

		::System::Void Method_8_CD9F3CEFB366C27A()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_BOXMANPUZZLENEWBOARD_METHOD_8_CD9F3CEFB366C27A_OFFSET))(this);
		}

		::System::Void Method_8_82DA7C9763B3C65E(::RPG::Client::Prop::BoxmanPuzzleItem* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::Prop::BoxmanPuzzleItem*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_BOXMANPUZZLENEWBOARD_METHOD_8_82DA7C9763B3C65E_OFFSET))(this, a1);
		}

		::System::Void Method_8_0946D2F262750751(::RPG::Client::Prop::BoxmanPuzzleItem* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::Prop::BoxmanPuzzleItem*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_BOXMANPUZZLENEWBOARD_METHOD_8_0946D2F262750751_OFFSET))(this, a1);
		}

		::System::Void OnItemMoveFinish(::RPG::Client::Prop::BoxmanPuzzleItem* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::Prop::BoxmanPuzzleItem*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_BOXMANPUZZLENEWBOARD_ONITEMMOVEFINISH_OFFSET))(this, a1);
		}

		::System::Void OnInteractTargetFinish(::RPG::Client::Prop::BoxmanPuzzleItem* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::Prop::BoxmanPuzzleItem*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_BOXMANPUZZLENEWBOARD_ONINTERACTTARGETFINISH_OFFSET))(this, a1);
		}

		::System::Void ResetPuzzle()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_BOXMANPUZZLENEWBOARD_RESETPUZZLE_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_BOXMANPUZZLENEWBOARD_DISPOSE_OFFSET))(this);
		}

		::System::Boolean __iFixBaseProxy_IsPuzzleFinish()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_BOXMANPUZZLENEWBOARD___IFIXBASEPROXY_ISPUZZLEFINISH_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy_InitItems()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_BOXMANPUZZLENEWBOARD___IFIXBASEPROXY_INITITEMS_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy_RecoverFromPuzzleState(::Class_1_43BD383C98B4C0C5_196* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_43BD383C98B4C0C5_196*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_BOXMANPUZZLENEWBOARD___IFIXBASEPROXY_RECOVERFROMPUZZLESTATE_OFFSET))(this, a1);
		}

		::System::Void __iFixBaseProxy_InitOptions()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_BOXMANPUZZLENEWBOARD___IFIXBASEPROXY_INITOPTIONS_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy_Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_BOXMANPUZZLENEWBOARD___IFIXBASEPROXY_UPDATE_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy_OnItemMoveFinish(::RPG::Client::Prop::BoxmanPuzzleItem* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::Prop::BoxmanPuzzleItem*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_BOXMANPUZZLENEWBOARD___IFIXBASEPROXY_ONITEMMOVEFINISH_OFFSET))(this, a1);
		}

		::System::Void __iFixBaseProxy_ResetPuzzle()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_BOXMANPUZZLENEWBOARD___IFIXBASEPROXY_RESETPUZZLE_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy_Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_BOXMANPUZZLENEWBOARD___IFIXBASEPROXY_DISPOSE_OFFSET))(this);
		}
	};
}

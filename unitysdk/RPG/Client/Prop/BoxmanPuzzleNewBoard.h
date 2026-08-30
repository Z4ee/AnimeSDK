#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/Prop/BoxmanDir.h"
#include "unitysdk/RPG/Client/Prop/BoxmanPuzzleBoard.h"

class Class_1_43BD383C98B4C0C5_218;
namespace RPG::Client::Prop { class BoxmanPuzzleItem; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class OptionTriggerInfo; }
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_CLIENT_PROP_BOXMANPUZZLENEWBOARD_DESTROYINTERACTTARGETENTITY_OFFSET UNITYSDK_OFFSET(0x189BD6D0)
#define RPG_CLIENT_PROP_BOXMANPUZZLENEWBOARD_DISPOSE_OFFSET UNITYSDK_OFFSET(0x189C0600)
#define RPG_CLIENT_PROP_BOXMANPUZZLENEWBOARD_INITITEMS_OFFSET UNITYSDK_OFFSET(0x189BBC20)
#define RPG_CLIENT_PROP_BOXMANPUZZLENEWBOARD_INITOPTIONS_OFFSET UNITYSDK_OFFSET(0x189BD450)
#define RPG_CLIENT_PROP_BOXMANPUZZLENEWBOARD_ISPUZZLEFINISH_OFFSET UNITYSDK_OFFSET(0x189BBBD0)
#define RPG_CLIENT_PROP_BOXMANPUZZLENEWBOARD_METHOD_8_01509228E3A9577B_OFFSET UNITYSDK_OFFSET(0x189BEEB0)
#define RPG_CLIENT_PROP_BOXMANPUZZLENEWBOARD_METHOD_8_0946D2F262750751_OFFSET UNITYSDK_OFFSET(0x189BEE30)
#define RPG_CLIENT_PROP_BOXMANPUZZLENEWBOARD_METHOD_8_1D6B195952ACC491_OFFSET UNITYSDK_OFFSET(0x189BF540)
#define RPG_CLIENT_PROP_BOXMANPUZZLENEWBOARD_METHOD_8_2372762F4122DEB8_OFFSET UNITYSDK_OFFSET(0x189BD650)
#define RPG_CLIENT_PROP_BOXMANPUZZLENEWBOARD_METHOD_8_2A73302F5D8B0BA6_OFFSET UNITYSDK_OFFSET(0x189BEB80)
#define RPG_CLIENT_PROP_BOXMANPUZZLENEWBOARD_METHOD_8_82DA7C9763B3C65E_OFFSET UNITYSDK_OFFSET(0x189BF900)
#define RPG_CLIENT_PROP_BOXMANPUZZLENEWBOARD_METHOD_8_86EBD5D37B0318E4_OFFSET UNITYSDK_OFFSET(0x189BD890)
#define RPG_CLIENT_PROP_BOXMANPUZZLENEWBOARD_METHOD_8_86F29E33B77959FF_OFFSET UNITYSDK_OFFSET(0x189BF3D0)
#define RPG_CLIENT_PROP_BOXMANPUZZLENEWBOARD_METHOD_8_9681042564541CD6_1_OFFSET UNITYSDK_OFFSET(0x189BEDA0)
#define RPG_CLIENT_PROP_BOXMANPUZZLENEWBOARD_METHOD_8_9681042564541CD6_OFFSET UNITYSDK_OFFSET(0x189BED00)
#define RPG_CLIENT_PROP_BOXMANPUZZLENEWBOARD_METHOD_8_CD9F3CEFB366C27A_OFFSET UNITYSDK_OFFSET(0x189BF660)
#define RPG_CLIENT_PROP_BOXMANPUZZLENEWBOARD_METHOD_8_F2C8A9D880BBBF6E_OFFSET UNITYSDK_OFFSET(0x189BF490)
#define RPG_CLIENT_PROP_BOXMANPUZZLENEWBOARD_ONINTERACTTARGETFINISH_OFFSET UNITYSDK_OFFSET(0x189BFA90)
#define RPG_CLIENT_PROP_BOXMANPUZZLENEWBOARD_ONITEMMOVEFINISH_OFFSET UNITYSDK_OFFSET(0x189BFA40)
#define RPG_CLIENT_PROP_BOXMANPUZZLENEWBOARD_RECOVERFROMPUZZLESTATE_OFFSET UNITYSDK_OFFSET(0x189BCDE0)
#define RPG_CLIENT_PROP_BOXMANPUZZLENEWBOARD_RESETPUZZLE_OFFSET UNITYSDK_OFFSET(0x189BFB80)
#define RPG_CLIENT_PROP_BOXMANPUZZLENEWBOARD_UPDATE_OFFSET UNITYSDK_OFFSET(0x189BDAB0)
#define RPG_CLIENT_PROP_BOXMANPUZZLENEWBOARD__CCTOR_OFFSET UNITYSDK_OFFSET(0x189C09C0)
#define RPG_CLIENT_PROP_BOXMANPUZZLENEWBOARD__CTOR_OFFSET UNITYSDK_OFFSET(0x189C08B0)

namespace RPG::Client::Prop
{
	inline static constexpr unsigned int BoxmanPuzzleNewBoard_TypeDefinitionIndex = 78381;

	class BoxmanPuzzleNewBoard : public ::RPG::Client::Prop::BoxmanPuzzleBoard
	{
	public:
		static ::System::Single* StaticGet_FIEKDOEEMCP()
		{
			return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(BoxmanPuzzleNewBoard_TypeDefinitionIndex)->GetStaticField(0x13B90);
		}
		// static const ::System::String* FDMBKAAFMPE; // 0x0
		// static const ::System::String* GICCJAELDIF; // 0x0
		// static const ::System::String* IDGNMCLLEBD; // 0x0
		// static const ::System::String* DLNNPLNNHFH; // 0x0
		// static const ::System::String* IMBJONJMDDN; // 0x0
		// static const ::System::String* OKPKKCFBGKL; // 0x0
		// static const ::System::String* NGPADFEIBCA; // 0x0
		// static const ::System::String* CBEMLDBFOGP; // 0x0
		// static const ::System::String* CJDIFCBFIAB; // 0x0
		::RPG::GameCore::OptionTriggerInfo* IPIFNLGBCMM; // 0x130
		::RPG::GameCore::OptionTriggerInfo* NKEDNHLCLHA; // 0x138
		::RPG::GameCore::OptionTriggerInfo* IMPANMICGEB; // 0x140
		::RPG::GameCore::OptionTriggerInfo* OAKLODDAOLC; // 0x148
		::System::Collections::Generic::Dictionary_2<::RPG::Client::Prop::BoxmanPuzzleItem*, ::RPG::GameCore::GameEntity*>* LLIKCNBDKCB; // 0x150

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

		::System::Void RecoverFromPuzzleState(::Class_1_43BD383C98B4C0C5_218* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_43BD383C98B4C0C5_218*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_BOXMANPUZZLENEWBOARD_RECOVERFROMPUZZLESTATE_OFFSET))(this, a1);
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
	};
}

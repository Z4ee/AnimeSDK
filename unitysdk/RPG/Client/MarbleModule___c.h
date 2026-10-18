#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class MarbleBattleSealData; }
namespace RPG::Client::ActivityMarble { class IMarbleData; }
namespace RPG::Client::ActivityMarble { class MarbleSealData; }
namespace System { class Action; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define RPG_CLIENT_MARBLEMODULE___C__CCTOR_OFFSET UNITYSDK_OFFSET(0xD57C540)
#define RPG_CLIENT_MARBLEMODULE___C__CTOR_OFFSET UNITYSDK_OFFSET(0xD57C580)
#define RPG_CLIENT_MARBLEMODULE___C__GETDISPLAYMARBLESEALIDLIST_B__85_0_OFFSET UNITYSDK_OFFSET(0xD57C5A0)
#define RPG_CLIENT_MARBLEMODULE___C__GOTOACTIVITYMAINPAGE_B__103_1_OFFSET UNITYSDK_OFFSET(0xD57C830)
#define RPG_CLIENT_MARBLEMODULE___C__GOTOACTIVITYMAINPAGE_B__103_2_OFFSET UNITYSDK_OFFSET(0xD57C970)
#define RPG_CLIENT_MARBLEMODULE___C__GOTOACTIVITYMULTIPLAYERFREEMATCHPAGE_B__105_3_OFFSET UNITYSDK_OFFSET(0xD57CC90)
#define RPG_CLIENT_MARBLEMODULE___C__GOTOACTIVITYMULTIPLAYERPAGE_B__104_1_OFFSET UNITYSDK_OFFSET(0xD57CA60)
#define RPG_CLIENT_MARBLEMODULE___C__GOTOACTIVITYMULTIPLAYERPAGE_B__104_2_OFFSET UNITYSDK_OFFSET(0xD57CBA0)
#define RPG_CLIENT_MARBLEMODULE___C__STARTMARBLEPVEGAME_B__92_0_OFFSET UNITYSDK_OFFSET(0xD57C5B0)
#define RPG_CLIENT_MARBLEMODULE___C__STARTMARBLEPVEGAME_B__92_1_OFFSET UNITYSDK_OFFSET(0xD57C6C0)
#define RPG_CLIENT_MARBLEMODULE___C__STARTMARBLEPVEGAME_B__93_0_OFFSET UNITYSDK_OFFSET(0xD57C7D0)
#define RPG_CLIENT_MARBLEMODULE___C__STARTMARBLEPVEGAME_B__93_1_OFFSET UNITYSDK_OFFSET(0xD57C7E0)
#define RPG_CLIENT_MARBLEMODULE___C__STARTMARBLEPVEGAME_B__95_0_OFFSET UNITYSDK_OFFSET(0xD57C810)
#define RPG_CLIENT_MARBLEMODULE___C__STARTMARBLEPVEGAME_B__95_1_OFFSET UNITYSDK_OFFSET(0xD57C820)
#define RPG_CLIENT_MARBLEMODULE___C__STARTMARBLEPVPGAME_B__94_0_OFFSET UNITYSDK_OFFSET(0xD57C7F0)
#define RPG_CLIENT_MARBLEMODULE___C__STARTMARBLEPVPGAME_B__94_1_OFFSET UNITYSDK_OFFSET(0xD57C800)
#define RPG_CLIENT_MARBLEMODULE___C___ENTITYIDS2BATTLESEALS_B__13_0_OFFSET UNITYSDK_OFFSET(0xD57C590)

namespace RPG::Client
{
	inline static constexpr unsigned int MarbleModule___c_TypeDefinitionIndex = 65810;

	class MarbleModule___c : public ::System::Object
	{
	public:
		static ::System::Func_2<::RPG::Client::ActivityMarble::MarbleSealData*, ::RPG::Client::ActivityMarble::IMarbleData*>** StaticGet___9__85_0()
		{
			return (::System::Func_2<::RPG::Client::ActivityMarble::MarbleSealData*, ::RPG::Client::ActivityMarble::IMarbleData*>**)Il2CppClass::FromTypeDefinitionIndex(MarbleModule___c_TypeDefinitionIndex)->GetStaticField(0x4E100);
		}
		static ::System::Func_2<::RPG::Client::ActivityMarble::IMarbleData*, ::System::UInt32>** StaticGet___9__92_0()
		{
			return (::System::Func_2<::RPG::Client::ActivityMarble::IMarbleData*, ::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(MarbleModule___c_TypeDefinitionIndex)->GetStaticField(0x4E108);
		}
		static ::System::Func_2<::System::UInt32, ::System::Boolean>** StaticGet___9__94_0()
		{
			return (::System::Func_2<::System::UInt32, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(MarbleModule___c_TypeDefinitionIndex)->GetStaticField(0x4E110);
		}
		static ::System::Func_2<::System::UInt32, ::System::Boolean>** StaticGet___9__93_0()
		{
			return (::System::Func_2<::System::UInt32, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(MarbleModule___c_TypeDefinitionIndex)->GetStaticField(0x4E118);
		}
		static ::System::Func_2<::System::UInt32, ::System::Boolean>** StaticGet___9__94_1()
		{
			return (::System::Func_2<::System::UInt32, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(MarbleModule___c_TypeDefinitionIndex)->GetStaticField(0x4E120);
		}
		static ::System::Action** StaticGet___9__103_1()
		{
			return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(MarbleModule___c_TypeDefinitionIndex)->GetStaticField(0x4E128);
		}
		static ::System::Func_2<::System::UInt32, ::System::Boolean>** StaticGet___9__93_1()
		{
			return (::System::Func_2<::System::UInt32, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(MarbleModule___c_TypeDefinitionIndex)->GetStaticField(0x4E130);
		}
		static ::System::Action** StaticGet___9__104_2()
		{
			return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(MarbleModule___c_TypeDefinitionIndex)->GetStaticField(0x4E138);
		}
		static ::System::Func_2<::System::UInt32, ::System::Boolean>** StaticGet___9__95_1()
		{
			return (::System::Func_2<::System::UInt32, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(MarbleModule___c_TypeDefinitionIndex)->GetStaticField(0x4E140);
		}
		static ::System::Action** StaticGet___9__105_3()
		{
			return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(MarbleModule___c_TypeDefinitionIndex)->GetStaticField(0x4E148);
		}
		static ::System::Action** StaticGet___9__104_1()
		{
			return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(MarbleModule___c_TypeDefinitionIndex)->GetStaticField(0x4E150);
		}
		static ::System::Func_2<::System::UInt32, ::System::Boolean>** StaticGet___9__95_0()
		{
			return (::System::Func_2<::System::UInt32, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(MarbleModule___c_TypeDefinitionIndex)->GetStaticField(0x4E158);
		}
		static ::System::Func_2<::RPG::Client::ActivityMarble::IMarbleData*, ::System::UInt32>** StaticGet___9__92_1()
		{
			return (::System::Func_2<::RPG::Client::ActivityMarble::IMarbleData*, ::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(MarbleModule___c_TypeDefinitionIndex)->GetStaticField(0x4E160);
		}
		static ::System::Action** StaticGet___9__103_2()
		{
			return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(MarbleModule___c_TypeDefinitionIndex)->GetStaticField(0x4E168);
		}
		static ::RPG::Client::MarbleModule___c** StaticGet___9()
		{
			return (::RPG::Client::MarbleModule___c**)Il2CppClass::FromTypeDefinitionIndex(MarbleModule___c_TypeDefinitionIndex)->GetStaticField(0x4E170);
		}
		static ::System::Func_2<::RPG::Client::MarbleBattleSealData*, ::System::Boolean>** StaticGet___9__13_0()
		{
			return (::System::Func_2<::RPG::Client::MarbleBattleSealData*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(MarbleModule___c_TypeDefinitionIndex)->GetStaticField(0x4E178);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_MARBLEMODULE___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MARBLEMODULE___C__CTOR_OFFSET))(this);
		}

		::System::Boolean __EntityIds2BattleSeals_b__13_0(::RPG::Client::MarbleBattleSealData* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::MarbleBattleSealData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MARBLEMODULE___C___ENTITYIDS2BATTLESEALS_B__13_0_OFFSET))(this, a1);
		}

		::RPG::Client::ActivityMarble::IMarbleData* _GetDisplayMarbleSealIDList_b__85_0(::RPG::Client::ActivityMarble::MarbleSealData* a1)
		{
			return ((::RPG::Client::ActivityMarble::IMarbleData*(*)(::PVOID, ::RPG::Client::ActivityMarble::MarbleSealData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MARBLEMODULE___C__GETDISPLAYMARBLESEALIDLIST_B__85_0_OFFSET))(this, a1);
		}

		::System::UInt32 _StartMarblePveGame_b__92_0(::RPG::Client::ActivityMarble::IMarbleData* a1)
		{
			return ((::System::UInt32(*)(::PVOID, ::RPG::Client::ActivityMarble::IMarbleData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MARBLEMODULE___C__STARTMARBLEPVEGAME_B__92_0_OFFSET))(this, a1);
		}

		::System::UInt32 _StartMarblePveGame_b__92_1(::RPG::Client::ActivityMarble::IMarbleData* a1)
		{
			return ((::System::UInt32(*)(::PVOID, ::RPG::Client::ActivityMarble::IMarbleData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MARBLEMODULE___C__STARTMARBLEPVEGAME_B__92_1_OFFSET))(this, a1);
		}

		::System::Boolean _StartMarblePveGame_b__93_0(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MARBLEMODULE___C__STARTMARBLEPVEGAME_B__93_0_OFFSET))(this, a1);
		}

		::System::Boolean _StartMarblePveGame_b__93_1(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MARBLEMODULE___C__STARTMARBLEPVEGAME_B__93_1_OFFSET))(this, a1);
		}

		::System::Boolean _StartMarblePvpGame_b__94_0(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MARBLEMODULE___C__STARTMARBLEPVPGAME_B__94_0_OFFSET))(this, a1);
		}

		::System::Boolean _StartMarblePvpGame_b__94_1(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MARBLEMODULE___C__STARTMARBLEPVPGAME_B__94_1_OFFSET))(this, a1);
		}

		::System::Boolean _StartMarblePveGame_b__95_0(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MARBLEMODULE___C__STARTMARBLEPVEGAME_B__95_0_OFFSET))(this, a1);
		}

		::System::Boolean _StartMarblePveGame_b__95_1(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MARBLEMODULE___C__STARTMARBLEPVEGAME_B__95_1_OFFSET))(this, a1);
		}

		::System::Void _GotoActivityMainPage_b__103_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MARBLEMODULE___C__GOTOACTIVITYMAINPAGE_B__103_1_OFFSET))(this);
		}

		::System::Void _GotoActivityMainPage_b__103_2()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MARBLEMODULE___C__GOTOACTIVITYMAINPAGE_B__103_2_OFFSET))(this);
		}

		::System::Void _GotoActivityMultiPlayerPage_b__104_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MARBLEMODULE___C__GOTOACTIVITYMULTIPLAYERPAGE_B__104_1_OFFSET))(this);
		}

		::System::Void _GotoActivityMultiPlayerPage_b__104_2()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MARBLEMODULE___C__GOTOACTIVITYMULTIPLAYERPAGE_B__104_2_OFFSET))(this);
		}

		::System::Void _GotoActivityMultiPlayerFreeMatchPage_b__105_3()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MARBLEMODULE___C__GOTOACTIVITYMULTIPLAYERFREEMATCHPAGE_B__105_3_OFFSET))(this);
		}
	};
}

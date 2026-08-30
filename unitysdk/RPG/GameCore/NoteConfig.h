#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/InputNoteType.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
#include "unitysdk/RPG/GameCore/NoteType.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class NoteNotifyConfig; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_GAMECORE_NOTECONFIG_METHOD_2_832295EC279E5994_1_OFFSET UNITYSDK_OFFSET(0x1CE8FF10)
#define RPG_GAMECORE_NOTECONFIG_METHOD_2_832295EC279E5994_OFFSET UNITYSDK_OFFSET(0x1CE8FF00)
#define RPG_GAMECORE_NOTECONFIG_METHOD_2_963A230D5F748B05_OFFSET UNITYSDK_OFFSET(0x1CE8FED0)
#define RPG_GAMECORE_NOTECONFIG_METHOD_2_99D5CB8ABB2D9721_OFFSET UNITYSDK_OFFSET(0x1CE8F960)
#define RPG_GAMECORE_NOTECONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1CE8FEC0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int NoteConfig_TypeDefinitionIndex = 16759;

	class NoteConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::String* Template; // 0x10
		::RPG::GameCore::NoteType Type; // 0x18
		::RPG::GameCore::InputNoteType InputType; // 0x1C
		::System::Single Time; // 0x20
		::System::Single DeltaBeatNum; // 0x24
		::System::Single PressBeats; // 0x28
		::Il2CppArray<::RPG::GameCore::NoteNotifyConfig*>* NotifyList; // 0x30
		::Il2CppArray<::RPG::GameCore::NoteNotifyConfig*>* PerfectNotifyList; // 0x38
		::Il2CppArray<::RPG::GameCore::NoteNotifyConfig*>* GoodNotifyList; // 0x40
		::Il2CppArray<::RPG::GameCore::NoteNotifyConfig*>* MissNotifyList; // 0x48
		::Il2CppArray<::RPG::GameCore::NoteNotifyConfig*>* PassMissNotifyList; // 0x50
		::Il2CppArray<::RPG::GameCore::NoteNotifyConfig*>* PerfectUpNotifyList; // 0x58
		::Il2CppArray<::RPG::GameCore::NoteNotifyConfig*>* GoodUpNotifyList; // 0x60
		::Il2CppArray<::RPG::GameCore::NoteNotifyConfig*>* MissUpNotifyList; // 0x68
		::Il2CppArray<::RPG::GameCore::NoteNotifyConfig*>* PassMissUpNotifyList; // 0x70

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_NOTECONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_99D5CB8ABB2D9721(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::NoteConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::NoteConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_NOTECONFIG_METHOD_2_99D5CB8ABB2D9721_OFFSET))(a1, a2);
		}

		::System::Collections::Generic::List_1<::System::String*>* Method_2_963A230D5F748B05()
		{
			return ((::System::Collections::Generic::List_1<::System::String*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_NOTECONFIG_METHOD_2_963A230D5F748B05_OFFSET))(this);
		}

		::System::Void Method_2_832295EC279E5994()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_NOTECONFIG_METHOD_2_832295EC279E5994_OFFSET))(this);
		}

		::System::Void Method_2_832295EC279E5994_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_NOTECONFIG_METHOD_2_832295EC279E5994_1_OFFSET))(this);
		}
	};
}

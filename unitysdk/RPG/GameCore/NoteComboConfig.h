#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class NoteConfig; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_GAMECORE_NOTECOMBOCONFIG_METHOD_2_4C1D90C8D2C0F33D_OFFSET UNITYSDK_OFFSET(0x199CF160)
#define RPG_GAMECORE_NOTECOMBOCONFIG_METHOD_2_832295EC279E5994_1_OFFSET UNITYSDK_OFFSET(0x199CF340)
#define RPG_GAMECORE_NOTECOMBOCONFIG_METHOD_2_832295EC279E5994_OFFSET UNITYSDK_OFFSET(0x199CF330)
#define RPG_GAMECORE_NOTECOMBOCONFIG_METHOD_2_963A230D5F748B05_OFFSET UNITYSDK_OFFSET(0x199CF300)
#define RPG_GAMECORE_NOTECOMBOCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x199CF2F0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int NoteComboConfig_TypeDefinitionIndex = 16088;

	class NoteComboConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::String* Template; // 0x10
		::System::Single DeltaBeatNum; // 0x18
		::Il2CppArray<::RPG::GameCore::NoteConfig*>* NoteList; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_NOTECOMBOCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_4C1D90C8D2C0F33D(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::NoteComboConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::NoteComboConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_NOTECOMBOCONFIG_METHOD_2_4C1D90C8D2C0F33D_OFFSET))(a1, a2);
		}

		::System::Collections::Generic::List_1<::System::String*>* Method_2_963A230D5F748B05()
		{
			return ((::System::Collections::Generic::List_1<::System::String*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_NOTECOMBOCONFIG_METHOD_2_963A230D5F748B05_OFFSET))(this);
		}

		::System::Void Method_2_832295EC279E5994()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_NOTECOMBOCONFIG_METHOD_2_832295EC279E5994_OFFSET))(this);
		}

		::System::Void Method_2_832295EC279E5994_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_NOTECOMBOCONFIG_METHOD_2_832295EC279E5994_1_OFFSET))(this);
		}
	};
}

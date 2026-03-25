#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_GAMECORE_NOTECOMBOTEMPLATENOTECONFIG_METHOD_2_444B2B98DF3385A2_OFFSET UNITYSDK_OFFSET(0x17474460)
#define RPG_GAMECORE_NOTECOMBOTEMPLATENOTECONFIG_METHOD_2_963A230D5F748B05_OFFSET UNITYSDK_OFFSET(0x174744B0)
#define RPG_GAMECORE_NOTECOMBOTEMPLATENOTECONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x174744A0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int NoteComboTemplateNoteConfig_TypeDefinitionIndex = 15540;

	class NoteComboTemplateNoteConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_NOTECOMBOTEMPLATENOTECONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_444B2B98DF3385A2(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::NoteComboTemplateNoteConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::NoteComboTemplateNoteConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_NOTECOMBOTEMPLATENOTECONFIG_METHOD_2_444B2B98DF3385A2_OFFSET))(a1, a2);
		}

		::System::Collections::Generic::List_1<::System::String*>* Method_2_963A230D5F748B05()
		{
			return ((::System::Collections::Generic::List_1<::System::String*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_NOTECOMBOTEMPLATENOTECONFIG_METHOD_2_963A230D5F748B05_OFFSET))(this);
		}
	};
}

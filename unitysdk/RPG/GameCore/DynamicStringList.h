#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace SimpleJSON { class JSONNode; }
namespace System { class String; }

#define RPG_GAMECORE_DYNAMICSTRINGLIST_METHOD_2_9B5D4B5FA3E608F5_OFFSET UNITYSDK_OFFSET(0x1DB1D100)
#define RPG_GAMECORE_DYNAMICSTRINGLIST_METHOD_2_C698CD91779AB72C_OFFSET UNITYSDK_OFFSET(0x1DB1D2A0)
#define RPG_GAMECORE_DYNAMICSTRINGLIST__CTOR_OFFSET UNITYSDK_OFFSET(0x1DB1D290)

namespace RPG::GameCore
{
	inline static constexpr unsigned int DynamicStringList_TypeDefinitionIndex = 16308;

	class DynamicStringList : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Boolean Custom; // 0x10
		::System::String* Key; // 0x18
		::Il2CppArray<::System::String*>* Value; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DYNAMICSTRINGLIST__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_9B5D4B5FA3E608F5(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::DynamicStringList*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::DynamicStringList*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DYNAMICSTRINGLIST_METHOD_2_9B5D4B5FA3E608F5_OFFSET))(a1, a2);
		}

		static ::System::Void Method_2_C698CD91779AB72C(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::DynamicStringList*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::DynamicStringList*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DYNAMICSTRINGLIST_METHOD_2_C698CD91779AB72C_OFFSET))(a1, a2);
		}
	};
}

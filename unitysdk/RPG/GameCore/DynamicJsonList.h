#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicJsonConfig; }
namespace System { class String; }

#define RPG_GAMECORE_DYNAMICJSONLIST_METHOD_2_1E6C0569086DA096_OFFSET UNITYSDK_OFFSET(0x1BB2A500)
#define RPG_GAMECORE_DYNAMICJSONLIST__CTOR_OFFSET UNITYSDK_OFFSET(0x1BB2A690)

namespace RPG::GameCore
{
	inline static constexpr unsigned int DynamicJsonList_TypeDefinitionIndex = 15834;

	class DynamicJsonList : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Boolean Custom; // 0x10
		::System::String* Key; // 0x18
		::Il2CppArray<::RPG::GameCore::DynamicJsonConfig*>* Value; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DYNAMICJSONLIST__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_1E6C0569086DA096(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::DynamicJsonList*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::DynamicJsonList*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DYNAMICJSONLIST_METHOD_2_1E6C0569086DA096_OFFSET))(a1, a2);
		}
	};
}

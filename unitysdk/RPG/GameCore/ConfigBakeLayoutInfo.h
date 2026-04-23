#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/BakeLayoutTypeId.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_CONFIGBAKELAYOUTINFO_METHOD_2_A98A562928C75821_OFFSET UNITYSDK_OFFSET(0x18833000)
#define RPG_GAMECORE_CONFIGBAKELAYOUTINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x188331E0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ConfigBakeLayoutInfo_TypeDefinitionIndex = 15563;

	class ConfigBakeLayoutInfo : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::String* UniqueName; // 0x10
		::RPG::GameCore::BakeLayoutTypeId TypeId; // 0x18
		::System::Int32 Offset; // 0x1C
		::Il2CppArray<::System::String*>* Dependency; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CONFIGBAKELAYOUTINFO__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_A98A562928C75821(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ConfigBakeLayoutInfo*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ConfigBakeLayoutInfo*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CONFIGBAKELAYOUTINFO_METHOD_2_A98A562928C75821_OFFSET))(a1, a2);
		}
	};
}

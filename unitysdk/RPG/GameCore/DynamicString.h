#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_DYNAMICSTRING_METHOD_2_84F01E2593882111_OFFSET UNITYSDK_OFFSET(0x196CCC90)
#define RPG_GAMECORE_DYNAMICSTRING__CTOR_OFFSET UNITYSDK_OFFSET(0x196CF210)

namespace RPG::GameCore
{
	inline static constexpr unsigned int DynamicString_TypeDefinitionIndex = 15657;

	class DynamicString : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Boolean Custom; // 0x10
		::System::String* Key; // 0x18
		::System::String* Value; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DYNAMICSTRING__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_84F01E2593882111(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::DynamicString*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::DynamicString*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DYNAMICSTRING_METHOD_2_84F01E2593882111_OFFSET))(a1, a2);
		}
	};
}

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_UNDEFINEDYNAMICSTRING_METHOD_3_5DBC4BA19B252986_OFFSET UNITYSDK_OFFSET(0x178E34C0)
#define RPG_GAMECORE_UNDEFINEDYNAMICSTRING_METHOD_3_E8FC944572D25A17_OFFSET UNITYSDK_OFFSET(0x178E3440)
#define RPG_GAMECORE_UNDEFINEDYNAMICSTRING__CTOR_OFFSET UNITYSDK_OFFSET(0x178E3490)

namespace RPG::GameCore
{
	inline static constexpr unsigned int UnDefineDynamicString_TypeDefinitionIndex = 22096;

	class UnDefineDynamicString : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::String* DynamicStringKey; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_UNDEFINEDYNAMICSTRING__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_E8FC944572D25A17(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::UnDefineDynamicString*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::UnDefineDynamicString*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_UNDEFINEDYNAMICSTRING_METHOD_3_E8FC944572D25A17_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_5DBC4BA19B252986(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::UnDefineDynamicString* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::UnDefineDynamicString*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_UNDEFINEDYNAMICSTRING_METHOD_3_5DBC4BA19B252986_OFFSET))(a1, a2);
		}
	};
}

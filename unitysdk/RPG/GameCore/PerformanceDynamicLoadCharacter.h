#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_PERFORMANCEDYNAMICLOADCHARACTER_METHOD_3_3A502B9172941445_OFFSET UNITYSDK_OFFSET(0x18BDFAD0)
#define RPG_GAMECORE_PERFORMANCEDYNAMICLOADCHARACTER_METHOD_3_DD3755E9707EF983_OFFSET UNITYSDK_OFFSET(0x18BDFB50)
#define RPG_GAMECORE_PERFORMANCEDYNAMICLOADCHARACTER__CTOR_OFFSET UNITYSDK_OFFSET(0x18BDFB20)

namespace RPG::GameCore
{
	inline static constexpr unsigned int PerformanceDynamicLoadCharacter_TypeDefinitionIndex = 20708;

	class PerformanceDynamicLoadCharacter : public ::RPG::GameCore::TaskConfig
	{
	public:
		::Il2CppArray<::System::String*>* DestroyUnqueNames; // 0x18
		::Il2CppArray<::System::String*>* CreateUnqueNames; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PERFORMANCEDYNAMICLOADCHARACTER__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_3A502B9172941445(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::PerformanceDynamicLoadCharacter*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::PerformanceDynamicLoadCharacter*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PERFORMANCEDYNAMICLOADCHARACTER_METHOD_3_3A502B9172941445_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_DD3755E9707EF983(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::PerformanceDynamicLoadCharacter* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::PerformanceDynamicLoadCharacter*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PERFORMANCEDYNAMICLOADCHARACTER_METHOD_3_DD3755E9707EF983_OFFSET))(a1, a2);
		}
	};
}

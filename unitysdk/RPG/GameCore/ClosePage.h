#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_CLOSEPAGE_METHOD_3_8D07AB545D877DFF_OFFSET UNITYSDK_OFFSET(0x1BC1E970)
#define RPG_GAMECORE_CLOSEPAGE_METHOD_3_ED2CEFD14F0AA056_OFFSET UNITYSDK_OFFSET(0x1BC1E9C0)
#define RPG_GAMECORE_CLOSEPAGE__CTOR_OFFSET UNITYSDK_OFFSET(0x1BC1E9B0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ClosePage_TypeDefinitionIndex = 19836;

	class ClosePage : public ::RPG::GameCore::TaskConfig
	{
	public:
		::Il2CppArray<::System::String*>* PageNames; // 0x18
		::Il2CppArray<::System::String*>* PageRootNames; // 0x20
		::System::Boolean IsSilentExit; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CLOSEPAGE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_8D07AB545D877DFF(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ClosePage*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ClosePage*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CLOSEPAGE_METHOD_3_8D07AB545D877DFF_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_ED2CEFD14F0AA056(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ClosePage* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ClosePage*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CLOSEPAGE_METHOD_3_ED2CEFD14F0AA056_OFFSET))(a1, a2);
		}
	};
}

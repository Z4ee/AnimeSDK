#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_DESTROYALLNPCMONSTERINAREA_METHOD_3_5F2353BA163B9002_OFFSET UNITYSDK_OFFSET(0x1885ADE0)
#define RPG_GAMECORE_DESTROYALLNPCMONSTERINAREA_METHOD_3_FB2D6BADFD44812B_OFFSET UNITYSDK_OFFSET(0x1885AD60)
#define RPG_GAMECORE_DESTROYALLNPCMONSTERINAREA__CTOR_OFFSET UNITYSDK_OFFSET(0x1885ADB0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int DestroyAllNPCMonsterInArea_TypeDefinitionIndex = 19263;

	class DestroyAllNPCMonsterInArea : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::String* AreaName; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DESTROYALLNPCMONSTERINAREA__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_FB2D6BADFD44812B(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::DestroyAllNPCMonsterInArea*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::DestroyAllNPCMonsterInArea*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DESTROYALLNPCMONSTERINAREA_METHOD_3_FB2D6BADFD44812B_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_5F2353BA163B9002(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::DestroyAllNPCMonsterInArea* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::DestroyAllNPCMonsterInArea*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DESTROYALLNPCMONSTERINAREA_METHOD_3_5F2353BA163B9002_OFFSET))(a1, a2);
		}
	};
}

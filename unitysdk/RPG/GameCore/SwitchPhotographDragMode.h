#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class DynamicString; }

#define RPG_GAMECORE_SWITCHPHOTOGRAPHDRAGMODE_METHOD_3_3F34577BEA25D81E_OFFSET UNITYSDK_OFFSET(0x1B4392D0)
#define RPG_GAMECORE_SWITCHPHOTOGRAPHDRAGMODE_METHOD_3_5C556887CF2D12AA_OFFSET UNITYSDK_OFFSET(0x1B439310)
#define RPG_GAMECORE_SWITCHPHOTOGRAPHDRAGMODE__CTOR_OFFSET UNITYSDK_OFFSET(0x1B439300)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SwitchPhotographDragMode_TypeDefinitionIndex = 20834;

	class SwitchPhotographDragMode : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Boolean Enable; // 0x18
		::RPG::GameCore::DynamicString* ContainerName; // 0x20
		::RPG::GameCore::DynamicFloat* RectRangeX; // 0x28
		::RPG::GameCore::DynamicFloat* RectRangeY; // 0x30
		::RPG::GameCore::DynamicFloat* Damping; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SWITCHPHOTOGRAPHDRAGMODE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_3F34577BEA25D81E(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SwitchPhotographDragMode*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SwitchPhotographDragMode*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SWITCHPHOTOGRAPHDRAGMODE_METHOD_3_3F34577BEA25D81E_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_5C556887CF2D12AA(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SwitchPhotographDragMode* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SwitchPhotographDragMode*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SWITCHPHOTOGRAPHDRAGMODE_METHOD_3_5C556887CF2D12AA_OFFSET))(a1, a2);
		}
	};
}

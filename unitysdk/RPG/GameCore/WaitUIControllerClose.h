#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_WAITUICONTROLLERCLOSE_METHOD_3_7A77FA56466DECAC_OFFSET UNITYSDK_OFFSET(0x1D1BF230)
#define RPG_GAMECORE_WAITUICONTROLLERCLOSE_METHOD_3_F7C8B9A810480DE7_OFFSET UNITYSDK_OFFSET(0x1D1BF270)
#define RPG_GAMECORE_WAITUICONTROLLERCLOSE__CTOR_OFFSET UNITYSDK_OFFSET(0x1D1BF260)

namespace RPG::GameCore
{
	inline static constexpr unsigned int WaitUIControllerClose_TypeDefinitionIndex = 20378;

	class WaitUIControllerClose : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::String* UIControllerName; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WAITUICONTROLLERCLOSE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_7A77FA56466DECAC(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::WaitUIControllerClose*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::WaitUIControllerClose*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WAITUICONTROLLERCLOSE_METHOD_3_7A77FA56466DECAC_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_F7C8B9A810480DE7(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::WaitUIControllerClose* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::WaitUIControllerClose*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WAITUICONTROLLERCLOSE_METHOD_3_F7C8B9A810480DE7_OFFSET))(a1, a2);
		}
	};
}

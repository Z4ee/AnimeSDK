#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_GRAPHICDEVICEINFO_METHOD_2_C477365CE043AF86_OFFSET UNITYSDK_OFFSET(0x1724C060)
#define RPG_GAMECORE_GRAPHICDEVICEINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x1724C1B0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GraphicDeviceInfo_TypeDefinitionIndex = 16766;

	class GraphicDeviceInfo : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::String* GraphicDeviceName; // 0x10
		::System::Int32 ApiLevel; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRAPHICDEVICEINFO__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_C477365CE043AF86(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::GraphicDeviceInfo*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::GraphicDeviceInfo*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRAPHICDEVICEINFO_METHOD_2_C477365CE043AF86_OFFSET))(a1, a2);
		}
	};
}

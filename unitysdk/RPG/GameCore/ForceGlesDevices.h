#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DeviceModelInfo; }
namespace RPG::GameCore { class GraphicDeviceInfo; }

#define RPG_GAMECORE_FORCEGLESDEVICES_METHOD_2_747C1C750E34FF24_OFFSET UNITYSDK_OFFSET(0x1D10F580)
#define RPG_GAMECORE_FORCEGLESDEVICES__CTOR_OFFSET UNITYSDK_OFFSET(0x1D10F6E0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ForceGlesDevices_TypeDefinitionIndex = 18057;

	class ForceGlesDevices : public ::RPG::GameCore::JsonConfig
	{
	public:
		::Il2CppArray<::RPG::GameCore::DeviceModelInfo*>* DeviceModelList; // 0x10
		::Il2CppArray<::RPG::GameCore::GraphicDeviceInfo*>* GraphicDeviceList; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FORCEGLESDEVICES__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_747C1C750E34FF24(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ForceGlesDevices*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ForceGlesDevices*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FORCEGLESDEVICES_METHOD_2_747C1C750E34FF24_OFFSET))(a1, a2);
		}
	};
}

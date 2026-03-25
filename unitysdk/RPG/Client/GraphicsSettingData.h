#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class GraphicsSettingRequirements; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_CLIENT_GRAPHICSSETTINGDATA_DEVICEMATCHREQUIREMENTS_OFFSET UNITYSDK_OFFSET(0x97C6440)
#define RPG_CLIENT_GRAPHICSSETTINGDATA_GETDEVICEMODEL_OFFSET UNITYSDK_OFFSET(0x97C19C0)
#define RPG_CLIENT_GRAPHICSSETTINGDATA_GETGRAPHICSDEVICENAME_OFFSET UNITYSDK_OFFSET(0x97C6350)
#define RPG_CLIENT_GRAPHICSSETTINGDATA_GETTARGETPLATFORM_OFFSET UNITYSDK_OFFSET(0x97C1960)
#define RPG_CLIENT_GRAPHICSSETTINGDATA_PARSEIOSDEVICEMODEL_OFFSET UNITYSDK_OFFSET(0x97C1A00)

namespace RPG::Client
{
	inline static constexpr unsigned int GraphicsSettingData_TypeDefinitionIndex = 57089;

	class GraphicsSettingData : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>** StaticGet__iOSDeviceTable()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(GraphicsSettingData_TypeDefinitionIndex)->GetStaticField(0x11FD0);
		}

		static ::System::String* GetTargetPlatform()
		{
			return ((::System::String*(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_GRAPHICSSETTINGDATA_GETTARGETPLATFORM_OFFSET))();
		}

		static ::System::String* GetDeviceModel()
		{
			return ((::System::String*(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_GRAPHICSSETTINGDATA_GETDEVICEMODEL_OFFSET))();
		}

		static ::System::String* ParseiOSDeviceModel()
		{
			return ((::System::String*(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_GRAPHICSSETTINGDATA_PARSEIOSDEVICEMODEL_OFFSET))();
		}

		static ::System::String* GetGraphicsDeviceName()
		{
			return ((::System::String*(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_GRAPHICSSETTINGDATA_GETGRAPHICSDEVICENAME_OFFSET))();
		}

		static ::System::Boolean DeviceMatchRequirements(::Il2CppArray<::RPG::GameCore::GraphicsSettingRequirements*>* requirements)
		{
			return ((::System::Boolean(*)(::Il2CppArray<::RPG::GameCore::GraphicsSettingRequirements*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRAPHICSSETTINGDATA_DEVICEMATCHREQUIREMENTS_OFFSET))(requirements);
		}
	};
}

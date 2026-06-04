#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/BAT/BATControllerBase.h"
#include "unitysdk/RPG/Client/BAT/BATControllerBase_DrawMode.h"
#include "unitysdk/RPG/Client/TAUtils/SimpleTransform.h"
#include "unitysdk/UnityEngine/Vector2Int.h"

#define RPG_CLIENT_BAT_BATCONTROLLER_GRID_GET_MODE_OFFSET UNITYSDK_OFFSET(0xB39D500)
#define RPG_CLIENT_BAT_BATCONTROLLER_GRID_GET__GRIDCOUNT_OFFSET UNITYSDK_OFFSET(0xB39D580)
#define RPG_CLIENT_BAT_BATCONTROLLER_GRID_METHOD_2_1B3D8773D1869301_OFFSET UNITYSDK_OFFSET(0xB39D5D0)
#define RPG_CLIENT_BAT_BATCONTROLLER_GRID_METHOD_2_A2172401030892FD_OFFSET UNITYSDK_OFFSET(0xB39D790)
#define RPG_CLIENT_BAT_BATCONTROLLER_GRID_METHOD_2_CA373AA1C7054598_1_OFFSET UNITYSDK_OFFSET(0xB39E090)
#define RPG_CLIENT_BAT_BATCONTROLLER_GRID_METHOD_2_CA373AA1C7054598_2_OFFSET UNITYSDK_OFFSET(0xB39E0D0)
#define RPG_CLIENT_BAT_BATCONTROLLER_GRID_METHOD_2_CA373AA1C7054598_3_OFFSET UNITYSDK_OFFSET(0xB39E110)
#define RPG_CLIENT_BAT_BATCONTROLLER_GRID_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0xB39DF40)
#define RPG_CLIENT_BAT_BATCONTROLLER_GRID__CTOR_OFFSET UNITYSDK_OFFSET(0xB39DF90)
#define RPG_CLIENT_BAT_BATCONTROLLER_GRID___IFIXBASEPROXY_GET_MODE_OFFSET UNITYSDK_OFFSET(0xB39E080)

namespace RPG::Client::BAT
{
	inline static constexpr unsigned int BATController_Grid_TypeDefinitionIndex = 68760;

	class BATController_Grid : public ::RPG::Client::BAT::BATControllerBase
	{
	public:
		::UnityEngine::Vector2Int GridSize; // 0x70
		::RPG::Client::TAUtils::SimpleTransform InstanceTransform; // 0x78
		::Il2CppArray<::Il2CppArray<::System::Int32>*>* _GridIndices; // 0xA0
		::System::Int32 _InitedGridCount; // 0xA8

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BAT_BATCONTROLLER_GRID__CTOR_OFFSET))(this);
		}

		::RPG::Client::BAT::BATControllerBase_DrawMode get_Mode()
		{
			return ((::RPG::Client::BAT::BATControllerBase_DrawMode(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BAT_BATCONTROLLER_GRID_GET_MODE_OFFSET))(this);
		}

		::System::Void Method_2_1B3D8773D1869301()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BAT_BATCONTROLLER_GRID_METHOD_2_1B3D8773D1869301_OFFSET))(this);
		}

		::System::Void Method_2_A2172401030892FD()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BAT_BATCONTROLLER_GRID_METHOD_2_A2172401030892FD_OFFSET))(this);
		}

		::System::Void Method_2_CA373AA1C7054598()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BAT_BATCONTROLLER_GRID_METHOD_2_CA373AA1C7054598_OFFSET))(this);
		}

		::System::Int32 get__GridCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BAT_BATCONTROLLER_GRID_GET__GRIDCOUNT_OFFSET))(this);
		}

		::RPG::Client::BAT::BATControllerBase_DrawMode __iFixBaseProxy_get_Mode()
		{
			return ((::RPG::Client::BAT::BATControllerBase_DrawMode(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BAT_BATCONTROLLER_GRID___IFIXBASEPROXY_GET_MODE_OFFSET))(this);
		}

		::System::Void Method_2_CA373AA1C7054598_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BAT_BATCONTROLLER_GRID_METHOD_2_CA373AA1C7054598_1_OFFSET))(this);
		}

		::System::Void Method_2_CA373AA1C7054598_2()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BAT_BATCONTROLLER_GRID_METHOD_2_CA373AA1C7054598_2_OFFSET))(this);
		}

		::System::Void Method_2_CA373AA1C7054598_3()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BAT_BATCONTROLLER_GRID_METHOD_2_CA373AA1C7054598_3_OFFSET))(this);
		}
	};
}

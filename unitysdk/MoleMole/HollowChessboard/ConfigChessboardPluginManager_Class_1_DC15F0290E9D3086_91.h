#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define MOLEMOLE_HOLLOWCHESSBOARD_CONFIGCHESSBOARDPLUGINMANAGER_CLASS_1_DC15F0290E9D3086_91_METHOD_1_286570692E8A7912_OFFSET UNITYSDK_OFFSET(0x11758780)
#define MOLEMOLE_HOLLOWCHESSBOARD_CONFIGCHESSBOARDPLUGINMANAGER_CLASS_1_DC15F0290E9D3086_91__CTOR_OFFSET UNITYSDK_OFFSET(0x11758770)

namespace MoleMole::HollowChessboard
{
	inline static constexpr unsigned int ConfigChessboardPluginManager_Class_1_DC15F0290E9D3086_91_TypeDefinitionIndex = 60924;

	class ConfigChessboardPluginManager_Class_1_DC15F0290E9D3086_91 : public ::System::Object
	{
	public:
		::System::String* Field_1_3; // 0x10
		::System::Action_1<::System::Single>* Field_1_0; // 0x18
		::System::Action_1<::System::String*>* Field_1_2; // 0x20
		::System::Single Field_1_1; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_HOLLOWCHESSBOARD_CONFIGCHESSBOARDPLUGINMANAGER_CLASS_1_DC15F0290E9D3086_91__CTOR_OFFSET))(this);
		}

		::System::Void Method_1_286570692E8A7912()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_HOLLOWCHESSBOARD_CONFIGCHESSBOARDPLUGINMANAGER_CLASS_1_DC15F0290E9D3086_91_METHOD_1_286570692E8A7912_OFFSET))(this);
		}
	};
}

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_DEVICEMODELINFO_METHOD_2_469FB1A23A043F37_OFFSET UNITYSDK_OFFSET(0x1D818E20)
#define RPG_GAMECORE_DEVICEMODELINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x1D818F70)

namespace RPG::GameCore
{
	inline static constexpr unsigned int DeviceModelInfo_TypeDefinitionIndex = 18054;

	class DeviceModelInfo : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::String* DeviceModel; // 0x10
		::System::Int32 ApiLevel; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DEVICEMODELINFO__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_469FB1A23A043F37(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::DeviceModelInfo*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::DeviceModelInfo*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DEVICEMODELINFO_METHOD_2_469FB1A23A043F37_OFFSET))(a1, a2);
		}
	};
}

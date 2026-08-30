#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_DEVICERELATEDCONFIGBASE_METHOD_2_4A8E23179AB8E712_OFFSET UNITYSDK_OFFSET(0x1D8197B0)
#define RPG_GAMECORE_DEVICERELATEDCONFIGBASE_METHOD_2_9F947E3E37BC3ED7_OFFSET UNITYSDK_OFFSET(0x1D819420)
#define RPG_GAMECORE_DEVICERELATEDCONFIGBASE__CTOR_OFFSET UNITYSDK_OFFSET(0x1D8191B0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int DeviceRelatedConfigBase_TypeDefinitionIndex = 16294;

	class DeviceRelatedConfigBase : public ::RPG::GameCore::JsonConfig
	{
	public:
		::Il2CppArray<::System::String*>* PlatformName; // 0x10
		::System::Int32 MemoryMin; // 0x18
		::System::Int32 MemoryMax; // 0x1C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DEVICERELATEDCONFIGBASE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_9F947E3E37BC3ED7(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::DeviceRelatedConfigBase*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::DeviceRelatedConfigBase*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DEVICERELATEDCONFIGBASE_METHOD_2_9F947E3E37BC3ED7_OFFSET))(a1, a2);
		}

		static ::System::Void Method_2_4A8E23179AB8E712(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::DeviceRelatedConfigBase* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::DeviceRelatedConfigBase*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DEVICERELATEDCONFIGBASE_METHOD_2_4A8E23179AB8E712_OFFSET))(a1, a2);
		}
	};
}

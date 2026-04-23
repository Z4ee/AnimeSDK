#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/DeviceRelatedConfigBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_DEVICERELATEDINT_METHOD_3_6D8AF074C50B60D6_OFFSET UNITYSDK_OFFSET(0x1885E2B0)
#define RPG_GAMECORE_DEVICERELATEDINT_METHOD_3_7BD49A918916E460_OFFSET UNITYSDK_OFFSET(0x1885E760)
#define RPG_GAMECORE_DEVICERELATEDINT__CTOR_OFFSET UNITYSDK_OFFSET(0x1885E2A0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int DeviceRelatedInt_TypeDefinitionIndex = 15585;

	class DeviceRelatedInt : public ::RPG::GameCore::DeviceRelatedConfigBase
	{
	public:
		::System::Int32 Value; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DEVICERELATEDINT__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_7BD49A918916E460(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::DeviceRelatedInt*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::DeviceRelatedInt*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DEVICERELATEDINT_METHOD_3_7BD49A918916E460_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_6D8AF074C50B60D6(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::DeviceRelatedInt* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::DeviceRelatedInt*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DEVICERELATEDINT_METHOD_3_6D8AF074C50B60D6_OFFSET))(a1, a2);
		}
	};
}

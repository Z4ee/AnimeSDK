#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/DeviceRelatedConfigBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_DEVICERELATEDINT_METHOD_3_654DAE80410DB4CA_OFFSET UNITYSDK_OFFSET(0x1D0236D0)
#define RPG_GAMECORE_DEVICERELATEDINT_METHOD_3_722E37EE47C006A4_OFFSET UNITYSDK_OFFSET(0x1D023210)
#define RPG_GAMECORE_DEVICERELATEDINT__CTOR_OFFSET UNITYSDK_OFFSET(0x1D023200)

namespace RPG::GameCore
{
	inline static constexpr unsigned int DeviceRelatedInt_TypeDefinitionIndex = 16296;

	class DeviceRelatedInt : public ::RPG::GameCore::DeviceRelatedConfigBase
	{
	public:
		::System::Int32 Value; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DEVICERELATEDINT__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_654DAE80410DB4CA(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::DeviceRelatedInt*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::DeviceRelatedInt*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DEVICERELATEDINT_METHOD_3_654DAE80410DB4CA_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_722E37EE47C006A4(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::DeviceRelatedInt* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::DeviceRelatedInt*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DEVICERELATEDINT_METHOD_3_722E37EE47C006A4_OFFSET))(a1, a2);
		}
	};
}

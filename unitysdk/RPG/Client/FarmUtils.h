#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FarmTypeConfig.h"
#include "unitysdk/System/Object.h"

#define RPG_CLIENT_FARMUTILS_ISCOCOON3_1_OFFSET UNITYSDK_OFFSET(0xA32A860)
#define RPG_CLIENT_FARMUTILS_ISCOCOON3_OFFSET UNITYSDK_OFFSET(0xA32A7C0)
#define RPG_CLIENT_FARMUTILS_ISCOCOONOTHER_1_OFFSET UNITYSDK_OFFSET(0xA32A770)
#define RPG_CLIENT_FARMUTILS_ISCOCOONOTHER_OFFSET UNITYSDK_OFFSET(0xA32A6D0)
#define RPG_CLIENT_FARMUTILS_ISCOCOON_1_OFFSET UNITYSDK_OFFSET(0xA32A8A0)
#define RPG_CLIENT_FARMUTILS_ISCOCOON_OFFSET UNITYSDK_OFFSET(0xA327B10)
#define RPG_CLIENT_FARMUTILS_ISELEMENT_1_OFFSET UNITYSDK_OFFSET(0xA32A690)
#define RPG_CLIENT_FARMUTILS_ISELEMENT_OFFSET UNITYSDK_OFFSET(0xA327BB0)

namespace RPG::Client
{
	inline static constexpr unsigned int FarmUtils_TypeDefinitionIndex = 58851;

	class FarmUtils : public ::System::Object
	{
	public:
		static ::System::Boolean IsElement(::System::UInt32 farmID)
		{
			return ((::System::Boolean(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_FARMUTILS_ISELEMENT_OFFSET))(farmID);
		}

		static ::System::Boolean IsCocoonOther(::System::UInt32 farmID)
		{
			return ((::System::Boolean(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_FARMUTILS_ISCOCOONOTHER_OFFSET))(farmID);
		}

		static ::System::Boolean IsCocoon3(::System::UInt32 farmID)
		{
			return ((::System::Boolean(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_FARMUTILS_ISCOCOON3_OFFSET))(farmID);
		}

		static ::System::Boolean IsCocoon(::System::UInt32 farmID)
		{
			return ((::System::Boolean(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_FARMUTILS_ISCOCOON_OFFSET))(farmID);
		}

		static ::System::Boolean IsElement_1(::RPG::GameCore::FarmTypeConfig farmType)
		{
			return ((::System::Boolean(*)(::RPG::GameCore::FarmTypeConfig))((::PBYTE)hIl2Cpp + RPG_CLIENT_FARMUTILS_ISELEMENT_1_OFFSET))(farmType);
		}

		static ::System::Boolean IsCocoon3_1(::RPG::GameCore::FarmTypeConfig farmType)
		{
			return ((::System::Boolean(*)(::RPG::GameCore::FarmTypeConfig))((::PBYTE)hIl2Cpp + RPG_CLIENT_FARMUTILS_ISCOCOON3_1_OFFSET))(farmType);
		}

		static ::System::Boolean IsCocoonOther_1(::RPG::GameCore::FarmTypeConfig farmType)
		{
			return ((::System::Boolean(*)(::RPG::GameCore::FarmTypeConfig))((::PBYTE)hIl2Cpp + RPG_CLIENT_FARMUTILS_ISCOCOONOTHER_1_OFFSET))(farmType);
		}

		static ::System::Boolean IsCocoon_1(::RPG::GameCore::FarmTypeConfig farmType)
		{
			return ((::System::Boolean(*)(::RPG::GameCore::FarmTypeConfig))((::PBYTE)hIl2Cpp + RPG_CLIENT_FARMUTILS_ISCOCOON_1_OFFSET))(farmType);
		}
	};
}

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicFloat; }

#define RPG_GAMECORE_SETCOMFORTZONEWIDTHOVERRIDE_METHOD_3_4DE95D16849431B2_OFFSET UNITYSDK_OFFSET(0x18E129E0)
#define RPG_GAMECORE_SETCOMFORTZONEWIDTHOVERRIDE_METHOD_3_795C312DE5F97499_OFFSET UNITYSDK_OFFSET(0x18E12960)
#define RPG_GAMECORE_SETCOMFORTZONEWIDTHOVERRIDE__CTOR_OFFSET UNITYSDK_OFFSET(0x18E129B0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SetComfortZoneWidthOverride_TypeDefinitionIndex = 21905;

	class SetComfortZoneWidthOverride : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Boolean IsReset; // 0x18
		::RPG::GameCore::DynamicFloat* Value; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETCOMFORTZONEWIDTHOVERRIDE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_795C312DE5F97499(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SetComfortZoneWidthOverride*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SetComfortZoneWidthOverride*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETCOMFORTZONEWIDTHOVERRIDE_METHOD_3_795C312DE5F97499_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_4DE95D16849431B2(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SetComfortZoneWidthOverride* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SetComfortZoneWidthOverride*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETCOMFORTZONEWIDTHOVERRIDE_METHOD_3_4DE95D16849431B2_OFFSET))(a1, a2);
		}
	};
}

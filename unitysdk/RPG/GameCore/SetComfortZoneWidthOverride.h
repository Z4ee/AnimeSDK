#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicFloat; }

#define RPG_GAMECORE_SETCOMFORTZONEWIDTHOVERRIDE_METHOD_3_4DE95D16849431B2_OFFSET UNITYSDK_OFFSET(0x1C2DA3F0)
#define RPG_GAMECORE_SETCOMFORTZONEWIDTHOVERRIDE_METHOD_3_F7BB35643B6E3A8F_OFFSET UNITYSDK_OFFSET(0x1C2DA3B0)
#define RPG_GAMECORE_SETCOMFORTZONEWIDTHOVERRIDE__CTOR_OFFSET UNITYSDK_OFFSET(0x1C2DA3E0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SetComfortZoneWidthOverride_TypeDefinitionIndex = 22156;

	class SetComfortZoneWidthOverride : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Boolean IsReset; // 0x18
		::RPG::GameCore::DynamicFloat* Value; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETCOMFORTZONEWIDTHOVERRIDE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_F7BB35643B6E3A8F(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SetComfortZoneWidthOverride*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SetComfortZoneWidthOverride*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETCOMFORTZONEWIDTHOVERRIDE_METHOD_3_F7BB35643B6E3A8F_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_4DE95D16849431B2(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SetComfortZoneWidthOverride* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SetComfortZoneWidthOverride*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETCOMFORTZONEWIDTHOVERRIDE_METHOD_3_4DE95D16849431B2_OFFSET))(a1, a2);
		}
	};
}

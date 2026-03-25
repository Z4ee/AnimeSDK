#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/Booklet/ContainerAnchor.h"
#include "unitysdk/RPG/GameCore/Booklet/ElementConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_BOOKLET_CONTAINERCONFIG_METHOD_3_18530C2DD9F0FDCF_OFFSET UNITYSDK_OFFSET(0x16FEBD40)
#define RPG_GAMECORE_BOOKLET_CONTAINERCONFIG_METHOD_3_2F1687E91A235D31_OFFSET UNITYSDK_OFFSET(0x16FEB8A0)
#define RPG_GAMECORE_BOOKLET_CONTAINERCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x16FEC070)

namespace RPG::GameCore::Booklet
{
	inline static constexpr unsigned int ContainerConfig_TypeDefinitionIndex = 22801;

	class ContainerConfig : public ::RPG::GameCore::Booklet::ElementConfig
	{
	public:
		::RPG::GameCore::Booklet::ContainerAnchor Alignment; // 0x18
		::System::Int32 LeftPadding; // 0x1C
		::System::Int32 RightPadding; // 0x20
		::System::Int32 TopPadding; // 0x24
		::System::Int32 BottomPadding; // 0x28
		::System::Single Spacing; // 0x2C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BOOKLET_CONTAINERCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_2F1687E91A235D31(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::Booklet::ContainerConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::Booklet::ContainerConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BOOKLET_CONTAINERCONFIG_METHOD_3_2F1687E91A235D31_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_18530C2DD9F0FDCF(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::Booklet::ContainerConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::Booklet::ContainerConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BOOKLET_CONTAINERCONFIG_METHOD_3_18530C2DD9F0FDCF_OFFSET))(a1, a2);
		}
	};
}

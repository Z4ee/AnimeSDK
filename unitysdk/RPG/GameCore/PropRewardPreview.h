#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicString; }

#define RPG_GAMECORE_PROPREWARDPREVIEW_METHOD_3_0E9D5F2810DD604A_OFFSET UNITYSDK_OFFSET(0x17524050)
#define RPG_GAMECORE_PROPREWARDPREVIEW_METHOD_3_8C194FB138FB7FFB_OFFSET UNITYSDK_OFFSET(0x175240D0)
#define RPG_GAMECORE_PROPREWARDPREVIEW__CTOR_OFFSET UNITYSDK_OFFSET(0x175240A0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int PropRewardPreview_TypeDefinitionIndex = 20250;

	class PropRewardPreview : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::UInt32 GroupID; // 0x18
		::System::UInt32 GroupPropID; // 0x1C
		::System::Boolean TargetIsOwner; // 0x20
		::RPG::GameCore::DynamicString* PropKey; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PROPREWARDPREVIEW__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_0E9D5F2810DD604A(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::PropRewardPreview*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::PropRewardPreview*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PROPREWARDPREVIEW_METHOD_3_0E9D5F2810DD604A_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_8C194FB138FB7FFB(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::PropRewardPreview* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::PropRewardPreview*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PROPREWARDPREVIEW_METHOD_3_8C194FB138FB7FFB_OFFSET))(a1, a2);
		}
	};
}

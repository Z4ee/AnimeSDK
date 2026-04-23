#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/SetBillboardInfo.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_SETROGUEPFBILLBOARDINFO_METHOD_4_14CC4756E6BCFB7D_OFFSET UNITYSDK_OFFSET(0x18E40300)
#define RPG_GAMECORE_SETROGUEPFBILLBOARDINFO_METHOD_4_519EC204A3994E7A_OFFSET UNITYSDK_OFFSET(0x18E40280)
#define RPG_GAMECORE_SETROGUEPFBILLBOARDINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x18E402D0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SetRoguePFBillboardInfo_TypeDefinitionIndex = 20947;

	class SetRoguePFBillboardInfo : public ::RPG::GameCore::SetBillboardInfo
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETROGUEPFBILLBOARDINFO__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_519EC204A3994E7A(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SetRoguePFBillboardInfo*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SetRoguePFBillboardInfo*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETROGUEPFBILLBOARDINFO_METHOD_4_519EC204A3994E7A_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_14CC4756E6BCFB7D(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SetRoguePFBillboardInfo* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SetRoguePFBillboardInfo*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETROGUEPFBILLBOARDINFO_METHOD_4_14CC4756E6BCFB7D_OFFSET))(a1, a2);
		}
	};
}

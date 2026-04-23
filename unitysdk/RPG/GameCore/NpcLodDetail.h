#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/LodDetail.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_NPCLODDETAIL_METHOD_3_5170ABD7599572F7_OFFSET UNITYSDK_OFFSET(0x18BBFEF0)
#define RPG_GAMECORE_NPCLODDETAIL_METHOD_3_A081879910A33027_OFFSET UNITYSDK_OFFSET(0x18BBFEA0)
#define RPG_GAMECORE_NPCLODDETAIL__CTOR_OFFSET UNITYSDK_OFFSET(0x18BBFEE0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int NpcLodDetail_TypeDefinitionIndex = 18102;

	class NpcLodDetail : public ::RPG::GameCore::LodDetail
	{
	public:
		::System::Boolean Animation; // 0x30
		::System::Boolean Render; // 0x31
		::System::Boolean Skinning; // 0x32

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_NPCLODDETAIL__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_A081879910A33027(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::NpcLodDetail*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::NpcLodDetail*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_NPCLODDETAIL_METHOD_3_A081879910A33027_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_5170ABD7599572F7(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::NpcLodDetail* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::NpcLodDetail*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_NPCLODDETAIL_METHOD_3_5170ABD7599572F7_OFFSET))(a1, a2);
		}
	};
}

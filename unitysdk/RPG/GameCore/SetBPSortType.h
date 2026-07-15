#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/BPSortType.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_SETBPSORTTYPE_METHOD_3_3DE35533E9FEAE22_OFFSET UNITYSDK_OFFSET(0x1C2D39F0)
#define RPG_GAMECORE_SETBPSORTTYPE_METHOD_3_C637EA2B98BAF4B1_OFFSET UNITYSDK_OFFSET(0x1C2D3A30)
#define RPG_GAMECORE_SETBPSORTTYPE__CTOR_OFFSET UNITYSDK_OFFSET(0x1C2D3A20)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SetBPSortType_TypeDefinitionIndex = 22389;

	class SetBPSortType : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::BPSortType SortType; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETBPSORTTYPE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_3DE35533E9FEAE22(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SetBPSortType*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SetBPSortType*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETBPSORTTYPE_METHOD_3_3DE35533E9FEAE22_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_C637EA2B98BAF4B1(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SetBPSortType* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SetBPSortType*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETBPSORTTYPE_METHOD_3_C637EA2B98BAF4B1_OFFSET))(a1, a2);
		}
	};
}

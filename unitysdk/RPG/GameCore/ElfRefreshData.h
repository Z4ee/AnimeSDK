#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ELFREFRESHDATA_METHOD_3_71143DE3EE3D142B_OFFSET UNITYSDK_OFFSET(0x1D05AF20)
#define RPG_GAMECORE_ELFREFRESHDATA_METHOD_3_7F9D61406A3ACEAE_OFFSET UNITYSDK_OFFSET(0x1D05AE50)
#define RPG_GAMECORE_ELFREFRESHDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x1D05AF10)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ElfRefreshData_TypeDefinitionIndex = 21490;

	class ElfRefreshData : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ELFREFRESHDATA__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_7F9D61406A3ACEAE(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ElfRefreshData*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ElfRefreshData*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ELFREFRESHDATA_METHOD_3_7F9D61406A3ACEAE_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_71143DE3EE3D142B(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ElfRefreshData* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ElfRefreshData*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ELFREFRESHDATA_METHOD_3_71143DE3EE3D142B_OFFSET))(a1, a2);
		}
	};
}

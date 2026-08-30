#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_GOTOUIPAGE_METHOD_3_8E092E11A3750099_OFFSET UNITYSDK_OFFSET(0x1D148310)
#define RPG_GAMECORE_GOTOUIPAGE_METHOD_3_998AA2B7FE5BE6AA_OFFSET UNITYSDK_OFFSET(0x1D148350)
#define RPG_GAMECORE_GOTOUIPAGE__CTOR_OFFSET UNITYSDK_OFFSET(0x1D148340)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GotoUIPage_TypeDefinitionIndex = 23569;

	class GotoUIPage : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::UInt32 GotoID; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GOTOUIPAGE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_8E092E11A3750099(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::GotoUIPage*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::GotoUIPage*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GOTOUIPAGE_METHOD_3_8E092E11A3750099_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_998AA2B7FE5BE6AA(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::GotoUIPage* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::GotoUIPage*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GOTOUIPAGE_METHOD_3_998AA2B7FE5BE6AA_OFFSET))(a1, a2);
		}
	};
}

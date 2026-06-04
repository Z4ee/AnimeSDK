#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ADDPAMMENUITEM_METHOD_3_B4910DBB7C0BA808_OFFSET UNITYSDK_OFFSET(0x19411330)
#define RPG_GAMECORE_ADDPAMMENUITEM_METHOD_3_D2D9751BEBDA023C_OFFSET UNITYSDK_OFFSET(0x19411220)
#define RPG_GAMECORE_ADDPAMMENUITEM__CTOR_OFFSET UNITYSDK_OFFSET(0x19411300)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AddPamMenuItem_TypeDefinitionIndex = 19942;

	class AddPamMenuItem : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADDPAMMENUITEM__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_D2D9751BEBDA023C(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AddPamMenuItem*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AddPamMenuItem*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADDPAMMENUITEM_METHOD_3_D2D9751BEBDA023C_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_B4910DBB7C0BA808(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AddPamMenuItem* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AddPamMenuItem*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADDPAMMENUITEM_METHOD_3_B4910DBB7C0BA808_OFFSET))(a1, a2);
		}
	};
}

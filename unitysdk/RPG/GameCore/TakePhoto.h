#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_TAKEPHOTO_METHOD_3_036C4F56FFFB19FE_OFFSET UNITYSDK_OFFSET(0x19CED6D0)
#define RPG_GAMECORE_TAKEPHOTO_METHOD_3_E21EA03FEA077872_OFFSET UNITYSDK_OFFSET(0x19CED5C0)
#define RPG_GAMECORE_TAKEPHOTO__CTOR_OFFSET UNITYSDK_OFFSET(0x19CED6A0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TakePhoto_TypeDefinitionIndex = 20950;

	class TakePhoto : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TAKEPHOTO__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_E21EA03FEA077872(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TakePhoto*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TakePhoto*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TAKEPHOTO_METHOD_3_E21EA03FEA077872_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_036C4F56FFFB19FE(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TakePhoto* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TakePhoto*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TAKEPHOTO_METHOD_3_036C4F56FFFB19FE_OFFSET))(a1, a2);
		}
	};
}

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_TAKEPHOTO_METHOD_3_036C4F56FFFB19FE_OFFSET UNITYSDK_OFFSET(0x1E160860)
#define RPG_GAMECORE_TAKEPHOTO_METHOD_3_E14425102AA953FB_OFFSET UNITYSDK_OFFSET(0x1E160790)
#define RPG_GAMECORE_TAKEPHOTO__CTOR_OFFSET UNITYSDK_OFFSET(0x1E160850)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TakePhoto_TypeDefinitionIndex = 21926;

	class TakePhoto : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TAKEPHOTO__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_E14425102AA953FB(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TakePhoto*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TakePhoto*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TAKEPHOTO_METHOD_3_E14425102AA953FB_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_036C4F56FFFB19FE(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TakePhoto* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TakePhoto*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TAKEPHOTO_METHOD_3_036C4F56FFFB19FE_OFFSET))(a1, a2);
		}
	};
}

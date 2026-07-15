#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_SUBSERVERGAMEPLAYCOUNTER_METHOD_3_CB39168FDC2331F4_OFFSET UNITYSDK_OFFSET(0x1B42D460)
#define RPG_GAMECORE_SUBSERVERGAMEPLAYCOUNTER_METHOD_3_E9E579F447E38278_OFFSET UNITYSDK_OFFSET(0x1B42D410)
#define RPG_GAMECORE_SUBSERVERGAMEPLAYCOUNTER__CTOR_OFFSET UNITYSDK_OFFSET(0x1B42D450)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SubServerGameplayCounter_TypeDefinitionIndex = 19773;

	class SubServerGameplayCounter : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SUBSERVERGAMEPLAYCOUNTER__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_E9E579F447E38278(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SubServerGameplayCounter*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SubServerGameplayCounter*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SUBSERVERGAMEPLAYCOUNTER_METHOD_3_E9E579F447E38278_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_CB39168FDC2331F4(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SubServerGameplayCounter* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SubServerGameplayCounter*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SUBSERVERGAMEPLAYCOUNTER_METHOD_3_CB39168FDC2331F4_OFFSET))(a1, a2);
		}
	};
}

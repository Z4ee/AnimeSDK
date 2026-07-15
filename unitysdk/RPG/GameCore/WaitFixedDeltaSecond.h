#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_WAITFIXEDDELTASECOND_METHOD_3_255B3173F77312BA_OFFSET UNITYSDK_OFFSET(0x1B8A46A0)
#define RPG_GAMECORE_WAITFIXEDDELTASECOND_METHOD_3_4352EE957669F917_OFFSET UNITYSDK_OFFSET(0x1B8A45D0)
#define RPG_GAMECORE_WAITFIXEDDELTASECOND__CTOR_OFFSET UNITYSDK_OFFSET(0x1B8A4690)

namespace RPG::GameCore
{
	inline static constexpr unsigned int WaitFixedDeltaSecond_TypeDefinitionIndex = 22932;

	class WaitFixedDeltaSecond : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WAITFIXEDDELTASECOND__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_4352EE957669F917(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::WaitFixedDeltaSecond*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::WaitFixedDeltaSecond*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WAITFIXEDDELTASECOND_METHOD_3_4352EE957669F917_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_255B3173F77312BA(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::WaitFixedDeltaSecond* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::WaitFixedDeltaSecond*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WAITFIXEDDELTASECOND_METHOD_3_255B3173F77312BA_OFFSET))(a1, a2);
		}
	};
}

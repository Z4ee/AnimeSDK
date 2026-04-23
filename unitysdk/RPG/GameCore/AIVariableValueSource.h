#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class AIVariable; }

#define RPG_GAMECORE_AIVARIABLEVALUESOURCE_METHOD_2_D056E38D601CC40A_OFFSET UNITYSDK_OFFSET(0x185F4D70)
#define RPG_GAMECORE_AIVARIABLEVALUESOURCE__CTOR_OFFSET UNITYSDK_OFFSET(0x185F4E40)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AIVariableValueSource_TypeDefinitionIndex = 14779;

	class AIVariableValueSource : public ::RPG::GameCore::JsonConfig
	{
	public:
		::Il2CppArray<::RPG::GameCore::AIVariable*>* Values; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AIVARIABLEVALUESOURCE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_D056E38D601CC40A(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AIVariableValueSource*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AIVariableValueSource*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AIVARIABLEVALUESOURCE_METHOD_2_D056E38D601CC40A_OFFSET))(a1, a2);
		}
	};
}

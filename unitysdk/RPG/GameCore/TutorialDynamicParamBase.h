#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_TUTORIALDYNAMICPARAMBASE_METHOD_2_67796FD922CE6D74_OFFSET UNITYSDK_OFFSET(0x190D6C50)
#define RPG_GAMECORE_TUTORIALDYNAMICPARAMBASE_METHOD_2_CB22982B16077881_OFFSET UNITYSDK_OFFSET(0x190D6A30)
#define RPG_GAMECORE_TUTORIALDYNAMICPARAMBASE__CTOR_OFFSET UNITYSDK_OFFSET(0x190D6CB0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TutorialDynamicParamBase_TypeDefinitionIndex = 23335;

	class TutorialDynamicParamBase : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TUTORIALDYNAMICPARAMBASE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_CB22982B16077881(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TutorialDynamicParamBase*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TutorialDynamicParamBase*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TUTORIALDYNAMICPARAMBASE_METHOD_2_CB22982B16077881_OFFSET))(a1, a2);
		}

		static ::System::Void Method_2_67796FD922CE6D74(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TutorialDynamicParamBase* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TutorialDynamicParamBase*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TUTORIALDYNAMICPARAMBASE_METHOD_2_67796FD922CE6D74_OFFSET))(a1, a2);
		}
	};
}

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TaskConfig; }

#define RPG_GAMECORE_CASECONTAINERBASE_METHOD_2_B58BB1E8444FB843_OFFSET UNITYSDK_OFFSET(0x1CF7E090)
#define RPG_GAMECORE_CASECONTAINERBASE_METHOD_2_E1D9799A41C604C6_OFFSET UNITYSDK_OFFSET(0x1CF7DE10)
#define RPG_GAMECORE_CASECONTAINERBASE__CTOR_OFFSET UNITYSDK_OFFSET(0x1CF7E140)

namespace RPG::GameCore
{
	inline static constexpr unsigned int CaseContainerBase_TypeDefinitionIndex = 23495;

	class CaseContainerBase : public ::RPG::GameCore::JsonConfig
	{
	public:
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* OnSuccess; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CASECONTAINERBASE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_E1D9799A41C604C6(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::CaseContainerBase*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::CaseContainerBase*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CASECONTAINERBASE_METHOD_2_E1D9799A41C604C6_OFFSET))(a1, a2);
		}

		static ::System::Void Method_2_B58BB1E8444FB843(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::CaseContainerBase* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::CaseContainerBase*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CASECONTAINERBASE_METHOD_2_B58BB1E8444FB843_OFFSET))(a1, a2);
		}
	};
}

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class DynamicString; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_INCLUDEGLOBALTASKLISTTEMPLATE_METHOD_3_1D47ADF2D6E6A54D_OFFSET UNITYSDK_OFFSET(0x18A1BBE0)
#define RPG_GAMECORE_INCLUDEGLOBALTASKLISTTEMPLATE_METHOD_3_D6D9D89729B6928A_OFFSET UNITYSDK_OFFSET(0x18A1BC60)
#define RPG_GAMECORE_INCLUDEGLOBALTASKLISTTEMPLATE__CTOR_OFFSET UNITYSDK_OFFSET(0x18A1BC30)

namespace RPG::GameCore
{
	inline static constexpr unsigned int IncludeGlobalTaskListTemplate_TypeDefinitionIndex = 22826;

	class IncludeGlobalTaskListTemplate : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::String* Name; // 0x18
		::System::Collections::Generic::Dictionary_2<::System::String*, ::RPG::GameCore::DynamicFloat*>* DynamicValues; // 0x20
		::System::Collections::Generic::Dictionary_2<::System::String*, ::RPG::GameCore::DynamicString*>* DynamicStrings; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_INCLUDEGLOBALTASKLISTTEMPLATE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_1D47ADF2D6E6A54D(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::IncludeGlobalTaskListTemplate*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::IncludeGlobalTaskListTemplate*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_INCLUDEGLOBALTASKLISTTEMPLATE_METHOD_3_1D47ADF2D6E6A54D_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_D6D9D89729B6928A(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::IncludeGlobalTaskListTemplate* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::IncludeGlobalTaskListTemplate*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_INCLUDEGLOBALTASKLISTTEMPLATE_METHOD_3_D6D9D89729B6928A_OFFSET))(a1, a2);
		}
	};
}

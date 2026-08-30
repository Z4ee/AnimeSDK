#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class DynamicString; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_INCLUDEGLOBALTASKLISTTEMPLATE_METHOD_3_38DF3E75FA715668_OFFSET UNITYSDK_OFFSET(0x1D1AA070)
#define RPG_GAMECORE_INCLUDEGLOBALTASKLISTTEMPLATE_METHOD_3_EA073CBBD0E23495_OFFSET UNITYSDK_OFFSET(0x1D1AA030)
#define RPG_GAMECORE_INCLUDEGLOBALTASKLISTTEMPLATE__CTOR_OFFSET UNITYSDK_OFFSET(0x1D1AA060)

namespace RPG::GameCore
{
	inline static constexpr unsigned int IncludeGlobalTaskListTemplate_TypeDefinitionIndex = 23558;

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

		static ::System::Void Method_3_EA073CBBD0E23495(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::IncludeGlobalTaskListTemplate*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::IncludeGlobalTaskListTemplate*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_INCLUDEGLOBALTASKLISTTEMPLATE_METHOD_3_EA073CBBD0E23495_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_38DF3E75FA715668(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::IncludeGlobalTaskListTemplate* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::IncludeGlobalTaskListTemplate*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_INCLUDEGLOBALTASKLISTTEMPLATE_METHOD_3_38DF3E75FA715668_OFFSET))(a1, a2);
		}
	};
}

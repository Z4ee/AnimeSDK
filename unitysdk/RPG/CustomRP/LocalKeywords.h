#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_CUSTOMRP_LOCALKEYWORDS_ADD_OFFSET UNITYSDK_OFFSET(0x1C6AE260)
#define RPG_CUSTOMRP_LOCALKEYWORDS_GETKEYWORDS_OFFSET UNITYSDK_OFFSET(0x1C6AE370)
#define RPG_CUSTOMRP_LOCALKEYWORDS_RESET_OFFSET UNITYSDK_OFFSET(0x1C6AE250)
#define RPG_CUSTOMRP_LOCALKEYWORDS__CTOR_OFFSET UNITYSDK_OFFSET(0x1C6AE540)

namespace RPG::CustomRP
{
	inline static constexpr unsigned int LocalKeywords_TypeDefinitionIndex = 37195;

	class LocalKeywords : public ::System::Object
	{
	public:
		// static const ::System::Int32 MAX_COUNT = 0x20; // 0x0
		::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Int32>* _LocalMap; // 0x10
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::Il2CppArray<::System::String*>*>* _Combination; // 0x18
		::Il2CppArray<::System::String*>* _Keywords; // 0x20
		::System::Int32 _Mask; // 0x28
		::System::Int32 _Count; // 0x2C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_LOCALKEYWORDS__CTOR_OFFSET))(this);
		}

		::System::Void Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_LOCALKEYWORDS_RESET_OFFSET))(this);
		}

		::System::Void Add(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_LOCALKEYWORDS_ADD_OFFSET))(this, a1);
		}

		::Il2CppArray<::System::String*>* GetKeywords()
		{
			return ((::Il2CppArray<::System::String*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_LOCALKEYWORDS_GETKEYWORDS_OFFSET))(this);
		}
	};
}

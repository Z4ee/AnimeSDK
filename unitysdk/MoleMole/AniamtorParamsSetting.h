#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define MOLEMOLE_ANIAMTORPARAMSSETTING_TOSTRING_OFFSET UNITYSDK_OFFSET(0x12C49240)
#define MOLEMOLE_ANIAMTORPARAMSSETTING__CTOR_OFFSET UNITYSDK_OFFSET(0x12C49050)
#define MOLEMOLE_ANIAMTORPARAMSSETTING___BASE_TOSTRING_OFFSET UNITYSDK_OFFSET(0x12C49310)

namespace MoleMole
{
	inline static constexpr unsigned int AniamtorParamsSetting_TypeDefinitionIndex = 83099;

	class AniamtorParamsSetting : public ::System::Object
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Int32>* IntegerDict; // 0x10
		::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Boolean>* TriggerDict; // 0x18
		::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Boolean>* BooleanDict; // 0x20
		::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Single>* FloatDict; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ANIAMTORPARAMSSETTING__CTOR_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ANIAMTORPARAMSSETTING_TOSTRING_OFFSET))(this);
		}

		::System::String* __base_ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ANIAMTORPARAMSSETTING___BASE_TOSTRING_OFFSET))(this);
		}
	};
}

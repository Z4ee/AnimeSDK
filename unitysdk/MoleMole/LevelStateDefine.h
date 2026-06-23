#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_CF6069113B9F5B89.h"
#include "unitysdk/MoleMole/LevelStateDefine_ELevelStateName.h"
#include "unitysdk/System/Object.h"

namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define MOLEMOLE_LEVELSTATEDEFINE__CCTOR_OFFSET UNITYSDK_OFFSET(0x10D50E70)
#define MOLEMOLE_LEVELSTATEDEFINE__CTOR_OFFSET UNITYSDK_OFFSET(0x10D50E60)

namespace MoleMole
{
	inline static constexpr unsigned int LevelStateDefine_TypeDefinitionIndex = 47096;

	class LevelStateDefine : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::MoleMole::LevelStateDefine_ELevelStateName, ::Enum_3_CF6069113B9F5B89>** StaticGet_LevelStateTypeMap()
		{
			return (::System::Collections::Generic::Dictionary_2<::MoleMole::LevelStateDefine_ELevelStateName, ::Enum_3_CF6069113B9F5B89>**)Il2CppClass::FromTypeDefinitionIndex(LevelStateDefine_TypeDefinitionIndex)->GetStaticField(0x341D0);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_LEVELSTATEDEFINE__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_LEVELSTATEDEFINE__CCTOR_OFFSET))();
		}
	};
}

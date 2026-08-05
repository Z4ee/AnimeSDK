#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_029BEC9C30EBC3F1.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T> class Comparison_1; }

#define MOLEMOLE_CONFIG_CONFIGLOCKNEARINMAINCITYTARGET___C_METHOD_1_61789973E8A2EC44_OFFSET UNITYSDK_OFFSET(0x16262180)
#define MOLEMOLE_CONFIG_CONFIGLOCKNEARINMAINCITYTARGET___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x16262130)
#define MOLEMOLE_CONFIG_CONFIGLOCKNEARINMAINCITYTARGET___C__CTOR_OFFSET UNITYSDK_OFFSET(0x16262170)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigLockNearInMainCityTarget___c_TypeDefinitionIndex = 65171;

	class ConfigLockNearInMainCityTarget___c : public ::System::Object
	{
	public:
		static ::System::Comparison_1<::Struct_2_029BEC9C30EBC3F1>** StaticGet___9__13_0()
		{
			return (::System::Comparison_1<::Struct_2_029BEC9C30EBC3F1>**)Il2CppClass::FromTypeDefinitionIndex(ConfigLockNearInMainCityTarget___c_TypeDefinitionIndex)->GetStaticField(0x32420);
		}
		static ::MoleMole::Config::ConfigLockNearInMainCityTarget___c** StaticGet___9()
		{
			return (::MoleMole::Config::ConfigLockNearInMainCityTarget___c**)Il2CppClass::FromTypeDefinitionIndex(ConfigLockNearInMainCityTarget___c_TypeDefinitionIndex)->GetStaticField(0x32428);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGLOCKNEARINMAINCITYTARGET___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGLOCKNEARINMAINCITYTARGET___C__CTOR_OFFSET))(this);
		}

		::System::Int32 Method_1_61789973E8A2EC44(::Struct_2_029BEC9C30EBC3F1 a1, ::Struct_2_029BEC9C30EBC3F1 a2)
		{
			return ((::System::Int32(*)(::PVOID, ::Struct_2_029BEC9C30EBC3F1, ::Struct_2_029BEC9C30EBC3F1))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGLOCKNEARINMAINCITYTARGET___C_METHOD_1_61789973E8A2EC44_OFFSET))(this, a1, a2);
		}
	};
}

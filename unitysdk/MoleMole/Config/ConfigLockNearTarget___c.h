#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_029BEC9C30EBC3F1.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T> class Comparison_1; }

#define MOLEMOLE_CONFIG_CONFIGLOCKNEARTARGET___C_METHOD_1_61789973E8A2EC44_OFFSET UNITYSDK_OFFSET(0x1170ABC0)
#define MOLEMOLE_CONFIG_CONFIGLOCKNEARTARGET___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1170AB70)
#define MOLEMOLE_CONFIG_CONFIGLOCKNEARTARGET___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1170ABB0)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigLockNearTarget___c_TypeDefinitionIndex = 88923;

	class ConfigLockNearTarget___c : public ::System::Object
	{
	public:
		static ::System::Comparison_1<::Struct_2_029BEC9C30EBC3F1>** StaticGet___9__35_0()
		{
			return (::System::Comparison_1<::Struct_2_029BEC9C30EBC3F1>**)Il2CppClass::FromTypeDefinitionIndex(ConfigLockNearTarget___c_TypeDefinitionIndex)->GetStaticField(0x3F650);
		}
		static ::MoleMole::Config::ConfigLockNearTarget___c** StaticGet___9()
		{
			return (::MoleMole::Config::ConfigLockNearTarget___c**)Il2CppClass::FromTypeDefinitionIndex(ConfigLockNearTarget___c_TypeDefinitionIndex)->GetStaticField(0x3F658);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGLOCKNEARTARGET___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGLOCKNEARTARGET___C__CTOR_OFFSET))(this);
		}

		::System::Int32 Method_1_61789973E8A2EC44(::Struct_2_029BEC9C30EBC3F1 a1, ::Struct_2_029BEC9C30EBC3F1 a2)
		{
			return ((::System::Int32(*)(::PVOID, ::Struct_2_029BEC9C30EBC3F1, ::Struct_2_029BEC9C30EBC3F1))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGLOCKNEARTARGET___C_METHOD_1_61789973E8A2EC44_OFFSET))(this, a1, a2);
		}
	};
}

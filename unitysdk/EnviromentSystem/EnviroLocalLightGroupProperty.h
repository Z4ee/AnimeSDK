#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/EnviromentSystem/EnviroProperty.h"

namespace EnviromentSystem { class EnviroLocalLightGroupProperty_LLGKeyValuePair; }
namespace EnviromentSystem { class EnviromentProfile; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define ENVIROMENTSYSTEM_ENVIROLOCALLIGHTGROUPPROPERTY_METHOD_2_1713F44301AA802F_OFFSET UNITYSDK_OFFSET(0x106A4C10)
#define ENVIROMENTSYSTEM_ENVIROLOCALLIGHTGROUPPROPERTY_METHOD_2_29839FFC11E6037F_OFFSET UNITYSDK_OFFSET(0x106A4420)
#define ENVIROMENTSYSTEM_ENVIROLOCALLIGHTGROUPPROPERTY_METHOD_2_2C6244A18BD65DFC_OFFSET UNITYSDK_OFFSET(0x106A4F60)
#define ENVIROMENTSYSTEM_ENVIROLOCALLIGHTGROUPPROPERTY_METHOD_2_42B2BB88AE2FB02E_OFFSET UNITYSDK_OFFSET(0x106A4CC0)
#define ENVIROMENTSYSTEM_ENVIROLOCALLIGHTGROUPPROPERTY_METHOD_2_5163DD64E96CE08B_OFFSET UNITYSDK_OFFSET(0x106A4D40)
#define ENVIROMENTSYSTEM_ENVIROLOCALLIGHTGROUPPROPERTY_METHOD_2_5EBCF276C230582C_OFFSET UNITYSDK_OFFSET(0x106A40B0)
#define ENVIROMENTSYSTEM_ENVIROLOCALLIGHTGROUPPROPERTY_METHOD_2_AFC8215C57A0845A_OFFSET UNITYSDK_OFFSET(0x106A4100)
#define ENVIROMENTSYSTEM_ENVIROLOCALLIGHTGROUPPROPERTY__CTOR_1_OFFSET UNITYSDK_OFFSET(0x106A3F10)
#define ENVIROMENTSYSTEM_ENVIROLOCALLIGHTGROUPPROPERTY__CTOR_OFFSET UNITYSDK_OFFSET(0x106A26A0)

namespace EnviromentSystem
{
	inline static constexpr unsigned int EnviroLocalLightGroupProperty_TypeDefinitionIndex = 50030;

	class EnviroLocalLightGroupProperty : public ::EnviromentSystem::EnviroProperty
	{
	public:
		::System::Collections::Generic::List_1<::EnviromentSystem::EnviroLocalLightGroupProperty_LLGKeyValuePair*>* m_Value; // 0x48
		::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Single>* _LutMap; // 0x50
		::System::Boolean LUTDirty; // 0x58

		::System::Void _ctor(::EnviromentSystem::EnviromentProfile* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EnviromentSystem::EnviromentProfile*))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEM_ENVIROLOCALLIGHTGROUPPROPERTY__CTOR_OFFSET))(this, a1);
		}

		::System::Void _ctor_1(::EnviromentSystem::EnviroLocalLightGroupProperty* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EnviromentSystem::EnviroLocalLightGroupProperty*))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEM_ENVIROLOCALLIGHTGROUPPROPERTY__CTOR_1_OFFSET))(this, a1);
		}

		::System::Void Method_2_5EBCF276C230582C()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEM_ENVIROLOCALLIGHTGROUPPROPERTY_METHOD_2_5EBCF276C230582C_OFFSET))(this);
		}

		::System::Void Method_2_29839FFC11E6037F(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEM_ENVIROLOCALLIGHTGROUPPROPERTY_METHOD_2_29839FFC11E6037F_OFFSET))(this, a1);
		}

		::System::Void Method_2_42B2BB88AE2FB02E(::EnviromentSystem::EnviroProperty* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EnviromentSystem::EnviroProperty*))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEM_ENVIROLOCALLIGHTGROUPPROPERTY_METHOD_2_42B2BB88AE2FB02E_OFFSET))(this, a1);
		}

		::System::Void Method_2_1713F44301AA802F()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEM_ENVIROLOCALLIGHTGROUPPROPERTY_METHOD_2_1713F44301AA802F_OFFSET))(this);
		}

		::System::Void Method_2_5163DD64E96CE08B(::EnviromentSystem::EnviroProperty* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EnviromentSystem::EnviroProperty*))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEM_ENVIROLOCALLIGHTGROUPPROPERTY_METHOD_2_5163DD64E96CE08B_OFFSET))(this, a1);
		}

		::System::Single Method_2_2C6244A18BD65DFC(::System::String* a1)
		{
			return ((::System::Single(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEM_ENVIROLOCALLIGHTGROUPPROPERTY_METHOD_2_2C6244A18BD65DFC_OFFSET))(this, a1);
		}

		::System::Void Method_2_AFC8215C57A0845A()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEM_ENVIROLOCALLIGHTGROUPPROPERTY_METHOD_2_AFC8215C57A0845A_OFFSET))(this);
		}
	};
}

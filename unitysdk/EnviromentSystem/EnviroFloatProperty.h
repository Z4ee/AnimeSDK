#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/EnviromentSystem/EnviroProperty.h"

namespace EnviromentSystem { class EnviromentProfile; }
namespace System { class String; }
namespace UnityEngine::Rendering { class CommandBuffer; }

#define ENVIROMENTSYSTEM_ENVIROFLOATPROPERTY_METHOD_2_28F3459B67DFCFFF_OFFSET UNITYSDK_OFFSET(0xF3006A0)
#define ENVIROMENTSYSTEM_ENVIROFLOATPROPERTY_METHOD_2_42BA9D7CE19718CB_OFFSET UNITYSDK_OFFSET(0xF300B70)
#define ENVIROMENTSYSTEM_ENVIROFLOATPROPERTY_METHOD_2_438A9AA49EC7C989_OFFSET UNITYSDK_OFFSET(0xF300C60)
#define ENVIROMENTSYSTEM_ENVIROFLOATPROPERTY_METHOD_2_5693914D0131014B_OFFSET UNITYSDK_OFFSET(0xF300A10)
#define ENVIROMENTSYSTEM_ENVIROFLOATPROPERTY_METHOD_2_5790A55946AA509D_OFFSET UNITYSDK_OFFSET(0xF300DC0)
#define ENVIROMENTSYSTEM_ENVIROFLOATPROPERTY_METHOD_2_6E2356E48BB4B332_OFFSET UNITYSDK_OFFSET(0xF300D50)
#define ENVIROMENTSYSTEM_ENVIROFLOATPROPERTY_METHOD_2_793FFA9A76FE6840_OFFSET UNITYSDK_OFFSET(0xF300CE0)
#define ENVIROMENTSYSTEM_ENVIROFLOATPROPERTY_METHOD_2_A1781348F0A89177_OFFSET UNITYSDK_OFFSET(0xF300960)
#define ENVIROMENTSYSTEM_ENVIROFLOATPROPERTY_METHOD_2_CA6BDDCC5F7CE11E_OFFSET UNITYSDK_OFFSET(0xF300B00)
#define ENVIROMENTSYSTEM_ENVIROFLOATPROPERTY_METHOD_2_F33D58546A03D87E_OFFSET UNITYSDK_OFFSET(0xF300BE0)
#define ENVIROMENTSYSTEM_ENVIROFLOATPROPERTY__CTOR_1_OFFSET UNITYSDK_OFFSET(0xF300560)
#define ENVIROMENTSYSTEM_ENVIROFLOATPROPERTY__CTOR_2_OFFSET UNITYSDK_OFFSET(0xF300610)
#define ENVIROMENTSYSTEM_ENVIROFLOATPROPERTY__CTOR_OFFSET UNITYSDK_OFFSET(0xF3004D0)

namespace EnviromentSystem
{
	inline static constexpr unsigned int EnviroFloatProperty_TypeDefinitionIndex = 46195;

	class EnviroFloatProperty : public ::EnviromentSystem::EnviroProperty
	{
	public:
		::System::Single m_Value; // 0x48
		::System::Single m_Min; // 0x4C
		::System::Single m_Max; // 0x50

		::System::Void _ctor(::EnviromentSystem::EnviromentProfile* a1, ::System::String* a2, ::System::Single a3)
		{
			return ((::System::Void(*)(::PVOID, ::EnviromentSystem::EnviromentProfile*, ::System::String*, ::System::Single))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEM_ENVIROFLOATPROPERTY__CTOR_OFFSET))(this, a1, a2, a3);
		}

		::System::Void _ctor_1(::EnviromentSystem::EnviromentProfile* a1, ::System::String* a2, ::System::Single a3, ::System::Single a4, ::System::Single a5)
		{
			return ((::System::Void(*)(::PVOID, ::EnviromentSystem::EnviromentProfile*, ::System::String*, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEM_ENVIROFLOATPROPERTY__CTOR_1_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Void _ctor_2(::EnviromentSystem::EnviroFloatProperty* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EnviromentSystem::EnviroFloatProperty*))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEM_ENVIROFLOATPROPERTY__CTOR_2_OFFSET))(this, a1);
		}

		::System::Void Method_2_28F3459B67DFCFFF(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEM_ENVIROFLOATPROPERTY_METHOD_2_28F3459B67DFCFFF_OFFSET))(this, a1);
		}

		::System::Void Method_2_5693914D0131014B(::EnviromentSystem::EnviroProperty* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EnviromentSystem::EnviroProperty*))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEM_ENVIROFLOATPROPERTY_METHOD_2_5693914D0131014B_OFFSET))(this, a1);
		}

		::System::Void Method_2_CA6BDDCC5F7CE11E(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEM_ENVIROFLOATPROPERTY_METHOD_2_CA6BDDCC5F7CE11E_OFFSET))(this, a1);
		}

		::System::Void Method_2_42BA9D7CE19718CB(::UnityEngine::Rendering::CommandBuffer* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::CommandBuffer*))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEM_ENVIROFLOATPROPERTY_METHOD_2_42BA9D7CE19718CB_OFFSET))(this, a1);
		}

		::System::Void Method_2_A1781348F0A89177()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEM_ENVIROFLOATPROPERTY_METHOD_2_A1781348F0A89177_OFFSET))(this);
		}

		::System::Void Method_2_F33D58546A03D87E(::System::Single P0)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEM_ENVIROFLOATPROPERTY_METHOD_2_F33D58546A03D87E_OFFSET))(this, P0);
		}

		::System::Void Method_2_438A9AA49EC7C989(::EnviromentSystem::EnviroProperty* P0)
		{
			return ((::System::Void(*)(::PVOID, ::EnviromentSystem::EnviroProperty*))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEM_ENVIROFLOATPROPERTY_METHOD_2_438A9AA49EC7C989_OFFSET))(this, P0);
		}

		::System::Void Method_2_793FFA9A76FE6840(::System::Single P0)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEM_ENVIROFLOATPROPERTY_METHOD_2_793FFA9A76FE6840_OFFSET))(this, P0);
		}

		::System::Void Method_2_6E2356E48BB4B332(::UnityEngine::Rendering::CommandBuffer* P0)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::CommandBuffer*))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEM_ENVIROFLOATPROPERTY_METHOD_2_6E2356E48BB4B332_OFFSET))(this, P0);
		}

		::System::Void Method_2_5790A55946AA509D()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEM_ENVIROFLOATPROPERTY_METHOD_2_5790A55946AA509D_OFFSET))(this);
		}
	};
}

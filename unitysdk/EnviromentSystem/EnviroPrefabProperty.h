#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/EnviromentSystem/EnviroAssetProperty.h"

namespace EnviromentSystem { class EnviroProperty; }
namespace EnviromentSystem { class EnviromentProfile; }
namespace System { class String; }
namespace System { class Type; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Object; }
namespace UnityEngine::Rendering { class CommandBuffer; }

#define ENVIROMENTSYSTEM_ENVIROPREFABPROPERTY_METHOD_3_0414B7E68ABA5085_OFFSET UNITYSDK_OFFSET(0xF8FCB20)
#define ENVIROMENTSYSTEM_ENVIROPREFABPROPERTY_METHOD_3_0A1B064727BE410F_OFFSET UNITYSDK_OFFSET(0xF8FC540)
#define ENVIROMENTSYSTEM_ENVIROPREFABPROPERTY_METHOD_3_1290EA767C459179_OFFSET UNITYSDK_OFFSET(0xF8FC610)
#define ENVIROMENTSYSTEM_ENVIROPREFABPROPERTY_METHOD_3_19295F9E95CC8034_OFFSET UNITYSDK_OFFSET(0xF8FCA80)
#define ENVIROMENTSYSTEM_ENVIROPREFABPROPERTY_METHOD_3_221AD7CB52B41597_OFFSET UNITYSDK_OFFSET(0xF8FCA20)
#define ENVIROMENTSYSTEM_ENVIROPREFABPROPERTY_METHOD_3_289256236CBF6273_OFFSET UNITYSDK_OFFSET(0xF8FC940)
#define ENVIROMENTSYSTEM_ENVIROPREFABPROPERTY_METHOD_3_2B43621760F6D081_OFFSET UNITYSDK_OFFSET(0xF8FC8D0)
#define ENVIROMENTSYSTEM_ENVIROPREFABPROPERTY_METHOD_3_3B142DD188989577_OFFSET UNITYSDK_OFFSET(0xF8FCCA0)
#define ENVIROMENTSYSTEM_ENVIROPREFABPROPERTY_METHOD_3_4329D8CC8C08D0C1_OFFSET UNITYSDK_OFFSET(0xF8FCB80)
#define ENVIROMENTSYSTEM_ENVIROPREFABPROPERTY_METHOD_3_5693914D0131014B_OFFSET UNITYSDK_OFFSET(0xF8FC170)
#define ENVIROMENTSYSTEM_ENVIROPREFABPROPERTY_METHOD_3_778A0F95AAA239C1_OFFSET UNITYSDK_OFFSET(0xF8FC6F0)
#define ENVIROMENTSYSTEM_ENVIROPREFABPROPERTY_METHOD_3_A1781348F0A89177_OFFSET UNITYSDK_OFFSET(0xF8FC260)
#define ENVIROMENTSYSTEM_ENVIROPREFABPROPERTY_METHOD_3_A5ADA4706DA592FA_OFFSET UNITYSDK_OFFSET(0xF8FBE50)
#define ENVIROMENTSYSTEM_ENVIROPREFABPROPERTY_METHOD_3_AA169839CB93802A_OFFSET UNITYSDK_OFFSET(0xF8FC7E0)
#define ENVIROMENTSYSTEM_ENVIROPREFABPROPERTY_METHOD_3_CA373AA1C7054598_1_OFFSET UNITYSDK_OFFSET(0xF8FCC20)
#define ENVIROMENTSYSTEM_ENVIROPREFABPROPERTY_METHOD_3_CA373AA1C7054598_2_OFFSET UNITYSDK_OFFSET(0xF8FCD40)
#define ENVIROMENTSYSTEM_ENVIROPREFABPROPERTY_METHOD_3_CA373AA1C7054598_3_OFFSET UNITYSDK_OFFSET(0xF8FCDC0)
#define ENVIROMENTSYSTEM_ENVIROPREFABPROPERTY_METHOD_3_CA373AA1C7054598_4_OFFSET UNITYSDK_OFFSET(0xF8FCE40)
#define ENVIROMENTSYSTEM_ENVIROPREFABPROPERTY_METHOD_3_CA373AA1C7054598_5_OFFSET UNITYSDK_OFFSET(0xF8FCEC0)
#define ENVIROMENTSYSTEM_ENVIROPREFABPROPERTY_METHOD_3_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0xF8FC890)
#define ENVIROMENTSYSTEM_ENVIROPREFABPROPERTY_METHOD_3_CA6BDDCC5F7CE11E_OFFSET UNITYSDK_OFFSET(0xF8FC470)
#define ENVIROMENTSYSTEM_ENVIROPREFABPROPERTY_METHOD_3_CEAC9CDAE2EF9114_OFFSET UNITYSDK_OFFSET(0xF8FC420)
#define ENVIROMENTSYSTEM_ENVIROPREFABPROPERTY_METHOD_3_D0BD1377F2594D33_OFFSET UNITYSDK_OFFSET(0xF8FC310)
#define ENVIROMENTSYSTEM_ENVIROPREFABPROPERTY__CTOR_1_OFFSET UNITYSDK_OFFSET(0xF8FBDB0)
#define ENVIROMENTSYSTEM_ENVIROPREFABPROPERTY__CTOR_OFFSET UNITYSDK_OFFSET(0xF31F8C0)

namespace EnviromentSystem
{
	inline static constexpr unsigned int EnviroPrefabProperty_TypeDefinitionIndex = 46208;

	class EnviroPrefabProperty : public ::EnviromentSystem::EnviroAssetProperty
	{
	public:
		::UnityEngine::GameObject* m_Value; // 0x50
		::System::String* m_Path; // 0x58
		::UnityEngine::GameObject* m_Target_Value; // 0x60

		::System::Void _ctor(::EnviromentSystem::EnviromentProfile* a1, ::System::String* a2, ::System::String* a3)
		{
			return ((::System::Void(*)(::PVOID, ::EnviromentSystem::EnviromentProfile*, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEM_ENVIROPREFABPROPERTY__CTOR_OFFSET))(this, a1, a2, a3);
		}

		::System::Void _ctor_1(::EnviromentSystem::EnviroPrefabProperty* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EnviromentSystem::EnviroPrefabProperty*))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEM_ENVIROPREFABPROPERTY__CTOR_1_OFFSET))(this, a1);
		}

		::System::Void Method_3_A5ADA4706DA592FA(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEM_ENVIROPREFABPROPERTY_METHOD_3_A5ADA4706DA592FA_OFFSET))(this, a1);
		}

		::System::Void Method_3_5693914D0131014B(::EnviromentSystem::EnviroProperty* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EnviromentSystem::EnviroProperty*))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEM_ENVIROPREFABPROPERTY_METHOD_3_5693914D0131014B_OFFSET))(this, a1);
		}

		::System::Void Method_3_CEAC9CDAE2EF9114(::UnityEngine::Rendering::CommandBuffer* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::CommandBuffer*))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEM_ENVIROPREFABPROPERTY_METHOD_3_CEAC9CDAE2EF9114_OFFSET))(this, a1);
		}

		::System::Void Method_3_CA6BDDCC5F7CE11E(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEM_ENVIROPREFABPROPERTY_METHOD_3_CA6BDDCC5F7CE11E_OFFSET))(this, a1);
		}

		::System::Boolean Method_3_0A1B064727BE410F(::EnviromentSystem::EnviroProperty* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::EnviromentSystem::EnviroProperty*))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEM_ENVIROPREFABPROPERTY_METHOD_3_0A1B064727BE410F_OFFSET))(this, a1);
		}

		::System::Void Method_3_1290EA767C459179()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEM_ENVIROPREFABPROPERTY_METHOD_3_1290EA767C459179_OFFSET))(this);
		}

		::System::Void Method_3_778A0F95AAA239C1(::System::Collections::Generic::List_1<::System::String*>*& a1, ::System::Collections::Generic::List_1<::System::Type*>*& a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::String*>*&, ::System::Collections::Generic::List_1<::System::Type*>*&))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEM_ENVIROPREFABPROPERTY_METHOD_3_778A0F95AAA239C1_OFFSET))(this, a1, a2);
		}

		::System::Void Method_3_AA169839CB93802A()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEM_ENVIROPREFABPROPERTY_METHOD_3_AA169839CB93802A_OFFSET))(this);
		}

		::System::Void Method_3_CA373AA1C7054598()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEM_ENVIROPREFABPROPERTY_METHOD_3_CA373AA1C7054598_OFFSET))(this);
		}

		::System::Void Method_3_2B43621760F6D081(::UnityEngine::Object* a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Object*, ::System::Int32))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEM_ENVIROPREFABPROPERTY_METHOD_3_2B43621760F6D081_OFFSET))(this, a1, a2);
		}

		::System::Void Method_3_A1781348F0A89177()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEM_ENVIROPREFABPROPERTY_METHOD_3_A1781348F0A89177_OFFSET))(this);
		}

		::System::Void Method_3_D0BD1377F2594D33()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEM_ENVIROPREFABPROPERTY_METHOD_3_D0BD1377F2594D33_OFFSET))(this);
		}

		::System::Void Method_3_289256236CBF6273(::System::Single P0)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEM_ENVIROPREFABPROPERTY_METHOD_3_289256236CBF6273_OFFSET))(this, P0);
		}

		::System::Void Method_3_221AD7CB52B41597(::EnviromentSystem::EnviroProperty* P0)
		{
			return ((::System::Void(*)(::PVOID, ::EnviromentSystem::EnviroProperty*))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEM_ENVIROPREFABPROPERTY_METHOD_3_221AD7CB52B41597_OFFSET))(this, P0);
		}

		::System::Void Method_3_19295F9E95CC8034(::UnityEngine::Rendering::CommandBuffer* P0)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::CommandBuffer*))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEM_ENVIROPREFABPROPERTY_METHOD_3_19295F9E95CC8034_OFFSET))(this, P0);
		}

		::System::Void Method_3_0414B7E68ABA5085(::System::Single P0)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEM_ENVIROPREFABPROPERTY_METHOD_3_0414B7E68ABA5085_OFFSET))(this, P0);
		}

		::System::Boolean Method_3_4329D8CC8C08D0C1(::EnviromentSystem::EnviroProperty* P0)
		{
			return ((::System::Boolean(*)(::PVOID, ::EnviromentSystem::EnviroProperty*))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEM_ENVIROPREFABPROPERTY_METHOD_3_4329D8CC8C08D0C1_OFFSET))(this, P0);
		}

		::System::Void Method_3_CA373AA1C7054598_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEM_ENVIROPREFABPROPERTY_METHOD_3_CA373AA1C7054598_1_OFFSET))(this);
		}

		::System::Void Method_3_3B142DD188989577(::System::Collections::Generic::List_1<::System::String*>*& P0, ::System::Collections::Generic::List_1<::System::Type*>*& P1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::String*>*&, ::System::Collections::Generic::List_1<::System::Type*>*&))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEM_ENVIROPREFABPROPERTY_METHOD_3_3B142DD188989577_OFFSET))(this, P0, P1);
		}

		::System::Void Method_3_CA373AA1C7054598_2()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEM_ENVIROPREFABPROPERTY_METHOD_3_CA373AA1C7054598_2_OFFSET))(this);
		}

		::System::Void Method_3_CA373AA1C7054598_3()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEM_ENVIROPREFABPROPERTY_METHOD_3_CA373AA1C7054598_3_OFFSET))(this);
		}

		::System::Void Method_3_CA373AA1C7054598_4()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEM_ENVIROPREFABPROPERTY_METHOD_3_CA373AA1C7054598_4_OFFSET))(this);
		}

		::System::Void Method_3_CA373AA1C7054598_5()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEM_ENVIROPREFABPROPERTY_METHOD_3_CA373AA1C7054598_5_OFFSET))(this);
		}
	};
}

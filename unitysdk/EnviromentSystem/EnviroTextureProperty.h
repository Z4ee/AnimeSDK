#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/EnviromentSystem/EnviroAssetProperty.h"

namespace EnviromentSystem { class EnviroProperty; }
namespace EnviromentSystem { class EnviromentProfile; }
namespace System { class String; }
namespace System { class Type; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Texture; }
namespace UnityEngine::Rendering { class CommandBuffer; }

#define ENVIROMENTSYSTEM_ENVIROTEXTUREPROPERTY_METHOD_3_08DCF72FBE01FF99_OFFSET UNITYSDK_OFFSET(0x15332770)
#define ENVIROMENTSYSTEM_ENVIROTEXTUREPROPERTY_METHOD_3_10054BB010E03EDD_OFFSET UNITYSDK_OFFSET(0x15331D90)
#define ENVIROMENTSYSTEM_ENVIROTEXTUREPROPERTY_METHOD_3_2B7DFCAE3F6E482C_OFFSET UNITYSDK_OFFSET(0x15331ED0)
#define ENVIROMENTSYSTEM_ENVIROTEXTUREPROPERTY_METHOD_3_42CCF630B15654B3_OFFSET UNITYSDK_OFFSET(0x153325D0)
#define ENVIROMENTSYSTEM_ENVIROTEXTUREPROPERTY_METHOD_3_582A1DD1E3B84C82_OFFSET UNITYSDK_OFFSET(0x15331CA0)
#define ENVIROMENTSYSTEM_ENVIROTEXTUREPROPERTY_METHOD_3_8BC536D520573A26_OFFSET UNITYSDK_OFFSET(0x153323C0)
#define ENVIROMENTSYSTEM_ENVIROTEXTUREPROPERTY_METHOD_3_AA169839CB93802A_OFFSET UNITYSDK_OFFSET(0x15331E30)
#define ENVIROMENTSYSTEM_ENVIROTEXTUREPROPERTY_METHOD_3_AF2CFBAAD2629B3B_OFFSET UNITYSDK_OFFSET(0x15331A20)
#define ENVIROMENTSYSTEM_ENVIROTEXTUREPROPERTY_METHOD_3_C638E91FC0D3A13A_OFFSET UNITYSDK_OFFSET(0x153324A0)
#define ENVIROMENTSYSTEM_ENVIROTEXTUREPROPERTY_METHOD_3_CA373AA1C7054598_1_OFFSET UNITYSDK_OFFSET(0x15332870)
#define ENVIROMENTSYSTEM_ENVIROTEXTUREPROPERTY_METHOD_3_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x15332830)
#define ENVIROMENTSYSTEM_ENVIROTEXTUREPROPERTY_METHOD_3_CA6BDDCC5F7CE11E_OFFSET UNITYSDK_OFFSET(0x15332350)
#define ENVIROMENTSYSTEM_ENVIROTEXTUREPROPERTY__CTOR_1_OFFSET UNITYSDK_OFFSET(0x15331980)
#define ENVIROMENTSYSTEM_ENVIROTEXTUREPROPERTY__CTOR_OFFSET UNITYSDK_OFFSET(0x15306040)

namespace EnviromentSystem
{
	inline static constexpr unsigned int EnviroTextureProperty_TypeDefinitionIndex = 50051;

	class EnviroTextureProperty : public ::EnviromentSystem::EnviroAssetProperty
	{
	public:
		::UnityEngine::Texture* m_Value; // 0x50
		::System::String* m_Path; // 0x58
		::System::Boolean m_isCube; // 0x60
		::UnityEngine::Texture* m_Target_Tex; // 0x68

		::System::Void _ctor(::EnviromentSystem::EnviromentProfile* a1, ::System::String* a2, ::System::String* a3, ::System::Boolean a4)
		{
			return ((::System::Void(*)(::PVOID, ::EnviromentSystem::EnviromentProfile*, ::System::String*, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEM_ENVIROTEXTUREPROPERTY__CTOR_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void _ctor_1(::EnviromentSystem::EnviroTextureProperty* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EnviromentSystem::EnviroTextureProperty*))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEM_ENVIROTEXTUREPROPERTY__CTOR_1_OFFSET))(this, a1);
		}

		::System::Void Method_3_AF2CFBAAD2629B3B(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEM_ENVIROTEXTUREPROPERTY_METHOD_3_AF2CFBAAD2629B3B_OFFSET))(this, a1);
		}

		::System::Void Method_3_582A1DD1E3B84C82(::EnviromentSystem::EnviroProperty* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EnviromentSystem::EnviroProperty*))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEM_ENVIROTEXTUREPROPERTY_METHOD_3_582A1DD1E3B84C82_OFFSET))(this, a1);
		}

		::System::Void Method_3_2B7DFCAE3F6E482C(::UnityEngine::Rendering::CommandBuffer* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::CommandBuffer*))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEM_ENVIROTEXTUREPROPERTY_METHOD_3_2B7DFCAE3F6E482C_OFFSET))(this, a1);
		}

		::System::Void Method_3_CA6BDDCC5F7CE11E(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEM_ENVIROTEXTUREPROPERTY_METHOD_3_CA6BDDCC5F7CE11E_OFFSET))(this, a1);
		}

		::System::Boolean Method_3_8BC536D520573A26(::EnviromentSystem::EnviroProperty* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::EnviromentSystem::EnviroProperty*))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEM_ENVIROTEXTUREPROPERTY_METHOD_3_8BC536D520573A26_OFFSET))(this, a1);
		}

		::System::Void Method_3_C638E91FC0D3A13A()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEM_ENVIROTEXTUREPROPERTY_METHOD_3_C638E91FC0D3A13A_OFFSET))(this);
		}

		::System::Void Method_3_42CCF630B15654B3(::System::Collections::Generic::List_1<::System::String*>*& a1, ::System::Collections::Generic::List_1<::System::Type*>*& a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::String*>*&, ::System::Collections::Generic::List_1<::System::Type*>*&))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEM_ENVIROTEXTUREPROPERTY_METHOD_3_42CCF630B15654B3_OFFSET))(this, a1, a2);
		}

		::System::Void Method_3_08DCF72FBE01FF99()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEM_ENVIROTEXTUREPROPERTY_METHOD_3_08DCF72FBE01FF99_OFFSET))(this);
		}

		::System::Void Method_3_CA373AA1C7054598()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEM_ENVIROTEXTUREPROPERTY_METHOD_3_CA373AA1C7054598_OFFSET))(this);
		}

		::System::Void Method_3_CA373AA1C7054598_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEM_ENVIROTEXTUREPROPERTY_METHOD_3_CA373AA1C7054598_1_OFFSET))(this);
		}

		::System::Void Method_3_10054BB010E03EDD()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEM_ENVIROTEXTUREPROPERTY_METHOD_3_10054BB010E03EDD_OFFSET))(this);
		}

		::System::Void Method_3_AA169839CB93802A()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEM_ENVIROTEXTUREPROPERTY_METHOD_3_AA169839CB93802A_OFFSET))(this);
		}
	};
}

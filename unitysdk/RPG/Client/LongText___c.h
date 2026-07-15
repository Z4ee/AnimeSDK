#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T1, typename T2> class Func_2; }
namespace UnityEngine { class Component; }

#define RPG_CLIENT_LONGTEXT___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x15BD93A0)
#define RPG_CLIENT_LONGTEXT___C__CTOR_OFFSET UNITYSDK_OFFSET(0x15BD93E0)
#define RPG_CLIENT_LONGTEXT___C__ONPOPULATEMESH_B__15_0_OFFSET UNITYSDK_OFFSET(0x15BD93F0)

namespace RPG::Client
{
	inline static constexpr unsigned int LongText___c_TypeDefinitionIndex = 69288;

	class LongText___c : public ::System::Object
	{
	public:
		static ::System::Func_2<::UnityEngine::Component*, ::System::Boolean>** StaticGet___9__15_0()
		{
			return (::System::Func_2<::UnityEngine::Component*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(LongText___c_TypeDefinitionIndex)->GetStaticField(0x3F130);
		}
		static ::RPG::Client::LongText___c** StaticGet___9()
		{
			return (::RPG::Client::LongText___c**)Il2CppClass::FromTypeDefinitionIndex(LongText___c_TypeDefinitionIndex)->GetStaticField(0x3F138);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_LONGTEXT___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LONGTEXT___C__CTOR_OFFSET))(this);
		}

		::System::Boolean _OnPopulateMesh_b__15_0(::UnityEngine::Component* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Component*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LONGTEXT___C__ONPOPULATEMESH_B__15_0_OFFSET))(this, a1);
		}
	};
}

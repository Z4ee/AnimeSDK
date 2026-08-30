#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }
namespace System { template <typename T> class Action_1; }

#define COFFEE_UIPARTICLEINTERNAL_FASTACTION___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1649E1C0)
#define COFFEE_UIPARTICLEINTERNAL_FASTACTION___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1649E1F0)
#define COFFEE_UIPARTICLEINTERNAL_FASTACTION___C__INVOKE_B__0_0_OFFSET UNITYSDK_OFFSET(0x1649E200)

namespace Coffee::UIParticleInternal
{
	inline static constexpr unsigned int FastAction___c_TypeDefinitionIndex = 43937;

	class FastAction___c : public ::System::Object
	{
	public:
		static ::System::Action_1<::System::Action*>** StaticGet___9__0_0()
		{
			return (::System::Action_1<::System::Action*>**)Il2CppClass::FromTypeDefinitionIndex(FastAction___c_TypeDefinitionIndex)->GetStaticField(0x1330);
		}
		static ::Coffee::UIParticleInternal::FastAction___c** StaticGet___9()
		{
			return (::Coffee::UIParticleInternal::FastAction___c**)Il2CppClass::FromTypeDefinitionIndex(FastAction___c_TypeDefinitionIndex)->GetStaticField(0x1338);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + COFFEE_UIPARTICLEINTERNAL_FASTACTION___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + COFFEE_UIPARTICLEINTERNAL_FASTACTION___C__CTOR_OFFSET))(this);
		}

		::System::Void _Invoke_b__0_0(::System::Action* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + COFFEE_UIPARTICLEINTERNAL_FASTACTION___C__INVOKE_B__0_0_OFFSET))(this, a1);
		}
	};
}

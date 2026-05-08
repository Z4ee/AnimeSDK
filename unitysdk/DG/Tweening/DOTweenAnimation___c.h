#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T> class Func_1; }

#define DG_TWEENING_DOTWEENANIMATION___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x102E2910)
#define DG_TWEENING_DOTWEENANIMATION___C__CREATETWEEN_B__35_0_OFFSET UNITYSDK_OFFSET(0x102E2960)
#define DG_TWEENING_DOTWEENANIMATION___C__CTOR_OFFSET UNITYSDK_OFFSET(0x102E2950)

namespace DG::Tweening
{
	inline static constexpr unsigned int DOTweenAnimation___c_TypeDefinitionIndex = 85917;

	class DOTweenAnimation___c : public ::System::Object
	{
	public:
		static ::System::Func_1<::System::Boolean>** StaticGet___9__35_0()
		{
			return (::System::Func_1<::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(DOTweenAnimation___c_TypeDefinitionIndex)->GetStaticField(0x4AC10);
		}
		static ::DG::Tweening::DOTweenAnimation___c** StaticGet___9()
		{
			return (::DG::Tweening::DOTweenAnimation___c**)Il2CppClass::FromTypeDefinitionIndex(DOTweenAnimation___c_TypeDefinitionIndex)->GetStaticField(0x4AC18);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DG_TWEENING_DOTWEENANIMATION___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DG_TWEENING_DOTWEENANIMATION___C__CTOR_OFFSET))(this);
		}

		::System::Boolean _CreateTween_b__35_0()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + DG_TWEENING_DOTWEENANIMATION___C__CREATETWEEN_B__35_0_OFFSET))(this);
		}
	};
}

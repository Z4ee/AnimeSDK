#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Coffee::UISoftMask { class SoftMask; }
namespace System { template <typename T> class Predicate_1; }

#define COFFEE_UISOFTMASK_SOFTMASK___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1E4CA4A0)
#define COFFEE_UISOFTMASK_SOFTMASK___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1E4CA4E0)
#define COFFEE_UISOFTMASK_SOFTMASK___C__SETPARENT_B__84_0_OFFSET UNITYSDK_OFFSET(0x1E4CA4F0)

namespace Coffee::UISoftMask
{
	inline static constexpr unsigned int SoftMask___c_TypeDefinitionIndex = 90503;

	class SoftMask___c : public ::System::Object
	{
	public:
		static ::System::Predicate_1<::Coffee::UISoftMask::SoftMask*>** StaticGet___9__84_0()
		{
			return (::System::Predicate_1<::Coffee::UISoftMask::SoftMask*>**)Il2CppClass::FromTypeDefinitionIndex(SoftMask___c_TypeDefinitionIndex)->GetStaticField(0x4E3D0);
		}
		static ::Coffee::UISoftMask::SoftMask___c** StaticGet___9()
		{
			return (::Coffee::UISoftMask::SoftMask___c**)Il2CppClass::FromTypeDefinitionIndex(SoftMask___c_TypeDefinitionIndex)->GetStaticField(0x4E3D8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + COFFEE_UISOFTMASK_SOFTMASK___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + COFFEE_UISOFTMASK_SOFTMASK___C__CTOR_OFFSET))(this);
		}

		::System::Boolean _SetParent_b__84_0(::Coffee::UISoftMask::SoftMask* x)
		{
			return ((::System::Boolean(*)(::PVOID, ::Coffee::UISoftMask::SoftMask*))((::PBYTE)hIl2Cpp + COFFEE_UISOFTMASK_SOFTMASK___C__SETPARENT_B__84_0_OFFSET))(this, x);
		}
	};
}

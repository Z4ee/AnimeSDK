#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define SPINE_IINTERPOLATION_APPLY_OFFSET UNITYSDK_OFFSET(0x1839E2D0)
#define SPINE_IINTERPOLATION__CCTOR_OFFSET UNITYSDK_OFFSET(0x1839E320)
#define SPINE_IINTERPOLATION__CTOR_OFFSET UNITYSDK_OFFSET(0x1839E310)

namespace Spine
{
	inline static constexpr unsigned int IInterpolation_TypeDefinitionIndex = 30719;

	class IInterpolation : public ::System::Object
	{
	public:
		static ::Spine::IInterpolation** StaticGet_Pow2Out()
		{
			return (::Spine::IInterpolation**)Il2CppClass::FromTypeDefinitionIndex(IInterpolation_TypeDefinitionIndex)->GetStaticField(0x303F0);
		}
		static ::Spine::IInterpolation** StaticGet_Pow2()
		{
			return (::Spine::IInterpolation**)Il2CppClass::FromTypeDefinitionIndex(IInterpolation_TypeDefinitionIndex)->GetStaticField(0x303F8);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_IINTERPOLATION__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SPINE_IINTERPOLATION__CCTOR_OFFSET))();
		}

		::System::Single Apply(::System::Single start, ::System::Single end, ::System::Single a)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + SPINE_IINTERPOLATION_APPLY_OFFSET))(this, start, end, a);
		}
	};
}

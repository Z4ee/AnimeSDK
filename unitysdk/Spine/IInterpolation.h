#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define SPINE_IINTERPOLATION_APPLY_OFFSET UNITYSDK_OFFSET(0x160562C0)
#define SPINE_IINTERPOLATION__CCTOR_OFFSET UNITYSDK_OFFSET(0x16056390)
#define SPINE_IINTERPOLATION__CTOR_OFFSET UNITYSDK_OFFSET(0x16056380)

namespace Spine
{
	inline static constexpr unsigned int IInterpolation_TypeDefinitionIndex = 38380;

	class IInterpolation : public ::System::Object
	{
	public:
		static ::Spine::IInterpolation** StaticGet_Pow2()
		{
			return (::Spine::IInterpolation**)Il2CppClass::FromTypeDefinitionIndex(IInterpolation_TypeDefinitionIndex)->GetStaticField(0x520A0);
		}
		static ::Spine::IInterpolation** StaticGet_Pow2Out()
		{
			return (::Spine::IInterpolation**)Il2CppClass::FromTypeDefinitionIndex(IInterpolation_TypeDefinitionIndex)->GetStaticField(0x520A8);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_IINTERPOLATION__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SPINE_IINTERPOLATION__CCTOR_OFFSET))();
		}

		::System::Single Apply(::System::Single a1, ::System::Single a2, ::System::Single a3)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + SPINE_IINTERPOLATION_APPLY_OFFSET))(this, a1, a2, a3);
		}
	};
}

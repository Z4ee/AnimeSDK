#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define DG_TWEENING_DOTWEENPRO__CCTOR_OFFSET UNITYSDK_OFFSET(0x1E7B30D0)
#define DG_TWEENING_DOTWEENPRO__CTOR_OFFSET UNITYSDK_OFFSET(0x1E7B30C0)

namespace DG::Tweening
{
	inline static constexpr unsigned int DOTweenPro_TypeDefinitionIndex = 34479;

	class DOTweenPro : public ::System::Object
	{
	public:
		static ::System::String** StaticGet_Version()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(DOTweenPro_TypeDefinitionIndex)->GetStaticField(0x27A80);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DG_TWEENING_DOTWEENPRO__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DG_TWEENING_DOTWEENPRO__CCTOR_OFFSET))();
		}
	};
}

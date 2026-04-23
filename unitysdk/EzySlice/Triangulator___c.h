#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/EzySlice/Triangulator_Mapped2D.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T> class Comparison_1; }

#define EZYSLICE_TRIANGULATOR___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x8C0BE70)
#define EZYSLICE_TRIANGULATOR___C__CTOR_OFFSET UNITYSDK_OFFSET(0x8C0BEB0)
#define EZYSLICE_TRIANGULATOR___C__MONOTONECHAIN_B__2_0_OFFSET UNITYSDK_OFFSET(0x8C0BEC0)

namespace EzySlice
{
	inline static constexpr unsigned int Triangulator___c_TypeDefinitionIndex = 43816;

	class Triangulator___c : public ::System::Object
	{
	public:
		static ::EzySlice::Triangulator___c** StaticGet___9()
		{
			return (::EzySlice::Triangulator___c**)Il2CppClass::FromTypeDefinitionIndex(Triangulator___c_TypeDefinitionIndex)->GetStaticField(0x3C4E0);
		}
		static ::System::Comparison_1<::EzySlice::Triangulator_Mapped2D>** StaticGet___9__2_0()
		{
			return (::System::Comparison_1<::EzySlice::Triangulator_Mapped2D>**)Il2CppClass::FromTypeDefinitionIndex(Triangulator___c_TypeDefinitionIndex)->GetStaticField(0x3C4E8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + EZYSLICE_TRIANGULATOR___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EZYSLICE_TRIANGULATOR___C__CTOR_OFFSET))(this);
		}

		::System::Int32 _MonotoneChain_b__2_0(::EzySlice::Triangulator_Mapped2D a, ::EzySlice::Triangulator_Mapped2D b)
		{
			return ((::System::Int32(*)(::PVOID, ::EzySlice::Triangulator_Mapped2D, ::EzySlice::Triangulator_Mapped2D))((::PBYTE)hIl2Cpp + EZYSLICE_TRIANGULATOR___C__MONOTONECHAIN_B__2_0_OFFSET))(this, a, b);
		}
	};
}

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/EzySlice/TextureRegion.h"
#include "unitysdk/EzySlice/Triangle.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace System::Collections::Generic { template <typename T> class List_1; }

#define EZYSLICE_TRIANGULATOR_MONOTONECHAIN_1_OFFSET UNITYSDK_OFFSET(0x1D458ED0)
#define EZYSLICE_TRIANGULATOR_MONOTONECHAIN_OFFSET UNITYSDK_OFFSET(0x1D45AD00)
#define EZYSLICE_TRIANGULATOR__CTOR_OFFSET UNITYSDK_OFFSET(0x1D45ADA0)

namespace EzySlice
{
	inline static constexpr unsigned int Triangulator_TypeDefinitionIndex = 47462;

	class Triangulator : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EZYSLICE_TRIANGULATOR__CTOR_OFFSET))(this);
		}

		static ::System::Boolean MonotoneChain(::System::Collections::Generic::List_1<::UnityEngine::Vector3>* a1, ::UnityEngine::Vector3 a2, ::System::Collections::Generic::List_1<::EzySlice::Triangle>*& a3)
		{
			return ((::System::Boolean(*)(::System::Collections::Generic::List_1<::UnityEngine::Vector3>*, ::UnityEngine::Vector3, ::System::Collections::Generic::List_1<::EzySlice::Triangle>*&))((::PBYTE)hIl2Cpp + EZYSLICE_TRIANGULATOR_MONOTONECHAIN_OFFSET))(a1, a2, a3);
		}

		static ::System::Boolean MonotoneChain_1(::System::Collections::Generic::List_1<::UnityEngine::Vector3>* a1, ::UnityEngine::Vector3 a2, ::System::Collections::Generic::List_1<::EzySlice::Triangle>*& a3, ::EzySlice::TextureRegion a4)
		{
			return ((::System::Boolean(*)(::System::Collections::Generic::List_1<::UnityEngine::Vector3>*, ::UnityEngine::Vector3, ::System::Collections::Generic::List_1<::EzySlice::Triangle>*&, ::EzySlice::TextureRegion))((::PBYTE)hIl2Cpp + EZYSLICE_TRIANGULATOR_MONOTONECHAIN_1_OFFSET))(a1, a2, a3, a4);
		}
	};
}

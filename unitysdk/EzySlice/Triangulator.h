#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/EzySlice/TextureRegion.h"
#include "unitysdk/EzySlice/Triangle.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace System::Collections::Generic { template <typename T> class List_1; }

#define EZYSLICE_TRIANGULATOR_MONOTONECHAIN_1_OFFSET UNITYSDK_OFFSET(0x83E1F00)
#define EZYSLICE_TRIANGULATOR_MONOTONECHAIN_OFFSET UNITYSDK_OFFSET(0x83E3D80)
#define EZYSLICE_TRIANGULATOR__CTOR_OFFSET UNITYSDK_OFFSET(0x83E3E20)

namespace EzySlice
{
	inline static constexpr unsigned int Triangulator_TypeDefinitionIndex = 37937;

	class Triangulator : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EZYSLICE_TRIANGULATOR__CTOR_OFFSET))(this);
		}

		static ::System::Boolean MonotoneChain(::System::Collections::Generic::List_1<::UnityEngine::Vector3>* vertices, ::UnityEngine::Vector3 normal, ::System::Collections::Generic::List_1<::EzySlice::Triangle>*& tri)
		{
			return ((::System::Boolean(*)(::System::Collections::Generic::List_1<::UnityEngine::Vector3>*, ::UnityEngine::Vector3, ::System::Collections::Generic::List_1<::EzySlice::Triangle>*&))((::PBYTE)hIl2Cpp + EZYSLICE_TRIANGULATOR_MONOTONECHAIN_OFFSET))(vertices, normal, tri);
		}

		static ::System::Boolean MonotoneChain_1(::System::Collections::Generic::List_1<::UnityEngine::Vector3>* vertices, ::UnityEngine::Vector3 normal, ::System::Collections::Generic::List_1<::EzySlice::Triangle>*& tri, ::EzySlice::TextureRegion texRegion)
		{
			return ((::System::Boolean(*)(::System::Collections::Generic::List_1<::UnityEngine::Vector3>*, ::UnityEngine::Vector3, ::System::Collections::Generic::List_1<::EzySlice::Triangle>*&, ::EzySlice::TextureRegion))((::PBYTE)hIl2Cpp + EZYSLICE_TRIANGULATOR_MONOTONECHAIN_1_OFFSET))(vertices, normal, tri, texRegion);
		}
	};
}

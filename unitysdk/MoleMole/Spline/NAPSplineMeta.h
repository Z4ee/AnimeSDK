#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FluffyUnderware/Curvy/CurvyMetadataBase_Spline.h"

namespace MoleMole::DataStructures::Common { class Comment; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class MonoBehaviour; }

#define MOLEMOLE_SPLINE_NAPSPLINEMETA_AWAKE_OFFSET UNITYSDK_OFFSET(0x18CFEC30)
#define MOLEMOLE_SPLINE_NAPSPLINEMETA_GET_TAG_OFFSET UNITYSDK_OFFSET(0x18CFEC20)
#define MOLEMOLE_SPLINE_NAPSPLINEMETA_METHOD_7_7A8DAE462BFF8B7E_OFFSET UNITYSDK_OFFSET(0x18CFED70)
#define MOLEMOLE_SPLINE_NAPSPLINEMETA__CTOR_OFFSET UNITYSDK_OFFSET(0x18CFEC80)
#define MOLEMOLE_SPLINE_NAPSPLINEMETA___BASE_AWAKE_OFFSET UNITYSDK_OFFSET(0x18CFED60)

namespace MoleMole::Spline
{
	inline static constexpr unsigned int NAPSplineMeta_TypeDefinitionIndex = 52129;

	class NAPSplineMeta : public ::FluffyUnderware::Curvy::CurvyMetadataBase_Spline
	{
	public:
		::System::String* _tag; // 0x30
		::MoleMole::DataStructures::Common::Comment* Comment; // 0x38
		::System::Collections::Generic::List_1<::UnityEngine::MonoBehaviour*>* Field_7_2; // 0x40

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SPLINE_NAPSPLINEMETA__CTOR_OFFSET))(this);
		}

		::System::String* get_Tag()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SPLINE_NAPSPLINEMETA_GET_TAG_OFFSET))(this);
		}

		::System::Void Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SPLINE_NAPSPLINEMETA_AWAKE_OFFSET))(this);
		}

		::System::Void __base_Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SPLINE_NAPSPLINEMETA___BASE_AWAKE_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::UnityEngine::MonoBehaviour*>* Method_7_7A8DAE462BFF8B7E()
		{
			return ((::System::Collections::Generic::List_1<::UnityEngine::MonoBehaviour*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SPLINE_NAPSPLINEMETA_METHOD_7_7A8DAE462BFF8B7E_OFFSET))(this);
		}
	};
}

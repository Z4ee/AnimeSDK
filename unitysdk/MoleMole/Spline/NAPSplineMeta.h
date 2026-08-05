#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FluffyUnderware/Curvy/CurvyMetadataBase_Spline.h"

namespace MoleMole::DataStructures::Common { class Comment; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class MonoBehaviour; }

#define MOLEMOLE_SPLINE_NAPSPLINEMETA_AWAKE_OFFSET UNITYSDK_OFFSET(0x145073A0)
#define MOLEMOLE_SPLINE_NAPSPLINEMETA_GET_TAG_OFFSET UNITYSDK_OFFSET(0x14507390)
#define MOLEMOLE_SPLINE_NAPSPLINEMETA_METHOD_7_7A8DAE462BFF8B7E_OFFSET UNITYSDK_OFFSET(0x145074E0)
#define MOLEMOLE_SPLINE_NAPSPLINEMETA__CTOR_OFFSET UNITYSDK_OFFSET(0x145073F0)
#define MOLEMOLE_SPLINE_NAPSPLINEMETA___BASE_AWAKE_OFFSET UNITYSDK_OFFSET(0x145074D0)

namespace MoleMole::Spline
{
	inline static constexpr unsigned int NAPSplineMeta_TypeDefinitionIndex = 40842;

	class NAPSplineMeta : public ::FluffyUnderware::Curvy::CurvyMetadataBase_Spline
	{
	public:
		::System::String* _tag; // 0x38
		::MoleMole::DataStructures::Common::Comment* Comment; // 0x40
		::System::Collections::Generic::List_1<::UnityEngine::MonoBehaviour*>* Field_7_0; // 0x48

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

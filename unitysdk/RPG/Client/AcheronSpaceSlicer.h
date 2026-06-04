#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/AcheronSpaceSlicer_SlicePlane.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

class Class_1_D0ED0CDEA61AA610;
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Material; }
namespace UnityEngine { class MeshFilter; }

#define RPG_CLIENT_ACHERONSPACESLICER_METHOD_5_2045BA2947DBDBCE_OFFSET UNITYSDK_OFFSET(0xB077CA0)
#define RPG_CLIENT_ACHERONSPACESLICER_METHOD_5_81FEFD1B22CE37A2_OFFSET UNITYSDK_OFFSET(0xB078140)
#define RPG_CLIENT_ACHERONSPACESLICER__CTOR_OFFSET UNITYSDK_OFFSET(0xB0784B0)

namespace RPG::Client
{
	inline static constexpr unsigned int AcheronSpaceSlicer_TypeDefinitionIndex = 65780;

	class AcheronSpaceSlicer : public ::UnityEngine::MonoBehaviour
	{
	public:
		::RPG::Client::AcheronSpaceSlicer_SlicePlane plane; // 0x18
		::UnityEngine::Material* Mat; // 0x30
		::System::Collections::Generic::List_1<::UnityEngine::MeshFilter*>* SliceTargets; // 0x38
		::System::Single SliceDistance; // 0x40
		::System::Boolean NeedHull; // 0x44
		::Class_1_D0ED0CDEA61AA610* Field_5_5; // 0x48
		::System::Collections::Generic::List_1<::UnityEngine::MeshFilter*>* Field_5_6; // 0x50

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACHERONSPACESLICER__CTOR_OFFSET))(this);
		}

		::System::Void Method_5_2045BA2947DBDBCE()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACHERONSPACESLICER_METHOD_5_2045BA2947DBDBCE_OFFSET))(this);
		}

		::System::Void Method_5_81FEFD1B22CE37A2()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACHERONSPACESLICER_METHOD_5_81FEFD1B22CE37A2_OFFSET))(this);
		}
	};
}

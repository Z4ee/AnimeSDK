#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

class Class_3_C93CC3D2C2AC4067;
namespace MoleMole { class FeaturePoint; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_MONOFEATUREPOINT_GETFEATUREPOINTANGLE_OFFSET UNITYSDK_OFFSET(0x11D4C430)
#define MOLEMOLE_MONOFEATUREPOINT_GETNEARESTFEATUREPOINT_OFFSET UNITYSDK_OFFSET(0x11D4BE70)
#define MOLEMOLE_MONOFEATUREPOINT_METHOD_5_9765352E01408D38_OFFSET UNITYSDK_OFFSET(0x11D4C1D0)
#define MOLEMOLE_MONOFEATUREPOINT__CTOR_OFFSET UNITYSDK_OFFSET(0x11D4C6D0)

namespace MoleMole
{
	inline static constexpr unsigned int MonoFeaturePoint_TypeDefinitionIndex = 88019;

	class MonoFeaturePoint : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::Collections::Generic::List_1<::MoleMole::FeaturePoint*>* featurePointList; // 0x18
		::Class_3_C93CC3D2C2AC4067* Field_5_0; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOFEATUREPOINT__CTOR_OFFSET))(this);
		}

		::MoleMole::FeaturePoint* GetNearestFeaturePoint()
		{
			return ((::MoleMole::FeaturePoint*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOFEATUREPOINT_GETNEARESTFEATUREPOINT_OFFSET))(this);
		}

		::System::Single GetFeaturePointAngle(::MoleMole::FeaturePoint* a1)
		{
			return ((::System::Single(*)(::PVOID, ::MoleMole::FeaturePoint*))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOFEATUREPOINT_GETFEATUREPOINTANGLE_OFFSET))(this, a1);
		}

		::System::Void Method_5_9765352E01408D38()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOFEATUREPOINT_METHOD_5_9765352E01408D38_OFFSET))(this);
		}
	};
}

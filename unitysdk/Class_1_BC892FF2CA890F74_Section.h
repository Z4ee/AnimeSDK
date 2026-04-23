#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_BC892FF2CA890F74_SectionPoint.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Rect.h"

namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_BC892FF2CA890F74_SECTION_GET_BOUNDSBOX_OFFSET UNITYSDK_OFFSET(0x9141960)
#define CLASS_1_BC892FF2CA890F74_SECTION_METHOD_1_241D2975ABFF238C_OFFSET UNITYSDK_OFFSET(0x91424F0)
#define CLASS_1_BC892FF2CA890F74_SECTION_METHOD_1_8CD7F5688F88C68F_OFFSET UNITYSDK_OFFSET(0x9142410)
#define CLASS_1_BC892FF2CA890F74_SECTION__CTOR_OFFSET UNITYSDK_OFFSET(0x91423F0)

inline static constexpr unsigned int Class_1_BC892FF2CA890F74_Section_TypeDefinitionIndex = 67769;

class Class_1_BC892FF2CA890F74_Section : public ::System::Object
{
public:
	::System::Boolean ifAutoConnectEnd; // 0x10
	::System::Collections::Generic::List_1<::Class_1_BC892FF2CA890F74_SectionPoint>* SectionPoints; // 0x18
	::UnityEngine::Rect _BoundsBox; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_BC892FF2CA890F74_SECTION__CTOR_OFFSET))(this);
	}

	::UnityEngine::Rect get_BoundsBox()
	{
		return ((::UnityEngine::Rect(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_BC892FF2CA890F74_SECTION_GET_BOUNDSBOX_OFFSET))(this);
	}

	::UnityEngine::Rect Method_1_8CD7F5688F88C68F()
	{
		return ((::UnityEngine::Rect(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_BC892FF2CA890F74_SECTION_METHOD_1_8CD7F5688F88C68F_OFFSET))(this);
	}

	::Class_1_BC892FF2CA890F74_Section* Method_1_241D2975ABFF238C()
	{
		return ((::Class_1_BC892FF2CA890F74_Section*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_BC892FF2CA890F74_SECTION_METHOD_1_241D2975ABFF238C_OFFSET))(this);
	}
};

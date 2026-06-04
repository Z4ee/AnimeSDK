#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_F0BC55524B5D6A07_SectionPoint.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Rect.h"

namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_F0BC55524B5D6A07_SECTION_GET_BOUNDSBOX_OFFSET UNITYSDK_OFFSET(0x13A5BAE0)
#define CLASS_1_F0BC55524B5D6A07_SECTION_METHOD_1_0E8225F68821BFA6_OFFSET UNITYSDK_OFFSET(0x13A5C640)
#define CLASS_1_F0BC55524B5D6A07_SECTION_METHOD_1_241D2975ABFF238C_OFFSET UNITYSDK_OFFSET(0x13A5C740)
#define CLASS_1_F0BC55524B5D6A07_SECTION__CTOR_OFFSET UNITYSDK_OFFSET(0x13A5C620)

inline static constexpr unsigned int Class_1_F0BC55524B5D6A07_Section_TypeDefinitionIndex = 68727;

class Class_1_F0BC55524B5D6A07_Section : public ::System::Object
{
public:
	::System::Boolean ifAutoConnectEnd; // 0x10
	::System::Collections::Generic::List_1<::Class_1_F0BC55524B5D6A07_SectionPoint>* SectionPoints; // 0x18
	::UnityEngine::Rect _BoundsBox; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F0BC55524B5D6A07_SECTION__CTOR_OFFSET))(this);
	}

	::UnityEngine::Rect get_BoundsBox()
	{
		return ((::UnityEngine::Rect(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F0BC55524B5D6A07_SECTION_GET_BOUNDSBOX_OFFSET))(this);
	}

	::UnityEngine::Rect Method_1_0E8225F68821BFA6()
	{
		return ((::UnityEngine::Rect(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F0BC55524B5D6A07_SECTION_METHOD_1_0E8225F68821BFA6_OFFSET))(this);
	}

	::Class_1_F0BC55524B5D6A07_Section* Method_1_241D2975ABFF238C()
	{
		return ((::Class_1_F0BC55524B5D6A07_Section*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F0BC55524B5D6A07_SECTION_METHOD_1_241D2975ABFF238C_OFFSET))(this);
	}
};

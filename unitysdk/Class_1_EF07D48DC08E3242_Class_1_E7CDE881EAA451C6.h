#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace FluffyUnderware::Curvy { class CurvyMetadataBase_Point; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }

#define CLASS_1_EF07D48DC08E3242_CLASS_1_E7CDE881EAA451C6_METHOD_1_76F5674C04558E33_OFFSET UNITYSDK_OFFSET(0xE22C1C0)
#define CLASS_1_EF07D48DC08E3242_CLASS_1_E7CDE881EAA451C6__CTOR_OFFSET UNITYSDK_OFFSET(0xE22C1B0)

inline static constexpr unsigned int Class_1_EF07D48DC08E3242_Class_1_E7CDE881EAA451C6_TypeDefinitionIndex = 61087;

class Class_1_EF07D48DC08E3242_Class_1_E7CDE881EAA451C6 : public ::System::Object
{
public:
	::System::Collections::Generic::IReadOnlyList_1<::System::String*>* Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EF07D48DC08E3242_CLASS_1_E7CDE881EAA451C6__CTOR_OFFSET))(this);
	}

	::System::Boolean Method_1_76F5674C04558E33(::FluffyUnderware::Curvy::CurvyMetadataBase_Point* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::FluffyUnderware::Curvy::CurvyMetadataBase_Point*))((::PBYTE)hIl2Cpp + CLASS_1_EF07D48DC08E3242_CLASS_1_E7CDE881EAA451C6_METHOD_1_76F5674C04558E33_OFFSET))(this, a1);
	}
};

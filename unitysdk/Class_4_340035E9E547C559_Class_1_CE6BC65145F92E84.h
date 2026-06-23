#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace FluffyUnderware::Curvy { class CurvySplineEventArgs; }
namespace System { class Action; }

#define CLASS_4_340035E9E547C559_CLASS_1_CE6BC65145F92E84_METHOD_1_203A12CFB5F8736B_OFFSET UNITYSDK_OFFSET(0x145B5D10)
#define CLASS_4_340035E9E547C559_CLASS_1_CE6BC65145F92E84__CTOR_OFFSET UNITYSDK_OFFSET(0x145B5D00)

inline static constexpr unsigned int Class_4_340035E9E547C559_Class_1_CE6BC65145F92E84_TypeDefinitionIndex = 46075;

class Class_4_340035E9E547C559_Class_1_CE6BC65145F92E84 : public ::System::Object
{
public:
	::System::Action* Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_340035E9E547C559_CLASS_1_CE6BC65145F92E84__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_203A12CFB5F8736B(::FluffyUnderware::Curvy::CurvySplineEventArgs* a1)
	{
		return ((::System::Void(*)(::PVOID, ::FluffyUnderware::Curvy::CurvySplineEventArgs*))((::PBYTE)hIl2Cpp + CLASS_4_340035E9E547C559_CLASS_1_CE6BC65145F92E84_METHOD_1_203A12CFB5F8736B_OFFSET))(this, a1);
	}
};

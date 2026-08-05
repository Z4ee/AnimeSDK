#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_B41FC499D35DE647.h"
#include "unitysdk/Struct_2_F39E5CAD66728FF0.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }
namespace System { class String; }
namespace System { template <typename T> class Func_1; }
namespace System::Collections::Generic { template <typename T> class IList_1; }
namespace UnityEngine { class GameObject; }

#define CLASS_1_B7BCCA11D41E2CA6_METHOD_1_B64C60973842FE45_OFFSET UNITYSDK_OFFSET(0x123C1A80)
#define CLASS_1_B7BCCA11D41E2CA6_POLISH_OFFSET UNITYSDK_OFFSET(0x123C1980)
#define CLASS_1_B7BCCA11D41E2CA6_RECYCLE_OFFSET UNITYSDK_OFFSET(0x123C19E0)
#define CLASS_1_B7BCCA11D41E2CA6__CTOR_OFFSET UNITYSDK_OFFSET(0x123C1A70)

inline static constexpr unsigned int Class_1_B7BCCA11D41E2CA6_TypeDefinitionIndex = 52337;

class Class_1_B7BCCA11D41E2CA6 : public ::System::Object
{
public:
	::UnityEngine::GameObject* Field_1_1; // 0x10
	::Struct_2_F39E5CAD66728FF0 Field_1_10; // 0x18
	::System::String* Field_1_0; // 0x28
	::System::Collections::Generic::IList_1<::System::String*>* Field_1_2; // 0x30
	::System::Action* Field_1_11; // 0x38
	::System::Func_1<::System::Boolean>* Field_1_4; // 0x40
	::System::Boolean Field_1_6; // 0x48
	::Enum_3_B41FC499D35DE647 Field_1_7; // 0x4C
	::System::Single Field_1_5; // 0x50

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B7BCCA11D41E2CA6__CTOR_OFFSET))(this);
	}

	::System::Void Polish()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B7BCCA11D41E2CA6_POLISH_OFFSET))(this);
	}

	::System::Void Recycle()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B7BCCA11D41E2CA6_RECYCLE_OFFSET))(this);
	}

	static ::Class_1_B7BCCA11D41E2CA6* Method_1_B64C60973842FE45()
	{
		return ((::Class_1_B7BCCA11D41E2CA6*(*)())((::PBYTE)hIl2Cpp + CLASS_1_B7BCCA11D41E2CA6_METHOD_1_B64C60973842FE45_OFFSET))();
	}
};

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T> class Action_1; }
namespace UnityEngine { class Object; }

#define CLASS_2_6A75EA4A76790B33___C__DISPLAYCLASS60_0__CTOR_OFFSET UNITYSDK_OFFSET(0x904C370)
#define CLASS_2_6A75EA4A76790B33___C__DISPLAYCLASS60_0__PRELOADPROPERTYRESOURCESWITHHANDLE_B__0_OFFSET UNITYSDK_OFFSET(0x904F850)

inline static constexpr unsigned int Class_2_6A75EA4A76790B33___c__DisplayClass60_0_TypeDefinitionIndex = 46032;

class Class_2_6A75EA4A76790B33___c__DisplayClass60_0 : public ::System::Object
{
public:
	::System::Action_1<::UnityEngine::Object*>* __9__0; // 0x10
	::System::Int32 h; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6A75EA4A76790B33___C__DISPLAYCLASS60_0__CTOR_OFFSET))(this);
	}

	::System::Void _PreloadPropertyResourcesWithHandle_b__0(::UnityEngine::Object* obj)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Object*))((::PBYTE)hIl2Cpp + CLASS_2_6A75EA4A76790B33___C__DISPLAYCLASS60_0__PRELOADPROPERTYRESOURCESWITHHANDLE_B__0_OFFSET))(this, obj);
	}
};

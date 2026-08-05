#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_3_F3948D237059FA7A.h"
#include "unitysdk/Struct_2_29439DBE2B63DCF3.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace System { class String; }
template <typename T> class Class_4_2FF7D360A2F3EC48;

#define CLASS_4_036FCC0497AAE8FC_METHOD_4_25DEA5C65A602671_OFFSET UNITYSDK_OFFSET(0x1BC27F80)
#define CLASS_4_036FCC0497AAE8FC_METHOD_4_29CA7C76C5D57032_OFFSET UNITYSDK_OFFSET(0x1BC279A0)
#define CLASS_4_036FCC0497AAE8FC_METHOD_4_9681042564541CD6_OFFSET UNITYSDK_OFFSET(0x1BC27910)
#define CLASS_4_036FCC0497AAE8FC_METHOD_4_E45E3D951D39B180_OFFSET UNITYSDK_OFFSET(0x1BC27C30)
#define CLASS_4_036FCC0497AAE8FC__CTOR_OFFSET UNITYSDK_OFFSET(0x1BC27EE0)

inline static constexpr unsigned int Class_4_036FCC0497AAE8FC_TypeDefinitionIndex = 90796;

class Class_4_036FCC0497AAE8FC : public ::Class_3_F3948D237059FA7A
{
public:
	::Class_4_2FF7D360A2F3EC48<::System::String*>* Field_4_0; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_036FCC0497AAE8FC__CTOR_OFFSET))(this);
	}

	::System::Void Method_4_9681042564541CD6()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_036FCC0497AAE8FC_METHOD_4_9681042564541CD6_OFFSET))(this);
	}

	::System::Void Method_4_29CA7C76C5D57032(::Struct_2_29439DBE2B63DCF3& a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_29439DBE2B63DCF3&))((::PBYTE)hIl2Cpp + CLASS_4_036FCC0497AAE8FC_METHOD_4_29CA7C76C5D57032_OFFSET))(this, a1);
	}

	::System::Void Method_4_E45E3D951D39B180(::UnityEngine::Vector3 a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_4_036FCC0497AAE8FC_METHOD_4_E45E3D951D39B180_OFFSET))(this, a1);
	}

	::System::Void Method_4_25DEA5C65A602671()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_036FCC0497AAE8FC_METHOD_4_25DEA5C65A602671_OFFSET))(this);
	}
};

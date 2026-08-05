#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_BB84AD73499F6B89.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class MonoEffectPluginTransform; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Animation; }
namespace UnityEngine { class Renderer; }

#define CLASS_1_7D0B4A18BCA81BF8_METHOD_1_A26E815EE2AA9047_OFFSET UNITYSDK_OFFSET(0x1AC714A0)
#define CLASS_1_7D0B4A18BCA81BF8_METHOD_1_AECF8BEC293ED42A_OFFSET UNITYSDK_OFFSET(0x1AC717B0)
#define CLASS_1_7D0B4A18BCA81BF8_METHOD_1_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x1AC71760)
#define CLASS_1_7D0B4A18BCA81BF8__CTOR_OFFSET UNITYSDK_OFFSET(0x1AC71490)

inline static constexpr unsigned int Class_1_7D0B4A18BCA81BF8_TypeDefinitionIndex = 41708;

class Class_1_7D0B4A18BCA81BF8 : public ::System::Object
{
public:
	::UnityEngine::Animation* Field_1_5; // 0x10
	::MoleMole::MonoEffectPluginTransform* Field_1_6; // 0x18
	::System::Collections::Generic::List_1<::UnityEngine::Renderer*>* Field_1_7; // 0x20
	::System::Collections::Generic::List_1<::Struct_2_BB84AD73499F6B89>* Field_1_0; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7D0B4A18BCA81BF8__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_1_A26E815EE2AA9047(::Class_1_7D0B4A18BCA81BF8* a1)
	{
		return ((::System::Void(*)(::Class_1_7D0B4A18BCA81BF8*))((::PBYTE)hIl2Cpp + CLASS_1_7D0B4A18BCA81BF8_METHOD_1_A26E815EE2AA9047_OFFSET))(a1);
	}

	static ::Class_1_7D0B4A18BCA81BF8* Method_1_AECF8BEC293ED42A()
	{
		return ((::Class_1_7D0B4A18BCA81BF8*(*)())((::PBYTE)hIl2Cpp + CLASS_1_7D0B4A18BCA81BF8_METHOD_1_AECF8BEC293ED42A_OFFSET))();
	}

	::System::Void Method_1_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7D0B4A18BCA81BF8_METHOD_1_CA373AA1C7054598_OFFSET))(this);
	}
};

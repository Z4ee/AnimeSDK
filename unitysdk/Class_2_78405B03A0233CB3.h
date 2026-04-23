#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_CA217ABF4E3B4F3F.h"

namespace RPG::GameCore { class GameEntity; }
namespace System { class String; }
namespace UnityEngine { class Transform; }

#define CLASS_2_78405B03A0233CB3_METHOD_2_3A9BDB056AF13046_OFFSET UNITYSDK_OFFSET(0x95FEDC0)
#define CLASS_2_78405B03A0233CB3_METHOD_2_6F8D0E1AE17C99D8_OFFSET UNITYSDK_OFFSET(0x95FEF90)
#define CLASS_2_78405B03A0233CB3__CTOR_OFFSET UNITYSDK_OFFSET(0x95FF020)
#define CLASS_2_78405B03A0233CB3__ONBIND_OFFSET UNITYSDK_OFFSET(0x95FEBC0)
#define CLASS_2_78405B03A0233CB3___IFIXBASEPROXY__ONBIND_OFFSET UNITYSDK_OFFSET(0x95FF050)

inline static constexpr unsigned int Class_2_78405B03A0233CB3_TypeDefinitionIndex = 66578;

class Class_2_78405B03A0233CB3 : public ::Class_1_CA217ABF4E3B4F3F
{
public:
	// static const ::System::String* Field_2_0; // 0x0
	::UnityEngine::Transform* Field_2_2; // 0x60
	::UnityEngine::Transform* Field_2_3; // 0x68
	::UnityEngine::Transform* Field_2_4; // 0x70
	::UnityEngine::Transform* Field_2_1; // 0x78

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_78405B03A0233CB3__CTOR_OFFSET))(this);
	}

	::System::Void _OnBind()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_78405B03A0233CB3__ONBIND_OFFSET))(this);
	}

	::System::Void Method_2_3A9BDB056AF13046(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_2_78405B03A0233CB3_METHOD_2_3A9BDB056AF13046_OFFSET))(this, a1);
	}

	::System::Void Method_2_6F8D0E1AE17C99D8(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_2_78405B03A0233CB3_METHOD_2_6F8D0E1AE17C99D8_OFFSET))(this, a1);
	}

	::System::Void __iFixBaseProxy__OnBind()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_78405B03A0233CB3___IFIXBASEPROXY__ONBIND_OFFSET))(this);
	}
};

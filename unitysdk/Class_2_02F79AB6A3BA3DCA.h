#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_CA217ABF4E3B4F3F.h"

namespace RPG::Client { class HPBar; }
namespace RPG::Client { class LocalizedText; }
namespace System { class String; }
namespace UnityEngine { class Animation; }

#define CLASS_2_02F79AB6A3BA3DCA_METHOD_2_B12B4E4A39A083D2_OFFSET UNITYSDK_OFFSET(0xABD7EA0)
#define CLASS_2_02F79AB6A3BA3DCA_METHOD_2_BA904CAFF6C7217F_OFFSET UNITYSDK_OFFSET(0xABD8040)
#define CLASS_2_02F79AB6A3BA3DCA_METHOD_2_D2A08F3D951A0C1D_OFFSET UNITYSDK_OFFSET(0xABD7DC0)
#define CLASS_2_02F79AB6A3BA3DCA_METHOD_2_D2C3E503AE36B9C3_OFFSET UNITYSDK_OFFSET(0xABD7D70)
#define CLASS_2_02F79AB6A3BA3DCA__CTOR_OFFSET UNITYSDK_OFFSET(0xABD80E0)
#define CLASS_2_02F79AB6A3BA3DCA__ONBIND_OFFSET UNITYSDK_OFFSET(0xABD7CC0)
#define CLASS_2_02F79AB6A3BA3DCA___IFIXBASEPROXY__ONBIND_OFFSET UNITYSDK_OFFSET(0xABD8110)

inline static constexpr unsigned int Class_2_02F79AB6A3BA3DCA_TypeDefinitionIndex = 66893;

class Class_2_02F79AB6A3BA3DCA : public ::Class_1_CA217ABF4E3B4F3F
{
public:
	// static const ::System::String* Field_2_0; // 0x0
	// static const ::System::String* Field_2_1; // 0x0
	::RPG::Client::LocalizedText* Field_2_2; // 0x60
	::UnityEngine::Animation* Field_2_3; // 0x68
	::RPG::Client::HPBar* Field_2_4; // 0x70

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_02F79AB6A3BA3DCA__CTOR_OFFSET))(this);
	}

	::System::Void _OnBind()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_02F79AB6A3BA3DCA__ONBIND_OFFSET))(this);
	}

	::System::Void Method_2_D2C3E503AE36B9C3(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_02F79AB6A3BA3DCA_METHOD_2_D2C3E503AE36B9C3_OFFSET))(this, a1);
	}

	::System::Void Method_2_D2A08F3D951A0C1D(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_02F79AB6A3BA3DCA_METHOD_2_D2A08F3D951A0C1D_OFFSET))(this, a1);
	}

	::System::Void Method_2_B12B4E4A39A083D2(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_02F79AB6A3BA3DCA_METHOD_2_B12B4E4A39A083D2_OFFSET))(this, a1);
	}

	::System::Void Method_2_BA904CAFF6C7217F(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_02F79AB6A3BA3DCA_METHOD_2_BA904CAFF6C7217F_OFFSET))(this, a1);
	}

	::System::Void __iFixBaseProxy__OnBind()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_02F79AB6A3BA3DCA___IFIXBASEPROXY__ONBIND_OFFSET))(this);
	}
};

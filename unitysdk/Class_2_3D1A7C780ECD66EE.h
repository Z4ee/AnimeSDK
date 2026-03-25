#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_CA217ABF4E3B4F3F.h"
#include "unitysdk/RPG/Client/UIFloatingTextType.h"
#include "unitysdk/Struct_2_5909FD7779934CCA.h"
#include "unitysdk/System/Decimal.h"

class DamageTextStyle;
namespace RPG::Client { class SimpleTextStyleController; }
namespace UnityEngine { class Transform; }

#define CLASS_2_3D1A7C780ECD66EE_METHOD_2_7F90F8D16777A584_OFFSET UNITYSDK_OFFSET(0x10532DE0)
#define CLASS_2_3D1A7C780ECD66EE_METHOD_2_C278F92CAAD365D6_OFFSET UNITYSDK_OFFSET(0x10532D20)
#define CLASS_2_3D1A7C780ECD66EE__CTOR_OFFSET UNITYSDK_OFFSET(0x10532E60)
#define CLASS_2_3D1A7C780ECD66EE__ONBIND_OFFSET UNITYSDK_OFFSET(0x10532BE0)
#define CLASS_2_3D1A7C780ECD66EE___IFIXBASEPROXY__ONBIND_OFFSET UNITYSDK_OFFSET(0x10532E90)

inline static constexpr unsigned int Class_2_3D1A7C780ECD66EE_TypeDefinitionIndex = 58508;

class Class_2_3D1A7C780ECD66EE : public ::Class_1_CA217ABF4E3B4F3F
{
public:
	::RPG::Client::SimpleTextStyleController* Field_2_1; // 0x60
	::UnityEngine::Transform* Field_2_0; // 0x68

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3D1A7C780ECD66EE__CTOR_OFFSET))(this);
	}

	::System::Void _OnBind()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3D1A7C780ECD66EE__ONBIND_OFFSET))(this);
	}

	::System::Void Method_2_C278F92CAAD365D6(::System::Decimal a1, ::RPG::Client::UIFloatingTextType a2, ::Struct_2_5909FD7779934CCA a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::Decimal, ::RPG::Client::UIFloatingTextType, ::Struct_2_5909FD7779934CCA))((::PBYTE)hIl2Cpp + CLASS_2_3D1A7C780ECD66EE_METHOD_2_C278F92CAAD365D6_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_2_7F90F8D16777A584(::System::Decimal a1, ::System::Boolean a2, ::DamageTextStyle* a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::Decimal, ::System::Boolean, ::DamageTextStyle*))((::PBYTE)hIl2Cpp + CLASS_2_3D1A7C780ECD66EE_METHOD_2_7F90F8D16777A584_OFFSET))(this, a1, a2, a3);
	}

	::System::Void __iFixBaseProxy__OnBind()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3D1A7C780ECD66EE___IFIXBASEPROXY__ONBIND_OFFSET))(this);
	}
};

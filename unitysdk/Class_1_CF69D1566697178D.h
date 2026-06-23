#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace UnityEngine::UI { class Text; }

#define CLASS_1_CF69D1566697178D_METHOD_1_6084BA484E14D805_OFFSET UNITYSDK_OFFSET(0x1BB165D0)
#define CLASS_1_CF69D1566697178D_METHOD_1_C74E50CBD41F0264_OFFSET UNITYSDK_OFFSET(0x1BB16750)
#define CLASS_1_CF69D1566697178D_METHOD_1_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x1BB16760)
#define CLASS_1_CF69D1566697178D_METHOD_1_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x1BB167A0)
#define CLASS_1_CF69D1566697178D__CTOR_OFFSET UNITYSDK_OFFSET(0x1BB165C0)

inline static constexpr unsigned int Class_1_CF69D1566697178D_TypeDefinitionIndex = 41278;

class Class_1_CF69D1566697178D : public ::System::Object
{
public:
	::System::Int32 Field_1_1; // 0x10
	::System::Boolean Field_1_0; // 0x14

	::System::Void _ctor(::UnityEngine::UI::Text* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::UI::Text*))((::PBYTE)hIl2Cpp + CLASS_1_CF69D1566697178D__CTOR_OFFSET))(this, a1);
	}

	::System::Void Method_1_C74E50CBD41F0264(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_CF69D1566697178D_METHOD_1_C74E50CBD41F0264_OFFSET))(this, a1);
	}

	::System::Void Method_1_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_CF69D1566697178D_METHOD_1_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Boolean Method_1_6084BA484E14D805(::UnityEngine::UI::Text* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::UnityEngine::UI::Text*))((::PBYTE)hIl2Cpp + CLASS_1_CF69D1566697178D_METHOD_1_6084BA484E14D805_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_CF69D1566697178D_METHOD_1_F0088C88851A7DFB_OFFSET))(this);
	}
};

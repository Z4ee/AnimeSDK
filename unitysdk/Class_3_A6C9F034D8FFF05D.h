#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_E87F1D15F1D4AC72.h"

class Class_2_A9A857AD270B9CE1;
namespace MoleMole { class UIControlCollection; }
namespace MoleMole { class UIGeneralButtonController; }

#define CLASS_3_A6C9F034D8FFF05D_METHOD_3_082DE155818A77D8_OFFSET UNITYSDK_OFFSET(0x11E860B0)
#define CLASS_3_A6C9F034D8FFF05D_METHOD_3_0865E94460F11643_OFFSET UNITYSDK_OFFSET(0x11E85F50)
#define CLASS_3_A6C9F034D8FFF05D_METHOD_3_4F75C9B796DF2E67_OFFSET UNITYSDK_OFFSET(0x11E860A0)
#define CLASS_3_A6C9F034D8FFF05D_METHOD_3_929BD2659F9FA6CA_OFFSET UNITYSDK_OFFSET(0x11E85EB0)
#define CLASS_3_A6C9F034D8FFF05D__CTOR_OFFSET UNITYSDK_OFFSET(0x11E86010)

inline static constexpr unsigned int Class_3_A6C9F034D8FFF05D_TypeDefinitionIndex = 44259;

class Class_3_A6C9F034D8FFF05D : public ::Class_2_E87F1D15F1D4AC72
{
public:
	::MoleMole::UIGeneralButtonController* Field_3_0; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_A6C9F034D8FFF05D__CTOR_OFFSET))(this);
	}

	::System::Void Method_3_929BD2659F9FA6CA(::Class_2_A9A857AD270B9CE1* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A9A857AD270B9CE1*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_3_A6C9F034D8FFF05D_METHOD_3_929BD2659F9FA6CA_OFFSET))(this, a1, a2);
	}

	::System::Void Method_3_0865E94460F11643()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_A6C9F034D8FFF05D_METHOD_3_0865E94460F11643_OFFSET))(this);
	}

	::System::Void Method_3_4F75C9B796DF2E67(::MoleMole::UIGeneralButtonController* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::UIGeneralButtonController*))((::PBYTE)hIl2Cpp + CLASS_3_A6C9F034D8FFF05D_METHOD_3_4F75C9B796DF2E67_OFFSET))(this, a1);
	}

	::MoleMole::UIGeneralButtonController* Method_3_082DE155818A77D8()
	{
		return ((::MoleMole::UIGeneralButtonController*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_A6C9F034D8FFF05D_METHOD_3_082DE155818A77D8_OFFSET))(this);
	}
};

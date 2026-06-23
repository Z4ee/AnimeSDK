#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_E87F1D15F1D4AC72.h"

class Class_2_A9A857AD270B9CE1;
class MaterialParameterRewriter;
namespace MoleMole { class UIControlCollection; }

#define CLASS_3_410A31B8C48B2A99_1_METHOD_3_0865E94460F11643_OFFSET UNITYSDK_OFFSET(0x167F4510)
#define CLASS_3_410A31B8C48B2A99_1_METHOD_3_929BD2659F9FA6CA_OFFSET UNITYSDK_OFFSET(0x167F4470)
#define CLASS_3_410A31B8C48B2A99_1_METHOD_3_BC38DF5665FBE8F8_OFFSET UNITYSDK_OFFSET(0x167F4660)
#define CLASS_3_410A31B8C48B2A99_1_METHOD_3_E8C2A5D12B8E1FF3_OFFSET UNITYSDK_OFFSET(0x167F4670)
#define CLASS_3_410A31B8C48B2A99_1__CTOR_OFFSET UNITYSDK_OFFSET(0x167F45D0)

inline static constexpr unsigned int Class_3_410A31B8C48B2A99_1_TypeDefinitionIndex = 75903;

class Class_3_410A31B8C48B2A99_1 : public ::Class_2_E87F1D15F1D4AC72
{
public:
	::MaterialParameterRewriter* Field_3_0; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_410A31B8C48B2A99_1__CTOR_OFFSET))(this);
	}

	::System::Void Method_3_929BD2659F9FA6CA(::Class_2_A9A857AD270B9CE1* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A9A857AD270B9CE1*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_3_410A31B8C48B2A99_1_METHOD_3_929BD2659F9FA6CA_OFFSET))(this, a1, a2);
	}

	::MaterialParameterRewriter* Method_3_BC38DF5665FBE8F8()
	{
		return ((::MaterialParameterRewriter*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_410A31B8C48B2A99_1_METHOD_3_BC38DF5665FBE8F8_OFFSET))(this);
	}

	::System::Void Method_3_0865E94460F11643()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_410A31B8C48B2A99_1_METHOD_3_0865E94460F11643_OFFSET))(this);
	}

	::System::Void Method_3_E8C2A5D12B8E1FF3(::MaterialParameterRewriter* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MaterialParameterRewriter*))((::PBYTE)hIl2Cpp + CLASS_3_410A31B8C48B2A99_1_METHOD_3_E8C2A5D12B8E1FF3_OFFSET))(this, a1);
	}
};

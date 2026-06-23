#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EEA0111A28582B57.h"

class Class_2_A9A857AD270B9CE1;
class Class_2_B4378B46E0020E85;
namespace MoleMole { class UIControlCollection; }
namespace MoleMole { class UISuibianDirectionIconWidgetController; }
template <typename T> class Class_3_6F805C3FA3D1D41D;

#define CLASS_2_9535188F6F0FFD61_METHOD_2_43ED31B02AD5E38E_OFFSET UNITYSDK_OFFSET(0x11D116C0)
#define CLASS_2_9535188F6F0FFD61_METHOD_2_9DE87B16AD0A605E_OFFSET UNITYSDK_OFFSET(0x11D11870)
#define CLASS_2_9535188F6F0FFD61_METHOD_2_C8903A36ECBA4078_OFFSET UNITYSDK_OFFSET(0x11D11940)
#define CLASS_2_9535188F6F0FFD61__CTOR_OFFSET UNITYSDK_OFFSET(0x11D11930)

inline static constexpr unsigned int Class_2_9535188F6F0FFD61_TypeDefinitionIndex = 48137;

class Class_2_9535188F6F0FFD61 : public ::Class_1_EEA0111A28582B57
{
public:
	::Class_3_6F805C3FA3D1D41D<::MoleMole::UISuibianDirectionIconWidgetController*>* Field_2_0; // 0x18
	::Class_3_6F805C3FA3D1D41D<::MoleMole::UISuibianDirectionIconWidgetController*>* Field_2_1; // 0x20
	::Class_2_B4378B46E0020E85* Field_2_2; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_9535188F6F0FFD61__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_43ED31B02AD5E38E(::Class_2_A9A857AD270B9CE1* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A9A857AD270B9CE1*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_9535188F6F0FFD61_METHOD_2_43ED31B02AD5E38E_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_9DE87B16AD0A605E()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_9535188F6F0FFD61_METHOD_2_9DE87B16AD0A605E_OFFSET))(this);
	}

	::System::Void Method_2_C8903A36ECBA4078(::Class_2_A9A857AD270B9CE1* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A9A857AD270B9CE1*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_9535188F6F0FFD61_METHOD_2_C8903A36ECBA4078_OFFSET))(this, a1, a2);
	}
};

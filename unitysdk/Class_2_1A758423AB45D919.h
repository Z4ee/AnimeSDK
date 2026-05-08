#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EEA0111A28582B57.h"

class Class_2_A9A857AD270B9CE1;
namespace MoleMole { class UIControlCollection; }
namespace MoleMole { class UIMainCityCameraImgTrackWidgetController; }
template <typename T> class Class_3_30A064D7BE47C07D;

#define CLASS_2_1A758423AB45D919_METHOD_2_1B167429A8B82AD3_OFFSET UNITYSDK_OFFSET(0x11E4C7C0)
#define CLASS_2_1A758423AB45D919_METHOD_2_9B59B42BE13F39B8_OFFSET UNITYSDK_OFFSET(0x11E4C680)
#define CLASS_2_1A758423AB45D919_METHOD_2_C8903A36ECBA4078_OFFSET UNITYSDK_OFFSET(0x11E4C850)
#define CLASS_2_1A758423AB45D919__CTOR_OFFSET UNITYSDK_OFFSET(0x11E4C840)

inline static constexpr unsigned int Class_2_1A758423AB45D919_TypeDefinitionIndex = 72163;

class Class_2_1A758423AB45D919 : public ::Class_1_EEA0111A28582B57
{
public:
	::Class_3_30A064D7BE47C07D<::MoleMole::UIMainCityCameraImgTrackWidgetController*>* Field_2_0; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_1A758423AB45D919__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_9B59B42BE13F39B8(::Class_2_A9A857AD270B9CE1* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A9A857AD270B9CE1*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_1A758423AB45D919_METHOD_2_9B59B42BE13F39B8_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_C8903A36ECBA4078(::Class_2_A9A857AD270B9CE1* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A9A857AD270B9CE1*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_1A758423AB45D919_METHOD_2_C8903A36ECBA4078_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_1B167429A8B82AD3()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_1A758423AB45D919_METHOD_2_1B167429A8B82AD3_OFFSET))(this);
	}
};

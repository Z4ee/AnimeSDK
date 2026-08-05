#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EEA0111A28582B57.h"

class Class_2_A4D62D05D5EA8464;
namespace MoleMole { class UIControlCollection; }
namespace MoleMole { class UIMainCityCameraImgTrackWidgetController; }
template <typename T> class Class_3_826A30478DA34A69;

#define CLASS_2_1A758423AB45D919_METHOD_2_1B167429A8B82AD3_OFFSET UNITYSDK_OFFSET(0x15B58C70)
#define CLASS_2_1A758423AB45D919_METHOD_2_9B59B42BE13F39B8_OFFSET UNITYSDK_OFFSET(0x15B58B30)
#define CLASS_2_1A758423AB45D919_METHOD_2_C8903A36ECBA4078_OFFSET UNITYSDK_OFFSET(0x15B58D00)
#define CLASS_2_1A758423AB45D919__CTOR_OFFSET UNITYSDK_OFFSET(0x15B58CF0)

inline static constexpr unsigned int Class_2_1A758423AB45D919_TypeDefinitionIndex = 43312;

class Class_2_1A758423AB45D919 : public ::Class_1_EEA0111A28582B57
{
public:
	::Class_3_826A30478DA34A69<::MoleMole::UIMainCityCameraImgTrackWidgetController*>* Field_2_0; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_1A758423AB45D919__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_9B59B42BE13F39B8(::Class_2_A4D62D05D5EA8464* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A4D62D05D5EA8464*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_1A758423AB45D919_METHOD_2_9B59B42BE13F39B8_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_1B167429A8B82AD3()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_1A758423AB45D919_METHOD_2_1B167429A8B82AD3_OFFSET))(this);
	}

	::System::Void Method_2_C8903A36ECBA4078(::Class_2_A4D62D05D5EA8464* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A4D62D05D5EA8464*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_1A758423AB45D919_METHOD_2_C8903A36ECBA4078_OFFSET))(this, a1, a2);
	}
};

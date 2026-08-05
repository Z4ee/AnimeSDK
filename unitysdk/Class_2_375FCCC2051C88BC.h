#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EEA0111A28582B57.h"

class Class_2_A4D62D05D5EA8464;
class Class_2_B4378B46E0020E85;
class Class_2_CA67A9CEB871FFD3;
namespace MoleMole { class UIControlCollection; }
namespace MoleMole { class UITutorialVideoPanelWidgetController; }
namespace UnityEngine::Video { class VideoPlayer; }
template <typename T> class Class_3_826A30478DA34A69;

#define CLASS_2_375FCCC2051C88BC_METHOD_2_25F259344056A8EA_OFFSET UNITYSDK_OFFSET(0x138EE7A0)
#define CLASS_2_375FCCC2051C88BC_METHOD_2_9DE87B16AD0A605E_OFFSET UNITYSDK_OFFSET(0x138EE980)
#define CLASS_2_375FCCC2051C88BC_METHOD_2_C8903A36ECBA4078_OFFSET UNITYSDK_OFFSET(0x138EEA50)
#define CLASS_2_375FCCC2051C88BC__CTOR_OFFSET UNITYSDK_OFFSET(0x138EEA40)

inline static constexpr unsigned int Class_2_375FCCC2051C88BC_TypeDefinitionIndex = 55383;

class Class_2_375FCCC2051C88BC : public ::Class_1_EEA0111A28582B57
{
public:
	::Class_3_826A30478DA34A69<::MoleMole::UITutorialVideoPanelWidgetController*>* Field_2_3; // 0x18
	::UnityEngine::Video::VideoPlayer* Field_2_2; // 0x20
	::Class_2_CA67A9CEB871FFD3* Field_2_1; // 0x28
	::Class_2_B4378B46E0020E85* Field_2_0; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_375FCCC2051C88BC__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_25F259344056A8EA(::Class_2_A4D62D05D5EA8464* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A4D62D05D5EA8464*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_375FCCC2051C88BC_METHOD_2_25F259344056A8EA_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_9DE87B16AD0A605E()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_375FCCC2051C88BC_METHOD_2_9DE87B16AD0A605E_OFFSET))(this);
	}

	::System::Void Method_2_C8903A36ECBA4078(::Class_2_A4D62D05D5EA8464* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A4D62D05D5EA8464*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_375FCCC2051C88BC_METHOD_2_C8903A36ECBA4078_OFFSET))(this, a1, a2);
	}
};

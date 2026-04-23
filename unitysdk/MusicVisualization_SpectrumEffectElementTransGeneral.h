#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MusicVisualization_SpectrumEffectElementTransGeneral_AxisMode.h"
#include "unitysdk/RPG/Client/MusicVisualization_SpectrumEffectElementVisualBase.h"

class Class_1_34601470C357B61B;
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }

#define MUSICVISUALIZATION_SPECTRUMEFFECTELEMENTTRANSGENERAL_METHOD_2_1AD35FA7458984B8_OFFSET UNITYSDK_OFFSET(0x933BC90)
#define MUSICVISUALIZATION_SPECTRUMEFFECTELEMENTTRANSGENERAL_METHOD_2_C14045483B1EE7A4_OFFSET UNITYSDK_OFFSET(0x933BBF0)
#define MUSICVISUALIZATION_SPECTRUMEFFECTELEMENTTRANSGENERAL__CTOR_OFFSET UNITYSDK_OFFSET(0x933C1D0)

inline static constexpr unsigned int MusicVisualization_SpectrumEffectElementTransGeneral_TypeDefinitionIndex = 44223;

class MusicVisualization_SpectrumEffectElementTransGeneral : public ::RPG::Client::MusicVisualization_SpectrumEffectElementVisualBase
{
public:
	::MusicVisualization_SpectrumEffectElementTransGeneral_AxisMode Axis; // 0x20
	::System::Single AxisScale; // 0x24
	::System::Int32 _ChildNum; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MUSICVISUALIZATION_SPECTRUMEFFECTELEMENTTRANSGENERAL__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_C14045483B1EE7A4(::Class_1_34601470C357B61B* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_34601470C357B61B*))((::PBYTE)hIl2Cpp + MUSICVISUALIZATION_SPECTRUMEFFECTELEMENTTRANSGENERAL_METHOD_2_C14045483B1EE7A4_OFFSET))(this, a1);
	}

	::System::Void Method_2_1AD35FA7458984B8(::Class_1_34601470C357B61B* a1, ::System::Collections::Generic::List_1<::UnityEngine::GameObject*>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_34601470C357B61B*, ::System::Collections::Generic::List_1<::UnityEngine::GameObject*>*))((::PBYTE)hIl2Cpp + MUSICVISUALIZATION_SPECTRUMEFFECTELEMENTTRANSGENERAL_METHOD_2_1AD35FA7458984B8_OFFSET))(this, a1, a2);
	}
};

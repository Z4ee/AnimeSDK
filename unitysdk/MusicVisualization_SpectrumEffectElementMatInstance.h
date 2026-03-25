#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/MusicVisualization_SpectrumEffectElementVisualBase.h"

class Class_1_34601470C357B61B;
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }

#define MUSICVISUALIZATION_SPECTRUMEFFECTELEMENTMATINSTANCE_METHOD_2_B756CDAE3ECDB56F_OFFSET UNITYSDK_OFFSET(0x88BF640)
#define MUSICVISUALIZATION_SPECTRUMEFFECTELEMENTMATINSTANCE_METHOD_2_E10B4092FFA54980_OFFSET UNITYSDK_OFFSET(0x88BF5A0)
#define MUSICVISUALIZATION_SPECTRUMEFFECTELEMENTMATINSTANCE__CTOR_OFFSET UNITYSDK_OFFSET(0x88BFA70)

inline static constexpr unsigned int MusicVisualization_SpectrumEffectElementMatInstance_TypeDefinitionIndex = 38337;

class MusicVisualization_SpectrumEffectElementMatInstance : public ::RPG::Client::MusicVisualization_SpectrumEffectElementVisualBase
{
public:
	::System::Int32 MatConfigIndex; // 0x20
	::System::Int32 DataDuplicate; // 0x24

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MUSICVISUALIZATION_SPECTRUMEFFECTELEMENTMATINSTANCE__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_E10B4092FFA54980(::Class_1_34601470C357B61B* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_34601470C357B61B*))((::PBYTE)hIl2Cpp + MUSICVISUALIZATION_SPECTRUMEFFECTELEMENTMATINSTANCE_METHOD_2_E10B4092FFA54980_OFFSET))(this, a1);
	}

	::System::Void Method_2_B756CDAE3ECDB56F(::Class_1_34601470C357B61B* a1, ::System::Collections::Generic::List_1<::UnityEngine::GameObject*>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_34601470C357B61B*, ::System::Collections::Generic::List_1<::UnityEngine::GameObject*>*))((::PBYTE)hIl2Cpp + MUSICVISUALIZATION_SPECTRUMEFFECTELEMENTMATINSTANCE_METHOD_2_B756CDAE3ECDB56F_OFFSET))(this, a1, a2);
	}
};

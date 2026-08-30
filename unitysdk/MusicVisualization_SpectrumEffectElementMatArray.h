#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/MusicVisualization_SpectrumEffectElementVisualBase.h"

class Class_1_34601470C357B61B;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class MaterialPropertyBlock; }

#define MUSICVISUALIZATION_SPECTRUMEFFECTELEMENTMATARRAY_METHOD_2_2450CFC043E97F54_OFFSET UNITYSDK_OFFSET(0xBBC6270)
#define MUSICVISUALIZATION_SPECTRUMEFFECTELEMENTMATARRAY_METHOD_2_729C27EDE8757DF6_OFFSET UNITYSDK_OFFSET(0xBBC6680)
#define MUSICVISUALIZATION_SPECTRUMEFFECTELEMENTMATARRAY_METHOD_2_8A0C05ECADC6319B_OFFSET UNITYSDK_OFFSET(0xBBC60D0)
#define MUSICVISUALIZATION_SPECTRUMEFFECTELEMENTMATARRAY_METHOD_2_AA4D8C4B5C05111B_OFFSET UNITYSDK_OFFSET(0xBBC6300)
#define MUSICVISUALIZATION_SPECTRUMEFFECTELEMENTMATARRAY__CTOR_OFFSET UNITYSDK_OFFSET(0xBBC68C0)

inline static constexpr unsigned int MusicVisualization_SpectrumEffectElementMatArray_TypeDefinitionIndex = 47933;

class MusicVisualization_SpectrumEffectElementMatArray : public ::RPG::Client::MusicVisualization_SpectrumEffectElementVisualBase
{
public:
	// static const ::System::Single ValueEpsilon; // 0x0
	// static const ::System::Single DefaultDeltaTime; // 0x0
	// static const ::System::Single MaxDeltaTime; // 0x0
	::System::String* SpectrumDataPropertyName; // 0x20
	::System::String* SpectrumDataLengthPropertyName; // 0x28
	::System::Int32 SpectrumDataPropertyID; // 0x30
	::System::Int32 SpectrumDataLengthPropertyID; // 0x34
	::System::Boolean _UseFallSmooth; // 0x38
	::System::Single _FallSpeed; // 0x3C
	::System::Single _FallRetain; // 0x40
	::UnityEngine::MaterialPropertyBlock* _MatBlock; // 0x48
	::Il2CppArray<::System::Single>* _DisplaySpectrumBuffer; // 0x50
	::System::Boolean _IsInit; // 0x58

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MUSICVISUALIZATION_SPECTRUMEFFECTELEMENTMATARRAY__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_8A0C05ECADC6319B(::Class_1_34601470C357B61B* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_34601470C357B61B*))((::PBYTE)hIl2Cpp + MUSICVISUALIZATION_SPECTRUMEFFECTELEMENTMATARRAY_METHOD_2_8A0C05ECADC6319B_OFFSET))(this, a1);
	}

	::System::Void Method_2_729C27EDE8757DF6(::Il2CppArray<::System::Single>* a1, ::System::Collections::Generic::List_1<::UnityEngine::GameObject*>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Single>*, ::System::Collections::Generic::List_1<::UnityEngine::GameObject*>*))((::PBYTE)hIl2Cpp + MUSICVISUALIZATION_SPECTRUMEFFECTELEMENTMATARRAY_METHOD_2_729C27EDE8757DF6_OFFSET))(this, a1, a2);
	}

	::Il2CppArray<::System::Single>* Method_2_AA4D8C4B5C05111B(::Il2CppArray<::System::Single>* a1)
	{
		return ((::Il2CppArray<::System::Single>*(*)(::PVOID, ::Il2CppArray<::System::Single>*))((::PBYTE)hIl2Cpp + MUSICVISUALIZATION_SPECTRUMEFFECTELEMENTMATARRAY_METHOD_2_AA4D8C4B5C05111B_OFFSET))(this, a1);
	}

	::System::Void Method_2_2450CFC043E97F54()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MUSICVISUALIZATION_SPECTRUMEFFECTELEMENTMATARRAY_METHOD_2_2450CFC043E97F54_OFFSET))(this);
	}
};

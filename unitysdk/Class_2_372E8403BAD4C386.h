#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/MusicVisualization_SpectrumEffectElementVisualBase.h"

class Class_1_34601470C357B61B;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class MaterialPropertyBlock; }

#define CLASS_2_372E8403BAD4C386_METHOD_2_054B8F7AF60506D5_OFFSET UNITYSDK_OFFSET(0x97B4980)
#define CLASS_2_372E8403BAD4C386_METHOD_2_2450CFC043E97F54_OFFSET UNITYSDK_OFFSET(0x97B4FB0)
#define CLASS_2_372E8403BAD4C386_METHOD_2_59EA315611DA86F0_OFFSET UNITYSDK_OFFSET(0x97B4AA0)
#define CLASS_2_372E8403BAD4C386__CTOR_OFFSET UNITYSDK_OFFSET(0x97B5030)

inline static constexpr unsigned int Class_2_372E8403BAD4C386_TypeDefinitionIndex = 44222;

class Class_2_372E8403BAD4C386 : public ::RPG::Client::MusicVisualization_SpectrumEffectElementVisualBase
{
public:
	::UnityEngine::MaterialPropertyBlock* Field_2_2; // 0x20
	::System::String* Field_2_0; // 0x28
	::System::Int32 Field_2_1; // 0x30
	::System::Boolean Field_2_3; // 0x34

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_372E8403BAD4C386__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_054B8F7AF60506D5(::Class_1_34601470C357B61B* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_34601470C357B61B*))((::PBYTE)hIl2Cpp + CLASS_2_372E8403BAD4C386_METHOD_2_054B8F7AF60506D5_OFFSET))(this, a1);
	}

	::System::Void Method_2_59EA315611DA86F0(::Class_1_34601470C357B61B* a1, ::System::Collections::Generic::List_1<::UnityEngine::GameObject*>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_34601470C357B61B*, ::System::Collections::Generic::List_1<::UnityEngine::GameObject*>*))((::PBYTE)hIl2Cpp + CLASS_2_372E8403BAD4C386_METHOD_2_59EA315611DA86F0_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_2450CFC043E97F54()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_372E8403BAD4C386_METHOD_2_2450CFC043E97F54_OFFSET))(this);
	}
};

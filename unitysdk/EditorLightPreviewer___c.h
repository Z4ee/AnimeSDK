#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class SceneLightVolume;
namespace System { template <typename T> class Comparison_1; }

#define EDITORLIGHTPREVIEWER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0xFB7F700)
#define EDITORLIGHTPREVIEWER___C__CTOR_OFFSET UNITYSDK_OFFSET(0xFB7F740)
#define EDITORLIGHTPREVIEWER___C__GETACTIVESCENELIGHTVOLUME_B__54_0_OFFSET UNITYSDK_OFFSET(0xFB7F750)

inline static constexpr unsigned int EditorLightPreviewer___c_TypeDefinitionIndex = 38244;

class EditorLightPreviewer___c : public ::System::Object
{
public:
	static ::System::Comparison_1<::SceneLightVolume*>** StaticGet___9__54_0()
	{
		return (::System::Comparison_1<::SceneLightVolume*>**)Il2CppClass::FromTypeDefinitionIndex(EditorLightPreviewer___c_TypeDefinitionIndex)->GetStaticField(0xDF00);
	}
	static ::EditorLightPreviewer___c** StaticGet___9()
	{
		return (::EditorLightPreviewer___c**)Il2CppClass::FromTypeDefinitionIndex(EditorLightPreviewer___c_TypeDefinitionIndex)->GetStaticField(0xDF08);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + EDITORLIGHTPREVIEWER___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EDITORLIGHTPREVIEWER___C__CTOR_OFFSET))(this);
	}

	::System::Int32 _GetActiveSceneLightVolume_b__54_0(::SceneLightVolume* a, ::SceneLightVolume* b)
	{
		return ((::System::Int32(*)(::PVOID, ::SceneLightVolume*, ::SceneLightVolume*))((::PBYTE)hIl2Cpp + EDITORLIGHTPREVIEWER___C__GETACTIVESCENELIGHTVOLUME_B__54_0_OFFSET))(this, a, b);
	}
};

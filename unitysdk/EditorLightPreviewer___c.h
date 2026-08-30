#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class SceneLightVolume;
namespace System { template <typename T> class Comparison_1; }

#define EDITORLIGHTPREVIEWER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x10674A60)
#define EDITORLIGHTPREVIEWER___C__CTOR_OFFSET UNITYSDK_OFFSET(0x10674AA0)
#define EDITORLIGHTPREVIEWER___C__GETACTIVESCENELIGHTVOLUME_B__55_0_OFFSET UNITYSDK_OFFSET(0x10674AB0)

inline static constexpr unsigned int EditorLightPreviewer___c_TypeDefinitionIndex = 47804;

class EditorLightPreviewer___c : public ::System::Object
{
public:
	static ::System::Comparison_1<::SceneLightVolume*>** StaticGet___9__55_0()
	{
		return (::System::Comparison_1<::SceneLightVolume*>**)Il2CppClass::FromTypeDefinitionIndex(EditorLightPreviewer___c_TypeDefinitionIndex)->GetStaticField(0x64580);
	}
	static ::EditorLightPreviewer___c** StaticGet___9()
	{
		return (::EditorLightPreviewer___c**)Il2CppClass::FromTypeDefinitionIndex(EditorLightPreviewer___c_TypeDefinitionIndex)->GetStaticField(0x64588);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + EDITORLIGHTPREVIEWER___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EDITORLIGHTPREVIEWER___C__CTOR_OFFSET))(this);
	}

	::System::Int32 _GetActiveSceneLightVolume_b__55_0(::SceneLightVolume* a1, ::SceneLightVolume* a2)
	{
		return ((::System::Int32(*)(::PVOID, ::SceneLightVolume*, ::SceneLightVolume*))((::PBYTE)hIl2Cpp + EDITORLIGHTPREVIEWER___C__GETACTIVESCENELIGHTVOLUME_B__55_0_OFFSET))(this, a1, a2);
	}
};

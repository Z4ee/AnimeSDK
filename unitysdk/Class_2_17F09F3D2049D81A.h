#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/UIController.h"

namespace System { class String; }
namespace UnityEngine::UI { class Button; }

#define CLASS_2_17F09F3D2049D81A_METHOD_2_3E7178C5ECF017DB_OFFSET UNITYSDK_OFFSET(0x16458B50)
#define CLASS_2_17F09F3D2049D81A_METHOD_2_4343F372F34C05BF_OFFSET UNITYSDK_OFFSET(0x16458AE0)
#define CLASS_2_17F09F3D2049D81A_VIEWPREFABPATH_OFFSET UNITYSDK_OFFSET(0x16458980)
#define CLASS_2_17F09F3D2049D81A__CTOR_OFFSET UNITYSDK_OFFSET(0x16458940)
#define CLASS_2_17F09F3D2049D81A__CUSTOMBINDVIEW_OFFSET UNITYSDK_OFFSET(0x164589F0)

inline static constexpr unsigned int Class_2_17F09F3D2049D81A_TypeDefinitionIndex = 68372;

class Class_2_17F09F3D2049D81A : public ::RPG::Client::UIController
{
public:
	// static const ::System::String* Field_2_0; // 0x0
	::UnityEngine::UI::Button* Field_2_1; // 0x180

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_17F09F3D2049D81A__CTOR_OFFSET))(this);
	}

	::System::String* ViewPrefabPath()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_17F09F3D2049D81A_VIEWPREFABPATH_OFFSET))(this);
	}

	::System::Void _CustomBindView()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_17F09F3D2049D81A__CUSTOMBINDVIEW_OFFSET))(this);
	}

	::System::Void Method_2_4343F372F34C05BF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_17F09F3D2049D81A_METHOD_2_4343F372F34C05BF_OFFSET))(this);
	}

	::System::Void Method_2_3E7178C5ECF017DB(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_17F09F3D2049D81A_METHOD_2_3E7178C5ECF017DB_OFFSET))(this, a1);
	}
};

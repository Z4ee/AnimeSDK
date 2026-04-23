#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class SceneTVMenuDataRow; }
namespace System { class String; }
namespace UnityEngine { class Texture2D; }

#define CLASS_2_B58C65FFAAC2F95C_CLASS_1_FA7091ADF2A6A8DC__CTOR_OFFSET UNITYSDK_OFFSET(0x8F7EBF0)

inline static constexpr unsigned int Class_2_B58C65FFAAC2F95C_Class_1_FA7091ADF2A6A8DC_TypeDefinitionIndex = 63447;

class Class_2_B58C65FFAAC2F95C_Class_1_FA7091ADF2A6A8DC : public ::System::Object
{
public:
	::System::String* Field_1_2; // 0x10
	::RPG::GameCore::SceneTVMenuDataRow* Field_1_0; // 0x18
	::UnityEngine::Texture2D* Field_1_3; // 0x20
	::System::Boolean Field_1_1; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B58C65FFAAC2F95C_CLASS_1_FA7091ADF2A6A8DC__CTOR_OFFSET))(this);
	}
};

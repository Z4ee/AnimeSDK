#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/AssetPath.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Config { class ConfigCameraStoryDatas; }
namespace System { class Action; }

#define CLASS_1_6D3799F67B8415DA_CLASS_1_928A055F0C483B86_METHOD_1_DC0C5A6B11B1C7DE_OFFSET UNITYSDK_OFFSET(0xFE7B840)
#define CLASS_1_6D3799F67B8415DA_CLASS_1_928A055F0C483B86__CTOR_OFFSET UNITYSDK_OFFSET(0xFE7B830)

inline static constexpr unsigned int Class_1_6D3799F67B8415DA_Class_1_928A055F0C483B86_TypeDefinitionIndex = 60498;

class Class_1_6D3799F67B8415DA_Class_1_928A055F0C483B86 : public ::System::Object
{
public:
	::Foundation::AssetPath Field_1_0; // 0x10
	::System::Action* Field_1_1; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6D3799F67B8415DA_CLASS_1_928A055F0C483B86__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_DC0C5A6B11B1C7DE(::MoleMole::Config::ConfigCameraStoryDatas* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigCameraStoryDatas*))((::PBYTE)hIl2Cpp + CLASS_1_6D3799F67B8415DA_CLASS_1_928A055F0C483B86_METHOD_1_DC0C5A6B11B1C7DE_OFFSET))(this, a1);
	}
};

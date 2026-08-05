#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/AssetPath.h"
#include "unitysdk/MoleMole/Config/DisplayCase/DisplayBoundsCfgData.h"
#include "unitysdk/MoleMole/Config/DisplayCase/DisplayColliderCfgData.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_2_208CC9941471731A_692;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_E947BE5546FF774A__CTOR_OFFSET UNITYSDK_OFFSET(0x13D25460)

inline static constexpr unsigned int Class_1_E947BE5546FF774A_TypeDefinitionIndex = 47775;

class Class_1_E947BE5546FF774A : public ::System::Object
{
public:
	::Class_2_208CC9941471731A_692* Field_1_5; // 0x10
	::System::Collections::Generic::List_1<::MoleMole::Config::DisplayCase::DisplayColliderCfgData>* Field_1_7; // 0x18
	::Foundation::AssetPath Field_1_0; // 0x20
	::System::Boolean Field_1_1; // 0x30
	::UnityEngine::Vector3 Field_1_4; // 0x34
	::MoleMole::Config::DisplayCase::DisplayBoundsCfgData Field_1_6; // 0x40
	::System::Single Field_1_11; // 0x58
	::System::Int32 Field_1_2; // 0x5C

	::System::Void _ctor(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_E947BE5546FF774A__CTOR_OFFSET))(this, a1);
	}
};

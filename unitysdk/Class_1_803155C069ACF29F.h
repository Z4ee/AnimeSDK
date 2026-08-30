#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGame/TRFAction.h"
#include "unitysdk/RPG/Client/LittleGame/TRFOperate.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define CLASS_1_803155C069ACF29F__CTOR_OFFSET UNITYSDK_OFFSET(0x1C4EE050)

inline static constexpr unsigned int Class_1_803155C069ACF29F_TypeDefinitionIndex = 41146;

class Class_1_803155C069ACF29F : public ::System::Object
{
public:
	::RPG::Client::LittleGame::TRFOperate PODOMHHPEBG; // 0x10
	::System::UInt32 PDKOHKKMKLF; // 0x14
	::System::Boolean CEBOAFDFAHM; // 0x18
	::System::Single IEHPFADHJFD; // 0x1C
	::RPG::Client::LittleGame::TRFAction ENGGCENAFPM; // 0x20
	::UnityEngine::Vector3 NDCILLPHPDN; // 0x24
	::System::UInt32 JMPMDGJLIPF; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_803155C069ACF29F__CTOR_OFFSET))(this);
	}
};

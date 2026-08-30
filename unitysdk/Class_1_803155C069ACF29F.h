#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGame/TRFAction.h"
#include "unitysdk/RPG/Client/LittleGame/TRFOperate.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define CLASS_1_803155C069ACF29F__CTOR_OFFSET UNITYSDK_OFFSET(0x1DBF1660)

inline static constexpr unsigned int Class_1_803155C069ACF29F_TypeDefinitionIndex = 41146;

class Class_1_803155C069ACF29F : public ::System::Object
{
public:
	::System::Single IEHPFADHJFD; // 0x10
	::System::UInt32 PDKOHKKMKLF; // 0x14
	::RPG::Client::LittleGame::TRFOperate PODOMHHPEBG; // 0x18
	::RPG::Client::LittleGame::TRFAction ENGGCENAFPM; // 0x1C
	::System::Boolean CEBOAFDFAHM; // 0x20
	::UnityEngine::Vector3 NDCILLPHPDN; // 0x24
	::System::UInt32 JMPMDGJLIPF; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_803155C069ACF29F__CTOR_OFFSET))(this);
	}
};

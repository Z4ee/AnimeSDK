#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/Prop/DestroyRootPuzzleBlockType.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector2Int.h"

class Class_1_16CA124888A687A8;

#define CLASS_1_627DB42B4281FD4F_DISPOSE_OFFSET UNITYSDK_OFFSET(0x17EAA020)
#define CLASS_1_627DB42B4281FD4F_METHOD_1_A239DF324AF4215D_OFFSET UNITYSDK_OFFSET(0x17EAA0A0)
#define CLASS_1_627DB42B4281FD4F__CTOR_OFFSET UNITYSDK_OFFSET(0x17EAA160)

inline static constexpr unsigned int Class_1_627DB42B4281FD4F_TypeDefinitionIndex = 78079;

class Class_1_627DB42B4281FD4F : public ::System::Object
{
public:
	::Class_1_16CA124888A687A8* MIOJKIMPHLL; // 0x10
	::RPG::Client::Prop::DestroyRootPuzzleBlockType CFGEJHAOKED; // 0x18
	::UnityEngine::Vector2Int ANDBJNJOHDD; // 0x1C
	::UnityEngine::Vector2Int BBFOLEOPPPL; // 0x24
	::System::Int32 DDKCJIPLMFO; // 0x2C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_627DB42B4281FD4F__CTOR_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_627DB42B4281FD4F_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_1_A239DF324AF4215D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_627DB42B4281FD4F_METHOD_1_A239DF324AF4215D_OFFSET))(this);
	}
};

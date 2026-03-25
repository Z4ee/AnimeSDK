#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/Prop/DestroyRootPuzzleBlockType.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector2Int.h"

class Class_1_16CA124888A687A8;

#define CLASS_1_F84495B0D13114B1_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1144BE70)
#define CLASS_1_F84495B0D13114B1_METHOD_1_4343F372F34C05BF_OFFSET UNITYSDK_OFFSET(0x1144BEF0)
#define CLASS_1_F84495B0D13114B1__CTOR_OFFSET UNITYSDK_OFFSET(0x1144BF50)

inline static constexpr unsigned int Class_1_F84495B0D13114B1_TypeDefinitionIndex = 64000;

class Class_1_F84495B0D13114B1 : public ::System::Object
{
public:
	::Class_1_16CA124888A687A8* Field_1_0; // 0x10
	::UnityEngine::Vector2Int Field_1_3; // 0x18
	::UnityEngine::Vector2Int Field_1_1; // 0x20
	::RPG::Client::Prop::DestroyRootPuzzleBlockType Field_1_2; // 0x28
	::System::Int32 Field_1_4; // 0x2C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F84495B0D13114B1__CTOR_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F84495B0D13114B1_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_1_4343F372F34C05BF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F84495B0D13114B1_METHOD_1_4343F372F34C05BF_OFFSET))(this);
	}
};

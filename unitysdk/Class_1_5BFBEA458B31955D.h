#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGame/ChenLing/ChenLingTriggerType.h"
#include "unitysdk/System/Object.h"

class Class_1_0190AB1E1065D718;
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_5BFBEA458B31955D__CTOR_OFFSET UNITYSDK_OFFSET(0x180A6820)

inline static constexpr unsigned int Class_1_5BFBEA458B31955D_TypeDefinitionIndex = 39534;

class Class_1_5BFBEA458B31955D : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::RPG::Client::LittleGame::ChenLing::ChenLingTriggerType, ::Class_1_0190AB1E1065D718*>* Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5BFBEA458B31955D__CTOR_OFFSET))(this);
	}
};

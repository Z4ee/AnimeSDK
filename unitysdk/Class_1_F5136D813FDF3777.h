#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class ChenLingBattleEffectConfig; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_F5136D813FDF3777__CTOR_OFFSET UNITYSDK_OFFSET(0x167E5E30)

inline static constexpr unsigned int Class_1_F5136D813FDF3777_TypeDefinitionIndex = 33715;

class Class_1_F5136D813FDF3777 : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::RPG::GameCore::ChenLingBattleEffectConfig*>* Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F5136D813FDF3777__CTOR_OFFSET))(this);
	}
};

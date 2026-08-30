#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class TaskConfig; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_F01C2A4F5E8F10C3_1__CTOR_OFFSET UNITYSDK_OFFSET(0xC407480)

inline static constexpr unsigned int Class_1_F01C2A4F5E8F10C3_1_TypeDefinitionIndex = 54447;

class Class_1_F01C2A4F5E8F10C3_1 : public ::System::Object
{
public:
	::Il2CppArray<::RPG::GameCore::TaskConfig*>* NKCKAJPAJCJ; // 0x10
	::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* CGNJAJMEKOI; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F01C2A4F5E8F10C3_1__CTOR_OFFSET))(this);
	}
};

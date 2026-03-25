#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_DD9114AFAA2D17DA.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class GameEntity; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_BCB47EEF7B81AB33_CLEAR_OFFSET UNITYSDK_OFFSET(0xA1CAFD0)
#define CLASS_1_BCB47EEF7B81AB33_METHOD_1_7370D99716AA6445_OFFSET UNITYSDK_OFFSET(0xA1CB040)
#define CLASS_1_BCB47EEF7B81AB33__CTOR_OFFSET UNITYSDK_OFFSET(0xA1CB130)

inline static constexpr unsigned int Class_1_BCB47EEF7B81AB33_TypeDefinitionIndex = 44569;

class Class_1_BCB47EEF7B81AB33 : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::Struct_2_DD9114AFAA2D17DA>* Field_1_1; // 0x10
	::RPG::GameCore::GameEntity* Field_1_0; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_BCB47EEF7B81AB33__CTOR_OFFSET))(this);
	}

	::System::Void Clear()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_BCB47EEF7B81AB33_CLEAR_OFFSET))(this);
	}

	::System::Boolean Method_1_7370D99716AA6445(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_1_BCB47EEF7B81AB33_METHOD_1_7370D99716AA6445_OFFSET))(this, a1);
	}
};

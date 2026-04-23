#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AvatarPropertyType.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_667;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_A5344434C2683AB3_METHOD_1_0144285F3A6ADD3C_OFFSET UNITYSDK_OFFSET(0x11E3F4B0)
#define CLASS_1_A5344434C2683AB3_METHOD_1_2A883DD032F22BF2_OFFSET UNITYSDK_OFFSET(0x11E3F3B0)
#define CLASS_1_A5344434C2683AB3_METHOD_1_2FED925376FD83FF_OFFSET UNITYSDK_OFFSET(0x11E3F420)
#define CLASS_1_A5344434C2683AB3__CTOR_OFFSET UNITYSDK_OFFSET(0x11E3F720)

inline static constexpr unsigned int Class_1_A5344434C2683AB3_TypeDefinitionIndex = 57702;

class Class_1_A5344434C2683AB3 : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_667*>* Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A5344434C2683AB3__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_2A883DD032F22BF2(::Class_0_16E4307DCC419505_667* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_667*))((::PBYTE)hIl2Cpp + CLASS_1_A5344434C2683AB3_METHOD_1_2A883DD032F22BF2_OFFSET))(this, a1);
	}

	::System::Void Method_1_2FED925376FD83FF(::Class_0_16E4307DCC419505_667* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_667*))((::PBYTE)hIl2Cpp + CLASS_1_A5344434C2683AB3_METHOD_1_2FED925376FD83FF_OFFSET))(this, a1);
	}

	::RPG::GameCore::FixPoint Method_1_0144285F3A6ADD3C(::RPG::GameCore::AvatarPropertyType a1)
	{
		return ((::RPG::GameCore::FixPoint(*)(::PVOID, ::RPG::GameCore::AvatarPropertyType))((::PBYTE)hIl2Cpp + CLASS_1_A5344434C2683AB3_METHOD_1_0144285F3A6ADD3C_OFFSET))(this, a1);
	}
};

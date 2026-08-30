#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class UIController; }
namespace RPG::Client::Promises { class Promise; }
namespace System { class String; }

#define CLASS_1_F15061585E1D9D69_METHOD_1_32D4A70A38448E14_OFFSET UNITYSDK_OFFSET(0x19A1FC90)
#define CLASS_1_F15061585E1D9D69_METHOD_1_54A434EE00ACE7E9_OFFSET UNITYSDK_OFFSET(0x19A1FE00)
#define CLASS_1_F15061585E1D9D69__CTOR_1_OFFSET UNITYSDK_OFFSET(0x19A1FC70)
#define CLASS_1_F15061585E1D9D69__CTOR_OFFSET UNITYSDK_OFFSET(0x19A1FC60)

inline static constexpr unsigned int Class_1_F15061585E1D9D69_TypeDefinitionIndex = 73021;

class Class_1_F15061585E1D9D69 : public ::System::Object
{
public:
	::RPG::Client::UIController* HKJLKMCDMGB; // 0x10
	::RPG::Client::UIController* IBLBKLNHKLL; // 0x18
	::System::Boolean ONGHHJLHEIH; // 0x20

	::System::Void _ctor(::RPG::Client::UIController* a1, ::RPG::Client::UIController* a2, ::System::Boolean a3)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::UIController*, ::RPG::Client::UIController*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_F15061585E1D9D69__CTOR_OFFSET))(this, a1, a2, a3);
	}

	::System::Void _ctor_1(::RPG::Client::UIController* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::UIController*))((::PBYTE)hIl2Cpp + CLASS_1_F15061585E1D9D69__CTOR_1_OFFSET))(this, a1);
	}

	::RPG::Client::Promises::Promise* Method_1_32D4A70A38448E14()
	{
		return ((::RPG::Client::Promises::Promise*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F15061585E1D9D69_METHOD_1_32D4A70A38448E14_OFFSET))(this);
	}

	::System::String* Method_1_54A434EE00ACE7E9()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F15061585E1D9D69_METHOD_1_54A434EE00ACE7E9_OFFSET))(this);
	}
};

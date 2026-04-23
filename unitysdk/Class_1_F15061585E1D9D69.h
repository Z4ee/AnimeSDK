#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class UIController; }
namespace RPG::Client::Promises { class Promise; }
namespace System { class String; }

#define CLASS_1_F15061585E1D9D69_METHOD_1_124784A23C76D006_OFFSET UNITYSDK_OFFSET(0x11DC8150)
#define CLASS_1_F15061585E1D9D69_METHOD_1_49091FA7D0FEFC35_OFFSET UNITYSDK_OFFSET(0x11DC8260)
#define CLASS_1_F15061585E1D9D69__CTOR_1_OFFSET UNITYSDK_OFFSET(0x11DC8130)
#define CLASS_1_F15061585E1D9D69__CTOR_OFFSET UNITYSDK_OFFSET(0x11DC8120)

inline static constexpr unsigned int Class_1_F15061585E1D9D69_TypeDefinitionIndex = 67322;

class Class_1_F15061585E1D9D69 : public ::System::Object
{
public:
	::RPG::Client::UIController* Field_1_2; // 0x10
	::RPG::Client::UIController* Field_1_1; // 0x18
	::System::Boolean Field_1_0; // 0x20

	::System::Void _ctor(::RPG::Client::UIController* a1, ::RPG::Client::UIController* a2, ::System::Boolean a3)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::UIController*, ::RPG::Client::UIController*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_F15061585E1D9D69__CTOR_OFFSET))(this, a1, a2, a3);
	}

	::System::Void _ctor_1(::RPG::Client::UIController* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::UIController*))((::PBYTE)hIl2Cpp + CLASS_1_F15061585E1D9D69__CTOR_1_OFFSET))(this, a1);
	}

	::RPG::Client::Promises::Promise* Method_1_124784A23C76D006()
	{
		return ((::RPG::Client::Promises::Promise*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F15061585E1D9D69_METHOD_1_124784A23C76D006_OFFSET))(this);
	}

	::System::String* Method_1_49091FA7D0FEFC35()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F15061585E1D9D69_METHOD_1_49091FA7D0FEFC35_OFFSET))(this);
	}
};

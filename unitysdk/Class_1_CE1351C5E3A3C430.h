#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/WorkNodeState.h"
#include "unitysdk/System/Object.h"

class Class_3_985419CB30979FC6;
namespace System { class Action; }

#define CLASS_1_CE1351C5E3A3C430_DISPOSE_OFFSET UNITYSDK_OFFSET(0x15EBBDA0)
#define CLASS_1_CE1351C5E3A3C430_METHOD_1_0F87F20F7EC17068_OFFSET UNITYSDK_OFFSET(0x1645ECA0)
#define CLASS_1_CE1351C5E3A3C430_METHOD_1_39590AB2089F9F4D_OFFSET UNITYSDK_OFFSET(0x1645EBE0)
#define CLASS_1_CE1351C5E3A3C430_METHOD_1_3FEDBA52BB885E46_OFFSET UNITYSDK_OFFSET(0x15EBBE70)
#define CLASS_1_CE1351C5E3A3C430_METHOD_1_4343F372F34C05BF_OFFSET UNITYSDK_OFFSET(0x15EBBE10)
#define CLASS_1_CE1351C5E3A3C430_METHOD_1_4D1AF36C364D23A7_OFFSET UNITYSDK_OFFSET(0x1645EAD0)
#define CLASS_1_CE1351C5E3A3C430_METHOD_1_F239777256F9BA8F_OFFSET UNITYSDK_OFFSET(0x1645ECF0)
#define CLASS_1_CE1351C5E3A3C430__CTOR_OFFSET UNITYSDK_OFFSET(0x1645ED00)

inline static constexpr unsigned int Class_1_CE1351C5E3A3C430_TypeDefinitionIndex = 58312;

class Class_1_CE1351C5E3A3C430 : public ::System::Object
{
public:
	::Class_3_985419CB30979FC6* Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_CE1351C5E3A3C430__CTOR_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_CE1351C5E3A3C430_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_1_3FEDBA52BB885E46(::Class_3_985419CB30979FC6* a1, ::System::Action* a2, ::System::Action* a3)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_985419CB30979FC6*, ::System::Action*, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_CE1351C5E3A3C430_METHOD_1_3FEDBA52BB885E46_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_4343F372F34C05BF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_CE1351C5E3A3C430_METHOD_1_4343F372F34C05BF_OFFSET))(this);
	}

	::System::Void Method_1_4D1AF36C364D23A7(::System::Action* a1, ::System::Action* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_CE1351C5E3A3C430_METHOD_1_4D1AF36C364D23A7_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_39590AB2089F9F4D(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_CE1351C5E3A3C430_METHOD_1_39590AB2089F9F4D_OFFSET))(this, a1);
	}

	::RPG::Client::WorkNodeState Method_1_0F87F20F7EC17068()
	{
		return ((::RPG::Client::WorkNodeState(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_CE1351C5E3A3C430_METHOD_1_0F87F20F7EC17068_OFFSET))(this);
	}

	::Class_3_985419CB30979FC6* Method_1_F239777256F9BA8F()
	{
		return ((::Class_3_985419CB30979FC6*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_CE1351C5E3A3C430_METHOD_1_F239777256F9BA8F_OFFSET))(this);
	}
};

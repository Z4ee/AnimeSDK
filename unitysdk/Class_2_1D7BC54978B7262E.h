#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class MarbleTaskConfig; }
namespace System { class String; }

#define CLASS_2_1D7BC54978B7262E_METHOD_2_2F4B6108E2917C18_OFFSET UNITYSDK_OFFSET(0x1CEAF5D0)
#define CLASS_2_1D7BC54978B7262E__CTOR_OFFSET UNITYSDK_OFFSET(0x1CEAF780)

inline static constexpr unsigned int Class_2_1D7BC54978B7262E_TypeDefinitionIndex = 16870;

class Class_2_1D7BC54978B7262E : public ::RPG::GameCore::JsonConfig
{
public:
	::Il2CppArray<::RPG::GameCore::MarbleTaskConfig*>* NEGLMLIAPBI; // 0x10
	::System::String* LIHGDFGCPIC; // 0x18
	::System::Int32 APAKCBFMCAB; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_1D7BC54978B7262E__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_2_2F4B6108E2917C18(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_2_1D7BC54978B7262E*& a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_2_1D7BC54978B7262E*&))((::PBYTE)hIl2Cpp + CLASS_2_1D7BC54978B7262E_METHOD_2_2F4B6108E2917C18_OFFSET))(a1, a2);
	}
};

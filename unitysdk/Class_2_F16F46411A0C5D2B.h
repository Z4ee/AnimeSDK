#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define CLASS_2_F16F46411A0C5D2B_METHOD_2_F59691C46D515239_OFFSET UNITYSDK_OFFSET(0x1D5E6A50)
#define CLASS_2_F16F46411A0C5D2B__CTOR_OFFSET UNITYSDK_OFFSET(0x1D5E6B40)

inline static constexpr unsigned int Class_2_F16F46411A0C5D2B_TypeDefinitionIndex = 21311;

class Class_2_F16F46411A0C5D2B : public ::RPG::GameCore::JsonConfig
{
public:
	::Il2CppArray<::System::String*>* AJPGMJGOICE; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F16F46411A0C5D2B__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_2_F59691C46D515239(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_2_F16F46411A0C5D2B*& a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_2_F16F46411A0C5D2B*&))((::PBYTE)hIl2Cpp + CLASS_2_F16F46411A0C5D2B_METHOD_2_F59691C46D515239_OFFSET))(a1, a2);
	}
};

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/DynamicValueContextScope.h"
#include "unitysdk/RPG/GameCore/ElationPointReadType.h"
#include "unitysdk/RPG/GameCore/SetDynamicValueBase.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class Object; }
namespace System { class String; }

#define CLASS_4_DA7C942171912AE3_GETDYNAMICKEY_OFFSET UNITYSDK_OFFSET(0x1C795280)
#define CLASS_4_DA7C942171912AE3_METHOD_4_9968A253B5B328D1_OFFSET UNITYSDK_OFFSET(0x1C795090)
#define CLASS_4_DA7C942171912AE3_METHOD_4_B7FA72CFA6BF5CE4_OFFSET UNITYSDK_OFFSET(0x1C7950D0)
#define CLASS_4_DA7C942171912AE3__CTOR_OFFSET UNITYSDK_OFFSET(0x1C7950C0)

inline static constexpr unsigned int Class_4_DA7C942171912AE3_TypeDefinitionIndex = 22528;

class Class_4_DA7C942171912AE3 : public ::RPG::GameCore::SetDynamicValueBase
{
public:
	::System::String* FHLJGDGMMHK; // 0x18
	::RPG::GameCore::ElationPointReadType PICEOEEKCIN; // 0x20
	::RPG::GameCore::DynamicValueContextScope AMEKHLANFKP; // 0x24

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_DA7C942171912AE3__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_4_9968A253B5B328D1(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_4_DA7C942171912AE3*& a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_4_DA7C942171912AE3*&))((::PBYTE)hIl2Cpp + CLASS_4_DA7C942171912AE3_METHOD_4_9968A253B5B328D1_OFFSET))(a1, a2);
	}

	static ::System::Void Method_4_B7FA72CFA6BF5CE4(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_4_DA7C942171912AE3* a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_4_DA7C942171912AE3*))((::PBYTE)hIl2Cpp + CLASS_4_DA7C942171912AE3_METHOD_4_B7FA72CFA6BF5CE4_OFFSET))(a1, a2);
	}

	::System::Object* GetDynamicKey()
	{
		return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_DA7C942171912AE3_GETDYNAMICKEY_OFFSET))(this);
	}
};

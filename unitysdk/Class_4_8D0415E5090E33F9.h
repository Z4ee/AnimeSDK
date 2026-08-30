#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/DynamicValueContextScope.h"
#include "unitysdk/RPG/GameCore/SetDynamicValueBase.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class TargetEvaluator; }
namespace System { class Object; }
namespace System { class String; }

#define CLASS_4_8D0415E5090E33F9_GETDYNAMICKEY_OFFSET UNITYSDK_OFFSET(0xCA393F0)
#define CLASS_4_8D0415E5090E33F9_METHOD_4_017371A88D09A16A_OFFSET UNITYSDK_OFFSET(0xCA391E0)
#define CLASS_4_8D0415E5090E33F9_METHOD_4_6D3BD31FF07A4A8E_OFFSET UNITYSDK_OFFSET(0xCA39180)
#define CLASS_4_8D0415E5090E33F9__CTOR_OFFSET UNITYSDK_OFFSET(0xCA391D0)

inline static constexpr unsigned int Class_4_8D0415E5090E33F9_TypeDefinitionIndex = 23110;

class Class_4_8D0415E5090E33F9 : public ::RPG::GameCore::SetDynamicValueBase
{
public:
	::RPG::GameCore::DynamicFloat* DKJFDABPLCO; // 0x18
	::RPG::GameCore::TargetEvaluator* OLPAJJAEEHH; // 0x20
	::System::String* FHLJGDGMMHK; // 0x28
	::RPG::GameCore::DynamicValueContextScope AMEKHLANFKP; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_8D0415E5090E33F9__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_4_6D3BD31FF07A4A8E(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_4_8D0415E5090E33F9*& a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_4_8D0415E5090E33F9*&))((::PBYTE)hIl2Cpp + CLASS_4_8D0415E5090E33F9_METHOD_4_6D3BD31FF07A4A8E_OFFSET))(a1, a2);
	}

	static ::System::Void Method_4_017371A88D09A16A(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_4_8D0415E5090E33F9* a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_4_8D0415E5090E33F9*))((::PBYTE)hIl2Cpp + CLASS_4_8D0415E5090E33F9_METHOD_4_017371A88D09A16A_OFFSET))(a1, a2);
	}

	::System::Object* GetDynamicKey()
	{
		return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_8D0415E5090E33F9_GETDYNAMICKEY_OFFSET))(this);
	}
};

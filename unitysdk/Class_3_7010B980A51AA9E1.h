#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicString; }
namespace System { class String; }

#define CLASS_3_7010B980A51AA9E1_METHOD_3_03AAA6DBB5BE6FBE_OFFSET UNITYSDK_OFFSET(0x1CA6FF00)
#define CLASS_3_7010B980A51AA9E1_METHOD_3_A6D862070568AC73_OFFSET UNITYSDK_OFFSET(0x1CA6FF40)
#define CLASS_3_7010B980A51AA9E1__CTOR_OFFSET UNITYSDK_OFFSET(0x1CA6FF30)

inline static constexpr unsigned int Class_3_7010B980A51AA9E1_TypeDefinitionIndex = 21188;

class Class_3_7010B980A51AA9E1 : public ::RPG::GameCore::TaskConfig
{
public:
	::Il2CppArray<::System::String*>* BOLBCGBEBPG; // 0x18
	::RPG::GameCore::DynamicString* MNMHMECGDAK; // 0x20
	::System::Boolean MOKNCFJICIC; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_7010B980A51AA9E1__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_3_03AAA6DBB5BE6FBE(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_3_7010B980A51AA9E1*& a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_3_7010B980A51AA9E1*&))((::PBYTE)hIl2Cpp + CLASS_3_7010B980A51AA9E1_METHOD_3_03AAA6DBB5BE6FBE_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_A6D862070568AC73(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_3_7010B980A51AA9E1* a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_3_7010B980A51AA9E1*))((::PBYTE)hIl2Cpp + CLASS_3_7010B980A51AA9E1_METHOD_3_A6D862070568AC73_OFFSET))(a1, a2);
	}
};

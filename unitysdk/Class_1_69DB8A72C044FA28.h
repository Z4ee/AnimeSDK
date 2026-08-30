#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/HipplenEffectType.h"
#include "unitysdk/System/Object.h"

class Class_1_637CF5391C15E01B;
class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define CLASS_1_69DB8A72C044FA28_METHOD_1_81F3FEDEB8077FC5_OFFSET UNITYSDK_OFFSET(0x1C72B560)
#define CLASS_1_69DB8A72C044FA28__CTOR_OFFSET UNITYSDK_OFFSET(0x1C72B730)

inline static constexpr unsigned int Class_1_69DB8A72C044FA28_TypeDefinitionIndex = 11642;

class Class_1_69DB8A72C044FA28 : public ::System::Object
{
public:
	::System::String* EJHODPJIFIN; // 0x10
	::Il2CppArray<::Class_1_637CF5391C15E01B*>* AAIAEKDKMMK; // 0x18
	::System::UInt32 PHFMCACHFIJ; // 0x20
	::RPG::GameCore::HipplenEffectType GMPGDEINODK; // 0x24

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_69DB8A72C044FA28__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_1_81F3FEDEB8077FC5(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_1_69DB8A72C044FA28*& a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_1_69DB8A72C044FA28*&))((::PBYTE)hIl2Cpp + CLASS_1_69DB8A72C044FA28_METHOD_1_81F3FEDEB8077FC5_OFFSET))(a1, a2);
	}
};

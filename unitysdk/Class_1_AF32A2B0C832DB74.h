#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/HipplenEffectType.h"
#include "unitysdk/System/Object.h"

class Class_1_637CF5391C15E01B;
class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define CLASS_1_AF32A2B0C832DB74_METHOD_1_81F3FEDEB8077FC5_OFFSET UNITYSDK_OFFSET(0x179553E0)
#define CLASS_1_AF32A2B0C832DB74__CTOR_OFFSET UNITYSDK_OFFSET(0x179555C0)

inline static constexpr unsigned int Class_1_AF32A2B0C832DB74_TypeDefinitionIndex = 10860;

class Class_1_AF32A2B0C832DB74 : public ::System::Object
{
public:
	::Il2CppArray<::Class_1_637CF5391C15E01B*>* Field_1_3; // 0x10
	::System::String* Field_1_2; // 0x18
	::System::UInt32 Field_1_0; // 0x20
	::RPG::GameCore::HipplenEffectType Field_1_1; // 0x24

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_AF32A2B0C832DB74__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_1_81F3FEDEB8077FC5(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_1_AF32A2B0C832DB74*& a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_1_AF32A2B0C832DB74*&))((::PBYTE)hIl2Cpp + CLASS_1_AF32A2B0C832DB74_METHOD_1_81F3FEDEB8077FC5_OFFSET))(a1, a2);
	}
};

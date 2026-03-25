#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicString; }

#define CLASS_3_032754C131C9ABAA_METHOD_3_3AD4360E2346F7A3_OFFSET UNITYSDK_OFFSET(0x16D9F340)
#define CLASS_3_032754C131C9ABAA_METHOD_3_910CE6381099E090_OFFSET UNITYSDK_OFFSET(0x16D9F2C0)
#define CLASS_3_032754C131C9ABAA__CTOR_OFFSET UNITYSDK_OFFSET(0x16D9F310)

inline static constexpr unsigned int Class_3_032754C131C9ABAA_TypeDefinitionIndex = 20342;

class Class_3_032754C131C9ABAA : public ::RPG::GameCore::TaskConfig
{
public:
	::Il2CppArray<::RPG::GameCore::DynamicString*>* Field_3_2; // 0x18
	::RPG::GameCore::DynamicString* Field_3_0; // 0x20
	::RPG::GameCore::DynamicString* Field_3_1; // 0x28
	::RPG::GameCore::DynamicString* Field_3_3; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_032754C131C9ABAA__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_3_910CE6381099E090(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_3_032754C131C9ABAA*& a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_3_032754C131C9ABAA*&))((::PBYTE)hIl2Cpp + CLASS_3_032754C131C9ABAA_METHOD_3_910CE6381099E090_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_3AD4360E2346F7A3(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_3_032754C131C9ABAA* a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_3_032754C131C9ABAA*))((::PBYTE)hIl2Cpp + CLASS_3_032754C131C9ABAA_METHOD_3_3AD4360E2346F7A3_OFFSET))(a1, a2);
	}
};

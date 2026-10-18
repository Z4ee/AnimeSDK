#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/MarbleTaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
class Class_2_1D7BC54978B7262E;
namespace System { class String; }

#define CLASS_3_627E2A12AA72A749_METHOD_3_1F96CACAEB5EDB64_OFFSET UNITYSDK_OFFSET(0x1CDC4550)
#define CLASS_3_627E2A12AA72A749_METHOD_3_9AEA5EB872A8ECD8_OFFSET UNITYSDK_OFFSET(0x1CDC45B0)
#define CLASS_3_627E2A12AA72A749__CTOR_OFFSET UNITYSDK_OFFSET(0x1CDC45A0)

inline static constexpr unsigned int Class_3_627E2A12AA72A749_TypeDefinitionIndex = 16871;

class Class_3_627E2A12AA72A749 : public ::RPG::GameCore::MarbleTaskConfig
{
public:
	::System::String* KICLGMCEMNH; // 0x10
	::Il2CppArray<::RPG::GameCore::MarbleTaskConfig*>* DLHHFOLGFLP; // 0x18
	::Il2CppArray<::Class_2_1D7BC54978B7262E*>* HFPHJBGAJOJ; // 0x20
	::System::Boolean HNMFDELHIEK; // 0x28
	::System::Int32 KHFBFFHFOCA; // 0x2C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_627E2A12AA72A749__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_3_1F96CACAEB5EDB64(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_3_627E2A12AA72A749*& a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_3_627E2A12AA72A749*&))((::PBYTE)hIl2Cpp + CLASS_3_627E2A12AA72A749_METHOD_3_1F96CACAEB5EDB64_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_9AEA5EB872A8ECD8(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_3_627E2A12AA72A749* a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_3_627E2A12AA72A749*))((::PBYTE)hIl2Cpp + CLASS_3_627E2A12AA72A749_METHOD_3_9AEA5EB872A8ECD8_OFFSET))(a1, a2);
	}
};

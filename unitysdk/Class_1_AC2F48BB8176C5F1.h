#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_A2EB7BCE6758C89E.h"
#include "unitysdk/Struct_2_DF90B2BD73749811_1.h"
#include "unitysdk/System/Object.h"

class Class_1_5F51D4049EA87B7B;
class Class_2_291F7DA21A504FC4;
class Class_2_7AA0468CE6C1F3D7;
namespace RPG::GameCore { class RtModifierConfig; }
namespace RPG::GameCore { class RtSubModifierData; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_AC2F48BB8176C5F1_CLEAR_OFFSET UNITYSDK_OFFSET(0x16A8A2F0)
#define CLASS_1_AC2F48BB8176C5F1_METHOD_1_07280B24DFAC0CA9_OFFSET UNITYSDK_OFFSET(0x16A8A840)
#define CLASS_1_AC2F48BB8176C5F1_METHOD_1_128774387667156B_OFFSET UNITYSDK_OFFSET(0x16A8BF00)
#define CLASS_1_AC2F48BB8176C5F1_METHOD_1_72E394A14E3B998C_OFFSET UNITYSDK_OFFSET(0x16A8B530)
#define CLASS_1_AC2F48BB8176C5F1_METHOD_1_7DB49B5407C8FD68_OFFSET UNITYSDK_OFFSET(0x16A8B330)
#define CLASS_1_AC2F48BB8176C5F1_METHOD_1_8CCFD3DF4152B22A_OFFSET UNITYSDK_OFFSET(0x16A8A330)
#define CLASS_1_AC2F48BB8176C5F1_METHOD_1_B3E7A92889B4D161_OFFSET UNITYSDK_OFFSET(0x16A8BD40)
#define CLASS_1_AC2F48BB8176C5F1_METHOD_1_E5B2D19C36637166_OFFSET UNITYSDK_OFFSET(0x16A8B420)
#define CLASS_1_AC2F48BB8176C5F1__CTOR_OFFSET UNITYSDK_OFFSET(0x16A8BF20)

inline static constexpr unsigned int Class_1_AC2F48BB8176C5F1_TypeDefinitionIndex = 51300;

class Class_1_AC2F48BB8176C5F1 : public ::System::Object
{
public:
	::Class_2_291F7DA21A504FC4* Field_1_0; // 0x10
	::RPG::GameCore::RtSubModifierData* Field_1_1; // 0x18
	::Class_1_5F51D4049EA87B7B* Field_1_2; // 0x20
	::System::Collections::Generic::List_1<::Struct_2_A2EB7BCE6758C89E>* Field_1_3; // 0x28
	::System::Collections::Generic::List_1<::Struct_2_DF90B2BD73749811_1>* Field_1_4; // 0x30
	::RPG::GameCore::RtModifierConfig* Field_1_5; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_AC2F48BB8176C5F1__CTOR_OFFSET))(this);
	}

	::System::Void Clear()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_AC2F48BB8176C5F1_CLEAR_OFFSET))(this);
	}

	::System::Void Method_1_8CCFD3DF4152B22A(::Class_2_291F7DA21A504FC4* a1, ::RPG::GameCore::RtSubModifierData* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_291F7DA21A504FC4*, ::RPG::GameCore::RtSubModifierData*))((::PBYTE)hIl2Cpp + CLASS_1_AC2F48BB8176C5F1_METHOD_1_8CCFD3DF4152B22A_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_7DB49B5407C8FD68()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_AC2F48BB8176C5F1_METHOD_1_7DB49B5407C8FD68_OFFSET))(this);
	}

	::System::Void Method_1_72E394A14E3B998C(::RPG::GameCore::RtSubModifierData* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::RtSubModifierData*))((::PBYTE)hIl2Cpp + CLASS_1_AC2F48BB8176C5F1_METHOD_1_72E394A14E3B998C_OFFSET))(this, a1);
	}

	::System::Void Method_1_07280B24DFAC0CA9()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_AC2F48BB8176C5F1_METHOD_1_07280B24DFAC0CA9_OFFSET))(this);
	}

	::System::Void Method_1_E5B2D19C36637166()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_AC2F48BB8176C5F1_METHOD_1_E5B2D19C36637166_OFFSET))(this);
	}

	::Class_2_7AA0468CE6C1F3D7* Method_1_B3E7A92889B4D161()
	{
		return ((::Class_2_7AA0468CE6C1F3D7*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_AC2F48BB8176C5F1_METHOD_1_B3E7A92889B4D161_OFFSET))(this);
	}

	::System::String* Method_1_128774387667156B()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_AC2F48BB8176C5F1_METHOD_1_128774387667156B_OFFSET))(this);
	}
};

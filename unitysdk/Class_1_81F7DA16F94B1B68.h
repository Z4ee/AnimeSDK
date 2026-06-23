#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_CED4C4BADCBE81C2;
namespace Foundation { class IEntity; }
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }

#define CLASS_1_81F7DA16F94B1B68_METHOD_1_47CE0B11F0AE0F53_OFFSET UNITYSDK_OFFSET(0xFE34190)
#define CLASS_1_81F7DA16F94B1B68_METHOD_1_5BADFCADDB2CD95E_OFFSET UNITYSDK_OFFSET(0xFE34050)
#define CLASS_1_81F7DA16F94B1B68_METHOD_1_B4B32DA57E99BDEF_OFFSET UNITYSDK_OFFSET(0xFE33F10)
#define CLASS_1_81F7DA16F94B1B68__CCTOR_OFFSET UNITYSDK_OFFSET(0xFE342E0)
#define CLASS_1_81F7DA16F94B1B68__CTOR_OFFSET UNITYSDK_OFFSET(0xFE342D0)

inline static constexpr unsigned int Class_1_81F7DA16F94B1B68_TypeDefinitionIndex = 62349;

class Class_1_81F7DA16F94B1B68 : public ::System::Object
{
public:
	static ::Class_1_81F7DA16F94B1B68** StaticGet_Field_1_0()
	{
		return (::Class_1_81F7DA16F94B1B68**)Il2CppClass::FromTypeDefinitionIndex(Class_1_81F7DA16F94B1B68_TypeDefinitionIndex)->GetStaticField(0x3B970);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_81F7DA16F94B1B68__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_81F7DA16F94B1B68__CCTOR_OFFSET))();
	}

	::System::Void Method_1_B4B32DA57E99BDEF(::Foundation::IEntity* a1, ::System::Action* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Foundation::IEntity*, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_81F7DA16F94B1B68_METHOD_1_B4B32DA57E99BDEF_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_5BADFCADDB2CD95E(::Foundation::IEntity* a1, ::System::Action* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Foundation::IEntity*, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_81F7DA16F94B1B68_METHOD_1_5BADFCADDB2CD95E_OFFSET))(this, a1, a2);
	}

	::System::Collections::Generic::IReadOnlyList_1<::Class_1_CED4C4BADCBE81C2*>* Method_1_47CE0B11F0AE0F53(::Foundation::IEntity* a1)
	{
		return ((::System::Collections::Generic::IReadOnlyList_1<::Class_1_CED4C4BADCBE81C2*>*(*)(::PVOID, ::Foundation::IEntity*))((::PBYTE)hIl2Cpp + CLASS_1_81F7DA16F94B1B68_METHOD_1_47CE0B11F0AE0F53_OFFSET))(this, a1);
	}
};

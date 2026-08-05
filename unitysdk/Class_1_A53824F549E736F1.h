#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_446FF0195498B714;
namespace Foundation { class IEntity; }
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }

#define CLASS_1_A53824F549E736F1_METHOD_1_5BE118A8BEDA1F94_OFFSET UNITYSDK_OFFSET(0x1C625550)
#define CLASS_1_A53824F549E736F1_METHOD_1_782A4B0E1190FFAD_OFFSET UNITYSDK_OFFSET(0x1C625850)
#define CLASS_1_A53824F549E736F1_METHOD_1_D8785C8DAC669EA1_OFFSET UNITYSDK_OFFSET(0x1C625780)
#define CLASS_1_A53824F549E736F1__CCTOR_OFFSET UNITYSDK_OFFSET(0x1C625B30)
#define CLASS_1_A53824F549E736F1__CTOR_OFFSET UNITYSDK_OFFSET(0x1C625B20)

inline static constexpr unsigned int Class_1_A53824F549E736F1_TypeDefinitionIndex = 29460;

class Class_1_A53824F549E736F1 : public ::System::Object
{
public:
	static ::Class_1_A53824F549E736F1** StaticGet_Field_1_0()
	{
		return (::Class_1_A53824F549E736F1**)Il2CppClass::FromTypeDefinitionIndex(Class_1_A53824F549E736F1_TypeDefinitionIndex)->GetStaticField(0x24D90);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A53824F549E736F1__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_A53824F549E736F1__CCTOR_OFFSET))();
	}

	::System::Void Method_1_5BE118A8BEDA1F94(::Foundation::IEntity* a1, ::System::Action* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Foundation::IEntity*, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_A53824F549E736F1_METHOD_1_5BE118A8BEDA1F94_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_D8785C8DAC669EA1(::Foundation::IEntity* a1, ::System::Action* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Foundation::IEntity*, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_A53824F549E736F1_METHOD_1_D8785C8DAC669EA1_OFFSET))(this, a1, a2);
	}

	::System::Collections::Generic::IReadOnlyList_1<::Class_1_446FF0195498B714*>* Method_1_782A4B0E1190FFAD(::Foundation::IEntity* a1)
	{
		return ((::System::Collections::Generic::IReadOnlyList_1<::Class_1_446FF0195498B714*>*(*)(::PVOID, ::Foundation::IEntity*))((::PBYTE)hIl2Cpp + CLASS_1_A53824F549E736F1_METHOD_1_782A4B0E1190FFAD_OFFSET))(this, a1);
	}
};

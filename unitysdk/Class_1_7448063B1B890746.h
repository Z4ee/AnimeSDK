#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_CED4C4BADCBE81C2;
namespace Foundation { class IEntity; }
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }

#define CLASS_1_7448063B1B890746_METHOD_1_782A4B0E1190FFAD_OFFSET UNITYSDK_OFFSET(0x1D16F440)
#define CLASS_1_7448063B1B890746_METHOD_1_BC59C5365642B137_OFFSET UNITYSDK_OFFSET(0x1D16F1C0)
#define CLASS_1_7448063B1B890746_METHOD_1_D8785C8DAC669EA1_OFFSET UNITYSDK_OFFSET(0x1D16F300)
#define CLASS_1_7448063B1B890746__CCTOR_OFFSET UNITYSDK_OFFSET(0x1D16F520)
#define CLASS_1_7448063B1B890746__CTOR_OFFSET UNITYSDK_OFFSET(0x1D16F510)

inline static constexpr unsigned int Class_1_7448063B1B890746_TypeDefinitionIndex = 28922;

class Class_1_7448063B1B890746 : public ::System::Object
{
public:
	static ::Class_1_7448063B1B890746** StaticGet_Field_1_0()
	{
		return (::Class_1_7448063B1B890746**)Il2CppClass::FromTypeDefinitionIndex(Class_1_7448063B1B890746_TypeDefinitionIndex)->GetStaticField(0x236C0);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7448063B1B890746__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_7448063B1B890746__CCTOR_OFFSET))();
	}

	::System::Void Method_1_BC59C5365642B137(::Foundation::IEntity* a1, ::System::Action* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Foundation::IEntity*, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_7448063B1B890746_METHOD_1_BC59C5365642B137_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_D8785C8DAC669EA1(::Foundation::IEntity* a1, ::System::Action* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Foundation::IEntity*, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_7448063B1B890746_METHOD_1_D8785C8DAC669EA1_OFFSET))(this, a1, a2);
	}

	::System::Collections::Generic::IReadOnlyList_1<::Class_1_CED4C4BADCBE81C2*>* Method_1_782A4B0E1190FFAD(::Foundation::IEntity* a1)
	{
		return ((::System::Collections::Generic::IReadOnlyList_1<::Class_1_CED4C4BADCBE81C2*>*(*)(::PVOID, ::Foundation::IEntity*))((::PBYTE)hIl2Cpp + CLASS_1_7448063B1B890746_METHOD_1_782A4B0E1190FFAD_OFFSET))(this, a1);
	}
};

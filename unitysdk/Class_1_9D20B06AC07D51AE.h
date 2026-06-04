#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_9D20B06AC07D51AE_Class_1_0A269D8215127608;
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_9D20B06AC07D51AE_METHOD_1_871A662C902131BE_OFFSET UNITYSDK_OFFSET(0xAA9F210)
#define CLASS_1_9D20B06AC07D51AE_METHOD_1_D155D4917B3D2C6A_OFFSET UNITYSDK_OFFSET(0xAA9F3D0)
#define CLASS_1_9D20B06AC07D51AE_METHOD_1_EBEE0D0A222A8264_OFFSET UNITYSDK_OFFSET(0xAA9F330)
#define CLASS_1_9D20B06AC07D51AE__CTOR_OFFSET UNITYSDK_OFFSET(0xAA9F520)

inline static constexpr unsigned int Class_1_9D20B06AC07D51AE_TypeDefinitionIndex = 55536;

class Class_1_9D20B06AC07D51AE : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::Class_1_9D20B06AC07D51AE_Class_1_0A269D8215127608*>* Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9D20B06AC07D51AE__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_871A662C902131BE(::System::Action_1<::System::Object*>* a1, ::System::Object* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_9D20B06AC07D51AE_METHOD_1_871A662C902131BE_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_EBEE0D0A222A8264()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9D20B06AC07D51AE_METHOD_1_EBEE0D0A222A8264_OFFSET))(this);
	}

	::System::Void Method_1_D155D4917B3D2C6A()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9D20B06AC07D51AE_METHOD_1_D155D4917B3D2C6A_OFFSET))(this);
	}
};

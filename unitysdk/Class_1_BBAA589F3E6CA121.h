#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_FAF146B3D74C3C3F;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class Queue_1; }

#define CLASS_1_BBAA589F3E6CA121_GET_ISRUNNING_OFFSET UNITYSDK_OFFSET(0xA4EF060)
#define CLASS_1_BBAA589F3E6CA121_METHOD_1_4ABCDF2586D50461_OFFSET UNITYSDK_OFFSET(0xA4EF120)
#define CLASS_1_BBAA589F3E6CA121_METHOD_1_810DD818C57F797D_OFFSET UNITYSDK_OFFSET(0xA4EF7A0)
#define CLASS_1_BBAA589F3E6CA121_METHOD_1_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0xA4EF750)
#define CLASS_1_BBAA589F3E6CA121_SET_ISRUNNING_OFFSET UNITYSDK_OFFSET(0xA4EF070)
#define CLASS_1_BBAA589F3E6CA121_TOSTRING_OFFSET UNITYSDK_OFFSET(0xA4EFF40)
#define CLASS_1_BBAA589F3E6CA121__CTOR_OFFSET UNITYSDK_OFFSET(0xA4EF080)
#define CLASS_1_BBAA589F3E6CA121___IFIXBASEPROXY_TOSTRING_OFFSET UNITYSDK_OFFSET(0xA4EFF80)

inline static constexpr unsigned int Class_1_BBAA589F3E6CA121_TypeDefinitionIndex = 74457;

class Class_1_BBAA589F3E6CA121 : public ::System::Object
{
public:
	::System::String* Field_1_0; // 0x10
	::System::Collections::Generic::Queue_1<::Class_1_FAF146B3D74C3C3F*>* Field_1_1; // 0x18
	::System::Boolean _IsRunning_k__BackingField; // 0x20
	::System::Int32 Field_1_3; // 0x24

	::System::Void _ctor(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_BBAA589F3E6CA121__CTOR_OFFSET))(this, a1);
	}

	::System::Boolean get_IsRunning()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_BBAA589F3E6CA121_GET_ISRUNNING_OFFSET))(this);
	}

	::System::Void set_IsRunning(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_BBAA589F3E6CA121_SET_ISRUNNING_OFFSET))(this, a1);
	}

	::System::Void Method_1_4ABCDF2586D50461(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_BBAA589F3E6CA121_METHOD_1_4ABCDF2586D50461_OFFSET))(this, a1);
	}

	::System::Void Method_1_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_BBAA589F3E6CA121_METHOD_1_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_1_810DD818C57F797D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_BBAA589F3E6CA121_METHOD_1_810DD818C57F797D_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_BBAA589F3E6CA121_TOSTRING_OFFSET))(this);
	}

	::System::String* __iFixBaseProxy_ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_BBAA589F3E6CA121___IFIXBASEPROXY_TOSTRING_OFFSET))(this);
	}
};

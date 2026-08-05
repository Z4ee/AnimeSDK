#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_2_F3CFF1AFF7EE7DCD;
namespace Nap::NapECS { class EcsComponent; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::Collections::Generic { template <typename T> class Stack_1; }

#define CLASS_1_EB17FFFFC6F5C998_DISPOSE_OFFSET UNITYSDK_OFFSET(0x157D95C0)
#define CLASS_1_EB17FFFFC6F5C998_METHOD_1_369BB5E7FA6A1768_OFFSET UNITYSDK_OFFSET(0x157D96F0)
#define CLASS_1_EB17FFFFC6F5C998_METHOD_1_58DE06D90C51DB70_OFFSET UNITYSDK_OFFSET(0x157D9930)
#define CLASS_1_EB17FFFFC6F5C998_METHOD_1_954B4C10C6C9F194_OFFSET UNITYSDK_OFFSET(0x157D9830)
#define CLASS_1_EB17FFFFC6F5C998__CCTOR_OFFSET UNITYSDK_OFFSET(0x157D9630)
#define CLASS_1_EB17FFFFC6F5C998__CTOR_OFFSET UNITYSDK_OFFSET(0x157D95B0)

inline static constexpr unsigned int Class_1_EB17FFFFC6F5C998_TypeDefinitionIndex = 65566;

class Class_1_EB17FFFFC6F5C998 : public ::System::Object
{
public:
	static ::System::Collections::Generic::Stack_1<::Class_1_EB17FFFFC6F5C998*>** StaticGet_Field_1_0()
	{
		return (::System::Collections::Generic::Stack_1<::Class_1_EB17FFFFC6F5C998*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_EB17FFFFC6F5C998_TypeDefinitionIndex)->GetStaticField(0x476A0);
	}
	::System::Collections::Generic::List_1<::Class_2_F3CFF1AFF7EE7DCD*>* Field_1_1; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EB17FFFFC6F5C998__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_EB17FFFFC6F5C998__CCTOR_OFFSET))();
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EB17FFFFC6F5C998_DISPOSE_OFFSET))(this);
	}

	static ::System::Void Method_1_369BB5E7FA6A1768(::Class_1_EB17FFFFC6F5C998*& a1)
	{
		return ((::System::Void(*)(::Class_1_EB17FFFFC6F5C998*&))((::PBYTE)hIl2Cpp + CLASS_1_EB17FFFFC6F5C998_METHOD_1_369BB5E7FA6A1768_OFFSET))(a1);
	}

	::System::Void Method_1_954B4C10C6C9F194(::System::Collections::Generic::List_1<::Nap::NapECS::EcsComponent*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::Nap::NapECS::EcsComponent*>*))((::PBYTE)hIl2Cpp + CLASS_1_EB17FFFFC6F5C998_METHOD_1_954B4C10C6C9F194_OFFSET))(this, a1);
	}

	static ::Class_1_EB17FFFFC6F5C998* Method_1_58DE06D90C51DB70()
	{
		return ((::Class_1_EB17FFFFC6F5C998*(*)())((::PBYTE)hIl2Cpp + CLASS_1_EB17FFFFC6F5C998_METHOD_1_58DE06D90C51DB70_OFFSET))();
	}
};

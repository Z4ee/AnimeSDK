#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define CLASS_1_4DB007740B828548_DELETE_OFFSET UNITYSDK_OFFSET(0x11762A00)
#define CLASS_1_4DB007740B828548_METHOD_1_701C082D0C41C7B1_OFFSET UNITYSDK_OFFSET(0x11762BE0)
#define CLASS_1_4DB007740B828548_METHOD_1_723DA4ED2B26C6FD_OFFSET UNITYSDK_OFFSET(0x11762AA0)
#define CLASS_1_4DB007740B828548_METHOD_1_9A3D3B20AC64C599_OFFSET UNITYSDK_OFFSET(0x11762930)
#define CLASS_1_4DB007740B828548_METHOD_1_AEE8799035F6C4DD_OFFSET UNITYSDK_OFFSET(0x11762870)
#define CLASS_1_4DB007740B828548_METHOD_1_F0E307B84478A272_OFFSET UNITYSDK_OFFSET(0x11762910)
#define CLASS_1_4DB007740B828548__CTOR_OFFSET UNITYSDK_OFFSET(0x11762850)

inline static constexpr unsigned int Class_1_4DB007740B828548_TypeDefinitionIndex = 81955;

class Class_1_4DB007740B828548 : public ::System::Object
{
public:
	::System::String* Field_1_1; // 0x10
	::System::String* Field_1_0; // 0x18

	::System::Void _ctor(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_4DB007740B828548__CTOR_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_AEE8799035F6C4DD()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4DB007740B828548_METHOD_1_AEE8799035F6C4DD_OFFSET))(this);
	}

	::System::Void Delete()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4DB007740B828548_DELETE_OFFSET))(this);
	}

	::System::Void Method_1_723DA4ED2B26C6FD(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_4DB007740B828548_METHOD_1_723DA4ED2B26C6FD_OFFSET))(this, a1);
	}

	::System::String* Method_1_701C082D0C41C7B1()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4DB007740B828548_METHOD_1_701C082D0C41C7B1_OFFSET))(this);
	}

	::System::String* Method_1_9A3D3B20AC64C599()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4DB007740B828548_METHOD_1_9A3D3B20AC64C599_OFFSET))(this);
	}

	::System::Boolean Method_1_F0E307B84478A272()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4DB007740B828548_METHOD_1_F0E307B84478A272_OFFSET))(this);
	}
};

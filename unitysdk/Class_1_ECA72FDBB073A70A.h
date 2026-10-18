#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_039A50D6162BA218;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_ECA72FDBB073A70A_METHOD_1_0832063091C8967B_OFFSET UNITYSDK_OFFSET(0x1EBF56A0)
#define CLASS_1_ECA72FDBB073A70A_METHOD_1_0865E94460F11643_OFFSET UNITYSDK_OFFSET(0x1EBF4F20)
#define CLASS_1_ECA72FDBB073A70A_METHOD_1_1290EA767C459179_OFFSET UNITYSDK_OFFSET(0x1EBF5060)
#define CLASS_1_ECA72FDBB073A70A_METHOD_1_15DFCC9D55945304_OFFSET UNITYSDK_OFFSET(0x1EBF51E0)
#define CLASS_1_ECA72FDBB073A70A_METHOD_1_24748FC20F375725_OFFSET UNITYSDK_OFFSET(0x1EBF51D0)
#define CLASS_1_ECA72FDBB073A70A_METHOD_1_55B8349E0B606444_OFFSET UNITYSDK_OFFSET(0x1EBF5820)
#define CLASS_1_ECA72FDBB073A70A__CTOR_OFFSET UNITYSDK_OFFSET(0x1EBF4A30)

inline static constexpr unsigned int Class_1_ECA72FDBB073A70A_TypeDefinitionIndex = 35271;

class Class_1_ECA72FDBB073A70A : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::System::String*>* HDENIHCMNHA; // 0x10
	::Class_1_039A50D6162BA218* GPKKOJMEDLF; // 0x18
	::System::Collections::Generic::List_1<::System::String*>* EBCHMKHAOOJ; // 0x20
	::System::Collections::Generic::HashSet_1<::System::String*>* BPLDPPGMHHA; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_ECA72FDBB073A70A__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_0865E94460F11643()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_ECA72FDBB073A70A_METHOD_1_0865E94460F11643_OFFSET))(this);
	}

	::System::Void Method_1_1290EA767C459179()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_ECA72FDBB073A70A_METHOD_1_1290EA767C459179_OFFSET))(this);
	}

	::Class_1_039A50D6162BA218* Method_1_24748FC20F375725()
	{
		return ((::Class_1_039A50D6162BA218*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_ECA72FDBB073A70A_METHOD_1_24748FC20F375725_OFFSET))(this);
	}

	::System::Void Method_1_15DFCC9D55945304(::System::String* a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_ECA72FDBB073A70A_METHOD_1_15DFCC9D55945304_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_0832063091C8967B(::System::String* a1, ::System::String* a2, ::System::String* a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_ECA72FDBB073A70A_METHOD_1_0832063091C8967B_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_55B8349E0B606444()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_ECA72FDBB073A70A_METHOD_1_55B8349E0B606444_OFFSET))(this);
	}
};

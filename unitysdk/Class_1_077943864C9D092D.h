#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_06F7995EB381C93A;
class Class_1_7807B2B04302CD7B_31;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::IO { class BinaryReader; }

#define CLASS_1_077943864C9D092D_CLEAR_OFFSET UNITYSDK_OFFSET(0x1872BFB0)
#define CLASS_1_077943864C9D092D_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1872BFF0)
#define CLASS_1_077943864C9D092D_METHOD_1_1E6584B11DEFF731_OFFSET UNITYSDK_OFFSET(0x1872C060)
#define CLASS_1_077943864C9D092D_METHOD_1_990051A022F8F32D_OFFSET UNITYSDK_OFFSET(0x1872DF50)
#define CLASS_1_077943864C9D092D_METHOD_1_99DD72D8CA2CAC3F_1_OFFSET UNITYSDK_OFFSET(0x1872D520)
#define CLASS_1_077943864C9D092D_METHOD_1_99DD72D8CA2CAC3F_OFFSET UNITYSDK_OFFSET(0x1872D2F0)
#define CLASS_1_077943864C9D092D_METHOD_1_C67B874CF00E8258_OFFSET UNITYSDK_OFFSET(0x1872D750)
#define CLASS_1_077943864C9D092D__CTOR_OFFSET UNITYSDK_OFFSET(0x1872E350)

inline static constexpr unsigned int Class_1_077943864C9D092D_TypeDefinitionIndex = 64565;

class Class_1_077943864C9D092D : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_077943864C9D092D__CTOR_OFFSET))(this);
	}

	::System::Void Clear()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_077943864C9D092D_CLEAR_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_077943864C9D092D_DISPOSE_OFFSET))(this);
	}

	::Class_1_06F7995EB381C93A* Method_1_1E6584B11DEFF731(::System::String* a1)
	{
		return ((::Class_1_06F7995EB381C93A*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_077943864C9D092D_METHOD_1_1E6584B11DEFF731_OFFSET))(this, a1);
	}

	::System::Void Method_1_99DD72D8CA2CAC3F(::System::Collections::Generic::List_1<::System::UInt32>* a1, ::System::IO::BinaryReader* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::UInt32>*, ::System::IO::BinaryReader*))((::PBYTE)hIl2Cpp + CLASS_1_077943864C9D092D_METHOD_1_99DD72D8CA2CAC3F_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_99DD72D8CA2CAC3F_1(::System::Collections::Generic::List_1<::System::UInt32>* a1, ::System::IO::BinaryReader* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::UInt32>*, ::System::IO::BinaryReader*))((::PBYTE)hIl2Cpp + CLASS_1_077943864C9D092D_METHOD_1_99DD72D8CA2CAC3F_1_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_C67B874CF00E8258(::System::Collections::Generic::List_1<::Class_1_7807B2B04302CD7B_31*>* a1, ::System::IO::BinaryReader* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::Class_1_7807B2B04302CD7B_31*>*, ::System::IO::BinaryReader*))((::PBYTE)hIl2Cpp + CLASS_1_077943864C9D092D_METHOD_1_C67B874CF00E8258_OFFSET))(this, a1, a2);
	}

	::Class_1_7807B2B04302CD7B_31* Method_1_990051A022F8F32D(::System::IO::BinaryReader* a1)
	{
		return ((::Class_1_7807B2B04302CD7B_31*(*)(::PVOID, ::System::IO::BinaryReader*))((::PBYTE)hIl2Cpp + CLASS_1_077943864C9D092D_METHOD_1_990051A022F8F32D_OFFSET))(this, a1);
	}
};

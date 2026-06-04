#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_7807B2B04302CD7B_29;
class Class_1_BD52D1CC7132DA5B;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::IO { class BinaryReader; }

#define CLASS_1_F088C4ED986C53F1_CLEAR_OFFSET UNITYSDK_OFFSET(0xA756250)
#define CLASS_1_F088C4ED986C53F1_DISPOSE_OFFSET UNITYSDK_OFFSET(0xA756290)
#define CLASS_1_F088C4ED986C53F1_METHOD_1_4131ED93BAD2423C_1_OFFSET UNITYSDK_OFFSET(0xA757370)
#define CLASS_1_F088C4ED986C53F1_METHOD_1_4131ED93BAD2423C_OFFSET UNITYSDK_OFFSET(0xA757280)
#define CLASS_1_F088C4ED986C53F1_METHOD_1_EA489521A79C6029_OFFSET UNITYSDK_OFFSET(0xA7578B0)
#define CLASS_1_F088C4ED986C53F1_METHOD_1_F04297C74AE62381_OFFSET UNITYSDK_OFFSET(0xA757460)
#define CLASS_1_F088C4ED986C53F1_METHOD_1_FB71558BE2941F9D_OFFSET UNITYSDK_OFFSET(0xA756300)
#define CLASS_1_F088C4ED986C53F1__CTOR_OFFSET UNITYSDK_OFFSET(0xA757A80)

inline static constexpr unsigned int Class_1_F088C4ED986C53F1_TypeDefinitionIndex = 63198;

class Class_1_F088C4ED986C53F1 : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F088C4ED986C53F1__CTOR_OFFSET))(this);
	}

	::System::Void Clear()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F088C4ED986C53F1_CLEAR_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F088C4ED986C53F1_DISPOSE_OFFSET))(this);
	}

	::Class_1_BD52D1CC7132DA5B* Method_1_FB71558BE2941F9D(::System::String* a1)
	{
		return ((::Class_1_BD52D1CC7132DA5B*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_F088C4ED986C53F1_METHOD_1_FB71558BE2941F9D_OFFSET))(this, a1);
	}

	::System::Void Method_1_4131ED93BAD2423C(::System::Collections::Generic::List_1<::System::UInt32>* a1, ::System::IO::BinaryReader* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::UInt32>*, ::System::IO::BinaryReader*))((::PBYTE)hIl2Cpp + CLASS_1_F088C4ED986C53F1_METHOD_1_4131ED93BAD2423C_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_4131ED93BAD2423C_1(::System::Collections::Generic::List_1<::System::UInt32>* a1, ::System::IO::BinaryReader* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::UInt32>*, ::System::IO::BinaryReader*))((::PBYTE)hIl2Cpp + CLASS_1_F088C4ED986C53F1_METHOD_1_4131ED93BAD2423C_1_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_F04297C74AE62381(::System::Collections::Generic::List_1<::Class_1_7807B2B04302CD7B_29*>* a1, ::System::IO::BinaryReader* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::Class_1_7807B2B04302CD7B_29*>*, ::System::IO::BinaryReader*))((::PBYTE)hIl2Cpp + CLASS_1_F088C4ED986C53F1_METHOD_1_F04297C74AE62381_OFFSET))(this, a1, a2);
	}

	::Class_1_7807B2B04302CD7B_29* Method_1_EA489521A79C6029(::System::IO::BinaryReader* a1)
	{
		return ((::Class_1_7807B2B04302CD7B_29*(*)(::PVOID, ::System::IO::BinaryReader*))((::PBYTE)hIl2Cpp + CLASS_1_F088C4ED986C53F1_METHOD_1_EA489521A79C6029_OFFSET))(this, a1);
	}
};

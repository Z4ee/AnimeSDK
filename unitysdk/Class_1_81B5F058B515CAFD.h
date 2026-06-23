#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_1EA8435E138F2E03;
class Class_1_4BAFC3388DC706BD;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_81B5F058B515CAFD_METHOD_1_146E6E50FAF07D8F_OFFSET UNITYSDK_OFFSET(0x14CBF780)
#define CLASS_1_81B5F058B515CAFD_METHOD_1_5012DEB7320C101A_OFFSET UNITYSDK_OFFSET(0x14CC2A40)
#define CLASS_1_81B5F058B515CAFD_METHOD_1_997789EFBC974E21_1_OFFSET UNITYSDK_OFFSET(0x14CC2C40)
#define CLASS_1_81B5F058B515CAFD_METHOD_1_997789EFBC974E21_OFFSET UNITYSDK_OFFSET(0x14CC2AE0)
#define CLASS_1_81B5F058B515CAFD_METHOD_1_B29205EE7F7B640C_OFFSET UNITYSDK_OFFSET(0x14CBFEC0)
#define CLASS_1_81B5F058B515CAFD__CTOR_OFFSET UNITYSDK_OFFSET(0x14CBF770)

inline static constexpr unsigned int Class_1_81B5F058B515CAFD_TypeDefinitionIndex = 57835;

class Class_1_81B5F058B515CAFD : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::String*>* Field_1_2; // 0x10
	::System::Collections::Generic::List_1<::Class_1_4BAFC3388DC706BD*>* Field_1_3; // 0x18
	::Class_1_1EA8435E138F2E03* Field_1_4; // 0x20
	::System::String* Field_1_1; // 0x28
	::System::String* Field_1_0; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_81B5F058B515CAFD__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_B29205EE7F7B640C()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_81B5F058B515CAFD_METHOD_1_B29205EE7F7B640C_OFFSET))(this);
	}

	::Class_1_4BAFC3388DC706BD* Method_1_5012DEB7320C101A(::System::Int32 a1)
	{
		return ((::Class_1_4BAFC3388DC706BD*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_81B5F058B515CAFD_METHOD_1_5012DEB7320C101A_OFFSET))(this, a1);
	}

	::System::Void Method_1_997789EFBC974E21(::System::Int32 a1, ::System::Int32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_81B5F058B515CAFD_METHOD_1_997789EFBC974E21_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_146E6E50FAF07D8F()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_81B5F058B515CAFD_METHOD_1_146E6E50FAF07D8F_OFFSET))(this);
	}

	::System::Void Method_1_997789EFBC974E21_1(::System::Int32 a1, ::System::Int32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_81B5F058B515CAFD_METHOD_1_997789EFBC974E21_1_OFFSET))(this, a1, a2);
	}
};

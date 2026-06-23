#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Random; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_8DB0BC4CF3861904_METHOD_1_5302D6BC1E11B8F2_OFFSET UNITYSDK_OFFSET(0x1DE3E0F0)
#define CLASS_1_8DB0BC4CF3861904_METHOD_1_B2A9BDCD63B0BFDB_OFFSET UNITYSDK_OFFSET(0x1DE3DE30)
#define CLASS_1_8DB0BC4CF3861904_METHOD_1_B8A7EA85E258BEEB_OFFSET UNITYSDK_OFFSET(0x1DE3E330)
#define CLASS_1_8DB0BC4CF3861904_METHOD_1_E3DE31A03057E055_OFFSET UNITYSDK_OFFSET(0x1DE3E690)
#define CLASS_1_8DB0BC4CF3861904__CCTOR_OFFSET UNITYSDK_OFFSET(0x1DE3DDB0)
#define CLASS_1_8DB0BC4CF3861904__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1DE3DD30)
#define CLASS_1_8DB0BC4CF3861904__CTOR_OFFSET UNITYSDK_OFFSET(0x1DE3DC80)

inline static constexpr unsigned int Class_1_8DB0BC4CF3861904_TypeDefinitionIndex = 8043;

class Class_1_8DB0BC4CF3861904 : public ::System::Object
{
public:
	static ::System::Random** StaticGet_Field_1_4()
	{
		return (::System::Random**)Il2CppClass::FromTypeDefinitionIndex(Class_1_8DB0BC4CF3861904_TypeDefinitionIndex)->GetStaticField(0x71B0);
	}
	::System::Collections::Generic::List_1<::System::Int32>* Field_1_3; // 0x10
	::System::Collections::Generic::List_1<::Il2CppArray<::System::Byte>*>* Field_1_1; // 0x18
	::System::Int32 Field_1_0; // 0x20
	::System::Int32 Field_1_2; // 0x24

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8DB0BC4CF3861904__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::System::Int32 a1, ::System::Collections::Generic::List_1<::System::Int32>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Collections::Generic::List_1<::System::Int32>*))((::PBYTE)hIl2Cpp + CLASS_1_8DB0BC4CF3861904__CTOR_1_OFFSET))(this, a1, a2);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_8DB0BC4CF3861904__CCTOR_OFFSET))();
	}

	::System::Void Method_1_B2A9BDCD63B0BFDB(::Il2CppArray<::System::Byte>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + CLASS_1_8DB0BC4CF3861904_METHOD_1_B2A9BDCD63B0BFDB_OFFSET))(this, a1);
	}

	::Il2CppArray<::System::Byte>* Method_1_5302D6BC1E11B8F2(::System::Int32 a1)
	{
		return ((::Il2CppArray<::System::Byte>*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_8DB0BC4CF3861904_METHOD_1_5302D6BC1E11B8F2_OFFSET))(this, a1);
	}

	::Il2CppArray<::System::Byte>* Method_1_B8A7EA85E258BEEB(::System::Int32 a1)
	{
		return ((::Il2CppArray<::System::Byte>*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_8DB0BC4CF3861904_METHOD_1_B8A7EA85E258BEEB_OFFSET))(this, a1);
	}

	::System::Void Method_1_E3DE31A03057E055()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8DB0BC4CF3861904_METHOD_1_E3DE31A03057E055_OFFSET))(this);
	}
};

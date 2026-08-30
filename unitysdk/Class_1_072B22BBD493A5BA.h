#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_FE9BD044832BC9C3.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client::Sample { template <typename T> class RingBuffer_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_072B22BBD493A5BA_GET_INSTANCE_OFFSET UNITYSDK_OFFSET(0x1A7962B0)
#define CLASS_1_072B22BBD493A5BA_METHOD_1_C472ADBAE9FA22E1_OFFSET UNITYSDK_OFFSET(0x1A796A70)
#define CLASS_1_072B22BBD493A5BA_METHOD_1_CF780FC3D0CB1833_OFFSET UNITYSDK_OFFSET(0x1A7962D0)
#define CLASS_1_072B22BBD493A5BA_METHOD_1_D7FE3FCFB1E0B054_OFFSET UNITYSDK_OFFSET(0x1A7968C0)
#define CLASS_1_072B22BBD493A5BA_METHOD_1_DD8554D026299D1A_OFFSET UNITYSDK_OFFSET(0x1A796960)
#define CLASS_1_072B22BBD493A5BA_METHOD_1_E3EB821F9F604183_OFFSET UNITYSDK_OFFSET(0x1A796C40)
#define CLASS_1_072B22BBD493A5BA_METHOD_1_F0D9B6AAFF504D87_OFFSET UNITYSDK_OFFSET(0x1A796440)
#define CLASS_1_072B22BBD493A5BA_SET_INSTANCE_OFFSET UNITYSDK_OFFSET(0x1A7962C0)
#define CLASS_1_072B22BBD493A5BA__CTOR_OFFSET UNITYSDK_OFFSET(0x1A7963C0)

inline static constexpr unsigned int Class_1_072B22BBD493A5BA_TypeDefinitionIndex = 73933;

class Class_1_072B22BBD493A5BA : public ::System::Object
{
public:
	static ::Class_1_072B22BBD493A5BA** StaticGet__Instance_k__BackingField()
	{
		return (::Class_1_072B22BBD493A5BA**)Il2CppClass::FromTypeDefinitionIndex(Class_1_072B22BBD493A5BA_TypeDefinitionIndex)->GetStaticField(0x54EB0);
	}
	// static const ::System::Int32 BIAHMCJKJOK = 0x40; // 0x0
	// static const ::System::Int32 NCKLDDGFPNJ = 0x8; // 0x0
	::System::Collections::Generic::List_1<::RPG::Client::Sample::RingBuffer_1<::System::Collections::Generic::List_1<::Struct_2_FE9BD044832BC9C3>*>*>* MFPNICMCKJG; // 0x10
	::System::Boolean CGDHNDBBDCH; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_072B22BBD493A5BA__CTOR_OFFSET))(this);
	}

	static ::Class_1_072B22BBD493A5BA* get_Instance()
	{
		return ((::Class_1_072B22BBD493A5BA*(*)())((::PBYTE)hIl2Cpp + CLASS_1_072B22BBD493A5BA_GET_INSTANCE_OFFSET))();
	}

	static ::System::Void set_Instance(::Class_1_072B22BBD493A5BA* a1)
	{
		return ((::System::Void(*)(::Class_1_072B22BBD493A5BA*))((::PBYTE)hIl2Cpp + CLASS_1_072B22BBD493A5BA_SET_INSTANCE_OFFSET))(a1);
	}

	static ::Class_1_072B22BBD493A5BA* Method_1_CF780FC3D0CB1833()
	{
		return ((::Class_1_072B22BBD493A5BA*(*)())((::PBYTE)hIl2Cpp + CLASS_1_072B22BBD493A5BA_METHOD_1_CF780FC3D0CB1833_OFFSET))();
	}

	::System::Void Method_1_F0D9B6AAFF504D87()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_072B22BBD493A5BA_METHOD_1_F0D9B6AAFF504D87_OFFSET))(this);
	}

	::System::Int32 Method_1_D7FE3FCFB1E0B054(::System::Int32 a1)
	{
		return ((::System::Int32(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_072B22BBD493A5BA_METHOD_1_D7FE3FCFB1E0B054_OFFSET))(this, a1);
	}

	::System::Collections::Generic::List_1<::Struct_2_FE9BD044832BC9C3>* Method_1_DD8554D026299D1A(::System::Int32 a1)
	{
		return ((::System::Collections::Generic::List_1<::Struct_2_FE9BD044832BC9C3>*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_072B22BBD493A5BA_METHOD_1_DD8554D026299D1A_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_E3EB821F9F604183(::System::Collections::Generic::List_1<::Struct_2_FE9BD044832BC9C3>* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Collections::Generic::List_1<::Struct_2_FE9BD044832BC9C3>*))((::PBYTE)hIl2Cpp + CLASS_1_072B22BBD493A5BA_METHOD_1_E3EB821F9F604183_OFFSET))(this, a1);
	}

	::RPG::Client::Sample::RingBuffer_1<::System::Collections::Generic::List_1<::Struct_2_FE9BD044832BC9C3>*>* Method_1_C472ADBAE9FA22E1(::System::Int32 a1, ::System::Boolean a2)
	{
		return ((::RPG::Client::Sample::RingBuffer_1<::System::Collections::Generic::List_1<::Struct_2_FE9BD044832BC9C3>*>*(*)(::PVOID, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_072B22BBD493A5BA_METHOD_1_C472ADBAE9FA22E1_OFFSET))(this, a1, a2);
	}
};

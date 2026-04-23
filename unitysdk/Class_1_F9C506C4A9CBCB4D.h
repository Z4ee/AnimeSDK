#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_FE9BD044832BC9C3.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client::Sample { template <typename T> class RingBuffer_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_F9C506C4A9CBCB4D_GET_INSTANCE_OFFSET UNITYSDK_OFFSET(0x9906950)
#define CLASS_1_F9C506C4A9CBCB4D_METHOD_1_49D6CC7F7A3090A6_OFFSET UNITYSDK_OFFSET(0x99071B0)
#define CLASS_1_F9C506C4A9CBCB4D_METHOD_1_585FC7B29EB12CF9_OFFSET UNITYSDK_OFFSET(0x9906DA0)
#define CLASS_1_F9C506C4A9CBCB4D_METHOD_1_655DDB722F1FDE73_OFFSET UNITYSDK_OFFSET(0x9906AE0)
#define CLASS_1_F9C506C4A9CBCB4D_METHOD_1_A370720754FE8924_OFFSET UNITYSDK_OFFSET(0x9906EE0)
#define CLASS_1_F9C506C4A9CBCB4D_METHOD_1_CF780FC3D0CB1833_OFFSET UNITYSDK_OFFSET(0x9906970)
#define CLASS_1_F9C506C4A9CBCB4D_METHOD_1_D7FE3FCFB1E0B054_OFFSET UNITYSDK_OFFSET(0x9906D00)
#define CLASS_1_F9C506C4A9CBCB4D_SET_INSTANCE_OFFSET UNITYSDK_OFFSET(0x9906960)
#define CLASS_1_F9C506C4A9CBCB4D__CTOR_OFFSET UNITYSDK_OFFSET(0x9906A60)

inline static constexpr unsigned int Class_1_F9C506C4A9CBCB4D_TypeDefinitionIndex = 68142;

class Class_1_F9C506C4A9CBCB4D : public ::System::Object
{
public:
	static ::Class_1_F9C506C4A9CBCB4D** StaticGet__Instance_k__BackingField()
	{
		return (::Class_1_F9C506C4A9CBCB4D**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F9C506C4A9CBCB4D_TypeDefinitionIndex)->GetStaticField(0x1E0B0);
	}
	// static const ::System::Int32 Field_1_0 = 0x40; // 0x0
	// static const ::System::Int32 Field_1_1 = 0x8; // 0x0
	::System::Collections::Generic::List_1<::RPG::Client::Sample::RingBuffer_1<::System::Collections::Generic::List_1<::Struct_2_FE9BD044832BC9C3>*>*>* Field_1_3; // 0x10
	::System::Boolean Field_1_2; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F9C506C4A9CBCB4D__CTOR_OFFSET))(this);
	}

	static ::Class_1_F9C506C4A9CBCB4D* get_Instance()
	{
		return ((::Class_1_F9C506C4A9CBCB4D*(*)())((::PBYTE)hIl2Cpp + CLASS_1_F9C506C4A9CBCB4D_GET_INSTANCE_OFFSET))();
	}

	static ::System::Void set_Instance(::Class_1_F9C506C4A9CBCB4D* value)
	{
		return ((::System::Void(*)(::Class_1_F9C506C4A9CBCB4D*))((::PBYTE)hIl2Cpp + CLASS_1_F9C506C4A9CBCB4D_SET_INSTANCE_OFFSET))(value);
	}

	static ::Class_1_F9C506C4A9CBCB4D* Method_1_CF780FC3D0CB1833()
	{
		return ((::Class_1_F9C506C4A9CBCB4D*(*)())((::PBYTE)hIl2Cpp + CLASS_1_F9C506C4A9CBCB4D_METHOD_1_CF780FC3D0CB1833_OFFSET))();
	}

	::System::Void Method_1_655DDB722F1FDE73()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F9C506C4A9CBCB4D_METHOD_1_655DDB722F1FDE73_OFFSET))(this);
	}

	::System::Int32 Method_1_D7FE3FCFB1E0B054(::System::Int32 a1)
	{
		return ((::System::Int32(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_F9C506C4A9CBCB4D_METHOD_1_D7FE3FCFB1E0B054_OFFSET))(this, a1);
	}

	::System::Collections::Generic::List_1<::Struct_2_FE9BD044832BC9C3>* Method_1_585FC7B29EB12CF9(::System::Int32 a1)
	{
		return ((::System::Collections::Generic::List_1<::Struct_2_FE9BD044832BC9C3>*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_F9C506C4A9CBCB4D_METHOD_1_585FC7B29EB12CF9_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_49D6CC7F7A3090A6(::System::Collections::Generic::List_1<::Struct_2_FE9BD044832BC9C3>* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Collections::Generic::List_1<::Struct_2_FE9BD044832BC9C3>*))((::PBYTE)hIl2Cpp + CLASS_1_F9C506C4A9CBCB4D_METHOD_1_49D6CC7F7A3090A6_OFFSET))(this, a1);
	}

	::RPG::Client::Sample::RingBuffer_1<::System::Collections::Generic::List_1<::Struct_2_FE9BD044832BC9C3>*>* Method_1_A370720754FE8924(::System::Int32 a1, ::System::Boolean a2)
	{
		return ((::RPG::Client::Sample::RingBuffer_1<::System::Collections::Generic::List_1<::Struct_2_FE9BD044832BC9C3>*>*(*)(::PVOID, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_F9C506C4A9CBCB4D_METHOD_1_A370720754FE8924_OFFSET))(this, a1, a2);
	}
};

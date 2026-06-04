#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/Struct_2_1958EDD0843A6E37.h"
#include "unitysdk/System/Object.h"

class Class_1_AF47DF2B58369486;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_232C1F3EBC1590A7_METHOD_1_0E5EBD4812417522_OFFSET UNITYSDK_OFFSET(0x19147CB0)
#define CLASS_1_232C1F3EBC1590A7_METHOD_1_0FAEE31385A1724C_OFFSET UNITYSDK_OFFSET(0x19147DF0)
#define CLASS_1_232C1F3EBC1590A7_METHOD_1_101639FD7468FD9D_OFFSET UNITYSDK_OFFSET(0x19147960)
#define CLASS_1_232C1F3EBC1590A7_METHOD_1_18712DB3B1B723E8_OFFSET UNITYSDK_OFFSET(0x19147E60)
#define CLASS_1_232C1F3EBC1590A7_METHOD_1_5E40381A9D0A7403_OFFSET UNITYSDK_OFFSET(0x19147BF0)
#define CLASS_1_232C1F3EBC1590A7_METHOD_1_745CB1E678C03D3A_OFFSET UNITYSDK_OFFSET(0x19147A20)
#define CLASS_1_232C1F3EBC1590A7_METHOD_1_8EB7B3E3BA847A23_OFFSET UNITYSDK_OFFSET(0x19147C90)
#define CLASS_1_232C1F3EBC1590A7_METHOD_1_F730968E2645E14B_OFFSET UNITYSDK_OFFSET(0x19148080)
#define CLASS_1_232C1F3EBC1590A7__CTOR_OFFSET UNITYSDK_OFFSET(0x19147F90)

inline static constexpr unsigned int Class_1_232C1F3EBC1590A7_TypeDefinitionIndex = 9997;

class Class_1_232C1F3EBC1590A7 : public ::System::Object
{
public:
	static ::Class_1_232C1F3EBC1590A7** StaticGet_Field_1_0()
	{
		return (::Class_1_232C1F3EBC1590A7**)Il2CppClass::FromTypeDefinitionIndex(Class_1_232C1F3EBC1590A7_TypeDefinitionIndex)->GetStaticField(0x499E0);
	}
	::System::Collections::Generic::List_1<::RPG::GameCore::FixPoint>* Field_1_1; // 0x10
	::System::Collections::Generic::List_1<::System::Byte>* Field_1_2; // 0x18
	::System::Collections::Generic::List_1<::System::Int32>* Field_1_3; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_232C1F3EBC1590A7__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_101639FD7468FD9D(::RPG::GameCore::FixPoint a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + CLASS_1_232C1F3EBC1590A7_METHOD_1_101639FD7468FD9D_OFFSET))(this, a1);
	}

	::System::Byte Method_1_8EB7B3E3BA847A23(::Class_1_AF47DF2B58369486* a1)
	{
		return ((::System::Byte(*)(::PVOID, ::Class_1_AF47DF2B58369486*))((::PBYTE)hIl2Cpp + CLASS_1_232C1F3EBC1590A7_METHOD_1_8EB7B3E3BA847A23_OFFSET))(this, a1);
	}

	::System::Byte Method_1_745CB1E678C03D3A(::RPG::GameCore::FixPoint a1)
	{
		return ((::System::Byte(*)(::PVOID, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + CLASS_1_232C1F3EBC1590A7_METHOD_1_745CB1E678C03D3A_OFFSET))(this, a1);
	}

	::System::Byte Method_1_0E5EBD4812417522(::System::String* a1)
	{
		return ((::System::Byte(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_232C1F3EBC1590A7_METHOD_1_0E5EBD4812417522_OFFSET))(this, a1);
	}

	::System::Void Method_1_5E40381A9D0A7403(::Il2CppArray<::System::Byte>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + CLASS_1_232C1F3EBC1590A7_METHOD_1_5E40381A9D0A7403_OFFSET))(this, a1);
	}

	::Struct_2_1958EDD0843A6E37 Method_1_0FAEE31385A1724C()
	{
		return ((::Struct_2_1958EDD0843A6E37(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_232C1F3EBC1590A7_METHOD_1_0FAEE31385A1724C_OFFSET))(this);
	}

	static ::Class_1_232C1F3EBC1590A7* Method_1_18712DB3B1B723E8()
	{
		return ((::Class_1_232C1F3EBC1590A7*(*)())((::PBYTE)hIl2Cpp + CLASS_1_232C1F3EBC1590A7_METHOD_1_18712DB3B1B723E8_OFFSET))();
	}

	::System::Void Method_1_F730968E2645E14B()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_232C1F3EBC1590A7_METHOD_1_F730968E2645E14B_OFFSET))(this);
	}
};

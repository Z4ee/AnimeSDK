#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System::IO { class Stream; }

#define CLASS_1_9B2075D4F3D81DB0_METHOD_1_96BCA5AE7CFA0B4A_OFFSET UNITYSDK_OFFSET(0x1EC12A70)
#define CLASS_1_9B2075D4F3D81DB0_METHOD_1_E053C78196EC85C1_OFFSET UNITYSDK_OFFSET(0x1EC12DC0)
#define CLASS_1_9B2075D4F3D81DB0_METHOD_1_F4C372A6A8D72C64_1_OFFSET UNITYSDK_OFFSET(0x1EC128A0)
#define CLASS_1_9B2075D4F3D81DB0_METHOD_1_F4C372A6A8D72C64_OFFSET UNITYSDK_OFFSET(0x1EC12710)
#define CLASS_1_9B2075D4F3D81DB0_METHOD_1_F52D8C29ED22C82E_OFFSET UNITYSDK_OFFSET(0x1EC12540)
#define CLASS_1_9B2075D4F3D81DB0_METHOD_1_F7FA5BB466AF171B_OFFSET UNITYSDK_OFFSET(0x1EC12600)
#define CLASS_1_9B2075D4F3D81DB0__CTOR_OFFSET UNITYSDK_OFFSET(0x1EC12ED0)

inline static constexpr unsigned int Class_1_9B2075D4F3D81DB0_TypeDefinitionIndex = 35282;

class Class_1_9B2075D4F3D81DB0 : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9B2075D4F3D81DB0__CTOR_OFFSET))(this);
	}

	static ::System::Boolean Method_1_F52D8C29ED22C82E(::System::String* a1)
	{
		return ((::System::Boolean(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_9B2075D4F3D81DB0_METHOD_1_F52D8C29ED22C82E_OFFSET))(a1);
	}

	static ::Il2CppArray<::System::Byte>* Method_1_F7FA5BB466AF171B(::System::String* a1)
	{
		return ((::Il2CppArray<::System::Byte>*(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_9B2075D4F3D81DB0_METHOD_1_F7FA5BB466AF171B_OFFSET))(a1);
	}

	static ::System::IO::Stream* Method_1_F4C372A6A8D72C64(::System::String* a1, ::System::Int32 a2)
	{
		return ((::System::IO::Stream*(*)(::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_9B2075D4F3D81DB0_METHOD_1_F4C372A6A8D72C64_OFFSET))(a1, a2);
	}

	static ::System::IO::Stream* Method_1_F4C372A6A8D72C64_1(::System::String* a1, ::System::Int32 a2)
	{
		return ((::System::IO::Stream*(*)(::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_9B2075D4F3D81DB0_METHOD_1_F4C372A6A8D72C64_1_OFFSET))(a1, a2);
	}

	static ::Il2CppArray<::System::Byte>* Method_1_96BCA5AE7CFA0B4A(::System::String* a1, ::System::Int32 a2, ::System::Int32 a3)
	{
		return ((::Il2CppArray<::System::Byte>*(*)(::System::String*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_9B2075D4F3D81DB0_METHOD_1_96BCA5AE7CFA0B4A_OFFSET))(a1, a2, a3);
	}

	static ::System::String* Method_1_E053C78196EC85C1(::System::String* a1)
	{
		return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_9B2075D4F3D81DB0_METHOD_1_E053C78196EC85C1_OFFSET))(a1);
	}
};

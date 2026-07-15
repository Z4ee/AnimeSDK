#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/BaseConfigHeader_1.h"
#include "unitysdk/RPG/GameCore/BaseConfigHeader_1_NativeRowInfo.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }
template <typename T1, typename T2> class Class_1_534AF681CC2BD5FD_1;

#define CLASS_2_87F9839A308D3BC3_CREATENATIVEDICTIONARY_OFFSET UNITYSDK_OFFSET(0x1B9DC570)
#define CLASS_2_87F9839A308D3BC3_READROW_OFFSET UNITYSDK_OFFSET(0x1B9DC5D0)
#define CLASS_2_87F9839A308D3BC3__CCTOR_OFFSET UNITYSDK_OFFSET(0x1B9DC630)
#define CLASS_2_87F9839A308D3BC3__CTOR_OFFSET UNITYSDK_OFFSET(0x1B9DC520)

inline static constexpr unsigned int Class_2_87F9839A308D3BC3_TypeDefinitionIndex = 10474;

class Class_2_87F9839A308D3BC3 : public ::RPG::GameCore::BaseConfigHeader_1<::System::UInt64>
{
public:
	static ::Class_1_534AF681CC2BD5FD_1<::System::UInt64, ::RPG::GameCore::BaseConfigHeader_1_NativeRowInfo<::System::UInt64>>** StaticGet_Field_2_0()
	{
		return (::Class_1_534AF681CC2BD5FD_1<::System::UInt64, ::RPG::GameCore::BaseConfigHeader_1_NativeRowInfo<::System::UInt64>>**)Il2CppClass::FromTypeDefinitionIndex(Class_2_87F9839A308D3BC3_TypeDefinitionIndex)->GetStaticField(0xC2D0);
	}
	static ::Class_2_87F9839A308D3BC3** StaticGet_Field_2_1()
	{
		return (::Class_2_87F9839A308D3BC3**)Il2CppClass::FromTypeDefinitionIndex(Class_2_87F9839A308D3BC3_TypeDefinitionIndex)->GetStaticField(0xC2D8);
	}

	::System::Void _ctor(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_87F9839A308D3BC3__CTOR_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_87F9839A308D3BC3__CCTOR_OFFSET))();
	}

	::Class_1_534AF681CC2BD5FD_1<::System::UInt64, ::RPG::GameCore::BaseConfigHeader_1_NativeRowInfo<::System::UInt64>>* CreateNativeDictionary(::System::Int32 a1)
	{
		return ((::Class_1_534AF681CC2BD5FD_1<::System::UInt64, ::RPG::GameCore::BaseConfigHeader_1_NativeRowInfo<::System::UInt64>>*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_87F9839A308D3BC3_CREATENATIVEDICTIONARY_OFFSET))(this, a1);
	}

	::System::Void ReadRow(::Class_1_7A22A3DBEEDD1F80* a1, ::System::UInt64& a2, ::System::Int32& a3, ::System::Int32& a4, ::System::Byte& a5)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_7A22A3DBEEDD1F80*, ::System::UInt64&, ::System::Int32&, ::System::Int32&, ::System::Byte&))((::PBYTE)hIl2Cpp + CLASS_2_87F9839A308D3BC3_READROW_OFFSET))(this, a1, a2, a3, a4, a5);
	}
};

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_37DF30C8B3AA0F39.h"
#include "unitysdk/Struct_2_575273D27F02957E.h"

class Class_2_208CC9941471731A_725;
class Class_2_208CC9941471731A_959;
class Class_2_E87F1D15F1D4AC72;
class Class_3_4394288C61F3B24C;
class Class_3_9F8B7B204F0D8E1D_19;
namespace System { class Action; }
template <typename T> class Class_0_16E4307DCC419505_159;
template <typename T> class Class_2_F16D73323D71766B;

#define CLASS_2_C5DE6003F1E437A7_METHOD_2_7420FB652D1A9BE4_OFFSET UNITYSDK_OFFSET(0x18244970)
#define CLASS_2_C5DE6003F1E437A7__CTOR_OFFSET UNITYSDK_OFFSET(0x18245F10)

inline static constexpr unsigned int Class_2_C5DE6003F1E437A7_TypeDefinitionIndex = 87956;

class Class_2_C5DE6003F1E437A7 : public ::Class_1_37DF30C8B3AA0F39
{
public:
	::Class_2_F16D73323D71766B<::System::Boolean>* Field_2_7; // 0x50
	::Class_2_F16D73323D71766B<::System::Boolean>* Field_2_0; // 0x58
	::Class_2_F16D73323D71766B<::Class_3_4394288C61F3B24C*>* Field_2_10; // 0x60
	::Class_2_F16D73323D71766B<::Class_2_208CC9941471731A_725*>* Field_2_1; // 0x68
	::Class_0_16E4307DCC419505_159<::System::Int32>* Field_2_3; // 0x70
	::Class_2_F16D73323D71766B<::Class_2_208CC9941471731A_959*>* Field_2_2; // 0x78
	::Class_2_F16D73323D71766B<::System::Boolean>* Field_2_11; // 0x80
	::Class_2_F16D73323D71766B<::Class_3_9F8B7B204F0D8E1D_19*>* Field_2_9; // 0x88
	::Class_2_F16D73323D71766B<::System::Int32>* Field_2_5; // 0x90
	::System::Action* Field_2_8; // 0x98
	::Class_2_F16D73323D71766B<::System::Int32>* Field_2_6; // 0xA0
	::Class_2_F16D73323D71766B<::System::Int32>* Field_2_4; // 0xA8

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C5DE6003F1E437A7__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_7420FB652D1A9BE4(::Struct_2_575273D27F02957E& a1, ::Class_2_E87F1D15F1D4AC72* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_575273D27F02957E&, ::Class_2_E87F1D15F1D4AC72*))((::PBYTE)hIl2Cpp + CLASS_2_C5DE6003F1E437A7_METHOD_2_7420FB652D1A9BE4_OFFSET))(this, a1, a2);
	}
};

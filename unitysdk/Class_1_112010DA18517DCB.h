#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }
namespace System { class EventArgs; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define CLASS_1_112010DA18517DCB_METHOD_1_1E779F9BC0D161A4_OFFSET UNITYSDK_OFFSET(0x1665A720)
#define CLASS_1_112010DA18517DCB_METHOD_1_2BBEF517D4C61AF2_OFFSET UNITYSDK_OFFSET(0x1665A9A0)
#define CLASS_1_112010DA18517DCB_METHOD_1_41CF9B9431532A25_OFFSET UNITYSDK_OFFSET(0x1665AEE0)
#define CLASS_1_112010DA18517DCB_METHOD_1_8A4E7CFB6A3884DD_OFFSET UNITYSDK_OFFSET(0x1665AE80)
#define CLASS_1_112010DA18517DCB_METHOD_1_F5B4708E7805566C_OFFSET UNITYSDK_OFFSET(0x1665A950)
#define CLASS_1_112010DA18517DCB_METHOD_1_FA58824BA12F6F62_OFFSET UNITYSDK_OFFSET(0x1665B050)
#define CLASS_1_112010DA18517DCB__CTOR_OFFSET UNITYSDK_OFFSET(0x1665A710)

inline static constexpr unsigned int Class_1_112010DA18517DCB_TypeDefinitionIndex = 81613;

class Class_1_112010DA18517DCB : public ::System::Object
{
public:
	::System::Action* Field_1_8; // 0x10
	::System::Action_1<::System::String*>* Field_1_3; // 0x18
	::System::Action* Field_1_4; // 0x20
	::System::Action* Field_1_5; // 0x28
	::System::String* Field_1_1; // 0x30
	::System::String* Field_1_2; // 0x38
	::System::Action* Field_1_7; // 0x40
	::System::Int32 Field_1_0; // 0x48
	::System::Boolean Field_1_6; // 0x4C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_112010DA18517DCB__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_1E779F9BC0D161A4(::System::EventArgs* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + CLASS_1_112010DA18517DCB_METHOD_1_1E779F9BC0D161A4_OFFSET))(this, a1);
	}

	::System::Void Method_1_F5B4708E7805566C()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_112010DA18517DCB_METHOD_1_F5B4708E7805566C_OFFSET))(this);
	}

	::System::Void Method_1_8A4E7CFB6A3884DD(::System::Action* a1, ::System::Action* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_112010DA18517DCB_METHOD_1_8A4E7CFB6A3884DD_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_41CF9B9431532A25()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_112010DA18517DCB_METHOD_1_41CF9B9431532A25_OFFSET))(this);
	}

	::System::Void Method_1_2BBEF517D4C61AF2(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_112010DA18517DCB_METHOD_1_2BBEF517D4C61AF2_OFFSET))(this, a1);
	}

	::System::Void Method_1_FA58824BA12F6F62()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_112010DA18517DCB_METHOD_1_FA58824BA12F6F62_OFFSET))(this);
	}
};

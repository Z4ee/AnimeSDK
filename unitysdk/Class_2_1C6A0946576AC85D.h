#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_8088D8743C1058EF.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"

class Class_1_236FD73ABC492E3F;
class Class_1_ED5EE319EA265EB6;
namespace System { class Object; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define CLASS_2_1C6A0946576AC85D_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x114E02C0)
#define CLASS_2_1C6A0946576AC85D_FROMFLX_OFFSET UNITYSDK_OFFSET(0x114DFD00)
#define CLASS_2_1C6A0946576AC85D_METHOD_2_0B2CB6A77D912E66_OFFSET UNITYSDK_OFFSET(0x114E07F0)
#define CLASS_2_1C6A0946576AC85D_METHOD_2_8741A88D50268453_OFFSET UNITYSDK_OFFSET(0x114DFD80)
#define CLASS_2_1C6A0946576AC85D_METHOD_2_A4F18DC7833F5448_OFFSET UNITYSDK_OFFSET(0x114E0320)
#define CLASS_2_1C6A0946576AC85D_METHOD_2_BCCAB6158AD8296E_OFFSET UNITYSDK_OFFSET(0x114DFAD0)
#define CLASS_2_1C6A0946576AC85D_METHOD_2_C444D4C8B9D548AF_OFFSET UNITYSDK_OFFSET(0x114DFC90)
#define CLASS_2_1C6A0946576AC85D_METHOD_2_D4943D8F67F4699C_OFFSET UNITYSDK_OFFSET(0x114E0690)
#define CLASS_2_1C6A0946576AC85D_METHOD_2_D8A163211C06267F_OFFSET UNITYSDK_OFFSET(0x114DFB90)
#define CLASS_2_1C6A0946576AC85D__CTOR_OFFSET UNITYSDK_OFFSET(0x114E0600)

inline static constexpr unsigned int Class_2_1C6A0946576AC85D_TypeDefinitionIndex = 63128;

class Class_2_1C6A0946576AC85D : public ::Class_1_8088D8743C1058EF
{
public:
	::System::String* Field_2_1; // 0x30
	::System::String* Field_2_0; // 0x38
	::Class_1_ED5EE319EA265EB6* Field_2_2; // 0x40

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_1C6A0946576AC85D__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_BCCAB6158AD8296E(::System::Action_1<::System::Object*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*))((::PBYTE)hIl2Cpp + CLASS_2_1C6A0946576AC85D_METHOD_2_BCCAB6158AD8296E_OFFSET))(this, a1);
	}

	::Class_1_8088D8743C1058EF* Method_2_D8A163211C06267F()
	{
		return ((::Class_1_8088D8743C1058EF*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_1C6A0946576AC85D_METHOD_2_D8A163211C06267F_OFFSET))(this);
	}

	::System::Int32 Method_2_C444D4C8B9D548AF()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_1C6A0946576AC85D_METHOD_2_C444D4C8B9D548AF_OFFSET))(this);
	}

	::System::Boolean FromFlx(::FlexBuffers::FlxValue a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + CLASS_2_1C6A0946576AC85D_FROMFLX_OFFSET))(this, a1);
	}

	::System::Boolean FromBinary(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_1C6A0946576AC85D_FROMBINARY_OFFSET))(this, a1, a2);
	}

	static ::Class_2_1C6A0946576AC85D* Method_2_D4943D8F67F4699C(::FlexBuffers::FlxValue a1)
	{
		return ((::Class_2_1C6A0946576AC85D*(*)(::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + CLASS_2_1C6A0946576AC85D_METHOD_2_D4943D8F67F4699C_OFFSET))(a1);
	}

	::System::Boolean Method_2_A4F18DC7833F5448(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_1C6A0946576AC85D_METHOD_2_A4F18DC7833F5448_OFFSET))(this, a1, a2);
	}

	static ::Class_2_1C6A0946576AC85D* Method_2_0B2CB6A77D912E66(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
	{
		return ((::Class_2_1C6A0946576AC85D*(*)(::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_1C6A0946576AC85D_METHOD_2_0B2CB6A77D912E66_OFFSET))(a1, a2);
	}

	::System::Boolean Method_2_8741A88D50268453(::FlexBuffers::FlxMap a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + CLASS_2_1C6A0946576AC85D_METHOD_2_8741A88D50268453_OFFSET))(this, a1);
	}
};

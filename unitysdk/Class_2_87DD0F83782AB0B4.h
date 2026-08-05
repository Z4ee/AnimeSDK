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
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_87DD0F83782AB0B4_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x17810730)
#define CLASS_2_87DD0F83782AB0B4_FROMFLX_OFFSET UNITYSDK_OFFSET(0x17810040)
#define CLASS_2_87DD0F83782AB0B4_METHOD_2_0B2CB6A77D912E66_OFFSET UNITYSDK_OFFSET(0x17810B80)
#define CLASS_2_87DD0F83782AB0B4_METHOD_2_0BD393E566CD3D4A_OFFSET UNITYSDK_OFFSET(0x178100C0)
#define CLASS_2_87DD0F83782AB0B4_METHOD_2_BA1BB49741CFDFE1_OFFSET UNITYSDK_OFFSET(0x1780F890)
#define CLASS_2_87DD0F83782AB0B4_METHOD_2_BCCAB6158AD8296E_OFFSET UNITYSDK_OFFSET(0x1780FE60)
#define CLASS_2_87DD0F83782AB0B4_METHOD_2_C74CF020AA42ED85_OFFSET UNITYSDK_OFFSET(0x17810030)
#define CLASS_2_87DD0F83782AB0B4_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x17810D30)
#define CLASS_2_87DD0F83782AB0B4_METHOD_2_D4943D8F67F4699C_OFFSET UNITYSDK_OFFSET(0x17810DC0)
#define CLASS_2_87DD0F83782AB0B4_METHOD_2_D8A163211C06267F_OFFSET UNITYSDK_OFFSET(0x1780FF30)
#define CLASS_2_87DD0F83782AB0B4_METHOD_2_E061DA2D9F264BD1_OFFSET UNITYSDK_OFFSET(0x17810790)
#define CLASS_2_87DD0F83782AB0B4__CTOR_OFFSET UNITYSDK_OFFSET(0x17810AF0)

inline static constexpr unsigned int Class_2_87DD0F83782AB0B4_TypeDefinitionIndex = 47123;

class Class_2_87DD0F83782AB0B4 : public ::Class_1_8088D8743C1058EF
{
public:
	::System::Collections::Generic::List_1<::Class_1_ED5EE319EA265EB6*>* Field_2_6; // 0x30
	::System::String* Field_2_0; // 0x38
	::Class_1_ED5EE319EA265EB6* Field_2_1; // 0x40
	::System::String* Field_2_7; // 0x48

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_87DD0F83782AB0B4__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_BA1BB49741CFDFE1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_87DD0F83782AB0B4_METHOD_2_BA1BB49741CFDFE1_OFFSET))(this);
	}

	::System::Void Method_2_BCCAB6158AD8296E(::System::Action_1<::System::Object*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*))((::PBYTE)hIl2Cpp + CLASS_2_87DD0F83782AB0B4_METHOD_2_BCCAB6158AD8296E_OFFSET))(this, a1);
	}

	::Class_1_8088D8743C1058EF* Method_2_D8A163211C06267F()
	{
		return ((::Class_1_8088D8743C1058EF*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_87DD0F83782AB0B4_METHOD_2_D8A163211C06267F_OFFSET))(this);
	}

	::System::Int32 Method_2_C74CF020AA42ED85()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_87DD0F83782AB0B4_METHOD_2_C74CF020AA42ED85_OFFSET))(this);
	}

	::System::Boolean FromFlx(::FlexBuffers::FlxValue a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + CLASS_2_87DD0F83782AB0B4_FROMFLX_OFFSET))(this, a1);
	}

	::System::Boolean FromBinary(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_87DD0F83782AB0B4_FROMBINARY_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_2_E061DA2D9F264BD1(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_87DD0F83782AB0B4_METHOD_2_E061DA2D9F264BD1_OFFSET))(this, a1, a2);
	}

	static ::Class_2_87DD0F83782AB0B4* Method_2_0B2CB6A77D912E66(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
	{
		return ((::Class_2_87DD0F83782AB0B4*(*)(::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_87DD0F83782AB0B4_METHOD_2_0B2CB6A77D912E66_OFFSET))(a1, a2);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_87DD0F83782AB0B4_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}

	static ::Class_2_87DD0F83782AB0B4* Method_2_D4943D8F67F4699C(::FlexBuffers::FlxValue a1)
	{
		return ((::Class_2_87DD0F83782AB0B4*(*)(::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + CLASS_2_87DD0F83782AB0B4_METHOD_2_D4943D8F67F4699C_OFFSET))(a1);
	}

	::System::Boolean Method_2_0BD393E566CD3D4A(::FlexBuffers::FlxMap a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + CLASS_2_87DD0F83782AB0B4_METHOD_2_0BD393E566CD3D4A_OFFSET))(this, a1);
	}
};

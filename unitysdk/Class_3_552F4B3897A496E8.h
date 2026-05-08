#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_F3CFF1AFF7EE7DCD.h"
#include "unitysdk/Enum_3_215506A3B8D5C27F.h"
#include "unitysdk/Struct_2_5887222B9AE38D34_3.h"
#include "unitysdk/Struct_2_FA5F50563E60AFBA.h"

class Class_1_CB7F0487F7A6164A;
namespace MoleMole::Battle { class Entity; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_3_552F4B3897A496E8_GETCLASSID_OFFSET UNITYSDK_OFFSET(0x7795820)
#define CLASS_3_552F4B3897A496E8_METHOD_3_0F4885840B05315B_OFFSET UNITYSDK_OFFSET(0x7795FC0)
#define CLASS_3_552F4B3897A496E8_METHOD_3_0F56D5DC9847C4D5_OFFSET UNITYSDK_OFFSET(0x7796030)
#define CLASS_3_552F4B3897A496E8_METHOD_3_1808E1CF7A125519_OFFSET UNITYSDK_OFFSET(0x77960D0)
#define CLASS_3_552F4B3897A496E8_METHOD_3_3D78D2E0F9F95F07_OFFSET UNITYSDK_OFFSET(0x7796140)
#define CLASS_3_552F4B3897A496E8_METHOD_3_71CEF9041F251366_OFFSET UNITYSDK_OFFSET(0x7795930)
#define CLASS_3_552F4B3897A496E8_METHOD_3_A1D8CD775DEC3C21_OFFSET UNITYSDK_OFFSET(0x7796040)
#define CLASS_3_552F4B3897A496E8_METHOD_3_CCBE730AF445BBD4_OFFSET UNITYSDK_OFFSET(0x7795D40)
#define CLASS_3_552F4B3897A496E8_ONCLEAN_OFFSET UNITYSDK_OFFSET(0x7795750)
#define CLASS_3_552F4B3897A496E8__CCTOR_OFFSET UNITYSDK_OFFSET(0x7795870)
#define CLASS_3_552F4B3897A496E8__CTOR_OFFSET UNITYSDK_OFFSET(0x77958F0)

inline static constexpr unsigned int Class_3_552F4B3897A496E8_TypeDefinitionIndex = 71150;

class Class_3_552F4B3897A496E8 : public ::Class_2_F3CFF1AFF7EE7DCD
{
public:
	// static const ::System::Single Field_3_0; // 0x0
	// static const ::System::Single Field_3_1; // 0x0
	// static const ::System::Single Field_3_2; // 0x0
	// static const ::System::Single Field_3_3; // 0x0
	// static const ::System::Single Field_3_4; // 0x0
	// static const ::System::Int32 Field_3_12 = 0x1A; // 0x0
	::System::String* Field_3_9; // 0x48
	::Struct_2_FA5F50563E60AFBA Field_3_8; // 0x50
	::System::Collections::Generic::List_1<::Struct_2_5887222B9AE38D34_3>* Field_3_11; // 0x68
	::System::Single Field_3_5; // 0x70
	::System::Boolean Field_3_7; // 0x74
	::Enum_3_215506A3B8D5C27F Field_3_10; // 0x78
	::System::Single Field_3_6; // 0x7C

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_3_552F4B3897A496E8__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_552F4B3897A496E8__CTOR_OFFSET))(this);
	}

	::System::Void OnClean()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_552F4B3897A496E8_ONCLEAN_OFFSET))(this);
	}

	::System::Int32 GetClassID()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_552F4B3897A496E8_GETCLASSID_OFFSET))(this);
	}

	::System::Void Method_3_71CEF9041F251366(::Struct_2_FA5F50563E60AFBA a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_FA5F50563E60AFBA))((::PBYTE)hIl2Cpp + CLASS_3_552F4B3897A496E8_METHOD_3_71CEF9041F251366_OFFSET))(this, a1);
	}

	static ::Class_3_552F4B3897A496E8* Method_3_CCBE730AF445BBD4()
	{
		return ((::Class_3_552F4B3897A496E8*(*)())((::PBYTE)hIl2Cpp + CLASS_3_552F4B3897A496E8_METHOD_3_CCBE730AF445BBD4_OFFSET))();
	}

	::MoleMole::Battle::Entity* Method_3_0F4885840B05315B()
	{
		return ((::MoleMole::Battle::Entity*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_552F4B3897A496E8_METHOD_3_0F4885840B05315B_OFFSET))(this);
	}

	::Class_1_CB7F0487F7A6164A* Method_3_0F56D5DC9847C4D5()
	{
		return ((::Class_1_CB7F0487F7A6164A*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_552F4B3897A496E8_METHOD_3_0F56D5DC9847C4D5_OFFSET))(this);
	}

	::System::Int32 Method_3_A1D8CD775DEC3C21()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_552F4B3897A496E8_METHOD_3_A1D8CD775DEC3C21_OFFSET))(this);
	}

	::System::Boolean Method_3_1808E1CF7A125519()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_552F4B3897A496E8_METHOD_3_1808E1CF7A125519_OFFSET))(this);
	}

	::Struct_2_FA5F50563E60AFBA Method_3_3D78D2E0F9F95F07()
	{
		return ((::Struct_2_FA5F50563E60AFBA(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_552F4B3897A496E8_METHOD_3_3D78D2E0F9F95F07_OFFSET))(this);
	}
};

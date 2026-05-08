#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_F3CFF1AFF7EE7DCD.h"

class Class_1_FD97D7F2D0A87B2D;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_3_D85E5E0CE519F26A_GETCLASSID_OFFSET UNITYSDK_OFFSET(0x156F4980)
#define CLASS_3_D85E5E0CE519F26A_METHOD_3_A1D8CD775DEC3C21_OFFSET UNITYSDK_OFFSET(0x156F4BC0)
#define CLASS_3_D85E5E0CE519F26A_METHOD_3_CCBE730AF445BBD4_OFFSET UNITYSDK_OFFSET(0x156F4B40)
#define CLASS_3_D85E5E0CE519F26A_ONCLEAN_OFFSET UNITYSDK_OFFSET(0x156F48A0)
#define CLASS_3_D85E5E0CE519F26A__CCTOR_OFFSET UNITYSDK_OFFSET(0x156F49D0)
#define CLASS_3_D85E5E0CE519F26A__CTOR_OFFSET UNITYSDK_OFFSET(0x156F4A50)

inline static constexpr unsigned int Class_3_D85E5E0CE519F26A_TypeDefinitionIndex = 82025;

class Class_3_D85E5E0CE519F26A : public ::Class_2_F3CFF1AFF7EE7DCD
{
public:
	// static const ::System::Int32 Field_3_4 = 0x58; // 0x0
	::System::Collections::Generic::List_1<::System::Int32>* Field_3_3; // 0x48
	::System::Collections::Generic::List_1<::System::Int32>* Field_3_2; // 0x50
	::System::Collections::Generic::List_1<::Class_1_FD97D7F2D0A87B2D*>* Field_3_0; // 0x58
	::System::Int32 Field_3_1; // 0x60

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_3_D85E5E0CE519F26A__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_D85E5E0CE519F26A__CTOR_OFFSET))(this);
	}

	::System::Void OnClean()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_D85E5E0CE519F26A_ONCLEAN_OFFSET))(this);
	}

	::System::Int32 GetClassID()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_D85E5E0CE519F26A_GETCLASSID_OFFSET))(this);
	}

	static ::Class_3_D85E5E0CE519F26A* Method_3_CCBE730AF445BBD4()
	{
		return ((::Class_3_D85E5E0CE519F26A*(*)())((::PBYTE)hIl2Cpp + CLASS_3_D85E5E0CE519F26A_METHOD_3_CCBE730AF445BBD4_OFFSET))();
	}

	::System::Int32 Method_3_A1D8CD775DEC3C21()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_D85E5E0CE519F26A_METHOD_3_A1D8CD775DEC3C21_OFFSET))(this);
	}
};

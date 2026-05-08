#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_F3CFF1AFF7EE7DCD.h"
#include "unitysdk/Enum_3_C9027D259F060A66.h"
#include "unitysdk/MoleMole/EntityHandle.h"
#include "unitysdk/Struct_2_A17F88B27FA91D04.h"

class Class_1_8289F2785D9AA990;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_3_9F653B35768E335C_GETCLASSID_OFFSET UNITYSDK_OFFSET(0x12CF2C80)
#define CLASS_3_9F653B35768E335C_METHOD_3_A1D8CD775DEC3C21_OFFSET UNITYSDK_OFFSET(0x12CF2E30)
#define CLASS_3_9F653B35768E335C_METHOD_3_CCBE730AF445BBD4_OFFSET UNITYSDK_OFFSET(0x12CF2EC0)
#define CLASS_3_9F653B35768E335C_ONCLEAN_OFFSET UNITYSDK_OFFSET(0x12CF2B20)
#define CLASS_3_9F653B35768E335C__CCTOR_OFFSET UNITYSDK_OFFSET(0x12CF2CD0)
#define CLASS_3_9F653B35768E335C__CTOR_OFFSET UNITYSDK_OFFSET(0x12CF2D50)

inline static constexpr unsigned int Class_3_9F653B35768E335C_TypeDefinitionIndex = 80575;

class Class_3_9F653B35768E335C : public ::Class_2_F3CFF1AFF7EE7DCD
{
public:
	// static const ::System::Int32 Field_3_8 = 0x8A; // 0x0
	::MoleMole::EntityHandle Field_3_2; // 0x48
	::System::Collections::Generic::List_1<::MoleMole::EntityHandle>* Field_3_3; // 0x58
	::Class_1_8289F2785D9AA990* Field_3_6; // 0x60
	::Struct_2_A17F88B27FA91D04<::System::UInt32, ::System::String*> Field_3_1; // 0x68
	::System::String* Field_3_0; // 0x78
	::Enum_3_C9027D259F060A66 Field_3_5; // 0x80
	::System::Boolean Field_3_4; // 0x84
	::System::Int32 Field_3_7; // 0x88

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_3_9F653B35768E335C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_9F653B35768E335C__CTOR_OFFSET))(this);
	}

	::System::Void OnClean()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_9F653B35768E335C_ONCLEAN_OFFSET))(this);
	}

	::System::Int32 GetClassID()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_9F653B35768E335C_GETCLASSID_OFFSET))(this);
	}

	::System::Int32 Method_3_A1D8CD775DEC3C21()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_9F653B35768E335C_METHOD_3_A1D8CD775DEC3C21_OFFSET))(this);
	}

	static ::Class_3_9F653B35768E335C* Method_3_CCBE730AF445BBD4()
	{
		return ((::Class_3_9F653B35768E335C*(*)())((::PBYTE)hIl2Cpp + CLASS_3_9F653B35768E335C_METHOD_3_CCBE730AF445BBD4_OFFSET))();
	}
};
